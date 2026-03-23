`timescale 1ns / 1ps

module tb_maze_solver_light_10x10;

    logic clk;
    logic rst;
    logic start;
    logic [31:0] grid0, grid1, grid2, grid3;
    logic done;
    logic valid;
    logic [7:0] path_len;

    maze_solver_light_10x10 dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .grid0(grid0),
        .grid1(grid1),
        .grid2(grid2),
        .grid3(grid3),
        .done(done),
        .valid(valid),
        .path_len(path_len)
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

        // --------------------------------------------
        // Test 1: all-open 10x10 maze
        // 100 cells open:
        // grid0 = bits 31:0 open
        // grid1 = bits 63:32 open
        // grid2 = bits 95:64 open
        // grid3 = bits 99:96 open, rest zero
        // Expected shortest path from (0,0) to (9,9): 18
        // --------------------------------------------
        grid0 = 32'hFFFF_FFFF;
        grid1 = 32'hFFFF_FFFF;
        grid2 = 32'hFFFF_FFFF;
        grid3 = 32'h0000_000F;

        pulse_start();
        wait_done();

        $display("LIGHT TEST 1: valid=%0d path_len=%0d", valid, path_len);

        if (valid !== 1'b1) begin
            $error("Light solver failed: all-open maze should be solvable");
        end

        // path_len may be 18 for shortest path on all-open grid
        if (path_len != 8'd18) begin
            $error("Light solver failed: expected path_len=18, got %0d", path_len);
        end

        // --------------------------------------------
        // Test 2: blocked maze
        // Only start cell open
        // --------------------------------------------
        grid0 = 32'h0000_0001;
        grid1 = 32'h0000_0000;
        grid2 = 32'h0000_0000;
        grid3 = 32'h0000_0000;

        pulse_start();
        wait_done();

        $display("LIGHT TEST 2: valid=%0d path_len=%0d", valid, path_len);

        if (valid !== 1'b0) begin
            $error("Light solver failed: blocked maze should be unsolvable");
        end

        $display("tb_maze_solver_light_10x10 finished");
        #20;
        $finish;
    end

endmodule