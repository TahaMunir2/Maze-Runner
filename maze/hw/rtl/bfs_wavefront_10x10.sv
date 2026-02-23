module bfs_wavefront_10x10 (
    input  logic        clk,
    input  logic        rstn,

    input  logic        start,            // pulse to begin computation
    input  logic [99:0] grid_free,         // 1=free, 0=wall  (idx = y*10 + x)
    input  logic [3:0]  goal_x,
    input  logic [3:0]  goal_y,
    input  logic [3:0]  curr_x,
    input  logic [3:0]  curr_y,

    output logic        done,
    output logic [6:0]  dist_curr,         // 0..99, or 127=INF
    output logic [1:0]  next_dir,          // 00=N 01=E 10=S 11=W
    output logic        next_valid
);
    localparam int W = 10;
    localparam int H = 10;
    localparam logic [6:0] INF = 7'h7F;

    // Distance array
    logic [6:0] dist [0:99];

    // FSM
    typedef enum logic [2:0] {S_IDLE, S_INIT, S_RELAX, S_PICK, S_DONE} state_t;
    state_t st;

    // Init index
    logic [6:0] init_i;

    // Scan coords and wavefront distance
    logic [3:0] sx, sy;   // 0..9
    logic [6:0] d;        // 0..99
    logic       changed;

    // Helper: idx = y*10 + x = (y<<3) + (y<<1) + x
    function automatic [6:0] idx10(input logic [3:0] x, input logic [3:0] y);
        idx10 = (y << 3) + (y << 1) + x;
    endfunction

    // Combinational wires for current scanning cell index
    logic [6:0] scan_idx;
    assign scan_idx = idx10(sx, sy);

    // Internal temp for next move selection
    logic [6:0] best;
    logic [1:0] best_dir;
    logic       best_valid;

    // Sequential FSM
    always_ff @(posedge clk) begin
        if (!rstn) begin
            st <= S_IDLE;
            done <= 1'b0;
            dist_curr <= INF;
            next_dir <= 2'b00;
            next_valid <= 1'b0;

            init_i <= 7'd0;
            sx <= 4'd0; sy <= 4'd0;
            d <= 7'd0;
            changed <= 1'b0;
        end else begin
            done <= 1'b0; // default low except in S_DONE

            case (st)
                // -------------------------
                // IDLE: wait for start
                // -------------------------
                S_IDLE: begin
                    next_valid <= 1'b0;
                    if (start) begin
                        init_i <= 7'd0;
                        st <= S_INIT;
                    end
                end

                // -------------------------
                // INIT: set all dist to INF, then set goal dist=0
                // one cell per cycle
                // -------------------------
                S_INIT: begin
                    dist[init_i] <= INF;
                    if (init_i == 7'd99) begin
                        // Also set goal distance to 0 (overwrites INF)
                        dist[idx10(goal_x, goal_y)] <= 7'd0;

                        // Start wavefront
                        d <= 7'd0;
                        sx <= 4'd0;
                        sy <= 4'd0;
                        changed <= 1'b0;
                        st <= S_RELAX;
                    end else begin
                        init_i <= init_i + 7'd1;
                    end
                end

                // -------------------------
                // RELAX: wavefront propagation
                // Scan all cells (sx,sy). If dist==d, update neighbors to d+1.
                // One scanned cell per cycle.
                // -------------------------
                S_RELAX: begin
                    // Only propagate from cells at current wavefront distance d
                    if (dist[scan_idx] == d) begin
                        // Right
                        if (sx < 4'd9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sx + 4'd1, sy);
                            if (grid_free[nidx] && dist[nidx] > (d + 7'd1)) begin
                                dist[nidx] <= d + 7'd1;
                                changed <= 1'b1;
                            end
                        end
                        // Left
                        if (sx > 4'd0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sx - 4'd1, sy);
                            if (grid_free[nidx] && dist[nidx] > (d + 7'd1)) begin
                                dist[nidx] <= d + 7'd1;
                                changed <= 1'b1;
                            end
                        end
                        // Down
                        if (sy < 4'd9) begin
                            logic [6:0] nidx;
                            nidx = idx10(sx, sy + 4'd1);
                            if (grid_free[nidx] && dist[nidx] > (d + 7'd1)) begin
                                dist[nidx] <= d + 7'd1;
                                changed <= 1'b1;
                            end
                        end
                        // Up
                        if (sy > 4'd0) begin
                            logic [6:0] nidx;
                            nidx = idx10(sx, sy - 4'd1);
                            if (grid_free[nidx] && dist[nidx] > (d + 7'd1)) begin
                                dist[nidx] <= d + 7'd1;
                                changed <= 1'b1;
                            end
                        end
                    end

                    // Advance scan coordinate
                    if (sx == 4'd9) begin
                        sx <= 4'd0;
                        if (sy == 4'd9) begin
                            sy <= 4'd0;

                            // Completed full grid scan for this d
                            if (!changed) begin
                                // No changes in an entire scan => distances converged
                                st <= S_PICK;
                            end else if (d == 7'd99) begin
                                st <= S_PICK;
                            end else begin
                                // Next wavefront distance
                                d <= d + 7'd1;
                                changed <= 1'b0;
                            end
                        end else begin
                            sy <= sy + 4'd1;
                        end
                    end else begin
                        sx <= sx + 4'd1;
                    end
                end

                // -------------------------
                // PICK: read dist at curr and choose best neighbor (smallest dist)
                // -------------------------
                S_PICK: begin
                    logic [6:0] cidx;
                    cidx = idx10(curr_x, curr_y);
                    dist_curr <= dist[cidx];

                    best = INF;
                    best_dir = 2'b00;
                    best_valid = 1'b0;

                    // N
                    if (curr_y > 0) begin
                        logic [6:0] nidx;
                        nidx = idx10(curr_x, curr_y - 4'd1);
                        if (grid_free[nidx] && dist[nidx] < best) begin
                            best = dist[nidx];
                            best_dir = 2'b00;
                            best_valid = 1'b1;
                        end
                    end
                    // E
                    if (curr_x < 9) begin
                        logic [6:0] nidx;
                        nidx = idx10(curr_x + 4'd1, curr_y);
                        if (grid_free[nidx] && dist[nidx] < best) begin
                            best = dist[nidx];
                            best_dir = 2'b01;
                            best_valid = 1'b1;
                        end
                    end
                    // S
                    if (curr_y < 9) begin
                        logic [6:0] nidx;
                        nidx = idx10(curr_x, curr_y + 4'd1);
                        if (grid_free[nidx] && dist[nidx] < best) begin
                            best = dist[nidx];
                            best_dir = 2'b10;
                            best_valid = 1'b1;
                        end
                    end
                    // W
                    if (curr_x > 0) begin
                        logic [6:0] nidx;
                        nidx = idx10(curr_x - 4'd1, curr_y);
                        if (grid_free[nidx] && dist[nidx] < best) begin
                            best = dist[nidx];
                            best_dir = 2'b11;
                            best_valid = 1'b1;
                        end
                    end

                    next_dir <= best_dir;
                    next_valid <= best_valid;

                    st <= S_DONE;
                end

                // -------------------------
                // DONE: pulse done for one cycle
                // -------------------------
                S_DONE: begin
                    done <= 1'b1;
                    st <= S_IDLE;
                end

                default: st <= S_IDLE;
            endcase
        end
    end

endmodule
