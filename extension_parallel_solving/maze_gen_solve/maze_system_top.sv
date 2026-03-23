module maze_system_top #(
    parameter int NUM_ENGINES = 8,
    parameter int TOTAL_MAZES = 10000
) (
    input  logic        clk,
    input  logic        rst,
    input  logic        start_run,
    input  logic [15:0] seed,

    output logic        run_done,
    output logic [15:0] target_id,

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

    localparam int MAZE_IDX_W = (TOTAL_MAZES <= 1) ? 1 : $clog2(TOTAL_MAZES);

    typedef enum logic [1:0] {
        T_IDLE,
        T_RUN,
        T_DONE
    } tstate_t;

    tstate_t state;

    logic [15:0] next_maze_id;
    logic [15:0] completed_count;

    logic [15:0] engine_maze_id [0:NUM_ENGINES-1];
    logic [15:0] engine_seed    [0:NUM_ENGINES-1];
    logic        engine_start   [0:NUM_ENGINES-1];

    logic        engine_busy    [0:NUM_ENGINES-1];
    logic        engine_done    [0:NUM_ENGINES-1];
    logic [15:0] engine_done_id [0:NUM_ENGINES-1];
    logic        engine_solved  [0:NUM_ENGINES-1];
    logic [7:0]  engine_len     [0:NUM_ENGINES-1];

    logic        engine_tvalid  [0:NUM_ENGINES-1];
    logic [7:0]  engine_tlen    [0:NUM_ENGINES-1];
    logic [31:0] engine_tword0  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword1  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword2  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword3  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword4  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword5  [0:NUM_ENGINES-1];
    logic [31:0] engine_tword6  [0:NUM_ENGINES-1];

    logic [31:0] engine_tgrid0  [0:NUM_ENGINES-1];
    logic [31:0] engine_tgrid1  [0:NUM_ENGINES-1];
    logic [31:0] engine_tgrid2  [0:NUM_ENGINES-1];
    logic [31:0] engine_tgrid3  [0:NUM_ENGINES-1];

    logic        engine_active  [0:NUM_ENGINES-1];

    logic        solved_mem   [0:TOTAL_MAZES-1];
    logic [7:0]  path_len_mem [0:TOTAL_MAZES-1];

    logic [15:0] rng_value;
    logic        rng_enable;
    logic        rng_load_seed;

    integer i;
    integer done_inc;
    logic dispatched;

    lfsr16 u_top_rng (
        .clk(clk),
        .rst(rst),
        .enable(rng_enable),
        .load_seed(rng_load_seed),
        .seed(seed),
        .value(rng_value)
    );

    genvar g;
    generate
        for (g = 0; g < NUM_ENGINES; g = g + 1) begin : GEN_ENGINES
            maze_worker_engine u_engine (
                .clk(clk),
                .rst(rst),
                .start(engine_start[g]),
                .maze_id(engine_maze_id[g]),
                .target_id(target_id),
                .seed(engine_seed[g]),

                .busy(engine_busy[g]),
                .done(engine_done[g]),
                .done_maze_id(engine_done_id[g]),

                .solved(engine_solved[g]),
                .solved_path_len(engine_len[g]),

                .target_valid(engine_tvalid[g]),
                .target_path_len(engine_tlen[g]),
                .target_path_word0(engine_tword0[g]),
                .target_path_word1(engine_tword1[g]),
                .target_path_word2(engine_tword2[g]),
                .target_path_word3(engine_tword3[g]),
                .target_path_word4(engine_tword4[g]),
                .target_path_word5(engine_tword5[g]),
                .target_path_word6(engine_tword6[g]),

                .target_grid0(engine_tgrid0[g]),
                .target_grid1(engine_tgrid1[g]),
                .target_grid2(engine_tgrid2[g]),
                .target_grid3(engine_tgrid3[g])
            );
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (rst) begin
            state             <= T_IDLE;
            run_done          <= 1'b0;
            target_id         <= 16'd0;
            next_maze_id      <= 16'd0;
            completed_count   <= 16'd0;
            target_valid      <= 1'b0;
            target_path_len   <= 8'd0;
            target_path_word0 <= 32'd0;
            target_path_word1 <= 32'd0;
            target_path_word2 <= 32'd0;
            target_path_word3 <= 32'd0;
            target_path_word4 <= 32'd0;
            target_path_word5 <= 32'd0;
            target_path_word6 <= 32'd0;
            target_grid0      <= 32'd0;
            target_grid1      <= 32'd0;
            target_grid2      <= 32'd0;
            target_grid3      <= 32'd0;
            rng_enable        <= 1'b0;
            rng_load_seed     <= 1'b0;

            for (i = 0; i < NUM_ENGINES; i = i + 1) begin
                engine_start[i]   <= 1'b0;
                engine_maze_id[i] <= 16'd0;
                engine_seed[i]    <= 16'd0;
                engine_active[i]  <= 1'b0;
            end
        end else begin
            run_done      <= 1'b0;
            rng_enable    <= 1'b0;
            rng_load_seed <= 1'b0;

            for (i = 0; i < NUM_ENGINES; i = i + 1) begin
                engine_start[i] <= 1'b0;
            end

            case (state)
                T_IDLE: begin
                    if (start_run) begin
                        rng_load_seed     <= 1'b1;
                        next_maze_id      <= 16'd0;
                        completed_count   <= 16'd0;
                        target_valid      <= 1'b0;
                        target_path_len   <= 8'd0;
                        target_path_word0 <= 32'd0;
                        target_path_word1 <= 32'd0;
                        target_path_word2 <= 32'd0;
                        target_path_word3 <= 32'd0;
                        target_path_word4 <= 32'd0;
                        target_path_word5 <= 32'd0;
                        target_path_word6 <= 32'd0;
                        target_grid0      <= 32'd0;
                        target_grid1      <= 32'd0;
                        target_grid2      <= 32'd0;
                        target_grid3      <= 32'd0;

                        for (i = 0; i < NUM_ENGINES; i = i + 1) begin
                            engine_active[i] <= 1'b0;
                        end

                        state <= T_RUN;
                    end
                end

                T_RUN: begin
                    rng_enable <= 1'b1;

                    if ((next_maze_id == 16'd0) && (completed_count == 16'd0)) begin
                        if (TOTAL_MAZES > 0)
                            target_id <= 16'(rng_value % TOTAL_MAZES);
                        else
                            target_id <= 16'd0;
                    end

                    // Collect completions
                    done_inc = 0;
                    for (i = 0; i < NUM_ENGINES; i = i + 1) begin
                        if (engine_done[i]) begin
                            solved_mem[engine_done_id[i][MAZE_IDX_W-1:0]]   <= engine_solved[i];
                            path_len_mem[engine_done_id[i][MAZE_IDX_W-1:0]] <= engine_len[i];
                            engine_active[i] <= 1'b0;
                            done_inc = done_inc + 1;

                            if (engine_done_id[i] == target_id) begin
                                target_valid      <= engine_tvalid[i];
                                target_path_len   <= engine_tlen[i];
                                target_path_word0 <= engine_tword0[i];
                                target_path_word1 <= engine_tword1[i];
                                target_path_word2 <= engine_tword2[i];
                                target_path_word3 <= engine_tword3[i];
                                target_path_word4 <= engine_tword4[i];
                                target_path_word5 <= engine_tword5[i];
                                target_path_word6 <= engine_tword6[i];
                                target_grid0      <= engine_tgrid0[i];
                                target_grid1      <= engine_tgrid1[i];
                                target_grid2      <= engine_tgrid2[i];
                                target_grid3      <= engine_tgrid3[i];
                            end
                        end
                    end
                    completed_count <= completed_count + done_inc[15:0];

                    // Dispatch at most one new maze per cycle
                    dispatched = 1'b0;
                    if (next_maze_id < 16'(TOTAL_MAZES)) begin
                        for (i = 0; i < NUM_ENGINES; i = i + 1) begin
                            if (!dispatched && (engine_active[i] == 1'b0)) begin
                                engine_maze_id[i] <= next_maze_id;
                                engine_seed[i]    <= seed ^ next_maze_id ^ 16'(i);
                                engine_start[i]   <= 1'b1;
                                engine_active[i]  <= 1'b1;
                                next_maze_id      <= next_maze_id + 16'd1;
                                dispatched        = 1'b1;
                            end
                        end
                    end

                    if ((completed_count + done_inc[15:0]) >= 16'(TOTAL_MAZES)) begin
                        state <= T_DONE;
                    end
                end

                T_DONE: begin
                    run_done <= 1'b1;
                    state    <= T_IDLE;
                end

                default: state <= T_IDLE;
            endcase
        end
    end

endmodule
