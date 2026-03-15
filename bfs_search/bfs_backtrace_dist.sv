module bfs_backtrace_dist (
    input  logic        clk,
    input  logic        rst,
    input  logic        bt_en,

    input  logic        maze [0:99],
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

    function automatic [6:0] idx10(input [3:0] r, input [3:0] c);
        idx10 = (r * 7'd10) + c;
    endfunction

    typedef enum logic [2:0] {S_IDLE, S_CHECK, S_STEP, S_MOVE, S_DONE} st_t;
    st_t st;

    logic [3:0] cur_r, cur_c;
    logic [6:0] cur_d;
    logic [6:0] wptr;

    logic [6:0] nb_up_d, nb_rt_d, nb_dn_d, nb_lt_d;
    logic       nb_up_v, nb_rt_v, nb_dn_v, nb_lt_v;

    logic [31:0] bt_cycles;
    logic        bt_printed;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            bt_cycles  <= 32'd0;
            bt_printed <= 1'b0;
        end else begin
            if (!bt_en) begin
                bt_cycles  <= 32'd0;
                bt_printed <= 1'b0;
            end else begin
                bt_cycles <= bt_cycles + 1;
            end
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            st               <= S_IDLE;
            bt_done          <= 1'b0;
            bt_no_path       <= 1'b0;
            path_write_en    <= 1'b0;
            path_write_index <= 7'd0;
            path_write_data  <= 4'd0;
            path_length      <= 7'd0;
            cur_r            <= 4'd0;
            cur_c            <= 4'd0;
            cur_d            <= INF;
            wptr             <= 7'd0;
            nb_up_v <= 1'b0; nb_up_d <= INF;
            nb_rt_v <= 1'b0; nb_rt_d <= INF;
            nb_dn_v <= 1'b0; nb_dn_d <= INF;
            nb_lt_v <= 1'b0; nb_lt_d <= INF;
        end else begin
            bt_done       <= 1'b0;
            path_write_en <= 1'b0;

            case (st)

                S_IDLE: begin
                    bt_no_path <= 1'b0;
                    if (bt_en) begin
                        cur_r <= START_ROW;
                        cur_c <= START_COL;
                        st    <= S_CHECK;
                    end
                end

                S_CHECK: begin
                    cur_d <= dist_table[idx10(cur_r, cur_c)];
                    if (dist_table[idx10(cur_r, cur_c)] == INF ||
                        maze[idx10(cur_r, cur_c)]) begin
                        bt_no_path  <= 1'b1;
                        path_length <= 7'd0;
                        st          <= S_DONE;
                    end else begin
                        path_length <= dist_table[idx10(cur_r, cur_c)];
                        wptr        <= 7'd0;
                        st          <= S_STEP;
                    end
                end

                // Stage 1: read all 4 neighbours in parallel, no decisions
                S_STEP: begin
                    if (cur_d == 7'd0) begin
                        st <= S_DONE;
                    end else begin
                        if (cur_r > 0) begin
                            nb_up_v <= !maze[idx10(cur_r-4'd1, cur_c)];
                            nb_up_d <=  dist_table[idx10(cur_r-4'd1, cur_c)];
                        end else begin
                            nb_up_v <= 1'b0;
                            nb_up_d <= INF;
                        end
                        if (cur_c < 4'd9) begin
                            nb_rt_v <= !maze[idx10(cur_r, cur_c+4'd1)];
                            nb_rt_d <=  dist_table[idx10(cur_r, cur_c+4'd1)];
                        end else begin
                            nb_rt_v <= 1'b0;
                            nb_rt_d <= INF;
                        end
                        if (cur_r < 4'd9) begin
                            nb_dn_v <= !maze[idx10(cur_r+4'd1, cur_c)];
                            nb_dn_d <=  dist_table[idx10(cur_r+4'd1, cur_c)];
                        end else begin
                            nb_dn_v <= 1'b0;
                            nb_dn_d <= INF;
                        end
                        if (cur_c > 0) begin
                            nb_lt_v <= !maze[idx10(cur_r, cur_c-4'd1)];
                            nb_lt_d <=  dist_table[idx10(cur_r, cur_c-4'd1)];
                        end else begin
                            nb_lt_v <= 1'b0;
                            nb_lt_d <= INF;
                        end
                        st <= S_MOVE;
                    end
                end

                // Stage 2: decide using registered values, no dist_table reads
                S_MOVE: begin
                    if (nb_up_v && nb_up_d == cur_d - 7'd1) begin
                        path_write_en    <= 1'b1;
                        path_write_index <= wptr;
                        path_write_data  <= UP;
                        cur_r <= cur_r - 4'd1;
                        cur_d <= cur_d - 7'd1;
                        wptr  <= wptr  + 7'd1;
                        st    <= S_STEP;
                    end else if (nb_rt_v && nb_rt_d == cur_d - 7'd1) begin
                        path_write_en    <= 1'b1;
                        path_write_index <= wptr;
                        path_write_data  <= RIGHT;
                        cur_c <= cur_c + 4'd1;
                        cur_d <= cur_d - 7'd1;
                        wptr  <= wptr  + 7'd1;
                        st    <= S_STEP;
                    end else if (nb_dn_v && nb_dn_d == cur_d - 7'd1) begin
                        path_write_en    <= 1'b1;
                        path_write_index <= wptr;
                        path_write_data  <= DOWN;
                        cur_r <= cur_r + 4'd1;
                        cur_d <= cur_d - 7'd1;
                        wptr  <= wptr  + 7'd1;
                        st    <= S_STEP;
                    end else if (nb_lt_v && nb_lt_d == cur_d - 7'd1) begin
                        path_write_en    <= 1'b1;
                        path_write_index <= wptr;
                        path_write_data  <= LEFT;
                        cur_c <= cur_c - 4'd1;
                        cur_d <= cur_d - 7'd1;
                        wptr  <= wptr  + 7'd1;
                        st    <= S_STEP;
                    end else begin
                        bt_no_path  <= 1'b1;
                        path_length <= 7'd0;
                        st          <= S_DONE;
                    end
                end

                S_DONE: begin
                    bt_done <= 1'b1;
                    // synthesis translate_off
                    if (!bt_printed) begin
                        $display("BACKTRACE cycles: %0d", bt_cycles);
                        bt_printed <= 1'b1;
                    end
                    // synthesis translate_on
                    if (!bt_en) st <= S_IDLE;
                end

                default: st <= S_IDLE;

            endcase
        end
    end

endmodule