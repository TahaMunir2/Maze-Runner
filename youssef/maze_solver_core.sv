module maze_solver_core #(
    parameter int W = 10,
    parameter int H = 10,
    parameter int N = W*H
) (
    input logic  clk,
    input logic  rst,

    input  logic start,

    // Packed maze: bit idx = y*10 + x, 1 = free, 0 = wall
    input  logic [31:0] grid0,
    input  logic [31:0] grid1,
    input  logic [31:0] grid2,
    input  logic [31:0] grid3,

    output logic        done,

    // Full path output: 2 bits per move, packed into 7 words (112 moves capacity)
    output logic [7:0]  path_len,
    output logic [31:0] path_word0,
    output logic [31:0] path_word1,
    output logic [31:0] path_word2,
    output logic [31:0] path_word3,
    output logic [31:0] path_word4,
    output logic [31:0] path_word5,
    output logic [31:0] path_word6,

    output logic        valid   // 1 if solvable (path found)
);

    
    localparam int SX = 0;
    localparam int SY = 0;
    localparam int GX = W-1;
    localparam int GY = H-1;

    // 2-bit direction encoding
    localparam logic [1:0] DIR_UP    = 2'b00;
    localparam logic [1:0] DIR_RIGHT = 2'b01;
    localparam logic [1:0] DIR_DOWN  = 2'b10;
    localparam logic [1:0] DIR_LEFT  = 2'b11;

    
    logic [127:0] grid_bits_128;
    logic [99:0]  grid_bits; 

    assign grid_bits_128 = {grid3, grid2, grid1, grid0};
    assign grid_bits     = grid_bits_128[99:0];

    function automatic logic cell_free(input int x, input int y);
        int idx;
        begin
            idx = y*W + x;
            if (idx >= 0 && idx < N) begin
                cell_free = grid_bits[idx];
            end else begin
                cell_free = 1'b0;
            end
        end
    endfunction

    function automatic int idx_of(input int x, input int y);
        begin
            idx_of = y*W + x;
        end
    endfunction

    function automatic int x_of(input logic [6:0] idx);
        begin
            x_of = int'(idx) % W;
        end
    endfunction

    function automatic int y_of(input logic [6:0] idx);
        begin
            y_of = int'(idx) / W;
        end
    endfunction

   
    logic        visited [0:N-1];
    logic [1:0]  parent_dir [0:N-1]; // direction taken from parent -> this node
    logic        has_parent [0:N-1];

    // Simple queue for BFS (store cell indices 0..99)
    logic [6:0] queue [0:N-1];
    logic [6:0] q_head, q_tail;
    logic [6:0] q_count;

    // Path buffer (store moves from START->GOAL): max N moves
    logic [1:0] path_buf [0:N-1];
    logic [7:0] path_len_reg;

    
    typedef enum logic [2:0] {
        S_IDLE,
        S_INIT,
        S_BFS,
        S_BACKTRACK,
        S_PACK,
        S_DONE
    } state_t;

    state_t st;

    // BFS working regs
    logic [6:0] cur_idx;
    int cur_x, cur_y;
    logic [6:0] cur_idx_reg;
    int cur_x_reg, cur_y_reg;

    // neighbor iteration index 0..3
    logic [1:0] nb_i;

    // backtrack regs
    logic [6:0] bt_idx;
    logic [7:0] bt_len;

    // pack regs
    logic [2:0] pack_word_i;

    // outputs
    assign path_len = path_len_reg;

    // convenience for output words
    logic [31:0] path_words [0:6];
    assign path_word0 = path_words[0];
    assign path_word1 = path_words[1];
    assign path_word2 = path_words[2];
    assign path_word3 = path_words[3];
    assign path_word4 = path_words[4];
    assign path_word5 = path_words[5];
    assign path_word6 = path_words[6];

    
    task automatic q_reset();
        begin
            q_head  = 0;
            q_tail  = 0;
            q_count = 0;
        end
    endtask

    task automatic q_push(input logic [6:0] v);
        begin
            queue[q_tail] = v;
            q_tail = q_tail + 1;
            q_count = q_count + 1;
        end
    endtask

    task automatic q_pop(output logic [6:0] v);
        begin
            v = queue[q_head];
            q_head = q_head + 1;
            q_count = q_count - 1;
        end
    endtask

    integer i;

    always_ff @(posedge clk) begin
        if (rst) begin
            st <= S_IDLE;
            done <= 1'b0;
            valid <= 1'b0;
            path_len_reg <= 8'd0;
            for (i=0; i<7; i++) path_words[i] <= 32'd0;
            cur_idx_reg <= 7'd0;
            cur_x_reg <= 0;
            cur_y_reg <= 0;
            nb_i <= 2'd0;
            q_head <= 7'd0;
            q_tail <= 7'd0;
            q_count <= 7'd0;
        end else begin
            case (st)
                S_IDLE: begin
                    done <= 1'b0;
                    valid <= 1'b0;
                    path_len_reg <= 8'd0;
                    for (i=0; i<7; i++) path_words[i] <= 32'd0;

                    if (start) begin
                        st <= S_INIT;
                    end
                end

                S_INIT: begin
                    // clear visited + parents
                    for (i=0; i<N; i++) begin
                        visited[i] <= 1'b0;
                        has_parent[i] <= 1'b0;
                        parent_dir[i] <= 2'b00;
                    end

                    // reset queue and push start
                    q_head <= 7'd0;
                    q_tail <= 7'd1;  // Set to 1 because we're pushing one element
                    q_count <= 7'd1; // Start with count = 1
                    
                    visited[idx_of(SX,SY)] <= 1'b1;
                    queue[7'd0] <= idx_of(SX,SY)[6:0];  // Push to position 0
                    nb_i <= 2'd0;
                    st <= S_BFS;
                end

                S_BFS: begin
                    // Check if we need to pop a new node (when nb_i wraps to 0 after processing all neighbors)
                    if (nb_i == 2'd0) begin
                        // Check if queue is empty
                        if (q_count == 0) begin
                            valid <= 1'b0;
                            st <= S_DONE;
                        end else begin
                            // Pop next node from queue
                            logic [6:0] popped_idx;
                            popped_idx = queue[q_head];
                            cur_idx_reg <= popped_idx;
                            cur_x_reg <= x_of(popped_idx);
                            cur_y_reg <= y_of(popped_idx);
                            q_head <= q_head + 7'd1;
                            q_count <= q_count - 7'd1;
                            
                            // Check if this is the goal
                            if (x_of(popped_idx) == GX && y_of(popped_idx) == GY) begin
                                valid <= 1'b1;
                                bt_idx <= popped_idx;
                                bt_len <= 8'd0;
                                st <= S_BACKTRACK;
                            end else begin
                                // Start processing neighbors: nb_i will be 0 this cycle, so process neighbor 0
                                nb_i <= 2'd0; // Will process neighbor 0 (UP) this cycle
                            end
                        end
                    end
                    
                    // Process current neighbor (only if we haven't found goal)
                    if (st == S_BFS) begin
                        int nx, ny;
                        logic [1:0] dir_to_neighbor;

                        // Calculate neighbor coordinates: 0=UP, 1=RIGHT, 2=DOWN, 3=LEFT
                        unique case (nb_i)
                            2'd0: begin 
                                nx = cur_x_reg;     
                                ny = cur_y_reg - 1; 
                                dir_to_neighbor = DIR_UP;    
                            end
                            2'd1: begin 
                                nx = cur_x_reg + 1;   
                                ny = cur_y_reg;       
                                dir_to_neighbor = DIR_RIGHT; 
                            end
                            2'd2: begin 
                                nx = cur_x_reg;     
                                ny = cur_y_reg + 1; 
                                dir_to_neighbor = DIR_DOWN;  
                            end
                            default: begin // 2'd3
                                nx = cur_x_reg - 1; 
                                ny = cur_y_reg;     
                                dir_to_neighbor = DIR_LEFT;  
                            end
                        endcase

                        // Check if neighbor is valid and process it
                        if (nx >= 0 && nx < W && ny >= 0 && ny < H) begin
                            int nidx;
                            nidx = idx_of(nx, ny);
                            if (cell_free(nx, ny) && !visited[nidx]) begin
                                visited[nidx] <= 1'b1;
                                has_parent[nidx] <= 1'b1;
                                parent_dir[nidx] <= dir_to_neighbor;
                                queue[q_tail] <= nidx[6:0];
                                q_tail <= q_tail + 7'd1;
                                q_count <= q_count + 7'd1;
                            end
                        end

                        // Advance to next neighbor (wrap around after processing all 4)
                        if (nb_i == 2'd3) begin
                            nb_i <= 2'd0; // Will pop next node on next cycle
                        end else begin
                            nb_i <= nb_i + 2'd1;
                        end
                    end
                end

                S_BACKTRACK: begin
                    // Backtrack from GOAL to START using parent_dir.
                    // parent_dir stores parent->child direction, so to move back:
                    // if parent->child was RIGHT, then child->parent is LEFT, etc.
                    int bx, by;
                    bx = x_of(bt_idx);
                    by = y_of(bt_idx);

                    // If we reached START, we're done backtracking
                    if (bx == SX && by == SY) begin
                        // bt_len currently holds number of moves from START->GOAL
                        path_len_reg <= bt_len;
                        st <= S_PACK;
                    end else begin
                        if (!has_parent[bt_idx]) begin
                            // Shouldn't happen if valid, but safety
                            valid <= 1'b0;
                            st <= S_DONE;
                        end else begin
                            logic [1:0] d_fwd;
                            logic [1:0] d_back;
                            d_fwd = parent_dir[bt_idx];

                            // invert direction for backtracking step (to go from child to parent)
                            unique case (d_fwd)
                                DIR_UP:    d_back = DIR_DOWN;
                                DIR_RIGHT: d_back = DIR_LEFT;
                                DIR_DOWN:  d_back = DIR_UP;
                                default:   d_back = DIR_RIGHT; // DIR_LEFT -> DIR_RIGHT
                            endcase

                            // Store the forward direction (parent->child) in path_buf
                            // This will be reversed later in S_PACK to get START->GOAL path
                            path_buf[bt_len[6:0]] <= d_fwd;
                            bt_len <= bt_len + 8'd1;

                            // Move bt_idx one step toward START (apply d_back)
                            unique case (d_back)
                                DIR_UP:    bt_idx <= idx_of(bx, by-1)[6:0];
                                DIR_RIGHT: bt_idx <= idx_of(bx+1, by)[6:0];
                                DIR_DOWN:  bt_idx <= idx_of(bx, by+1)[6:0];
                                default:   bt_idx <= idx_of(bx-1, by)[6:0];
                            endcase
                        end
                    end
                end

                S_PACK: begin
                    
                    for (i=0; i<7; i++) path_words[i] <= 32'd0;

                    for (i=0; i<path_len_reg; i++) begin
                        int fwd_i;
                        int word_i;
                        int bitpos;
                        logic [1:0] mv;

                        fwd_i = int'(path_len_reg) - 1 - i;
                        mv = path_buf[fwd_i];

                        word_i = i / 16;
                        bitpos = (i % 16) * 2;

                        path_words[word_i][bitpos +: 2] <= mv;
                    end

                    st <= S_DONE;
                end

                S_DONE: begin
                    done <= 1'b1;
                    // stay done until start deasserts (simple debounce)
                    if (!start) begin
                        st <= S_IDLE;
                        done <= 1'b0;
                    end
                end

                default: st <= S_IDLE;
            endcase
        end
    end

endmodule
