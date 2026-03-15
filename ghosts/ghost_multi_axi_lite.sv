// =============================================================================
// ghost_multi_axi_lite.sv  -  4-Ghost parallel AXI Lite wrapper
//
// Instantiates 4 ghost_top blocks running simultaneously.
// ghost_top.sv is unchanged - just 4 instances with separate position inputs.
// All 4 ghosts share the same rover position and game_enable/soft_rst.
//
// Register map:
//   WRITE 0x00 - CONTROL
//           [0]  game_enable
//           [1]  soft_rst    (resets all 4 ghost facings to UP simultaneously)
//
//   READ  0x00 - Ghost 1 status: [1:0] direction  [2] valid  [3] game_enable echo
//   READ  0x04 - Ghost 2 status: [1:0] direction  [2] valid
//   READ  0x08 - Ghost 3 status: [1:0] direction  [2] valid
//   READ  0x0C - Ghost 4 status: [1:0] direction  [2] valid
//
// Direction encoding: 00=UP  01=DOWN  10=LEFT  11=RIGHT
//
// Vivado block design:
//   - Connect ghost1_row/col, ghost2_row/col, ghost3_row/col, ghost4_row/col
//     from 4 separate AXI GPIO blocks (or one wide GPIO)
//   - rover_row/col shared from one GPIO block
//   - S_AXI ? PS M_AXI_GP0 via AXI Interconnect
//
// Jupyter:
//   ghost1_dir = DIRS[ghost.read(0x00) & 0x3]
//   ghost2_dir = DIRS[ghost.read(0x04) & 0x3]
//   ghost3_dir = DIRS[ghost.read(0x08) & 0x3]
//   ghost4_dir = DIRS[ghost.read(0x0C) & 0x3]
// =============================================================================

module ghost_multi_axi_lite #(
    parameter int C_S_AXI_DATA_WIDTH = 32,
    parameter int C_S_AXI_ADDR_WIDTH = 4    // covers 0x00..0x0C
)(
    // AXI Lite slave interface
    input  logic                            S_AXI_ACLK,
    input  logic                            S_AXI_ARESETN,

    // Write address channel
    input  logic [C_S_AXI_ADDR_WIDTH-1:0]  S_AXI_AWADDR,
    input  logic                            S_AXI_AWVALID,
    output logic                            S_AXI_AWREADY,

    // Write data channel
    input  logic [C_S_AXI_DATA_WIDTH-1:0]  S_AXI_WDATA,
    input  logic [C_S_AXI_DATA_WIDTH/8-1:0] S_AXI_WSTRB,
    input  logic                            S_AXI_WVALID,
    output logic                            S_AXI_WREADY,

    // Write response channel
    output logic [1:0]                      S_AXI_BRESP,
    output logic                            S_AXI_BVALID,
    input  logic                            S_AXI_BREADY,

    // Read address channel
    input  logic [C_S_AXI_ADDR_WIDTH-1:0]  S_AXI_ARADDR,
    input  logic                            S_AXI_ARVALID,
    output logic                            S_AXI_ARREADY,

    // Read data channel
    output logic [C_S_AXI_DATA_WIDTH-1:0]  S_AXI_RDATA,
    output logic [1:0]                      S_AXI_RRESP,
    output logic                            S_AXI_RVALID,
    input  logic                            S_AXI_RREADY,

    // Ghost positions - one set per ghost (from GPIO blocks)
    input  logic [3:0]  ghost1_row,
    input  logic [3:0]  ghost1_col,
    input  logic [3:0]  ghost2_row,
    input  logic [3:0]  ghost2_col,
    input  logic [3:0]  ghost3_row,
    input  logic [3:0]  ghost3_col,
    input  logic [3:0]  ghost4_row,
    input  logic [3:0]  ghost4_col,

    // Rover position - shared by all 4 ghosts
    input  logic [3:0]  rover_row,
    input  logic [3:0]  rover_col
);

    // =========================================================================
    // Internal signals
    // =========================================================================
    logic       clk;
    logic       rst;
    logic       game_enable;
    

    assign clk = S_AXI_ACLK;
    assign rst = ~S_AXI_ARESETN;

    // Per-ghost direction and valid outputs
    logic [1:0] direction [0:3];
    logic       valid     [0:3];

    // =========================================================================
    // 4 ghost_top instances - ghost_top.sv unchanged, just 4 copies
    // Each gets its own position, all share rover position and control signals
    // =========================================================================
    ghost_top ghost1 (
        .clk         (clk),
        .rst         (rst),
        .game_enable (game_enable),
        .ghost_row   (ghost1_row),
        .ghost_col   (ghost1_col),
        .rover_row   (rover_row),
        .rover_col   (rover_col),
        .direction   (direction[0]),
        .valid       (valid[0])
    );

    ghost_top ghost2 (
        .clk         (clk),
        .rst         (rst),
        .game_enable (game_enable),
        .ghost_row   (ghost2_row),
        .ghost_col   (ghost2_col),
        .rover_row   (rover_row),
        .rover_col   (rover_col),
        .direction   (direction[1]),
        .valid       (valid[1])
    );

    ghost_top ghost3 (
        .clk         (clk),
        .rst         (rst),
        .game_enable (game_enable),

        .ghost_row   (ghost3_row),
        .ghost_col   (ghost3_col),
        .rover_row   (rover_row),
        .rover_col   (rover_col),
        .direction   (direction[2]),
        .valid       (valid[2])
    );

    ghost_top ghost4 (
        .clk         (clk),
        .rst         (rst),
        .game_enable (game_enable),

        .ghost_row   (ghost4_row),
        .ghost_col   (ghost4_col),
        .rover_row   (rover_row),
        .rover_col   (rover_col),
        .direction   (direction[3]),
        .valid       (valid[3])
    );

    // =========================================================================
    // AXI Lite write logic - CONTROL register (0x00)
    // =========================================================================
    logic aw_active, w_active;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            game_enable   <= 1'b0;

            S_AXI_AWREADY <= 1'b0;
            S_AXI_WREADY  <= 1'b0;
            S_AXI_BVALID  <= 1'b0;
            S_AXI_BRESP   <= 2'b00;
            aw_active     <= 1'b0;
            w_active      <= 1'b0;
        end else begin

            // Accept write address
            if (S_AXI_AWVALID && !aw_active) begin
                S_AXI_AWREADY <= 1'b1;
                aw_active     <= 1'b1;
            end else
                S_AXI_AWREADY <= 1'b0;

            // Accept write data
            if (S_AXI_WVALID && !w_active) begin
                S_AXI_WREADY <= 1'b1;
                w_active     <= 1'b1;
            end else
                S_AXI_WREADY <= 1'b0;

            // Commit write
            if (aw_active && w_active) begin
                if (S_AXI_AWADDR[3:2] == 2'b00) begin
                    game_enable <= S_AXI_WDATA[0];
                end
                S_AXI_BVALID <= 1'b1;
                S_AXI_BRESP  <= 2'b00;
                aw_active    <= 1'b0;
                w_active     <= 1'b0;
            end

            if (S_AXI_BVALID && S_AXI_BREADY)
                S_AXI_BVALID <= 1'b0;
        end
    end

    // =========================================================================
    // AXI Lite read logic - 4 STATUS registers (0x00..0x0C)
    // =========================================================================
    logic [C_S_AXI_DATA_WIDTH-1:0] read_data;

    always_comb begin
        read_data = '0;
        case (S_AXI_ARADDR[3:2])
            2'b00: read_data = {28'b0, game_enable, valid[0], direction[0]};
            2'b01: read_data = {29'b0,              valid[1], direction[1]};
            2'b10: read_data = {29'b0,              valid[2], direction[2]};
            2'b11: read_data = {29'b0,              valid[3], direction[3]};
            default: read_data = 32'hDEADBEEF;
        endcase
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            S_AXI_ARREADY <= 1'b0;
            S_AXI_RVALID  <= 1'b0;
            S_AXI_RDATA   <= '0;
            S_AXI_RRESP   <= 2'b00;
        end else begin
            if (S_AXI_ARVALID && !S_AXI_RVALID) begin
                S_AXI_ARREADY <= 1'b1;
                S_AXI_RDATA   <= read_data;
                S_AXI_RVALID  <= 1'b1;
                S_AXI_RRESP   <= 2'b00;
            end else
                S_AXI_ARREADY <= 1'b0;

            if (S_AXI_RVALID && S_AXI_RREADY)
                S_AXI_RVALID <= 1'b0;
        end
    end

endmodule