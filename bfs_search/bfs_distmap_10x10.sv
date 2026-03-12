module bfs_distmap_10x10 (
    input  logic       clk,
    input  logic       rst,
    input  logic       dist_en,

    input  logic       maze [0:99],     // 1=wall, 0=free

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
    logic changed;

    wire [6:0] scan_idx = idx10(sy, sx);

    logic [31:0] dist_cycles;
    logic        dist_printed;

    // Stage 1 (combinational) — guarded to S_RELAX so pipeline clears on exit
    logic center_valid_comb;
    assign center_valid_comb = (st == S_RELAX)
                             && !maze[scan_idx]
                             && (dist_table[scan_idx] == d);

    // Pipeline registers capturing Stage 1 output + position + d
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

    logic would_change_flush;
    assign would_change_flush = center_valid_reg && (
        (sy_p > 0 && !maze[idx10(sy_p-1, sx_p)] && dist_table[idx10(sy_p-1, sx_p)] > d_p + 1) ||
        (sy_p < 9 && !maze[idx10(sy_p+1, sx_p)] && dist_table[idx10(sy_p+1, sx_p)] > d_p + 1) ||
        (sx_p > 0 && !maze[idx10(sy_p,   sx_p-1)] && dist_table[idx10(sy_p,   sx_p-1)] > d_p + 1) ||
        (sx_p < 9 && !maze[idx10(sy_p,   sx_p+1)] && dist_table[idx10(sy_p,   sx_p+1)] > d_p + 1)
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
            sx        <= 4'd0; sy <= 4'd0;
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
                        sx      <= 4'd0; sy <= 4'd0;
                        d       <= 7'd0;
                        changed <= 1'b0;
                        st      <= S_RELAX;
                    end else begin
                        init_i <= init_i + 7'd1;
                    end
                end


                S_RELAX: begin

                    // Stage 2: write neighbors for previously-checked cell
                    if (center_valid_reg) begin
                        // UP
                        if (sy_p > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p-1, sx_p);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1) begin
                                dist_table[nidx] <= d_p + 1;
                                changed          <= 1'b1;
                            end
                        end
                        // DOWN
                        if (sy_p < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p+1, sx_p);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1) begin
                                dist_table[nidx] <= d_p + 1;
                                changed          <= 1'b1;
                            end
                        end
                        // LEFT
                        if (sx_p > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p, sx_p-1);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1) begin
                                dist_table[nidx] <= d_p + 1;
                                changed          <= 1'b1;
                            end
                        end
                        // RIGHT
                        if (sx_p < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p, sx_p+1);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1) begin
                                dist_table[nidx] <= d_p + 1;
                                changed          <= 1'b1;
                            end
                        end
                    end

                    // Advance scan counter (Stage 1 check happens combinationally above)
                    if (sx == 9) begin
                        sx <= 4'd0;
                        if (sy == 9) begin
                            sy <= 4'd0;
                            st <= S_FLUSH;   // drain pipeline for cell (9,9)
                        end else begin
                            sy <= sy + 4'd1;
                        end
                    end else begin
                        sx <= sx + 4'd1;
                    end
                end

                S_FLUSH: begin

                    // Write neighbors for cell (9,9)
                    if (center_valid_reg) begin
                        if (sy_p > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p-1, sx_p);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1)
                                dist_table[nidx] <= d_p + 1;
                        end
                        if (sy_p < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p+1, sx_p);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1)
                                dist_table[nidx] <= d_p + 1;
                        end
                        if (sx_p > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p, sx_p-1);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1)
                                dist_table[nidx] <= d_p + 1;
                        end
                        if (sx_p < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy_p, sx_p+1);
                            if (!maze[nidx] && dist_table[nidx] > d_p + 1)
                                dist_table[nidx] <= d_p + 1;
                        end
                    end

                    // Continue/done decision
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

                    if (!dist_printed) begin
                        $display("DISTMAP cycles: %0d", dist_cycles);
                        dist_printed <= 1'b1;
                    end

                    if (!dist_en) st <= S_IDLE;
                end

                default: st <= S_IDLE;
            endcase
        end
    end

endmodule
