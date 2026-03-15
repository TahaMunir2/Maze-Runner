module bfs_distmap_10x10 (
    input  logic       clk,
    input  logic       rst,
    input  logic       dist_en,

    input  logic       maze [0:99],
    output logic [6:0] dist_table [0:99],
    output logic       dist_done
);
    localparam logic [6:0] INF = 7'd127;

    localparam logic [3:0] GOAL_ROW = 4'd0;
    localparam logic [3:0] GOAL_COL = 4'd9;

    function automatic [6:0] idx10(input [3:0] r, input [3:0] c);
        idx10 = (r * 7'd10) + c;
    endfunction

    typedef enum logic [2:0] {S_IDLE, S_INIT, S_RELAX, S_FLUSH, S_DONE} st_t;
    st_t st;

    logic [6:0] init_i;
    logic [3:0] sx, sy;
    logic [6:0] d;
    logic       changed;

    wire [6:0] scan_idx = idx10(sy, sx);

    logic [31:0] dist_cycles;
    logic        dist_printed;

    // ---------------------------------------------------------------
    // Pipeline Stage 1 (combinational):
    // Check if current cell has distance == d
    // Guarded to S_RELAX so pipeline clears when leaving that state
    // ---------------------------------------------------------------
    logic center_valid_comb;
    assign center_valid_comb = (st == S_RELAX)
                             && !maze[scan_idx]
                             && (dist_table[scan_idx] == d);

    // Pipeline Stage 1 registers
    logic       center_valid_reg;
    logic [3:0] sx_p, sy_p;
    logic [6:0] d_p;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            center_valid_reg <= 1'b0;
            sx_p             <= 4'd0;
            sy_p             <= 4'd0;
            d_p              <= 7'd0;
        end else begin
            center_valid_reg <= center_valid_comb;
            sx_p             <= sx;
            sy_p             <= sy;
            d_p              <= d;
        end
    end

    // ---------------------------------------------------------------
    // Pipeline Stage 2 registers:
    // Read all 4 neighbour dist_table values in parallel and register
    // them - breaks the dist_table read -> compare -> write chain
    // ---------------------------------------------------------------
    logic       center_valid_reg2;
    logic [3:0] sx_p2, sy_p2;
    logic [6:0] d_p2;
    logic [6:0] nb_up_d, nb_dn_d, nb_lt_d, nb_rt_d;
    logic       nb_up_v, nb_dn_v, nb_lt_v, nb_rt_v;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            center_valid_reg2 <= 1'b0;
            sx_p2 <= 4'd0; sy_p2 <= 4'd0; d_p2 <= 7'd0;
            nb_up_v <= 0; nb_up_d <= INF;
            nb_dn_v <= 0; nb_dn_d <= INF;
            nb_lt_v <= 0; nb_lt_d <= INF;
            nb_rt_v <= 0; nb_rt_d <= INF;
        end else begin
            center_valid_reg2 <= center_valid_reg;
            sx_p2 <= sx_p;
            sy_p2 <= sy_p;
            d_p2  <= d_p;

            // UP
            if (sy_p > 0) begin
                nb_up_v <= !maze[idx10(sy_p-1, sx_p)];
                nb_up_d <= dist_table[idx10(sy_p-1, sx_p)];
            end else begin
                nb_up_v <= 1'b0;
                nb_up_d <= INF;
            end
            // DOWN
            if (sy_p < 9) begin
                nb_dn_v <= !maze[idx10(sy_p+1, sx_p)];
                nb_dn_d <= dist_table[idx10(sy_p+1, sx_p)];
            end else begin
                nb_dn_v <= 1'b0;
                nb_dn_d <= INF;
            end
            // LEFT
            if (sx_p > 0) begin
                nb_lt_v <= !maze[idx10(sy_p, sx_p-1)];
                nb_lt_d <= dist_table[idx10(sy_p, sx_p-1)];
            end else begin
                nb_lt_v <= 1'b0;
                nb_lt_d <= INF;
            end
            // RIGHT
            if (sx_p < 9) begin
                nb_rt_v <= !maze[idx10(sy_p, sx_p+1)];
                nb_rt_d <= dist_table[idx10(sy_p, sx_p+1)];
            end else begin
                nb_rt_v <= 1'b0;
                nb_rt_d <= INF;
            end
        end
    end

    // would_change_flush uses registered values - no long comb chain
    logic would_change_flush;
    assign would_change_flush = center_valid_reg2 && (
        (nb_up_v && nb_up_d > d_p2 + 1) ||
        (nb_dn_v && nb_dn_d > d_p2 + 1) ||
        (nb_lt_v && nb_lt_d > d_p2 + 1) ||
        (nb_rt_v && nb_rt_d > d_p2 + 1)
    );

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            dist_cycles  <= 0;
            dist_printed <= 0;
        end else begin
            if (!dist_en) begin
                dist_cycles  <= 0;
                dist_printed <= 0;
            end else begin
                dist_cycles <= dist_cycles + 1;
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            st        <= S_IDLE;
            dist_done <= 1'b0;
            init_i    <= 7'd0;
            sx        <= 4'd0;
            sy        <= 4'd0;
            d         <= 7'd0;
            changed   <= 1'b0;
            for (int i = 0; i < 100; i++) dist_table[i] <= INF;
        end else begin
            dist_done <= 1'b0;

            case (st)

                S_IDLE: begin
                    if (dist_en) begin
                        init_i <= 7'd0;
                        st     <= S_INIT;
                    end
                end

                S_INIT: begin
                    dist_table[init_i] <= INF;
                    if (init_i == 7'd99) begin
                        if (!maze[idx10(GOAL_ROW, GOAL_COL)])
                            dist_table[idx10(GOAL_ROW, GOAL_COL)] <= 7'd0;
                        sx      <= 4'd0;
                        sy      <= 4'd0;
                        d       <= 7'd0;
                        changed <= 1'b0;
                        st      <= S_RELAX;
                    end else begin
                        init_i <= init_i + 7'd1;
                    end
                end

                S_RELAX: begin
                    // Stage 3: write neighbours using fully registered values
                    if (center_valid_reg2) begin
                        if (nb_up_v && nb_up_d > d_p2 + 1) begin
                            dist_table[idx10(sy_p2-1, sx_p2)] <= d_p2 + 1;
                            changed <= 1'b1;
                        end
                        if (nb_dn_v && nb_dn_d > d_p2 + 1) begin
                            dist_table[idx10(sy_p2+1, sx_p2)] <= d_p2 + 1;
                            changed <= 1'b1;
                        end
                        if (nb_lt_v && nb_lt_d > d_p2 + 1) begin
                            dist_table[idx10(sy_p2, sx_p2-1)] <= d_p2 + 1;
                            changed <= 1'b1;
                        end
                        if (nb_rt_v && nb_rt_d > d_p2 + 1) begin
                            dist_table[idx10(sy_p2, sx_p2+1)] <= d_p2 + 1;
                            changed <= 1'b1;
                        end
                    end

                    // Advance scan counter
                    if (sx == 9) begin
                        sx <= 4'd0;
                        if (sy == 9) begin
                            sy <= 4'd0;
                            st <= S_FLUSH;
                        end else begin
                            sy <= sy + 4'd1;
                        end
                    end else begin
                        sx <= sx + 4'd1;
                    end
                end

                S_FLUSH: begin
                    // Drain pipeline for last cell
                    if (center_valid_reg2) begin
                        if (nb_up_v && nb_up_d > d_p2 + 1)
                            dist_table[idx10(sy_p2-1, sx_p2)] <= d_p2 + 1;
                        if (nb_dn_v && nb_dn_d > d_p2 + 1)
                            dist_table[idx10(sy_p2+1, sx_p2)] <= d_p2 + 1;
                        if (nb_lt_v && nb_lt_d > d_p2 + 1)
                            dist_table[idx10(sy_p2, sx_p2-1)] <= d_p2 + 1;
                        if (nb_rt_v && nb_rt_d > d_p2 + 1)
                            dist_table[idx10(sy_p2, sx_p2+1)] <= d_p2 + 1;
                    end

                    if (!(changed || would_change_flush) || d == 99) begin
                        st <= S_DONE;
                    end else begin
                        d       <= d + 1;
                        changed <= 1'b0;
                        st      <= S_RELAX;
                    end
                end

                S_DONE: begin
                    dist_done <= 1'b1;
                    // synthesis translate_off
                    if (!dist_printed) begin
                        $display("DISTMAP cycles: %0d", dist_cycles);
                        dist_printed <= 1'b1;
                    end
                    // synthesis translate_on
                    if (!dist_en) st <= S_IDLE;
                end

                default: st <= S_IDLE;
            endcase
        end
    end

endmodule