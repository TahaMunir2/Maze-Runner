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

    typedef enum logic [1:0] {S_IDLE, S_INIT, S_RELAX, S_DONE} st_t;
    st_t st;

    logic [6:0] init_i;
    logic [3:0] sx, sy;
    logic [6:0] d;
    logic changed;

    wire [6:0] scan_idx = idx10(sy, sx); // row=sy, col=sx

    logic [31:0] dist_cycles;
    logic        dist_printed;

    always_ff @(posedge clk or posedge rst) begin
      if (rst) begin
        dist_cycles <= 0;
        dist_printed <= 0;
      end else begin
        if (!dist_en) begin
          dist_cycles <= 0;
          dist_printed <= 0;
        end else begin
          dist_cycles <= dist_cycles + 1;
        end
      end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            st <= S_IDLE;
            dist_done <= 1'b0;
            init_i <= 7'd0;
            sx <= 4'd0; sy <= 4'd0;
            d <= 7'd0;
            changed <= 1'b0;
            for (int i=0;i<100;i++) dist_table[i] <= INF;
        end else begin
            dist_done <= 1'b0;

            case (st)
                S_IDLE: begin
                    if (dist_en) begin
                        init_i <= 7'd0;
                        st <= S_INIT;
                    end
                end

                S_INIT: begin
                    dist_table[init_i] <= INF;
                    if (init_i == 7'd99) begin
                        // set goal if goal is not a wall
                        if (!maze[idx10(GOAL_ROW, GOAL_COL)])
                            dist_table[idx10(GOAL_ROW, GOAL_COL)] <= 7'd0;

                        sx <= 4'd0; sy <= 4'd0;
                        d <= 7'd0;
                        changed <= 1'b0;
                        st <= S_RELAX;
                    end else begin
                        init_i <= init_i + 7'd1;
                    end
                end

                S_RELAX: begin
                    if (!maze[scan_idx] && dist_table[scan_idx] == d) begin
                        // UP
                        if (sy > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy-1, sx);
                            if (!maze[nidx] && dist_table[nidx] > d+1) begin
                                dist_table[nidx] <= d+1;
                                changed <= 1'b1;
                            end
                        end
                        // DOWN
                        if (sy < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy+1, sx);
                            if (!maze[nidx] && dist_table[nidx] > d+1) begin
                                dist_table[nidx] <= d+1;
                                changed <= 1'b1;
                            end
                        end
                        // LEFT
                        if (sx > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy, sx-1);
                            if (!maze[nidx] && dist_table[nidx] > d+1) begin
                                dist_table[nidx] <= d+1;
                                changed <= 1'b1;
                            end
                        end
                        // RIGHT
                        if (sx < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sy, sx+1);
                            if (!maze[nidx] && dist_table[nidx] > d+1) begin
                                dist_table[nidx] <= d+1;
                                changed <= 1'b1;
                            end
                        end
                    end

                    // advance scan
                    if (sx == 9) begin
                        sx <= 0;
                        if (sy == 9) begin
                            sy <= 0;
                            if (!changed || d == 99) begin
                                st <= S_DONE;
                            end else begin
                                d <= d + 1;
                                changed <= 1'b0;
                            end
                        end else sy <= sy + 1;
                    end else sx <= sx + 1;
                end

                S_DONE: begin
                    dist_done <= 1'b1;

                    // print once when we reach done (simulation-only)
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
