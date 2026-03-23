`timescale 1ns/1ps

module astar_multi_tb;

    logic        clk;
    logic        rst;
    logic        start;
    logic        maze [0:99];
    logic [3:0]  path [0:98];
    logic [6:0]  path_length;
    logic        path_ready;
    logic        no_path;

    initial clk = 0;
    always #5 clk = ~clk;

    astar_top dut (
        .clk         (clk),
        .rst         (rst),
        .start       (start),
        .maze        (maze),
        .path        (path),
        .path_length (path_length),
        .path_ready  (path_ready),
        .no_path     (no_path)
    );

    task run_maze;
        begin
            rst = 1; #20; rst = 0; #10;
            start = 1; #10; start = 0;

            fork
                begin
                    wait(dut.backtrace_done);
                    @(posedge clk); #1;
                end
                begin
                    wait(no_path);
                    #10;
                end
                begin
                    #500000;
                end
            join_any
            disable fork;

            #50;
        end
    endtask

    initial begin
        $dumpfile("astar_multi.vcd");
        $dumpvars(0, astar_multi_tb);

        for (int i = 0; i < 100; i++) maze[i] = 0;
        run_maze();

        for (int i = 0; i < 100; i++) maze[i] = 1;
        maze[90] = 0;
        for (int i = 80; i < 90; i++) maze[i] = 0;
        for (int r = 0; r < 10; r++) maze[r*10+9] = 0;
        run_maze();

        for (int i = 0; i < 100; i++) maze[i] = 0;
        for (int c = 1; c <= 7; c++) maze[10+c] = 1;
        maze[21] = 1; maze[27] = 1;
        maze[31] = 1; maze[33] = 1; maze[34] = 1; maze[35] = 1; maze[37] = 1;
        maze[41] = 1; maze[43] = 1; maze[45] = 1; maze[47] = 1;
        maze[51] = 1; maze[53] = 1; maze[57] = 1;
        maze[61] = 1; maze[63] = 1; maze[64] = 1; maze[65] = 1; maze[66] = 1; maze[67] = 1;
        maze[71] = 1;
        for (int c = 1; c <= 8; c++) maze[80+c] = 1;
        run_maze();

        for (int i = 0; i < 100; i++) maze[i] = 0;
        for (int c = 0; c <= 7; c++) maze[10+c] = 1;
        for (int c = 2; c <= 9; c++) maze[30+c] = 1;
        for (int c = 0; c <= 7; c++) maze[50+c] = 1;
        for (int c = 2; c <= 9; c++) maze[70+c] = 1;
        for (int c = 2; c <= 9; c++) maze[90+c] = 1;
        run_maze();

        for (int i = 0; i < 100; i++) maze[i] = 0;
        for (int r = 0; r < 10; r++) maze[r*10+8] = 1;
        run_maze();

        for (int i = 0; i < 100; i++) maze[i] = 0;
        maze[1] = 1; maze[5] = 1;
        maze[11] = 1; maze[13] = 1; maze[15] = 1; maze[17] = 1;
        maze[23] = 1; maze[27] = 1;
        maze[30] = 1; maze[31] = 1; maze[33] = 1; maze[34] = 1; maze[35] = 1; maze[37] = 1;
        maze[47] = 1;
        maze[51] = 1; maze[52] = 1; maze[53] = 1; maze[55] = 1; maze[56] = 1; maze[57] = 1;
        maze[63] = 1;
        maze[71] = 1; maze[73] = 1; maze[74] = 1; maze[75] = 1; maze[77] = 1; maze[78] = 1;
        maze[81] = 1;
        maze[91] = 1; maze[92] = 1; maze[93] = 1; maze[94] = 1; maze[96] = 1; maze[97] = 1; maze[98] = 1;
        run_maze();

        $display("SUCCESSFUL");
        $finish;
    end

endmodule