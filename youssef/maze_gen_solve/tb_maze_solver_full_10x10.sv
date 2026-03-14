`timescale 1ns / 1ps

module tb_maze_solver_full_10x10;

    logic clk;
    logic rst;
    logic start;
    logic [31:0] grid0, grid1, grid2, grid3;
    logic done;
    logic valid;
    logic [7:0] path_len;
    logic [31:0] path_word0, path_word1, path_word2, path_word3;
    logic [31:0] path_word4, path_word5, path_word6;

    maze_solver_full_10x10 dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3),
        .done(done),
        .valid(valid),
        .path_len(path_len),
        .path_word0(path_word0),
        .path_word1(path_word1),
        .path_word2(path_word2),
        .path_word3(path_word3),
        .path_word4(path_word4),
        .path_word5(path_word5),
        .path_word6(path_word6)
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
    begin
        while (done !== 1'b1)
            @(posedge clk);
        @(posedge clk);
    end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        start = 0;
        grid0 = 32'd0;
        grid1 = 32'd0;
        grid2 = 32'd0;
        grid3 = 32'd0;

        #20;
        rst = 0;
        @(posedge clk);

        // All-open maze
        grid0 = 32'hFFFF_FFFF;
        grid1 = 32'hFFFF_FFFF;
        grid2 = 32'hFFFF_FFFF;
        grid3 = 32'h0000_000F;

        pulse_start();
        wait_done();

        $display("FULL TEST: valid=%0d path_len=%0d", valid, path_len);
        $display("path_word0=%h", path_word0);
        $display("path_word1=%h", path_word1);
        $display("path_word2=%h", path_word2);
        $display("path_word3=%h", path_word3);
        $display("path_word4=%h", path_word4);
        $display("path_word5=%h", path_word5);
        $display("path_word6=%h", path_word6);

        if (valid !== 1'b1) begin
            $error("Full solver failed: all-open maze should be solvable");
        end

        if (path_len != 8'd18) begin
            $error("Full solver failed: expected path_len=18, got %0d", path_len);
        end

        $display("tb_maze_solver_full_10x10 finished");
        #20;
        $finish;
    end

endmodule