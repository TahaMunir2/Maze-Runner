`timescale 1ns/1ps

module tb_bfs_top;

  logic clk, rst, start;
  logic maze [0:99];          // 1=wall, 0=free

  logic [3:0] path [0:98];
  logic [6:0] path_length;
  logic path_ready, no_path;

  bfs_top dut (
    .clk(clk),
    .rst(rst),
    .start(start),
    .maze(maze),
    .path(path),
    .path_length(path_length),
    .path_ready(path_ready),
    .no_path(no_path)
  );

  // clock
  initial clk = 0;
  always #5 clk = ~clk;

  function automatic int idx10(input int r, input int c);
    return r*10 + c;
  endfunction

  function automatic string dir_to_str(input logic [3:0] d);
    if (d == 4'b0001) dir_to_str = "UP";
    else if (d == 4'b0010) dir_to_str = "DOWN";
    else if (d == 4'b0100) dir_to_str = "LEFT";
    else if (d == 4'b1000) dir_to_str = "RIGHT";
    else dir_to_str = "???";
  endfunction

  task automatic print_maze;
    for (int r = 0; r < 10; r++) begin
      for (int c = 0; c < 10; c++) begin
        if (r == 9 && c == 0) begin
          $write("S ");
        end else if (r == 0 && c == 9) begin
          $write("G ");
        end else begin
          if (maze[idx10(r,c)] == 1'b1) $write("# ");
          else                          $write(". ");
        end
      end
      $write("\n");
    end
  endtask

  task automatic load_maze;
    string rows[0:9];
    rows[0] = ".#...#...G";
    rows[1] = ".#.#.#.#..";
    rows[2] = "...#...#..";
    rows[3] = "##.###.#..";
    rows[4] = ".......#..";
    rows[5] = ".###.###..";
    rows[6] = "...#......";
    rows[7] = ".#.###.##.";
    rows[8] = ".#........";
    rows[9] = "S####.###.";

    for (int r=0; r<10; r++) begin
      for (int c=0; c<10; c++) begin
        byte ch = rows[r].getc(c);
        maze[idx10(r,c)] = (ch == "#") ? 1'b1 : 1'b0; // 1=wall else free
      end
    end

    // force S and G free
    maze[idx10(9,0)] = 1'b0;
    maze[idx10(0,9)] = 1'b0;
  endtask

  int  solve_cycles;
  logic counting;

  always @(posedge clk) begin
    if (rst) begin
      solve_cycles <= 0;
      counting <= 0;
    end else begin
      if (start) begin
        solve_cycles <= 0;
        counting <= 1;
      end else if (counting) begin
        solve_cycles <= solve_cycles + 1;
        if (path_ready || no_path) counting <= 0;
      end
    end
  end

  initial begin
    int cycles;

    rst = 1;
    start = 0;
    load_maze();

    repeat(5) @(posedge clk);
    rst = 0;
    @(posedge clk);

    start = 1;
    @(posedge clk);
    start = 0;

    cycles = 0;
    while (!path_ready && !no_path && cycles < 600000) begin
      @(posedge clk);
      cycles++;
    end

    print_maze();

    // Print solve cycles (end-to-end)
    $display("CYCLES (solve from start->done): %0d", solve_cycles);

    if (no_path) begin
      $display("RESULT: NO PATH");
      $finish;
    end

    if (!path_ready) begin
      $display("ERROR: TIMEOUT (no path_ready/no_path)");
      $finish;
    end

    $display("RESULT: PATH FOUND - %0d steps", path_length);
    for (int i=0; i<path_length; i++) begin
      $display("Step %0d: %s", i, dir_to_str(path[i]));
    end

    $finish;
  end

endmodule
