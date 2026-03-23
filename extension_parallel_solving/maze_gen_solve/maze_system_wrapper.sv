module maze_system_wrapper (

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

    maze_system_top #(
        .NUM_ENGINES(8),
        .TOTAL_MAZES(10000)
    ) u_top (
        .clk(clk),
        .rst(rst),
        .start_run(start_run),
        .seed(seed),

        .run_done(run_done),
        .target_id(target_id),

        .target_valid(target_valid),
        .target_path_len(target_path_len),
        .target_path_word0(target_path_word0),
        .target_path_word1(target_path_word1),
        .target_path_word2(target_path_word2),
        .target_path_word3(target_path_word3),
        .target_path_word4(target_path_word4),
        .target_path_word5(target_path_word5),
        .target_path_word6(target_path_word6),

        .target_grid0(target_grid0),
        .target_grid1(target_grid1),
        .target_grid2(target_grid2),
        .target_grid3(target_grid3)
    );

endmodule

