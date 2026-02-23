`timescale 1ns/1ps

module tb_bfs_wavefront_10x10;

  // DUT signals
  logic        clk;
  logic        rstn;
  logic        start;
  logic [99:0] grid_free;
  logic [3:0]  goal_x, goal_y;
  logic [3:0]  curr_x, curr_y;
  logic        done;
  logic [6:0]  dist_curr;
  logic [1:0]  next_dir;
  logic        next_valid;

  // Instantiate DUT
  bfs_wavefront_10x10 dut (
    .clk(clk),
    .rstn(rstn),
    .start(start),
    .grid_free(grid_free),
    .goal_x(goal_x),
    .goal_y(goal_y),
    .curr_x(curr_x),
    .curr_y(curr_y),
    .done(done),
    .dist_curr(dist_curr),
    .next_dir(next_dir),
    .next_valid(next_valid)
  );

  // Clock: 100 MHz (10ns period)
  initial clk = 1'b0;
  always #5 clk = ~clk;

  // Helper: set a cell (x,y) to free or wall
  // idx = y*10 + x
  task automatic set_cell(input int x, input int y, input bit free);
    int idx;
    begin
      idx = y*10 + x;
      grid_free[idx] = free;
    end
  endtask

  // Pretty print direction
  function automatic [8*5:1] dir_str(input logic [1:0] d);
    case (d)
      2'b00: dir_str = "N";
      2'b01: dir_str = "E";
      2'b10: dir_str = "S";
      2'b11: dir_str = "W";
      default: dir_str = "?";
    endcase
  endfunction

  // Main test
  initial begin
    // Defaults
    start   = 1'b0;
    rstn    = 1'b0;
    grid_free = '0;

    // Goal and curr
    goal_x = 4'd9; goal_y = 4'd9;
    curr_x = 4'd0; curr_y = 4'd0;

    // Apply reset
    repeat (5) @(posedge clk);
    rstn = 1'b1;
    @(posedge clk);

    // ------------------------------------------------------------
    // Build a simple solvable maze:
    // Start (0,0), Goal (9,9)
    // Everything free except a 3x3 wall block in the middle
    // ------------------------------------------------------------
    // Set all free
    for (int y = 0; y < 10; y++) begin
      for (int x = 0; x < 10; x++) begin
        set_cell(x, y, 1'b1);
      end
    end

    // Add walls in middle block (x=4..6, y=4..6)
    for (int y = 4; y <= 6; y++) begin
      for (int x = 4; x <= 6; x++) begin
        set_cell(x, y, 1'b0);
      end
    end

    // Ensure start/goal free
    set_cell(0, 0, 1'b1);
    set_cell(9, 9, 1'b1);

    // ------------------------------------------------------------
    // Start BFS computation
    // ------------------------------------------------------------
    @(posedge clk);
    start <= 1'b1;
    @(posedge clk);
    start <= 1'b0;

    // Wait for done (with timeout)
    int cycles = 0;
    while (!done && cycles < 20000) begin
      @(posedge clk);
      cycles++;
    end

    if (!done) begin
      $display("ERROR: Timeout waiting for done.");
      $finish;
    end

    // Print result
    $display("DONE after %0d cycles", cycles);
    $display("dist_curr = %0d (127 means INF/unreachable)", dist_curr);
    $display("next_valid = %0d, next_dir = %s (%b)", next_valid, dir_str(next_dir), next_dir);

    // Basic sanity checks:
    // - Should be reachable (dist_curr != 127)
    // - next_valid should be 1
    if (dist_curr == 7'h7F) begin
      $display("ERROR: dist_curr is INF, but maze should be solvable.");
      $finish;
    end
    if (!next_valid) begin
      $display("ERROR: next_valid is 0, expected 1.");
      $finish;
    end

    $display("PASS");
    $finish;
  end

endmodule
