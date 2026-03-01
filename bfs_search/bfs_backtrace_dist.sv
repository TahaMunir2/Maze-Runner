module bfs_backtrace_dist (
    input  logic        clk,
    input  logic        rst,
    input  logic        bt_en,

    input  logic        maze [0:99],          // 1=wall, 0=free
    input  logic [6:0]  dist_table [0:99],

    output logic [6:0]  path_write_index,
    output logic [3:0]  path_write_data,
    output logic        path_write_en,
    output logic [6:0]  path_length,
    output logic        bt_done,
    output logic        bt_no_path
);

    localparam logic [6:0] INF = 7'd127;

    localparam logic [3:0] UP    = 4'b0001;
    localparam logic [3:0] DOWN  = 4'b0010;
    localparam logic [3:0] LEFT  = 4'b0100;
    localparam logic [3:0] RIGHT = 4'b1000;

    localparam logic [3:0] START_ROW = 4'd9;
    localparam logic [3:0] START_COL = 4'd0;
    localparam logic [3:0] GOAL_ROW  = 4'd0;
    localparam logic [3:0] GOAL_COL  = 4'd9;

    function automatic [6:0] idx10(input [3:0] r, input [3:0] c);
        idx10 = (r * 7'd10) + c;
    endfunction

    typedef enum logic [1:0] {S_IDLE, S_CHECK, S_STEP, S_DONE} st_t;
    st_t st;

    logic [3:0] cur_r, cur_c;
    logic [6:0] cur_d;
    logic [6:0] wptr;

    logic [31:0] bt_cycles;
    logic        bt_printed;

    always_ff @(posedge clk or posedge rst) begin
      if (rst) begin
        bt_cycles <= 0;
        bt_printed <= 0;
      end else begin
        if (!bt_en) begin
          bt_cycles <= 0;
          bt_printed <= 0;
        end else begin
          bt_cycles <= bt_cycles + 1;
        end
      end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            st <= S_IDLE;
            bt_done <= 1'b0;
            bt_no_path <= 1'b0;
            path_write_en <= 1'b0;
            path_write_index <= 0;
            path_write_data <= 0;
            path_length <= 0;
            cur_r <= 0; cur_c <= 0;
            cur_d <= INF;
            wptr <= 0;
        end else begin
            bt_done <= 1'b0;
            path_write_en <= 1'b0;

            case (st)
                S_IDLE: begin
                    bt_no_path <= 1'b0;
                    if (bt_en) begin
                        cur_r <= START_ROW;
                        cur_c <= START_COL;
                        st <= S_CHECK;
                    end
                end

                S_CHECK: begin
                    cur_d <= dist_table[idx10(cur_r, cur_c)];
                    if (dist_table[idx10(cur_r, cur_c)] == INF || maze[idx10(cur_r, cur_c)]) begin
                        bt_no_path <= 1'b1;
                        path_length <= 0;
                        st <= S_DONE;
                    end else begin
                        path_length <= dist_table[idx10(cur_r, cur_c)];
                        wptr <= 0;
                        st <= S_STEP;
                    end
                end

                S_STEP: begin
                    if (cur_d == 0) begin
                        st <= S_DONE;
                    end else begin
                        logic moved;
                        moved = 1'b0;

                        if (!moved && cur_r > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(cur_r-1, cur_c);
                            if (!maze[nidx] && dist_table[nidx] == cur_d-1) begin
                                path_write_en <= 1'b1;
                                path_write_index <= wptr;
                                path_write_data <= UP;
                                cur_r <= cur_r-1;
                                cur_d <= cur_d-1;
                                wptr <= wptr+1;
                                moved = 1'b1;
                            end
                        end
                        if (!moved && cur_c < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(cur_r, cur_c+1);
                            if (!maze[nidx] && dist_table[nidx] == cur_d-1) begin
                                path_write_en <= 1'b1;
                                path_write_index <= wptr;
                                path_write_data <= RIGHT;
                                cur_c <= cur_c+1;
                                cur_d <= cur_d-1;
                                wptr <= wptr+1;
                                moved = 1'b1;
                            end
                        end
                        if (!moved && cur_r < 9) begin
                            logic [6:0] nidx;
                            nidx = idx10(cur_r+1, cur_c);
                            if (!maze[nidx] && dist_table[nidx] == cur_d-1) begin
                                path_write_en <= 1'b1;
                                path_write_index <= wptr;
                                path_write_data <= DOWN;
                                cur_r <= cur_r+1;
                                cur_d <= cur_d-1;
                                wptr <= wptr+1;
                                moved = 1'b1;
                            end
                        end
                        if (!moved && cur_c > 0) begin
                            logic [6:0] nidx;
                            nidx = idx10(cur_r, cur_c-1);
                            if (!maze[nidx] && dist_table[nidx] == cur_d-1) begin
                                path_write_en <= 1'b1;
                                path_write_index <= wptr;
                                path_write_data <= LEFT;
                                cur_c <= cur_c-1;
                                cur_d <= cur_d-1;
                                wptr <= wptr+1;
                                moved = 1'b1;
                            end
                        end

                        if (!moved) begin
                            bt_no_path <= 1'b1;
                            path_length <= 0;
                            st <= S_DONE;
                        end
                    end
                end

                S_DONE: begin
                    bt_done <= 1'b1;

                    // print once when done (simulation-only)
                    if (!bt_printed) begin
                      $display("BACKTRACE cycles: %0d", bt_cycles);
                      bt_printed <= 1'b1;
                    end

                    if (!bt_en) st <= S_IDLE;
                end
            endcase
        end
    end

endmodule
