module astar_top (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic        maze [0:99],        // 1 = wall, 0 = free

    output logic [3:0]  path [0:98],        // output path (4-bit directions)
    output logic [6:0]  path_length,
    output logic        path_ready,
    output logic        no_path
);

    // Constants
    localparam logic [3:0] END_ROW = 4'd0;
    localparam logic [3:0] END_COL = 4'd9;
    localparam int         PQ_SIZE = 100;

    // Internal signals

    // FSM signals
    logic [1:0] state;
    logic       init_en, update_en, move_en, backtrace_en;

    // Init block signals
    logic       init_done;
    logic [6:0] init_g_write_index;
    logic [6:0] init_g_write_val;
    logic       init_g_write_en;
    logic [3:0] init_pointer_row, init_pointer_col;

    // Update block signals
    logic       update_done;
    logic       pq_insert_en;
    logic [3:0] pq_insert_row, pq_insert_col;
    logic [7:0] pq_insert_f;
    logic [6:0] pq_insert_h;

    // Move done signal
    logic       move_done;

    // Backtrace signals
    logic       backtrace_done;
    logic [6:0] bt_path_write_index;
    logic [3:0] bt_path_write_data;
    logic       bt_path_write_en;
    logic [6:0] bt_path_length;

    // Priority queue storage 
    logic [3:0] pq_row   [0:PQ_SIZE-1];
    logic [3:0] pq_col   [0:PQ_SIZE-1];
    logic [7:0] pq_f     [0:PQ_SIZE-1];
    logic [6:0] pq_h     [0:PQ_SIZE-1];
    logic       pq_valid [0:PQ_SIZE-1];

    // Extract min: find valid entry with lowest f, tiebreak on lowest h
    logic [7:0] min_f;
    logic [6:0] min_h;
    logic [3:0] min_row, min_col;
    logic [6:0] min_index;
    logic       queue_empty;

    always_comb begin
        min_f       = 8'hFF;
        min_h       = 7'h7F;
        min_row     = 4'd0;
        min_col     = 4'd0;
        min_index   = 7'd0;
        queue_empty = 1'b1;

        for (int i = 0; i < PQ_SIZE; i++) begin
            if (pq_valid[i]) begin
                queue_empty = 1'b0;
                if ((pq_f[i] < min_f) || (pq_f[i] == min_f && pq_h[i] < min_h)) begin
                    min_f     = pq_f[i];
                    min_h     = pq_h[i];
                    min_row   = pq_row[i];
                    min_col   = pq_col[i];
                    min_index = i[6:0];
                end
            end
        end
    end

    // Find first empty slot for insertion
    logic [6:0] empty_slot;
    logic       slot_found;

    always_comb begin
        empty_slot = 7'd0;
        slot_found = 1'b0;
        for (int i = 0; i < PQ_SIZE; i++) begin
            if (!pq_valid[i] && !slot_found) begin
                empty_slot = i[6:0];
                slot_found = 1'b1;
            end
        end
    end

    // Priority queue write logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < PQ_SIZE; i++)
                pq_valid[i] <= 1'b0;
        end
        else begin
            case (state)
                2'b00: begin  // IDLE: clear queue during init
                    if (init_en) begin
                        for (int i = 0; i < PQ_SIZE; i++)
                            pq_valid[i] <= 1'b0;
                    end
                end

                2'b01: begin  // UPDATE: insert from update block
                    if (pq_insert_en && slot_found) begin
                        pq_row[empty_slot]   <= pq_insert_row;
                        pq_col[empty_slot]   <= pq_insert_col;
                        pq_f[empty_slot]     <= pq_insert_f;
                        pq_h[empty_slot]     <= pq_insert_h;
                        pq_valid[empty_slot] <= 1'b1;
                    end
                end

                2'b10: begin  // MOVE: invalidate extracted min
                    if (!queue_empty)
                        pq_valid[min_index] <= 1'b0;
                end

                default: ;
            endcase
        end
    end

    // Heuristic from extracted position (to compute g = f - h)
    logic [6:0] extracted_h;
    assign extracted_h = ((min_row > END_ROW) ? (min_row - END_ROW) : (END_ROW - min_row))
                       + ((min_col > END_COL) ? (min_col - END_COL) : (END_COL - min_col));

    // Pointer registers
    logic [3:0] pointer_row, pointer_col;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            pointer_row <= 4'd0;
            pointer_col <= 4'd0;
        end
        else begin
            case (state)
                2'b00: begin  // IDLE — init drives pointer
                    if (init_en && init_done) begin
                        pointer_row <= init_pointer_row;
                        pointer_col <= init_pointer_col;
                    end
                end
                2'b10: begin  // MOVE — extract min drives pointer
                    if (!queue_empty) begin
                        pointer_row <= min_row;
                        pointer_col <= min_col;
                    end
                end
                default: ;
            endcase
        end
    end

    // G-score table 
    logic [6:0] g_score_table [0:99];

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < 100; i++)
                g_score_table[i] <= 7'd127;
        end
        else begin
            case (state)
                2'b00: begin  // IDLE — init block writes one entry per cycle
                    if (init_g_write_en)
                        g_score_table[init_g_write_index] <= init_g_write_val;
                end
                2'b10: begin  // MOVE — update g-score at extracted position
                    if (!queue_empty)
                        g_score_table[min_row * 10 + min_col] <= min_f - extracted_h;
                end
                default: ;
            endcase
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

    // MOVE logic
    assign move_done = move_en && !queue_empty;


    // FSM
    astar_fsm fsm_inst (
        .clk            (clk),
        .rst            (rst),
        .start          (start),
        .pointer_row    (pointer_row),
        .pointer_col    (pointer_col),
        .init_done      (init_done),
        .update_done    (update_done),
        .move_done      (move_done),
        .backtrace_done (backtrace_done),
        .queue_empty    (queue_empty),
        .state          (state),
        .init_en        (init_en),
        .update_en      (update_en),
        .move_en        (move_en),
        .backtrace_en   (backtrace_en),
        .path_ready     (path_ready),
        .no_path        (no_path)
    );

    // Init block
    astar_init init_inst (
        .clk            (clk),
        .rst            (rst),
        .init_en        (init_en),
        .g_write_index  (init_g_write_index),
        .g_write_val    (init_g_write_val),
        .g_write_en     (init_g_write_en),
        .pointer_row    (init_pointer_row),
        .pointer_col    (init_pointer_col),
        .init_done      (init_done)
    );


    // Update block (partner's module — placeholder interface)
    update_block update_inst (
        .clk            (clk),
        .rst            (rst),
        .update_en      (update_en),
        .maze           (maze),
        .pointer_row    (pointer_row),
        .pointer_col    (pointer_col),
        .g_score_table  (g_score_table),
        .pq_insert_en   (pq_insert_en),
        .pq_insert_row  (pq_insert_row),
        .pq_insert_col  (pq_insert_col),
        .pq_insert_f    (pq_insert_f),
        .pq_insert_h    (pq_insert_h),
        .update_done    (update_done)
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