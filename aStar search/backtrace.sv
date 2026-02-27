module backtrace (
    input  logic        clk,
    input  logic        rst,
    input  logic        backtrace_en,
    input  logic [6:0]  g_score_table [0:99],

    output logic [6:0]  path_write_index,
    output logic [3:0]  path_write_data,
    output logic        path_write_en,
    output logic [6:0]  path_length,
    output logic        backtrace_done
);

    // Direction encoding (4-bit one-hot)
    localparam logic [3:0] UP    = 4'b0001;
    localparam logic [3:0] DOWN  = 4'b0010;
    localparam logic [3:0] LEFT  = 4'b0100;
    localparam logic [3:0] RIGHT = 4'b1000;

    // Goal position: top right corner
    localparam logic [3:0] END_ROW = 4'd0;
    localparam logic [3:0] END_COL = 4'd9;

    // Internal state
    logic [3:0] cur_row, cur_col;
    logic [6:0] cur_g;
    logic [6:0] write_ptr;

    // State: 0 = idle, 1 = tracing, 2 = done
    logic [1:0] bt_state;

    // Neighbor checking (combinational)
    logic found_up, found_down, found_left, found_right;

    assign found_up    = (cur_row > 0) &&
                         (g_score_table[(cur_row - 1) * 10 + cur_col] == cur_g - 1);
    assign found_down  = (cur_row < 9) &&
                         (g_score_table[(cur_row + 1) * 10 + cur_col] == cur_g - 1);
    assign found_left  = (cur_col > 0) &&
                         (g_score_table[cur_row * 10 + (cur_col - 1)] == cur_g - 1);
    assign found_right = (cur_col < 9) &&
                         (g_score_table[cur_row * 10 + (cur_col + 1)] == cur_g - 1);

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            bt_state         <= 2'd0;
            backtrace_done   <= 1'b0;
            path_length      <= 7'd0;
            path_write_en    <= 1'b0;
            path_write_index <= 7'd0;
            path_write_data  <= 4'b0000;
            cur_row          <= 4'd0;
            cur_col          <= 4'd0;
            cur_g            <= 7'd0;
            write_ptr        <= 7'd0;
        end
        else begin
            case (bt_state)
                // Idle: wait for backtrace_en
                2'd0: begin
                    backtrace_done <= 1'b0;
                    path_write_en  <= 1'b0;
                    if (backtrace_en) begin
                        cur_row     <= END_ROW;
                        cur_col     <= END_COL;
                        cur_g       <= g_score_table[END_ROW * 10 + END_COL];
                        write_ptr   <= g_score_table[END_ROW * 10 + END_COL] - 1;
                        path_length <= g_score_table[END_ROW * 10 + END_COL];
                        bt_state    <= 2'd1;
                    end
                end

                // Tracing: one step per cycle
                2'd1: begin
                    if (cur_g == 0) begin
                        bt_state       <= 2'd2;
                        backtrace_done <= 1'b1;
                        path_write_en  <= 1'b0;
                    end
                    else begin
                        path_write_en    <= 1'b1;
                        path_write_index <= write_ptr;

                        if (found_up) begin
                            path_write_data <= DOWN;    // forward: rover goes DOWN
                            cur_row         <= cur_row - 1;
                        end
                        else if (found_down) begin
                            path_write_data <= UP;      // forward: rover goes UP
                            cur_row         <= cur_row + 1;
                        end
                        else if (found_left) begin
                            path_write_data <= RIGHT;   // forward: rover goes RIGHT
                            cur_col         <= cur_col - 1;
                        end
                        else if (found_right) begin
                            path_write_data <= LEFT;    // forward: rover goes LEFT
                            cur_col         <= cur_col + 1;
                        end

                        cur_g     <= cur_g - 1;
                        write_ptr <= write_ptr - 1;
                    end
                end

                // Done: wait for backtrace_en to drop
                2'd2: begin
                    path_write_en <= 1'b0;
                    if (!backtrace_en) begin
                        backtrace_done <= 1'b0;
                        bt_state       <= 2'd0;
                    end
                end
            endcase
        end
    end

endmodule