module astar_top #(
    parameter MAZE_COLS = 10,
    parameter MAZE_ROWS = 10,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH,
    parameter G_SCORE_WIDTH = 7,
    parameter F_SCORE_WIDTH = 8,
    parameter H_SCORE_WIDTH = 7
    parameter GOAL_CELL_COL = 9,
    parameter GOAL_CELL_ROW = 9
) (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic        maze [0:99],        // 1 = wall, 0 = free

    output logic [3:0]  path [0:98],        // output path (4-bit directions)
    output logic [6:0]  path_length,
    output logic        path_ready,
    output logic        no_path
);


    // Internal signals

    // FSM signals
    logic [1:0] state;
    logic       update_en, backtrace_en;

    // min_cell
    logic [CELL_WIDTH-1:0] min_cell;

    // Backtrace signals
    logic       backtrace_done;
    logic [6:0] bt_path_write_index;
    logic [3:0] bt_path_write_data;
    logic       bt_path_write_en;
    logic [6:0] bt_path_length;

    // G-score table 
    logic [G_SCORE_WIDTH-1:0] g_score_table [0:MAZE_COLS*MAZE_ROWS-1];
    logic [G_SCORE_WIDTH-1:0] g_score_cur;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            g_score_cur <= '0;
            for (int i = 0; i < MAZE_COLS * MAZE_ROWS; i++)
                g_score_table[i] <= {G_SCORE_WIDTH{1'b1}};
        end
        else if(update_en) begin
            g_score_table[min_cell[CELL_WIDTH-1:CELL_COLUMN_WIDTH] * MAZE_COLS + min_cell[CELL_COLUMN_WIDTH-1:0]] <= g_score_cur;
        end
    end

    // Path array
    assign path_length = bt_path_length;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < 99; i++)
                path[i] <= 4'b0000;
        end
        else begin
            if (bt_path_write_en)
                path[bt_path_write_index] <= bt_path_write_data;
        end
    end


    // FSM
    astar_fsm fsm_inst (
        .clk            (clk),
        .rst            (rst),
        .update_done    (update_done),
        .backtrace_done (backtrace_done),
        .queue_empty    (queue_empty),
        .end_reached    (end_reached),

        .state          (state),
        .update_en      (update_en),
        .backtrace_en   (backtrace_en),
        .path_ready     (path_ready),
        .no_path        (no_path)
    );

    loop_queue #(
        .CELL_COLUMN_WIDTH(CELL_COLUMN_WIDTH),
        .CELL_ROW_WIDTH(CELL_ROW_WIDTH),
        .CELL_WIDTH(CELL_WIDTH),
        .G_SCORE_WIDTH(G_SCORE_WIDTH),
        .F_SCORE_WIDTH(F_SCORE_WIDTH),
        .H_SCORE_WIDTH(H_SCORE_WIDTH)
    ) loop_queue_inst (
        .clk            (clk),
        .rst            (rst),
        .packet_N_in    (packet_N_out_N),
        .packet_E_in    (packet_E_out_E),
        .packet_S_in    (packet_S_out_S),
        .packet_W_in    (packet_W_out_W),
        .g_score        (g_score_cur),
        .write_en       (write_en),
        .end_cell       ({GOAL_CELL_COL, GOAL_CELL_ROW}),
        .cell_out       (min_cell),
        .g_score_out    (g_score_cur),
        .end_reached    (end_reached)
    );

    update_queue #(
        .CELL_COLUMN_WIDTH(CELL_COLUMN_WIDTH),
        .CELL_ROW_WIDTH(CELL_ROW_WIDTH),
        .CELL_WIDTH(CELL_WIDTH),
        .G_SCORE_WIDTH(G_SCORE_WIDTH),
        .F_SCORE_WIDTH(F_SCORE_WIDTH),
        .H_SCORE_WIDTH(H_SCORE_WIDTH),
        .GOAL_CELL_COL(GOAL_CELL_COL),
        .GOAL_CELL_ROW(GOAL_CELL_ROW)
    ) update_queue_inst (
        .clk            (clk),
        .rst            (rst),
        .update_en      (update_en),
        .g_score        (g_score_cur),
        .cell_N_in      (cell_N_in),
        .cell_E_in      (cell_E_in),
        .cell_S_in      (cell_S_in),
        .cell_W_in      (cell_W_in),
        .packet_N_out   (packet_N_out_N),
        .packet_E_out   (packet_E_out_E),
        .packet_S_out   (packet_S_out_S),
        .packet_W_out   (packet_W_out_W),
        .write_en       (write_en)
    );

    detect_neighbors #(
        .MAZE_COLS(MAZE_COLS),
        .MAZE_ROWS(MAZE_ROWS),
        .CELL_COLUMN_WIDTH(CELL_COLUMN_WIDTH),
        .CELL_ROW_WIDTH(CELL_ROW_WIDTH)
    ) detect_neighbors_inst (
        .clk        (clk),
        .rst        (rst),
        .cell_in    (min_cell),
        .maze       (maze),
        .cell_N_out (cell_N_in),
        .cell_E_out (cell_E_in),
        .cell_S_out (cell_S_in),
        .cell_W_out (cell_W_in)
    );


    // Backtrace block
    backtrace backtrace_inst (
        .clk              (clk),
        .rst              (rst),
        .backtrace_en     (backtrace_en),
        .g_score_table    (g_score_table),
        .path_write_index (bt_path_write_index),
        .path_write_data  (bt_path_write_data),
        .path_write_en    (bt_path_write_en),
        .path_length      (bt_path_length),
        .backtrace_done   (backtrace_done)
    );

endmodule