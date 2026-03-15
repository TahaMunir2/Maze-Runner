`timescale 1ns/1ps

module astar_axis_wrapper (
    input  logic        aclk,
    input  logic        aresetn,

    // AXI-Stream Slave (from DMA MM2S)
    input  logic [31:0] s_axis_tdata,
    input  logic [3:0]  s_axis_tkeep,
    input  logic        s_axis_tvalid,
    output logic        s_axis_tready,
    input  logic        s_axis_tlast,

    // AXI-Stream Master (to DMA S2MM)
    output logic [31:0] m_axis_tdata,
    output logic [3:0]  m_axis_tkeep,
    output logic        m_axis_tvalid,
    input  logic        m_axis_tready,
    output logic        m_axis_tlast
);

    logic rst;
    assign rst = ~aresetn;

    // -------------------------
    // A* core signals
    // -------------------------
    logic       start;
    logic [99:0] maze_packed;         // Packed version for easier handling
    logic [3:0]  path_arr [0:98];
    logic [6:0]  path_length;
    logic        path_ready;
    logic        no_path;

    // Convert packed to unpacked for astar_top
    logic maze_arr [0:99];
    genvar i;
    generate
        for (i = 0; i < 100; i = i + 1) begin : gen_maze_unpack
            assign maze_arr[i] = maze_packed[i];
        end
    endgenerate

    astar_top astar_inst (
        .clk         (aclk),
        .rst         (rst),
        .start       (start),
        .maze        (maze_arr),
        .path        (path_arr),
        .path_length (path_length),
        .path_ready  (path_ready),
        .no_path     (no_path)
    );

    // -------------------------
    // AXIS control FSM
    // -------------------------
    typedef enum logic [2:0] {
        S_IDLE      = 3'd0,
        S_RECV4     = 3'd1,
        S_RUN       = 3'd2,
        S_SEND_PATH = 3'd3,
        S_SEND_NOP  = 3'd4
    } state_t;

    state_t state;

    logic [1:0] recv_word;         // 0..3
    logic [31:0] w0, w1, w2, w3;   // packed maze words

    logic [6:0] send_idx;

    // Ready when receiving 4 words
    assign s_axis_tready = (state == S_RECV4);

    // Default keep on output = all bytes valid
    assign m_axis_tkeep  = 4'hF;

    // -------------------------
    // Sequential FSM
    // -------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            state <= S_IDLE;
            recv_word <= 2'd0;
            w0 <= 32'd0; 
            w1 <= 32'd0; 
            w2 <= 32'd0; 
            w3 <= 32'd0;
            maze_packed <= 100'd0;
            start <= 1'b0;
            send_idx <= 7'd0;
        end else begin
            start <= 1'b0;

            case (state)
                S_IDLE: begin
                    recv_word <= 2'd0;
                    send_idx  <= 7'd0;
                    if (s_axis_tvalid) begin
                        state <= S_RECV4;
                    end
                end

                // Receive exactly 4 beats: w0,w1,w2,w3
                S_RECV4: begin
                    if (s_axis_tvalid && s_axis_tready) begin
                        case (recv_word)
                            2'd0: w0 <= s_axis_tdata;
                            2'd1: w1 <= s_axis_tdata;
                            2'd2: w2 <= s_axis_tdata;
                            2'd3: begin
                                w3 <= s_axis_tdata;
                                // Pack maze data
                                maze_packed <= {s_axis_tdata[3:0], w2, w1, w0};
                                start <= 1'b1;
                                state <= S_RUN;
                            end
                        endcase

                        if (recv_word != 2'd3) begin
                            recv_word <= recv_word + 2'd1;
                        end
                    end
                end

                S_RUN: begin
                    if (path_ready) begin
                        send_idx <= 7'd0;
                        state <= S_SEND_PATH;
                    end else if (no_path) begin
                        state <= S_SEND_NOP;
                    end
                end

                S_SEND_PATH: begin
                    if (m_axis_tvalid && m_axis_tready) begin
                        if (send_idx == (path_length - 1)) begin
                            state <= S_IDLE;
                        end else begin
                            send_idx <= send_idx + 7'd1;
                        end
                    end
                end

                S_SEND_NOP: begin
                    if (m_axis_tvalid && m_axis_tready) begin
                        state <= S_IDLE;
                    end
                end

                default: state <= S_IDLE;
            endcase
        end
    end

    // -------------------------
    // Output stream (combinational)
    // -------------------------
    always_comb begin
        m_axis_tvalid = 1'b0;
        m_axis_tdata  = 32'd0;
        m_axis_tlast  = 1'b0;

        case (state)
            S_SEND_PATH: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = {28'd0, path_arr[send_idx]};
                m_axis_tlast  = (send_idx == (path_length - 1));
            end

            S_SEND_NOP: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = 32'hFFFF_FFFF;
                m_axis_tlast  = 1'b1;
            end

            default: ;
        endcase
    end

endmodule