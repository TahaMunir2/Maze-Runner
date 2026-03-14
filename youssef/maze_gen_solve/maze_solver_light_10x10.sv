// Light BFS solver
// Outputs only:
//valid
//path_len

module maze_solver_light_10x10 (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [31:0] grid0,
    input  logic [31:0] grid1,
    input  logic [31:0] grid2,
    input  logic [31:0] grid3,

    output logic        done,
    output logic        valid,
    output logic [7:0]  path_len
);
    typedef enum logic [3:0] {
        S_IDLE,
        S_INIT,
        S_SEED_QUEUE,
        S_POP,
        S_CHECK_UP,
        S_CHECK_DOWN,
        S_CHECK_LEFT,
        S_CHECK_RIGHT,
        S_DONE
    } sstate_t;

    sstate_t state;

    logic [127:0] grid_flat;
    logic [99:0]  visited;
    logic [6:0]   dist_mem [0:99];
    logic [6:0]   queue_mem[0:99];

    logic [6:0] head;
    logic [6:0] tail;
    logic [6:0] count;
    logic [6:0] init_idx;

    logic [6:0] current_cell;
    logic [6:0] current_dist;
    logic [6:0] current_row;
    logic [6:0] current_col;

    logic [6:0] neighbor;
    integer idx;

    always_ff @(posedge clk) begin
        if (rst) begin
            state        <= S_IDLE;
            done         <= 1'b0;
            valid        <= 1'b0;
            path_len     <= 8'd0;
            visited      <= 100'd0;
            head         <= 7'd0;
            tail         <= 7'd0;
            count        <= 7'd0;
            init_idx     <= 7'd0;
            current_cell <= 7'd0;
            current_dist <= 7'd0;
            grid_flat    <= 128'd0;
        end else begin
            done <= 1'b0;

            case (state)
                S_IDLE: begin
                    if (start) begin
                        grid_flat <= {grid3, grid2, grid1, grid0};
                        visited   <= 100'd0;
                        head      <= 7'd0;
                        tail      <= 7'd0;
                        count     <= 7'd0;
                        init_idx  <= 7'd0;
                        valid     <= 1'b0;
                        path_len  <= 8'd0;
                        state     <= S_INIT;
                    end
                end

                S_INIT: begin
                    if (init_idx < 7'd100) begin
                        visited[init_idx] <= 1'b0;
                        dist_mem[init_idx] <= 7'd0;
                        init_idx <= init_idx + 7'd1;
                    end else begin
                        state <= S_SEED_QUEUE;
                    end
                end

                S_SEED_QUEUE: begin
                    if (grid_flat[0] == 1'b1) begin
                        visited[0]   <= 1'b1;
                        dist_mem[0]  <= 7'd0;
                        queue_mem[0] <= 7'd0;
                        head         <= 7'd0;
                        tail         <= 7'd1;
                        count        <= 7'd1;
                    end
                    state <= S_POP;
                end

                S_POP: begin
                    if (count == 7'd0) begin
                        valid <= 1'b0;
                        state <= S_DONE;
                    end else begin
                        current_cell <= queue_mem[head];
                        current_dist <= dist_mem[queue_mem[head]];
                        current_row  <= queue_mem[head] / 7'd10;
                        current_col  <= queue_mem[head] % 7'd10;
                        head         <= head + 7'd1;
                        count        <= count - 7'd1;

                        if (queue_mem[head] == 7'd99) begin
                            valid    <= 1'b1;
                            path_len <= {1'b0, dist_mem[queue_mem[head]]};
                            state    <= S_DONE;
                        end else begin
                            state <= S_CHECK_UP;
                        end
                    end
                end

                S_CHECK_UP: begin
                    if (current_row > 7'd0) begin
                        neighbor = current_cell - 7'd10;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]   <= 1'b1;
                            dist_mem[neighbor]  <= current_dist + 7'd1;
                            queue_mem[tail]     <= neighbor;
                            tail                <= tail + 7'd1;
                            count               <= count + 7'd1;
                        end
                    end
                    state <= S_CHECK_DOWN;
                end

                S_CHECK_DOWN: begin
                    if (current_row < 7'd9) begin
                        neighbor = current_cell + 7'd10;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]   <= 1'b1;
                            dist_mem[neighbor]  <= current_dist + 7'd1;
                            queue_mem[tail]     <= neighbor;
                            tail                <= tail + 7'd1;
                            count               <= count + 7'd1;
                        end
                    end
                    state <= S_CHECK_LEFT;
                end

                S_CHECK_LEFT: begin
                    if (current_col > 7'd0) begin
                        neighbor = current_cell - 7'd1;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]   <= 1'b1;
                            dist_mem[neighbor]  <= current_dist + 7'd1;
                            queue_mem[tail]     <= neighbor;
                            tail                <= tail + 7'd1;
                            count               <= count + 7'd1;
                        end
                    end
                    state <= S_CHECK_RIGHT;
                end

                S_CHECK_RIGHT: begin
                    if (current_col < 7'd9) begin
                        neighbor = current_cell + 7'd1;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]   <= 1'b1;
                            dist_mem[neighbor]  <= current_dist + 7'd1;
                            queue_mem[tail]     <= neighbor;
                            tail                <= tail + 7'd1;
                            count               <= count + 7'd1;
                        end
                    end
                    state <= S_POP;
                end

                S_DONE: begin
                    done  <= 1'b1;
                    state <= S_IDLE;
                end

                default: state <= S_IDLE;
            endcase
        end
    end
endmodule





