//Full BFS solver with outputs:
//valid
//path_len
//path_word0..6

module maze_solver_full_10x10 (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [31:0] grid0,
    input  logic [31:0] grid1,
    input  logic [31:0] grid2,
    input  logic [31:0] grid3,

    output logic        done,
    output logic        valid,
    output logic [7:0]  path_len,
    output logic [31:0] path_word0,
    output logic [31:0] path_word1,
    output logic [31:0] path_word2,
    output logic [31:0] path_word3,
    output logic [31:0] path_word4,
    output logic [31:0] path_word5,
    output logic [31:0] path_word6
);
    typedef enum logic [4:0] {
        F_IDLE,
        F_INIT,
        F_SEED_QUEUE,
        F_POP,
        F_CHECK_UP,
        F_CHECK_DOWN,
        F_CHECK_LEFT,
        F_CHECK_RIGHT,
        F_RECON_COLLECT,
        F_PACK,
        F_DONE
    } fstate_t;

    localparam logic [1:0] DIR_UP    = 2'b00;
    localparam logic [1:0] DIR_DOWN  = 2'b01;
    localparam logic [1:0] DIR_LEFT  = 2'b10;
    localparam logic [1:0] DIR_RIGHT = 2'b11;

    fstate_t state;

    logic [127:0] grid_flat;
    logic [99:0]  visited;
    logic [6:0]   dist_mem [0:99];
    logic [1:0]   parent_dir[0:99];
    logic [6:0]   queue_mem [0:99];

    logic [1:0] rev_steps[0:99];

    logic [6:0] head;
    logic [6:0] tail;
    logic [6:0] count;
    logic [6:0] init_idx;

    logic [6:0] current_cell;
    logic [6:0] current_dist;
    logic [6:0] current_row;
    logic [6:0] current_col;

    logic [6:0] neighbor;
    logic [6:0] recon_cell;
    logic [6:0] recon_len;
    logic [6:0] pack_idx;

    logic [223:0] path_bits;

    integer i;

    always_ff @(posedge clk) begin
        if (rst) begin
            state        <= F_IDLE;
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
            recon_cell   <= 7'd0;
            recon_len    <= 7'd0;
            pack_idx     <= 7'd0;
            path_bits    <= 224'd0;
        end else begin
            done <= 1'b0;

            case (state)
                F_IDLE: begin
                    if (start) begin
                        grid_flat <= {grid3, grid2, grid1, grid0};
                        visited   <= 100'd0;
                        head      <= 7'd0;
                        tail      <= 7'd0;
                        count     <= 7'd0;
                        init_idx  <= 7'd0;
                        valid     <= 1'b0;
                        path_len  <= 8'd0;
                        recon_len <= 7'd0;
                        pack_idx  <= 7'd0;
                        path_bits <= 224'd0;
                        state     <= F_INIT;
                    end
                end

                F_INIT: begin
                    if (init_idx < 7'd100) begin
                        visited[init_idx]    <= 1'b0;
                        dist_mem[init_idx]   <= 7'd0;
                        parent_dir[init_idx] <= 2'b00;
                        init_idx <= init_idx + 7'd1;
                    end else begin
                        state <= F_SEED_QUEUE;
                    end
                end

                F_SEED_QUEUE: begin
                    if (grid_flat[0] == 1'b1) begin
                        visited[0]   <= 1'b1;
                        dist_mem[0]  <= 7'd0;
                        queue_mem[0] <= 7'd0;
                        head         <= 7'd0;
                        tail         <= 7'd1;
                        count        <= 7'd1;
                    end
                    state <= F_POP;
                end

                F_POP: begin
                    if (count == 7'd0) begin
                        valid <= 1'b0;
                        state <= F_DONE;
                    end else begin
                        current_cell <= queue_mem[head];
                        current_dist <= dist_mem[queue_mem[head]];
                        current_row  <= queue_mem[head] / 7'd10;
                        current_col  <= queue_mem[head] % 7'd10;
                        head         <= head + 7'd1;
                        count        <= count - 7'd1;

                        if (queue_mem[head] == 7'd99) begin
                            valid      <= 1'b1;
                            path_len   <= {1'b0, dist_mem[queue_mem[head]]};
                            recon_cell <= 7'd99;
                            recon_len  <= 7'd0;
                            state      <= F_RECON_COLLECT;
                        end else begin
                            state <= F_CHECK_UP;
                        end
                    end
                end

                F_CHECK_UP: begin
                    if (current_row > 7'd0) begin
                        neighbor = current_cell - 7'd10;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]    <= 1'b1;
                            dist_mem[neighbor]   <= current_dist + 7'd1;
                            parent_dir[neighbor] <= DIR_UP;
                            queue_mem[tail]      <= neighbor;
                            tail                 <= tail + 7'd1;
                            count                <= count + 7'd1;
                        end
                    end
                    state <= F_CHECK_DOWN;
                end

                F_CHECK_DOWN: begin
                    if (current_row < 7'd9) begin
                        neighbor = current_cell + 7'd10;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]    <= 1'b1;
                            dist_mem[neighbor]   <= current_dist + 7'd1;
                            parent_dir[neighbor] <= DIR_DOWN;
                            queue_mem[tail]      <= neighbor;
                            tail                 <= tail + 7'd1;
                            count                <= count + 7'd1;
                        end
                    end
                    state <= F_CHECK_LEFT;
                end

                F_CHECK_LEFT: begin
                    if (current_col > 7'd0) begin
                        neighbor = current_cell - 7'd1;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]    <= 1'b1;
                            dist_mem[neighbor]   <= current_dist + 7'd1;
                            parent_dir[neighbor] <= DIR_LEFT;
                            queue_mem[tail]      <= neighbor;
                            tail                 <= tail + 7'd1;
                            count                <= count + 7'd1;
                        end
                    end
                    state <= F_CHECK_RIGHT;
                end

                F_CHECK_RIGHT: begin
                    if (current_col < 7'd9) begin
                        neighbor = current_cell + 7'd1;
                        if ((grid_flat[neighbor] == 1'b1) && (visited[neighbor] == 1'b0)) begin
                            visited[neighbor]    <= 1'b1;
                            dist_mem[neighbor]   <= current_dist + 7'd1;
                            parent_dir[neighbor] <= DIR_RIGHT;
                            queue_mem[tail]      <= neighbor;
                            tail                 <= tail + 7'd1;
                            count                <= count + 7'd1;
                        end
                    end
                    state <= F_POP;
                end

                F_RECON_COLLECT: begin
                    if (recon_cell == 7'd0) begin
                        pack_idx  <= 7'd0;
                        path_bits <= 224'd0;
                        state     <= F_PACK;
                    end else begin
                        rev_steps[recon_len] <= parent_dir[recon_cell];

                        case (parent_dir[recon_cell])
                            DIR_UP:    recon_cell <= recon_cell + 7'd10; // parent is below
                            DIR_DOWN:  recon_cell <= recon_cell - 7'd10; // parent is above
                            DIR_LEFT:  recon_cell <= recon_cell + 7'd1;  // parent is right
                            DIR_RIGHT: recon_cell <= recon_cell - 7'd1;  // parent is left
                            default:   recon_cell <= 7'd0;
                        endcase

                        recon_len <= recon_len + 7'd1;
                    end
                end

                F_PACK: begin
                    if (pack_idx < recon_len) begin
                        path_bits[pack_idx*2 +: 2] <= rev_steps[recon_len - 7'd1 - pack_idx];
                        pack_idx <= pack_idx + 7'd1;
                    end else begin
                        state <= F_DONE;
                    end
                end

                F_DONE: begin
                    done  <= 1'b1;
                    state <= F_IDLE;
                end

                default: state <= F_IDLE;
            endcase
        end
    end

    assign path_word0 = path_bits[31:0];
    assign path_word1 = path_bits[63:32];
    assign path_word2 = path_bits[95:64];
    assign path_word3 = path_bits[127:96];
    assign path_word4 = path_bits[159:128];
    assign path_word5 = path_bits[191:160];
    assign path_word6 = path_bits[223:192];
endmodule
