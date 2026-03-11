// Parallel Maze Solver for PYNQ Z-1
// Instantiates multiple maze_solver_core instances to process mazes in parallel
// READY FOR FPGA IMPLEMENTATION

module maze_solver_parallel #(
    parameter int NUM_CORES = 16,  // Number of parallel solver cores
    parameter int W = 10,
    parameter int H = 10,
    parameter int N = W*H,
    parameter int MAX_MAZES = 1000  // Maximum mazes in memory
) (
    input logic clk,
    input logic rst,
    
    // AXI4-Lite interface for control and status
    input  logic [31:0] s_axi_awaddr,
    input  logic        s_axi_awvalid,
    output logic        s_axi_awready,
    input  logic [31:0] s_axi_wdata,
    input  logic        s_axi_wvalid,
    output logic        s_axi_wready,
    output logic [1:0]  s_axi_bresp,
    output logic        s_axi_bvalid,
    input  logic        s_axi_bready,
    
    input  logic [31:0] s_axi_araddr,
    input  logic        s_axi_arvalid,
    output logic        s_axi_arready,
    output logic [31:0] s_axi_rdata,
    output logic [1:0]  s_axi_rresp,
    output logic        s_axi_rvalid,
    input  logic        s_axi_rready,
    
    // Interrupt output
    output logic irq
);

    // ============================================================
    // Control Registers (AXI4-Lite address map)
    // ============================================================
    // 0x00: Control register
    //   [0] = Reset cores
    //   [1] = Start processing
    // 0x04: Status register
    //   [0] = Idle
    //   [1] = Running
    //   [15:8] = Active cores count
    // 0x08: Number of mazes to process
    // 0x0C: Number of mazes completed
    // 0x10-0x1F: Reserved
    // 0x20: Maze memory base address (for writing mazes)
    // 0x24: Result memory base address (for reading results)
    // ============================================================
    
    logic [31:0] control_reg;      // 0x00: Control
    logic [31:0] status_reg;        // 0x04: Status
    logic [31:0] num_mazes_reg;     // 0x08: Number of mazes
    logic [31:0] mazes_done_reg;    // 0x0C: Mazes completed
    logic [31:0] maze_mem_base;    // 0x20: Maze memory base
    logic [31:0] result_mem_base;  // 0x24: Result memory base
    
    // ============================================================
    // Memory Interface (BRAM for maze storage)
    // ============================================================
    // Each maze = 4 words (16 bytes)
    // Maze memory: MAX_MAZES * 4 words
    logic [31:0] maze_mem [0:MAX_MAZES*4-1];
    logic [31:0] maze_mem_addr;
    logic [31:0] maze_mem_wdata;
    logic        maze_mem_we;
    logic [31:0] maze_mem_rdata;
    
    // Result memory: MAX_MAZES * 8 words (path_len + 7 path words)
    logic [31:0] result_mem [0:MAX_MAZES*8-1];
    logic [31:0] result_mem_addr;
    logic [31:0] result_mem_wdata;
    logic        result_mem_we;
    logic [31:0] result_mem_rdata;
    
    // ============================================================
    // Core Instances
    // ============================================================
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
    
    // Core input mazes
    logic [NUM_CORES-1:0][31:0] core_grid0;
    logic [NUM_CORES-1:0][31:0] core_grid1;
    logic [NUM_CORES-1:0][31:0] core_grid2;
    logic [NUM_CORES-1:0][31:0] core_grid3;
    
    // Core assignment tracking
    logic [NUM_CORES-1:0][15:0] core_maze_id;  // Which maze each core is solving
    
    // ============================================================
    // Scheduler State Machine
    // ============================================================
    typedef enum logic [2:0] {
        SCHED_IDLE,
        SCHED_LOADING,
        SCHED_RUNNING,
        SCHED_SAVING
    } sched_state_t;
    
    sched_state_t sched_state;
    logic [15:0] current_maze_idx;
    logic [($clog2(NUM_CORES) > 0 ? $clog2(NUM_CORES)-1 : 0):0] next_free_core;
    logic [NUM_CORES-1:0] core_busy;
    
    // Address calculation
    integer maze_addr;
    integer result_addr;
    
    // ============================================================
    // Instantiate Solver Cores
    // ============================================================
    genvar i;
    generate
        for (i = 0; i < NUM_CORES; i++) begin : gen_cores
            maze_solver_core #(
                .W(W),
                .H(H),
                .N(N)
            ) solver_inst (
                .clk(clk),
                .rst(rst || control_reg[0]),
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
    
    // ============================================================
    // Maze Memory (BRAM) - Dual Port
    // ============================================================
    // Port A: Write from AXI
    // Port B: Read for cores
    always_ff @(posedge clk) begin
        if (maze_mem_we) begin
            maze_mem[maze_mem_addr] <= maze_mem_wdata;
        end
        maze_mem_rdata <= maze_mem[maze_mem_addr];
    end
    
    // ============================================================
    // Result Memory (BRAM) - Dual Port
    // ============================================================
    // Port A: Write from cores
    // Port B: Read from AXI
    always_ff @(posedge clk) begin
        if (result_mem_we) begin
            result_mem[result_mem_addr] <= result_mem_wdata;
        end
        result_mem_rdata <= result_mem[result_mem_addr];
    end
    
    // ============================================================
    // Core Scheduler
    // ============================================================
    always_ff @(posedge clk) begin
        if (rst || control_reg[0]) begin
            sched_state <= SCHED_IDLE;
            current_maze_idx <= 16'd0;
            next_free_core <= '0;
            core_busy <= {NUM_CORES{1'b0}};
            core_start <= {NUM_CORES{1'b0}};
            mazes_done_reg <= 32'd0;
            for (int k = 0; k < NUM_CORES; k++) begin
                core_maze_id[k] <= 16'd0;
            end
        end else begin
            case (sched_state)
                SCHED_IDLE: begin
                    if (control_reg[1]) begin  // Start bit
                        sched_state <= SCHED_LOADING;
                        current_maze_idx <= 16'd0;
                        next_free_core <= '0;
                        mazes_done_reg <= 32'd0;
                    end
                end
                
                SCHED_LOADING: begin
                    // Find next free core and assign maze
                    if (current_maze_idx < num_mazes_reg[15:0]) begin
                        // Check if core is available
                        if (!core_busy[next_free_core]) begin
                            // Read maze from memory (4 words per maze)
                            maze_addr = (maze_mem_base >> 2) + (current_maze_idx * 4);  // *4
                            
                            // Load maze data into core
                            core_grid0[next_free_core] <= maze_mem[maze_addr + 0];
                            core_grid1[next_free_core] <= maze_mem[maze_addr + 1];
                            core_grid2[next_free_core] <= maze_mem[maze_addr + 2];
                            core_grid3[next_free_core] <= maze_mem[maze_addr + 3];
                            
                            core_start[next_free_core] <= 1'b1;
                            core_busy[next_free_core] <= 1'b1;
                            core_maze_id[next_free_core] <= current_maze_idx;
                            
                            current_maze_idx <= current_maze_idx + 16'd1;
                            if (next_free_core == ($clog2(NUM_CORES)'(NUM_CORES - 1))) begin
                                next_free_core <= '0;
                            end else begin
                                next_free_core <= next_free_core + 1'b1;
                            end
                            
                            if (current_maze_idx + 1 == num_mazes_reg[15:0]) begin
                                sched_state <= SCHED_RUNNING;
                            end
                        end
                    end else begin
                        sched_state <= SCHED_RUNNING;
                    end
                end
                
                SCHED_RUNNING: begin
                    // Monitor cores for completion
                    for (int j = 0; j < NUM_CORES; j++) begin
                        if (core_done[j] && core_busy[j]) begin
                            // Save result to memory
                            result_addr = (result_mem_base >> 2) + (core_maze_id[j] * 8);  // *8
                            
                            result_mem[result_addr + 0] <= {24'd0, core_path_len[j]};
                            result_mem[result_addr + 1] <= core_path_word0[j];
                            result_mem[result_addr + 2] <= core_path_word1[j];
                            result_mem[result_addr + 3] <= core_path_word2[j];
                            result_mem[result_addr + 4] <= core_path_word3[j];
                            result_mem[result_addr + 5] <= core_path_word4[j];
                            result_mem[result_addr + 6] <= core_path_word5[j];
                            result_mem[result_addr + 7] <= {31'd0, core_valid[j]};
                            
                            core_busy[j] <= 1'b0;
                            mazes_done_reg <= mazes_done_reg + 32'd1;
                        end
                    end
                    
                    // Check if all mazes are done
                    if (mazes_done_reg >= num_mazes_reg) begin
                        sched_state <= SCHED_IDLE;
                        control_reg[1] <= 1'b0;  // Clear start bit
                    end
                end
                
                default: begin
                    sched_state <= SCHED_IDLE;
                end
            endcase
            
            // Clear start signals after one cycle
            core_start <= {NUM_CORES{1'b0}};
        end
    end
    
    // ============================================================
    // Status Register
    // ============================================================
    always_comb begin
        status_reg = 32'd0;
        status_reg[0] = (sched_state == SCHED_IDLE);
        status_reg[1] = (sched_state == SCHED_RUNNING);
        status_reg[15:8] = $countones(core_busy);  // Number of active cores
    end
    
    // ============================================================
    // AXI4-Lite Write Interface
    // ============================================================
    logic aw_handshake, w_handshake;
    assign aw_handshake = s_axi_awvalid && s_axi_awready;
    assign w_handshake = s_axi_wvalid && s_axi_wready;
    
    always_ff @(posedge clk) begin
        if (rst) begin
            control_reg <= 32'd0;
            num_mazes_reg <= 32'd0;
            maze_mem_base <= 32'h1000;  // Default base address
            result_mem_base <= 32'h2000;  // Default base address
            s_axi_awready <= 1'b0;
            s_axi_wready <= 1'b0;
            s_axi_bvalid <= 1'b0;
            maze_mem_we <= 1'b0;
        end else begin
            // Write address phase
            if (s_axi_awvalid && !s_axi_awready) begin
                s_axi_awready <= 1'b1;
            end else begin
                s_axi_awready <= 1'b0;
            end
            
            // Write data phase
            if (s_axi_wvalid && !s_axi_wready) begin
                s_axi_wready <= 1'b1;
                
                // Decode address and write
                case (s_axi_awaddr[7:0])
                    8'h00: control_reg <= s_axi_wdata;
                    8'h08: num_mazes_reg <= s_axi_wdata;
                    8'h20: maze_mem_base <= s_axi_wdata;
                    8'h24: result_mem_base <= s_axi_wdata;
                    default: begin
                        // Memory write (maze data)
                        if (s_axi_awaddr >= maze_mem_base && 
                            s_axi_awaddr < (maze_mem_base + (MAX_MAZES * 16))) begin
                            maze_mem_addr <= (s_axi_awaddr - maze_mem_base) >> 2;
                            maze_mem_wdata <= s_axi_wdata;
                            maze_mem_we <= 1'b1;
                        end
                    end
                endcase
            end else begin
                s_axi_wready <= 1'b0;
                maze_mem_we <= 1'b0;
            end
            
            // Write response
            if (aw_handshake && w_handshake && !s_axi_bvalid) begin
                s_axi_bvalid <= 1'b1;
                s_axi_bresp <= 2'b00;  // OK
            end else if (s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end
        end
    end
    
    // ============================================================
    // AXI4-Lite Read Interface
    // ============================================================
    always_ff @(posedge clk) begin
        if (rst) begin
            s_axi_arready <= 1'b0;
            s_axi_rvalid <= 1'b0;
            s_axi_rdata <= 32'd0;
            result_mem_addr <= 32'd0;
        end else begin
            if (s_axi_arvalid && !s_axi_arready) begin
                s_axi_arready <= 1'b1;
                
                // Decode address
                case (s_axi_araddr[7:0])
                    8'h00: s_axi_rdata <= control_reg;
                    8'h04: s_axi_rdata <= status_reg;
                    8'h08: s_axi_rdata <= num_mazes_reg;
                    8'h0C: s_axi_rdata <= mazes_done_reg;
                    8'h20: s_axi_rdata <= maze_mem_base;
                    8'h24: s_axi_rdata <= result_mem_base;
                    default: begin
                        // Memory read (result data)
                        if (s_axi_araddr >= result_mem_base && 
                            s_axi_araddr < (result_mem_base + (MAX_MAZES * 32))) begin
                            result_mem_addr <= (s_axi_araddr - result_mem_base) >> 2;
                            s_axi_rdata <= result_mem[result_mem_addr];
                        end else begin
                            s_axi_rdata <= 32'd0;
                        end
                    end
                endcase
            end else begin
                s_axi_arready <= 1'b0;
            end
            
            if (s_axi_arready && !s_axi_rvalid) begin
                s_axi_rvalid <= 1'b1;
                s_axi_rresp <= 2'b00;  // OK
            end else if (s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end
    
    // ============================================================
    // Interrupt Generation
    // ============================================================
    assign irq = (mazes_done_reg >= num_mazes_reg) && 
                 (num_mazes_reg > 0) && 
                 (sched_state == SCHED_RUNNING) &&
                 !control_reg[1];  // Start bit cleared
    
endmodule
