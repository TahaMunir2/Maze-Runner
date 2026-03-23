`timescale 1ns / 1ps

module tb_maze_system_top;

    logic clk;
    logic rst;
    logic start_run;
    logic [15:0] seed;

    logic run_done;
    logic [15:0] target_id;

    logic target_valid;
    logic [7:0] target_path_len;
    logic [31:0] target_path_word0, target_path_word1, target_path_word2;
    logic [31:0] target_path_word3, target_path_word4, target_path_word5, target_path_word6;

    logic [31:0] target_grid0, target_grid1, target_grid2, target_grid3;

    maze_system_top #(
        .NUM_ENGINES(2),
        .TOTAL_MAZES(8)
    ) dut (
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

    always #5 clk = ~clk;

    task pulse_start_run;
    begin
        @(posedge clk);
        start_run = 1'b1;
        @(posedge clk);
        start_run = 1'b0;
    end
    endtask

    task wait_run_done;
        integer cycles;
    begin
        cycles = 0;
        while (run_done !== 1'b1 && cycles < 100000) begin
            @(posedge clk);
            cycles = cycles + 1;

            if ((cycles % 1000) == 0) begin
                $display("cycles=%0d state=%0d next_maze_id=%0d completed_count=%0d run_done=%0d target_id=%0d busy0=%0d done0=%0d",
                         cycles,
                         dut.state,
                         dut.next_maze_id,
                         dut.completed_count,
                         dut.run_done,
                         dut.target_id,
                         dut.engine_busy[0],
                         dut.engine_done[0]);
            end
        end

        if (run_done !== 1'b1) begin
            $display("TIMEOUT DEBUG:");
            $display("state=%0d", dut.state);
            $display("next_maze_id=%0d", dut.next_maze_id);
            $display("completed_count=%0d", dut.completed_count);
            $display("target_id=%0d", dut.target_id);
            $display("run_done=%0d", dut.run_done);
            $display("busy0=%0d done0=%0d maze_id0=%0d",
                     dut.engine_busy[0], dut.engine_done[0], dut.engine_maze_id[0]);
            $error("Timeout waiting for run_done");
            $finish;
        end

        @(posedge clk);
    end
    endtask

    task print_path;
        input logic [7:0] path_len;
        input logic [31:0] w0, w1, w2, w3, w4, w5, w6;

        logic [223:0] path_bits;
        integer i;
        logic [1:0] move_bits;
    begin
        path_bits = {w6, w5, w4, w3, w2, w1, w0};

        $display("");
        $display("PATH (%0d steps)", path_len);
        $display("----------------");

        for (i = 0; i < path_len; i = i + 1) begin
            move_bits = path_bits[i*2 +: 2];
            case (move_bits)
                2'b00: $display("%0d : UP", i);
                2'b01: $display("%0d : DOWN", i);
                2'b10: $display("%0d : LEFT", i);
                2'b11: $display("%0d : RIGHT", i);
                default: $display("%0d : UNKNOWN", i);
            endcase
        end
    end
    endtask

    task print_maze;
        input logic [31:0] g0, g1, g2, g3;

        logic [127:0] grid_flat;
        integer r, c, idx;
    begin
        grid_flat = {g3, g2, g1, g0};

        $display("");
        $display("TARGET MAZE (10x10)");
        $display("-------------------");

        for (r = 0; r < 10; r = r + 1) begin
            for (c = 0; c < 10; c = c + 1) begin
                idx = r * 10 + c;

                if (idx == 0)
                    $write("S ");
                else if (idx == 99)
                    $write("T ");
                else if (grid_flat[idx])
                    $write(". ");
                else
                    $write("# ");
            end
            $write("\n");
        end
    end
    endtask

    task print_maze_with_path;
        input logic [31:0] g0, g1, g2, g3;
        input logic [7:0] path_len;
        input logic [31:0] w0, w1, w2, w3, w4, w5, w6;

        logic [127:0] grid_flat;
        logic [223:0] path_bits;
        logic [99:0] path_cells;
        logic [1:0] move_bits;

        integer r, c, idx;
        integer cur_row, cur_col;
        integer step;
    begin
        grid_flat  = {g3, g2, g1, g0};
        path_bits  = {w6, w5, w4, w3, w2, w1, w0};
        path_cells = 100'd0;

        cur_row = 0;
        cur_col = 0;
        path_cells[0] = 1'b1;

        for (step = 0; step < path_len; step = step + 1) begin
            move_bits = path_bits[step*2 +: 2];

            case (move_bits)
                2'b00: cur_row = cur_row - 1; // UP
                2'b01: cur_row = cur_row + 1; // DOWN
                2'b10: cur_col = cur_col - 1; // LEFT
                2'b11: cur_col = cur_col + 1; // RIGHT
                default: ;
            endcase

            if (cur_row >= 0 && cur_row < 10 && cur_col >= 0 && cur_col < 10)
                path_cells[cur_row*10 + cur_col] = 1'b1;
        end

        $display("");
        $display("TARGET MAZE WITH PATH");
        $display("---------------------");

        for (r = 0; r < 10; r = r + 1) begin
            for (c = 0; c < 10; c = c + 1) begin
                idx = r * 10 + c;

                if (idx == 0)
                    $write("S ");
                else if (idx == 99)
                    $write("T ");
                else if (path_cells[idx])
                    $write("* ");
                else if (grid_flat[idx])
                    $write(". ");
                else
                    $write("# ");
            end
            $write("\n");
        end
    end
    endtask

    initial begin
        clk = 0;
        rst = 1;
        start_run = 0;
        seed = 16'h3456;

        #20;
        rst = 0;
        @(posedge clk);

        pulse_start_run();
        wait_run_done();

        $display("TOP TEST DONE");
        $display("target_id=%0d", target_id);
        $display("target_valid=%0d target_path_len=%0d", target_valid, target_path_len);
        $display("target_path_word0=%h", target_path_word0);
        $display("target_path_word1=%h", target_path_word1);
        $display("target_path_word2=%h", target_path_word2);
        $display("target_path_word3=%h", target_path_word3);
        $display("target_path_word4=%h", target_path_word4);
        $display("target_path_word5=%h", target_path_word5);
        $display("target_path_word6=%h", target_path_word6);

        print_maze(
            target_grid0,
            target_grid1,
            target_grid2,
            target_grid3
        );

        print_path(
            target_path_len,
            target_path_word0,
            target_path_word1,
            target_path_word2,
            target_path_word3,
            target_path_word4,
            target_path_word5,
            target_path_word6
        );

        print_maze_with_path(
            target_grid0,
            target_grid1,
            target_grid2,
            target_grid3,
            target_path_len,
            target_path_word0,
            target_path_word1,
            target_path_word2,
            target_path_word3,
            target_path_word4,
            target_path_word5,
            target_path_word6
        );

        if (target_valid !== 1'b1) begin
            $error("Top-level should capture one valid target path");
        end

        $display("tb_maze_system_top finished");
        #20;
        $finish;
    end

endmodule