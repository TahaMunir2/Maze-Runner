`timescale 1ns/1ps

module tb_astar_top;

    // Parameters
    parameter MAZE_COLS = 10;
    parameter MAZE_ROWS = 10;
    parameter CELL_COLUMN_WIDTH = 4;
    parameter CELL_ROW_WIDTH = 4;
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH;
    parameter G_SCORE_WIDTH = 7;
    parameter F_SCORE_WIDTH = 8;
    parameter H_SCORE_WIDTH = 7;
    parameter GOAL_CELL_COL = 9;
    parameter GOAL_CELL_ROW = 9;
    parameter CLK_PERIOD = 10; // 10ns clock period

    // Signals
    logic clk;
    logic rst;
    logic start;
    logic maze [0:99];
    logic [3:0] path [0:98];
    logic [6:0] path_length;
    logic path_ready;
    logic no_path;

    // Test variables
    integer i, j;
    integer pass_count = 0;
    integer fail_count = 0;

    // Instantiate the DUT
    astar_top #(
        .MAZE_COLS(MAZE_COLS),
        .MAZE_ROWS(MAZE_ROWS),
        .CELL_COLUMN_WIDTH(CELL_COLUMN_WIDTH),
        .CELL_ROW_WIDTH(CELL_ROW_WIDTH),
        .G_SCORE_WIDTH(G_SCORE_WIDTH),
        .F_SCORE_WIDTH(F_SCORE_WIDTH),
        .H_SCORE_WIDTH(H_SCORE_WIDTH),
        .GOAL_CELL_COL(GOAL_CELL_COL),
        .GOAL_CELL_ROW(GOAL_CELL_ROW)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .maze(maze),
        .path(path),
        .path_length(path_length),
        .path_ready(path_ready),
        .no_path(no_path)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #(CLK_PERIOD/2) clk = ~clk;
    end

    // Test stimulus
    initial begin
        // Initialize signals
        rst = 0;
        start = 0;
        
        // Initialize maze - all cells are free (0 = walkable)
        for (i = 0; i < 100; i++) begin
            maze[i] = 1'b0;
        end

        // Print test start
        $display("========================================");
        $display("A* Pathfinding Testbench");
        $display("========================================");
        $display("Test Start Time: %0t ns", $time);

        // Reset the design
        @(posedge clk);
        rst = 1;
        @(posedge clk);
        @(posedge clk);
        rst = 0;
        $display("Reset completed at time %0t ns", $time);

        // Wait for reset to settle
        @(posedge clk);

        // Test Case 1: Simple path from (0,0) to (9,9) with clear maze
        $display("\n--- Test Case 1: Clear 10x10 Maze ---");
        test_clear_maze();

        // Test Case 2: Maze with obstacles
        $display("\n--- Test Case 2: Maze with Obstacles ---");
        test_maze_with_obstacles();

        // Print final results
        $display("\n========================================");
        $display("Test Summary");
        $display("Passed: %0d, Failed: %0d", pass_count, fail_count);
        $display("========================================");

        $finish;
    end

    // Test Case 1: Clear maze
    task test_clear_maze();
        $display("Starting pathfinding in clear maze...");
        
        // Initialize clear maze
        for (i = 0; i < 100; i++) begin
            maze[i] = 1'b0;
        end

        // Start pathfinding
        @(posedge clk);
        start = 1;
        @(posedge clk);
        start = 0;

        // Wait for path_ready or timeout (1000 clock cycles)
        wait_for_path_ready(1000);

        if (path_ready && !no_path) begin
            $display("✓ Path found! Path length: %0d", path_length);
            display_path();
            pass_count++;
        end else if (no_path) begin
            $display("✗ No path found (unexpected for clear maze)");
            fail_count++;
        end else begin
            $display("✗ Timeout waiting for path_ready");
            fail_count++;
        end
    endtask

    // Test Case 2: Maze with obstacles
    task test_maze_with_obstacles();
        $display("Starting pathfinding with obstacles...");
        
        // Initialize maze with some obstacles (walls)
        for (i = 0; i < 100; i++) begin
            maze[i] = 1'b0;
        end

        // Add some walls to create a challenging path
        // Create a horizontal wall at row 5, columns 2-7
        for (j = 2; j <= 7; j++) begin
            maze[5 * MAZE_COLS + j] = 1'b1;
        end

        // Create a vertical wall at column 3, rows 1-4
        for (i = 1; i <= 4; i++) begin
            maze[i * MAZE_COLS + 3] = 1'b1;
        end

        // Start pathfinding
        @(posedge clk);
        start = 1;
        @(posedge clk);
        start = 0;

        // Wait for path_ready or timeout
        wait_for_path_ready(1000);

        if (path_ready && !no_path) begin
            $display("✓ Path found with obstacles! Path length: %0d", path_length);
            display_path();
            pass_count++;
        end else if (no_path) begin
            $display("✗ No path found (algorithm may have failed)");
            fail_count++;
        end else begin
            $display("✗ Timeout waiting for path_ready");
            fail_count++;
        end
    endtask

    // Helper task: Wait for path_ready
    task wait_for_path_ready(input integer timeout);
        integer count = 0;
        while (!path_ready && count < timeout) begin
            @(posedge clk);
            count++;
        end
        if (count >= timeout) begin
            $display("Timeout after %0d cycles", timeout);
        end
    endtask

    // Helper task: Display the found path
    task display_path();
        integer i;
        string direction;
        $display("Path directions:");
        for (i = 0; i < path_length && i < 99; i++) begin
            case (path[i])
                4'b0000: direction = "NONE";
                4'b0001: direction = "N   ";
                4'b0010: direction = "E   ";
                4'b0011: direction = "NE  ";
                4'b0100: direction = "S   ";
                4'b0101: direction = "NS  ";
                4'b0110: direction = "ES  ";
                4'b0111: direction = "NES ";
                4'b1000: direction = "W   ";
                4'b1001: direction = "NW  ";
                4'b1010: direction = "EW  ";
                4'b1011: direction = "NEW ";
                4'b1100: direction = "SW  ";
                4'b1101: direction = "NSW ";
                4'b1110: direction = "ESW ";
                4'b1111: direction = "NESW";
                default: direction = "????";
            endcase
            if ((i + 1) % 10 == 0)
                $display("  Step %3d: %s", i+1, direction);
            else
                $write("%s ", direction);
        end
        $display(" ");
    endtask

    // Monitor outputs
    initial begin
        forever @(posedge clk) begin
            if (path_ready) begin
                $display("PATH_READY asserted at time %0t ns", $time);
                if (no_path)
                    $display("  - No path exists");
                else
                    $display("  - Path found with length: %0d", path_length);
            end
        end
    end

endmodule
