`timescale 1ns / 1ps

module tb_maze_generator_10x10;

    logic clk;
    logic rst;
    logic start;
    logic [15:0] seed;
    logic done;
    logic [31:0] grid0, grid1, grid2, grid3;

    logic solve_start;
    logic solve_done;
    logic solve_valid;
    logic [7:0] solve_len;

    maze_generator_10x10 u_gen (
        .clk(clk),
        .rst(rst),
        .start(start),
        .seed(seed),
        .done(done),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3)
    );

    maze_solver_light_10x10 u_solve (
        .clk(clk),
        .rst(rst),
        .start(solve_start),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3),
        .done(solve_done),
        .valid(solve_valid),
        .path_len(solve_len)
    );

    always #5 clk = ~clk;

    task pulse_gen_start;
    begin
        @(posedge clk);
        start = 1'b1;
        @(posedge clk);
        start = 1'b0;
    end
    endtask

    task pulse_solve_start;
    begin
        @(posedge clk);
        solve_start = 1'b1;
        @(posedge clk);
        solve_start = 1'b0;
    end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        start = 0;
        solve_start = 0;
        seed = 16'h55AA;

        #20;
        rst = 0;
        @(posedge clk);

        pulse_gen_start();

        while (done !== 1'b1)
            @(posedge clk);

        $display("GENERATOR DONE");
        $display("grid0=%h", grid0);
        $display("grid1=%h", grid1);
        $display("grid2=%h", grid2);
        $display("grid3=%h", grid3);

        pulse_solve_start();

        while (solve_done !== 1'b1)
            @(posedge clk);

        $display("GEN->SOLVE: valid=%0d path_len=%0d", solve_valid, solve_len);

        if (solve_valid !== 1'b1) begin
            $error("Generated maze should always be solvable");
        end

        $display("tb_maze_generator_10x10 finished");
        #20;
        $finish;
    end

endmodule