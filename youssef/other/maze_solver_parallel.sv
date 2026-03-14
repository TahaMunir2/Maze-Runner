
module maze_solver_parallel #(
    parameter int NUM_CORES = 16,
    parameter int W = 10,
    parameter int H = 10,
    parameter int N = W*H,
    parameter int MAX_MAZES = 1000,
    parameter int S_AXIS_DATA_WIDTH = 128,   // Beat 0: control; beats 1..N: grid0..3
    parameter int M_AXIS_DATA_WIDTH = 256   // One result per beat: path_len, path_word0..6, valid
) (
    input logic clk,
    input logic rst,

    
    input  logic [S_AXIS_DATA_WIDTH-1:0] s_axis_tdata,
    input  logic                          s_axis_tvalid,
    output logic                          s_axis_tready,
    input  logic                          s_axis_tlast,

    


    output logic [M_AXIS_DATA_WIDTH-1:0] m_axis_tdata,
    output logic                          m_axis_tvalid,
    input  logic                          m_axis_tready,
    output logic                          m_axis_tlast
);

    localparam int M_AXIS_PATH_LEN_BITS = 8;
    localparam int M_AXIS_WORD_BITS     = 32;
    


    logic        soft_reset;           // optional, tied to 0 or from stream
    logic [31:0] num_mazes_reg;
    logic [31:0] mazes_done_reg;
    logic        stream_start_pulse;   // one-cycle start when input stream has delivered all mazes

    
    logic [31:0] maze_mem [0:MAX_MAZES*4-1];
    logic [31:0] maze_mem_addr;
    logic [31:0] maze_mem_wdata;
    logic        maze_mem_we;
    logic [31:0] maze_mem_rdata;

    logic [31:0] result_mem [0:MAX_MAZES*8-1];

    assign soft_reset = 1'b0;

    // -------------------------------------------------------------------------
    // Core instances
    // -------------------------------------------------------------------------
    logic [NUM_CORES-1:0] core_start;
    logic [NUM_CORES-1:0] core_done;
    logic [NUM_CORES-1:0] core_valid;
    logic [NUM_CORES-1:0][7:0] core_path_len;
    logic [NUM_CORES-1:0][31:0] core_path_word0;
    logic [NUM_CORES-1:0][31:0] core_path_word1;
    logic [NUM_CORES-1:0][31:0] core_path_word2;
    logic [NUM_CORES-1:0][31:0] core_path_word3;
    logic [NUM_CORES-1:0][31:0] core_path_word4;
    logic [NUM_CORES-1:0][31:0] core_path_word5;
    logic [NUM_CORES-1:0][31:0] core_path_word6;
    logic [NUM_CORES-1:0][31:0] core_grid0;
    logic [NUM_CORES-1:0][31:0] core_grid1;
    logic [NUM_CORES-1:0][31:0] core_grid2;
    logic [NUM_CORES-1:0][31:0] core_grid3;
    logic [NUM_CORES-1:0][15:0] core_maze_id;

    genvar i;
    generate
        for (i = 0; i < NUM_CORES; i++) begin : gen_cores
            maze_solver_core #(.W(W), .H(H), .N(N)) solver_inst (
                .clk(clk),
                .rst(rst || soft_reset),
                .start(core_start[i]),
                .grid0(core_grid0[i]),
                .grid1(core_grid1[i]),
                .grid2(core_grid2[i]),
                .grid3(core_grid3[i]),
                .done(core_done[i]),
                .path_len(core_path_len[i]),
                .path_word0(core_path_word0[i]),
                .path_word1(core_path_word1[i]),
                .path_word2(core_path_word2[i]),
                .path_word3(core_path_word3[i]),
                .path_word4(core_path_word4[i]),
                .path_word5(core_path_word5[i]),
                .path_word6(core_path_word6[i]),
                .valid(core_valid[i])
            );
        end
    endgenerate

    // -------------------------------------------------------------------------
    // Maze memory (write from input stream; read by scheduler)
    // -------------------------------------------------------------------------
    always_ff @(posedge clk) begin
        if (maze_mem_we)
            maze_mem[maze_mem_addr] <= maze_mem_wdata;
        maze_mem_rdata <= maze_mem[maze_mem_addr];
    end

    // Result memory is written by the scheduler and read directly by the output stream sender.

    // -------------------------------------------------------------------------
    // Input stream receiver FSM
    // Beat 0: num_mazes = TDATA[15:0], start = TDATA[16]. Beats 1..num_mazes: maze data.
    // -------------------------------------------------------------------------
    typedef enum logic [2:0] {
        RECV_IDLE,
        RECV_CTRL,
        RECV_MAZES_ACCEPT,
        RECV_MAZES_WRITE
    } recv_state_t;

    recv_state_t recv_state;
    logic [15:0] recv_num_mazes;
    logic        recv_start_bit;
    logic [15:0] recv_maze_count;
    logic [31:0] recv_maze_base;
    logic [127:0] recv_maze_buf;
    logic [1:0]   recv_word_idx;   // 0..3

    assign s_axis_tready = (recv_state == RECV_IDLE) ? 1'b1 :
                           (recv_state == RECV_CTRL) ? 1'b1 :
                           (recv_state == RECV_MAZES_ACCEPT) ? 1'b1 : 1'b0;

    always_ff @(posedge clk) begin
        if (rst) begin
            recv_state     <= RECV_IDLE;
            recv_num_mazes <= 16'd0;
            recv_start_bit <= 1'b0;
            recv_maze_count <= 16'd0;
            recv_maze_base  <= 32'd0;
            recv_word_idx   <= 2'd0;
            stream_start_pulse <= 1'b0;
            num_mazes_reg   <= 32'd0;
            maze_mem_we     <= 1'b0;
            maze_mem_addr   <= 32'd0;
            maze_mem_wdata  <= 32'd0;
        end else begin
            stream_start_pulse <= 1'b0;
            maze_mem_we        <= 1'b0;

            case (recv_state)
                RECV_IDLE: begin
                    if (s_axis_tvalid) begin
                        recv_num_mazes <= s_axis_tdata[15:0];
                        recv_start_bit <= s_axis_tdata[16];
                        recv_state     <= RECV_CTRL;
                    end
                end

                RECV_CTRL: begin
                    if (s_axis_tvalid) begin
                        recv_maze_count <= 16'd0;
                        recv_maze_base  <= 32'd0;
                        if (recv_num_mazes != 16'd0) begin
                            recv_maze_buf <= s_axis_tdata;  // first maze (beat 1) is on the bus
                            recv_word_idx  <= 2'd0;
                            recv_state     <= RECV_MAZES_WRITE;
                        end else
                            recv_state <= RECV_IDLE;
                    end
                end

                RECV_MAZES_ACCEPT: begin
                    if (s_axis_tvalid) begin
                        recv_maze_buf  <= s_axis_tdata;
                        recv_word_idx  <= 2'd0;
                        recv_state     <= RECV_MAZES_WRITE;
                    end
                end

                RECV_MAZES_WRITE: begin
                    maze_mem_we    <= 1'b1;
                    maze_mem_addr  <= recv_maze_base + {30'd0, recv_word_idx};
                    maze_mem_wdata <= recv_maze_buf[recv_word_idx * 32 +: 32];
                    if (recv_word_idx == 2'd3) begin
                        recv_maze_count <= recv_maze_count + 16'd1;
                        recv_maze_base  <= recv_maze_base + 32'd4;
                        if (recv_maze_count + 16'd1 >= recv_num_mazes) begin
                            num_mazes_reg      <= {16'd0, recv_num_mazes};
                            stream_start_pulse <= recv_start_bit;
                            recv_state         <= RECV_IDLE;
                        end else
                            recv_state <= RECV_MAZES_ACCEPT;
                    end else
                        recv_word_idx <= recv_word_idx + 2'd1;
                end

                default: recv_state <= RECV_IDLE;
            endcase
        end
    end

    // -------------------------------------------------------------------------
    // Scheduler state machine (unchanged logic; start = stream_start_pulse)
    // -------------------------------------------------------------------------
    typedef enum logic [2:0] {
        SCHED_IDLE,
        SCHED_LOADING,
        SCHED_RUNNING
    } sched_state_t;

    sched_state_t sched_state;
    logic [15:0] current_maze_idx;
    logic [($clog2(NUM_CORES) > 0 ? $clog2(NUM_CORES)-1 : 0):0] next_free_core;
    logic [NUM_CORES-1:0] core_busy;

    wire [NUM_CORES-1:0] core_finished;
    genvar j;
    generate
        for (j = 0; j < NUM_CORES; j++) begin : g_core_finished
            assign core_finished[j] = core_done[j] && core_busy[j];
        end
    endgenerate

    integer maze_addr;
    integer result_addr;

    always_ff @(posedge clk) begin
        if (rst || soft_reset) begin
            sched_state     <= SCHED_IDLE;
            current_maze_idx <= 16'd0;
            next_free_core  <= '0;
            core_busy       <= {NUM_CORES{1'b0}};
            core_start      <= {NUM_CORES{1'b0}};
            mazes_done_reg  <= 32'd0;
            for (int k = 0; k < NUM_CORES; k++)
                core_maze_id[k] <= 16'd0;
        end else begin
            case (sched_state)
                SCHED_IDLE: begin
                    if (stream_start_pulse) begin
                        sched_state      <= SCHED_LOADING;
                        current_maze_idx <= 16'd0;
                        next_free_core   <= '0;
                        mazes_done_reg   <= 32'd0;
                    end
                end

                SCHED_LOADING: begin
                    if (current_maze_idx < num_mazes_reg[15:0]) begin
                        if (!core_busy[next_free_core]) begin
                            maze_addr = (current_maze_idx * 4);
                            core_grid0[next_free_core] <= maze_mem[maze_addr + 0];
                            core_grid1[next_free_core] <= maze_mem[maze_addr + 1];
                            core_grid2[next_free_core] <= maze_mem[maze_addr + 2];
                            core_grid3[next_free_core] <= maze_mem[maze_addr + 3];
                            core_start[next_free_core] <= 1'b1;
                            core_busy[next_free_core] <= 1'b1;
                            core_maze_id[next_free_core] <= current_maze_idx[15:0];
                            current_maze_idx <= current_maze_idx + 16'd1;
                            if (next_free_core == ($clog2(NUM_CORES)'(NUM_CORES - 1)))
                                next_free_core <= '0;
                            else
                                next_free_core <= next_free_core + 1'b1;
                            if (current_maze_idx + 1 == num_mazes_reg[15:0])
                                sched_state <= SCHED_RUNNING;
                        end
                    end else
                        sched_state <= SCHED_RUNNING;
                end

                SCHED_RUNNING: begin
                    for (int j = 0; j < NUM_CORES; j++) begin
                        if (core_finished[j]) begin
                            result_addr = core_maze_id[j] * 8;
                            result_mem[result_addr + 0] <= {24'd0, core_path_len[j]};
                            result_mem[result_addr + 1] <= core_path_word0[j];
                            result_mem[result_addr + 2] <= core_path_word1[j];
                            result_mem[result_addr + 3] <= core_path_word2[j];
                            result_mem[result_addr + 4] <= core_path_word3[j];
                            result_mem[result_addr + 5] <= core_path_word4[j];
                            result_mem[result_addr + 6] <= core_path_word5[j];
                            result_mem[result_addr + 7] <= {31'd0, core_valid[j]};
                            core_busy[j] <= 1'b0;
                        end
                    end
                    mazes_done_reg <= mazes_done_reg + $countones(core_finished);
                    if (mazes_done_reg + $countones(core_finished) >= num_mazes_reg)
                        sched_state <= SCHED_IDLE;
                end

                default: sched_state <= SCHED_IDLE;
            endcase
            core_start <= {NUM_CORES{1'b0}};
        end
    end

    // -------------------------------------------------------------------------
    // Output stream sender: when batch is done, stream result_mem to M_AXIS
    // One 256-bit beat per result: [7:0] path_len, [39:8] path_word0, ... [232] valid. TLAST on last.
    // -------------------------------------------------------------------------
    typedef enum logic [1:0] { OUT_IDLE, OUT_SEND } out_state_t;
    out_state_t out_state;
    logic [15:0] out_result_idx;
    logic [15:0] out_result_count;   // latched num_mazes when batch completes
    logic        batch_done_pulse;

    logic batch_done;
    assign batch_done = (mazes_done_reg + $countones(core_finished) >= num_mazes_reg) && (num_mazes_reg != 32'd0);
    assign batch_done_pulse = (sched_state == SCHED_RUNNING) && batch_done;

    always_ff @(posedge clk) begin
        if (rst) begin
            out_state       <= OUT_IDLE;
            out_result_idx  <= 16'd0;
            out_result_count <= 16'd0;
            m_axis_tvalid   <= 1'b0;
            m_axis_tdata    <= '0;
            m_axis_tlast    <= 1'b0;
        end else begin
            case (out_state)
                OUT_IDLE: begin
                    m_axis_tvalid <= 1'b0;
                    m_axis_tlast  <= 1'b0;
                    if (batch_done_pulse) begin
                        out_result_count <= num_mazes_reg[15:0];
                        out_result_idx   <= 16'd0;
                        out_state        <= OUT_SEND;
                    end
                end

                OUT_SEND: begin
                    m_axis_tvalid <= 1'b1;
                    m_axis_tdata[7:0]    <= result_mem[out_result_idx * 8 + 0][7:0];   // path_len
                    m_axis_tdata[39:8]   <= result_mem[out_result_idx * 8 + 1];        // path_word0
                    m_axis_tdata[71:40]  <= result_mem[out_result_idx * 8 + 2];        // path_word1
                    m_axis_tdata[103:72] <= result_mem[out_result_idx * 8 + 3];        // path_word2
                    m_axis_tdata[135:104]<= result_mem[out_result_idx * 8 + 4];        // path_word3
                    m_axis_tdata[167:136]<= result_mem[out_result_idx * 8 + 5];        // path_word4
                    m_axis_tdata[199:168]<= result_mem[out_result_idx * 8 + 6];        // path_word5
                    m_axis_tdata[232]    <= result_mem[out_result_idx * 8 + 7][0];    // valid
                    m_axis_tdata[231:200]<= 32'd0;   // reserved / path_word6 not stored
                    m_axis_tlast <= (out_result_idx + 16'd1 >= out_result_count);
                    if (m_axis_tready) begin
                        if (out_result_idx + 16'd1 >= out_result_count) begin
                            out_state <= OUT_IDLE;
                            m_axis_tvalid <= 1'b0;
                        end else
                            out_result_idx <= out_result_idx + 16'd1;
                    end
                end

                default: out_state <= OUT_IDLE;
            endcase
        end
    end

endmodule
