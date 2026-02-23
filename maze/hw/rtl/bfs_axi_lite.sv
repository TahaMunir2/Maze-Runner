module bfs_axi_lite #(
    parameter integer C_S_AXI_ADDR_WIDTH = 6,   // enough for 0x00..0x20
    parameter integer C_S_AXI_DATA_WIDTH = 32
)(
    input  wire                          s_axi_aclk,
    input  wire                          s_axi_aresetn,

    // AXI4-Lite write address channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] s_axi_awaddr,
    input  wire                          s_axi_awvalid,
    output reg                           s_axi_awready,

    // AXI4-Lite write data channel
    input  wire [C_S_AXI_DATA_WIDTH-1:0] s_axi_wdata,
    input  wire [(C_S_AXI_DATA_WIDTH/8)-1:0] s_axi_wstrb,
    input  wire                          s_axi_wvalid,
    output reg                           s_axi_wready,

    // AXI4-Lite write response channel
    output reg  [1:0]                    s_axi_bresp,
    output reg                           s_axi_bvalid,
    input  wire                          s_axi_bready,

    // AXI4-Lite read address channel
    input  wire [C_S_AXI_ADDR_WIDTH-1:0] s_axi_araddr,
    input  wire                          s_axi_arvalid,
    output reg                           s_axi_arready,

    // AXI4-Lite read data channel
    output reg  [C_S_AXI_DATA_WIDTH-1:0] s_axi_rdata,
    output reg  [1:0]                    s_axi_rresp,
    output reg                           s_axi_rvalid,
    input  wire                          s_axi_rready
);

    // -----------------------------
    // Address decode (word aligned)
    // -----------------------------
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_CTRL   = 6'h00;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_STATUS = 6'h04;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_GOAL   = 6'h08;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_CURR   = 6'h0C;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_GRID0  = 6'h10;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_GRID1  = 6'h14;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_GRID2  = 6'h18;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_GRID3  = 6'h1C;
    localparam [C_S_AXI_ADDR_WIDTH-1:0] ADDR_OUT    = 6'h20;

    // -----------------------------
    // Internal registers
    // -----------------------------
    reg [31:0] reg_goal;
    reg [31:0] reg_curr;
    reg [31:0] reg_grid0, reg_grid1, reg_grid2, reg_grid3;

    // start pulse + done latch
    reg        start_pulse;
    reg        done_latched;

    // -----------------------------
    // Reconstruct grid_free[99:0]
    // -----------------------------
    wire [99:0] grid_free;
    assign grid_free[31:0]   = reg_grid0;
    assign grid_free[63:32]  = reg_grid1;
    assign grid_free[95:64]  = reg_grid2;
    assign grid_free[99:96]  = reg_grid3[3:0];

    // Extract coords
    wire [3:0] goal_x = reg_goal[3:0];
    wire [3:0] goal_y = reg_goal[7:4];
    wire [3:0] curr_x = reg_curr[3:0];
    wire [3:0] curr_y = reg_curr[7:4];

    // -----------------------------
    // Instantiate BFS core
    // -----------------------------
    wire        core_done;
    wire [6:0]  core_dist_curr;
    wire [1:0]  core_next_dir;
    wire        core_next_valid;

    bfs_wavefront_10x10 u_core (
        .clk        (s_axi_aclk),
        .rstn       (s_axi_aresetn),
        .start      (start_pulse),
        .grid_free  (grid_free),
        .goal_x     (goal_x),
        .goal_y     (goal_y),
        .curr_x     (curr_x),
        .curr_y     (curr_y),
        .done       (core_done),
        .dist_curr  (core_dist_curr),
        .next_dir   (core_next_dir),
        .next_valid (core_next_valid)
    );

    // -----------------------------
    // AXI write handling (simple)
    // -----------------------------
    reg [C_S_AXI_ADDR_WIDTH-1:0] awaddr_latched;
    reg awaddr_valid;

    wire write_fire = s_axi_awready && s_axi_awvalid && s_axi_wready && s_axi_wvalid;

    integer b;
    function automatic [31:0] apply_wstrb(input [31:0] oldv, input [31:0] newv, input [3:0] wstrb);
        reg [31:0] v;
        begin
            v = oldv;
            for (b=0; b<4; b=b+1) begin
                if (wstrb[b]) v[b*8 +: 8] = newv[b*8 +: 8];
            end
            apply_wstrb = v;
        end
    endfunction

    // -----------------------------
    // AXI read handling (simple)
    // -----------------------------
    reg [C_S_AXI_ADDR_WIDTH-1:0] araddr_latched;

    // OUT register assembled on read
    wire [31:0] out_word;
    assign out_word = { 22'd0, core_next_valid, core_next_dir, core_dist_curr };

    // -----------------------------
    // Sequential AXI logic
    // -----------------------------
    always @(posedge s_axi_aclk) begin
        if (!s_axi_aresetn) begin
            // AXI defaults
            s_axi_awready <= 1'b0;
            s_axi_wready  <= 1'b0;
            s_axi_bvalid  <= 1'b0;
            s_axi_bresp   <= 2'b00;

            s_axi_arready <= 1'b0;
            s_axi_rvalid  <= 1'b0;
            s_axi_rresp   <= 2'b00;
            s_axi_rdata   <= 32'd0;

            awaddr_latched <= '0;
            awaddr_valid   <= 1'b0;
            araddr_latched <= '0;

            // regs
            reg_goal  <= 32'd0;
            reg_curr  <= 32'd0;
            reg_grid0 <= 32'd0;
            reg_grid1 <= 32'd0;
            reg_grid2 <= 32'd0;
            reg_grid3 <= 32'd0;

            start_pulse <= 1'b0;
            done_latched <= 1'b0;

        end else begin
            // default
            start_pulse <= 1'b0;

            // latch done (core_done is 1-cycle pulse)
            if (core_done) done_latched <= 1'b1;

            // -------------------------
            // WRITE ADDRESS READY
            // -------------------------
            if (!s_axi_awready && s_axi_awvalid && !awaddr_valid) begin
                s_axi_awready <= 1'b1;
            end else begin
                s_axi_awready <= 1'b0;
            end

            // latch AWADDR when handshake
            if (s_axi_awready && s_axi_awvalid) begin
                awaddr_latched <= s_axi_awaddr;
                awaddr_valid   <= 1'b1;
            end

            // -------------------------
            // WRITE DATA READY
            // -------------------------
            if (!s_axi_wready && s_axi_wvalid && awaddr_valid && !s_axi_bvalid) begin
                s_axi_wready <= 1'b1;
            end else begin
                s_axi_wready <= 1'b0;
            end

            // -------------------------
            // PERFORM WRITE when both fire
            // -------------------------
            if (write_fire) begin
                case (awaddr_latched)
                    ADDR_CTRL: begin
                        // start pulse when bit0 written as 1
                        if (s_axi_wdata[0]) begin
                            start_pulse <= 1'b1;
                            done_latched <= 1'b0;  // clear done on new start
                        end
                    end
                    ADDR_GOAL:  reg_goal  <= apply_wstrb(reg_goal,  s_axi_wdata, s_axi_wstrb);
                    ADDR_CURR:  reg_curr  <= apply_wstrb(reg_curr,  s_axi_wdata, s_axi_wstrb);
                    ADDR_GRID0: reg_grid0 <= apply_wstrb(reg_grid0, s_axi_wdata, s_axi_wstrb);
                    ADDR_GRID1: reg_grid1 <= apply_wstrb(reg_grid1, s_axi_wdata, s_axi_wstrb);
                    ADDR_GRID2: reg_grid2 <= apply_wstrb(reg_grid2, s_axi_wdata, s_axi_wstrb);
                    ADDR_GRID3: reg_grid3 <= apply_wstrb(reg_grid3, s_axi_wdata, s_axi_wstrb);
                    default: ; // ignore
                endcase

                // write response
                s_axi_bvalid <= 1'b1;
                s_axi_bresp  <= 2'b00; // OKAY
                awaddr_valid <= 1'b0;  // consumed
            end

            // complete write response
            if (s_axi_bvalid && s_axi_bready) begin
                s_axi_bvalid <= 1'b0;
            end

            // -------------------------
            // READ ADDRESS READY
            // -------------------------
            if (!s_axi_arready && s_axi_arvalid && !s_axi_rvalid) begin
                s_axi_arready <= 1'b1;
            end else begin
                s_axi_arready <= 1'b0;
            end

            // latch ARADDR and return data
            if (s_axi_arready && s_axi_arvalid) begin
                araddr_latched <= s_axi_araddr;

                // drive read data
                case (s_axi_araddr)
                    ADDR_CTRL:   s_axi_rdata <= 32'd0; // CTRL is write-only in this design
                    ADDR_STATUS: s_axi_rdata <= {31'd0, done_latched};
                    ADDR_GOAL:   s_axi_rdata <= reg_goal;
                    ADDR_CURR:   s_axi_rdata <= reg_curr;
                    ADDR_GRID0:  s_axi_rdata <= reg_grid0;
                    ADDR_GRID1:  s_axi_rdata <= reg_grid1;
                    ADDR_GRID2:  s_axi_rdata <= reg_grid2;
                    ADDR_GRID3:  s_axi_rdata <= reg_grid3;
                    ADDR_OUT:    s_axi_rdata <= out_word;
                    default:     s_axi_rdata <= 32'd0;
                endcase

                s_axi_rvalid <= 1'b1;
                s_axi_rresp  <= 2'b00; // OKAY
            end

            // complete read response
            if (s_axi_rvalid && s_axi_rready) begin
                s_axi_rvalid <= 1'b0;
            end
        end
    end

endmodule
