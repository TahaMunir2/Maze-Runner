module maze_worker_engine (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [15:0] maze_id,
    input  logic [15:0] target_id,
    input  logic [15:0] seed,

    output logic        busy,
    output logic        done,
    output logic [15:0] done_maze_id,

    output logic        solved,
    output logic [7:0]  solved_path_len,

    output logic        target_valid,
    output logic [7:0]  target_path_len,
    output logic [31:0] target_path_word0,
    output logic [31:0] target_path_word1,
    output logic [31:0] target_path_word2,
    output logic [31:0] target_path_word3,
    output logic [31:0] target_path_word4,
    output logic [31:0] target_path_word5,
    output logic [31:0] target_path_word6,


    output logic [31:0] target_grid0,
    output logic [31:0] target_grid1,
    output logic [31:0] target_grid2,
    output logic [31:0] target_grid3
);
    typedef enum logic [2:0] {
        E_IDLE,
        E_GEN,
        E_SOLVE,
        E_WAIT_LIGHT,
        E_WAIT_BOTH,
        E_DONE
    } estate_t;

    estate_t state;

    logic is_target;
    logic light_seen;
    logic full_seen;

    logic gen_start;
    logic gen_done;
    logic [31:0] grid0, grid1, grid2, grid3;

    logic light_start;
    logic light_done;
    logic light_valid;
    logic [7:0] light_len;

    logic full_start;
    logic full_done;
    logic full_valid;
    logic [7:0] full_len;
    logic [31:0] full_word0, full_word1, full_word2, full_word3;
    logic [31:0] full_word4, full_word5, full_word6;

    maze_generator_10x10 u_gen (
        .clk(clk),
        .rst(rst),
        .start(gen_start),
        .seed(seed),
        .done(gen_done),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3)
    );

    maze_solver_light_10x10 u_light (
        .clk(clk),
        .rst(rst),
        .start(light_start),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3),
        .done(light_done),
        .valid(light_valid),
        .path_len(light_len)
    );

    maze_solver_full_10x10 u_full (
        .clk(clk),
        .rst(rst),
        .start(full_start),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3),
        .done(full_done),
        .valid(full_valid),
        .path_len(full_len),
        .path_word0(full_word0),
        .path_word1(full_word1),
        .path_word2(full_word2),
        .path_word3(full_word3),
        .path_word4(full_word4),
        .path_word5(full_word5),
        .path_word6(full_word6)
    );

    always_ff @(posedge clk) begin
        if (rst) begin
            state             <= E_IDLE;
            busy              <= 1'b0;
            done              <= 1'b0;
            done_maze_id      <= 16'd0;
            solved            <= 1'b0;
            solved_path_len   <= 8'd0;
            target_valid      <= 1'b0;
            target_path_len   <= 8'd0;
            target_path_word0 <= 32'd0;
            target_path_word1 <= 32'd0;
            target_path_word2 <= 32'd0;
            target_path_word3 <= 32'd0;
            target_path_word4 <= 32'd0;
            target_path_word5 <= 32'd0;
            target_path_word6 <= 32'd0;
            is_target         <= 1'b0;
            light_seen        <= 1'b0;
            full_seen         <= 1'b0;
            gen_start         <= 1'b0;
            light_start       <= 1'b0;
            full_start        <= 1'b0;
            target_grid0      <= 32'd0;
            target_grid1      <= 32'd0;
            target_grid2      <= 32'd0;
            target_grid3      <= 32'd0;
        end else begin
            done        <= 1'b0;
            gen_start   <= 1'b0;
            light_start <= 1'b0;
            full_start  <= 1'b0;

            case (state)
                E_IDLE: begin
                    busy <= 1'b0;
                    if (start) begin
                        busy              <= 1'b1;
                        done_maze_id      <= maze_id;
                        is_target         <= (maze_id == target_id);
                        light_seen        <= 1'b0;
                        full_seen         <= 1'b0;
                        solved            <= 1'b0;
                        solved_path_len   <= 8'd0;
                        target_valid      <= 1'b0;
                        target_path_len   <= 8'd0;
                        target_path_word0 <= 32'd0;
                        target_path_word1 <= 32'd0;
                        target_path_word2 <= 32'd0;
                        target_path_word3 <= 32'd0;
                        target_path_word4 <= 32'd0;
                        target_path_word5 <= 32'd0;
                        target_path_word6 <= 32'd0;
                        gen_start         <= 1'b1;
                        state             <= E_GEN;
                        target_grid0      <= 32'd0;
                        target_grid1      <= 32'd0;
                        target_grid2      <= 32'd0;
                        target_grid3      <= 32'd0;
                    end
                end

                E_GEN: begin
                    if (gen_done) begin
                        if (is_target) begin
                            target_grid0 <= grid0;
                            target_grid1 <= grid1;
                            target_grid2 <= grid2;
                            target_grid3 <= grid3;
                        end

                        light_start <= 1'b1;
                        if (is_target)
                            full_start <= 1'b1;
                        state <= E_SOLVE;
                    end
                end

                E_SOLVE: begin
                    if (is_target)
                        state <= E_WAIT_BOTH;
                    else
                        state <= E_WAIT_LIGHT;
                end

                E_WAIT_LIGHT: begin
                    if (light_done) begin
                        solved          <= light_valid;
                        solved_path_len <= light_len;
                        state           <= E_DONE;
                    end
                end

                E_WAIT_BOTH: begin
                    if (light_done) begin
                        light_seen       <= 1'b1;
                        solved           <= light_valid;
                        solved_path_len  <= light_len;
                    end

                    if (full_done) begin
                        full_seen         <= 1'b1;
                        target_valid      <= full_valid;
                        target_path_len   <= full_len;
                        target_path_word0 <= full_word0;
                        target_path_word1 <= full_word1;
                        target_path_word2 <= full_word2;
                        target_path_word3 <= full_word3;
                        target_path_word4 <= full_word4;
                        target_path_word5 <= full_word5;
                        target_path_word6 <= full_word6;
                    end

                    if ((light_seen || light_done) && (full_seen || full_done)) begin
                        state <= E_DONE;
                    end
                end

                E_DONE: begin
                    busy  <= 1'b0;
                    done  <= 1'b1;
                    state <= E_IDLE;
                end

                default: state <= E_IDLE;
            endcase
        end
    end
endmodule