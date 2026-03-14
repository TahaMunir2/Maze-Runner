`timescale 1ns / 1ps

module tb_maze_worker_engine;

    logic clk;
    logic rst;
    logic start;
    logic [15:0] maze_id;
    logic [15:0] target_id;
    logic [15:0] seed;

    logic busy;
    logic done;
    logic [15:0] done_maze_id;

    logic solved;
    logic [7:0] solved_path_len;

    logic target_valid;
    logic [7:0] target_path_len;
    logic [31:0] target_path_word0, target_path_word1, target_path_word2;
    logic [31:0] target_path_word3, target_path_word4, target_path_word5, target_path_word6;
    logic [31:0] target_grid0, target_grid1, target_grid2, target_grid3;

        maze_worker_engine dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .maze_id(maze_id),
        .target_id(target_id),
        .seed(seed),
        .busy(busy),
        .done(done),
        .done_maze_id(done_maze_id),
        .solved(solved),
        .solved_path_len(solved_path_len),
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

    always #5 clk = ~clk;

    task pulse_start;
    begin
        @(posedge clk);
        start = 1'b1;
        @(posedge clk);
        start = 1'b0;
    end
    endtask

    task wait_done;
    integer cycles;
    begin
        cycles = 0;
        while (done !== 1'b1 && cycles < 20000) begin
            @(posedge clk);
            cycles = cycles + 1;
        end

        if (done !== 1'b1) begin
            $error("Timeout waiting for worker done");
            $finish;
        end

        @(posedge clk);
    end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        start = 0;
        maze_id = 16'd0;
        target_id = 16'd5;
        seed = 16'h1111;

        #20;
        rst = 0;
        @(posedge clk);        

        // -----------------------------------
        // Non-target maze
        // -----------------------------------
        maze_id = 16'd2;
        target_id = 16'd5;
        seed = 16'h1111;

        pulse_start();
        wait_done();

        $display("WORKER TEST 1: maze_id=%0d done_maze_id=%0d solved=%0d len=%0d target_valid=%0d",
                 maze_id, done_maze_id, solved, solved_path_len, target_valid);

        if (done_maze_id != 16'd2)
            $error("Worker wrong done_maze_id on non-target case");

        if (solved !== 1'b1)
            $error("Worker should solve generated maze");

        // -----------------------------------
        // Target maze
        // -----------------------------------
        maze_id = 16'd7;
        target_id = 16'd7;
        seed = 16'h2222;

        pulse_start();
        wait_done();

        $display("WORKER TEST 2: maze_id=%0d done_maze_id=%0d solved=%0d len=%0d target_valid=%0d target_len=%0d",
                 maze_id, done_maze_id, solved, solved_path_len, target_valid, target_path_len);

        if (done_maze_id != 16'd7)
            $error("Worker wrong done_maze_id on target case");

        if (solved !== 1'b1)
            $error("Target maze should solve");

        if (target_valid !== 1'b1)
            $error("Target full solver should produce valid path");

        $display("tb_maze_worker_engine finished");
        #20;
        $finish;
    end

endmodule