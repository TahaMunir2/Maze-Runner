module update_block (
    input  logic        clk,
    input  logic        rst,
    input  logic        update_en,
    input  logic        maze [0:99],
    input  logic [3:0]  pointer_row,
    input  logic [3:0]  pointer_col,
    input  logic [6:0]  g_score_table [0:99],

    output logic        pq_insert_en,
    output logic [3:0]  pq_insert_row,
    output logic [3:0]  pq_insert_col,
    output logic [7:0]  pq_insert_f,
    output logic [6:0]  pq_insert_h,
    output logic        update_done
);

    // Goal position for heuristic calculation
    localparam logic [3:0] END_ROW = 4'd0;
    localparam logic [3:0] END_COL = 4'd9;

    // Direction counter: 0=UP, 1=DOWN, 2=LEFT, 3=RIGHT
    logic [1:0] dir_counter;

    // State: 0 = idle, 1 = checking neighbors, 2 = done
    logic [1:0] update_state;

    // Current neighbor being evaluated
    logic [3:0] nb_row, nb_col;
    logic       nb_in_bounds, nb_not_wall, nb_not_visited;
    logic [6:0] nb_g, nb_h;
    logic [7:0] nb_f;
    logic [6:0] parent_g;

    // Parent g-score
    assign parent_g = g_score_table[pointer_row * 10 + pointer_col];

    // Compute neighbor position based on direction
    always_comb begin
        nb_row = pointer_row;
        nb_col = pointer_col;

        case (dir_counter)
            2'd0: nb_row = pointer_row - 1;  // UP
            2'd1: nb_row = pointer_row + 1;  // DOWN
            2'd2: nb_col = pointer_col - 1;  // LEFT
            2'd3: nb_col = pointer_col + 1;  // RIGHT
        endcase
    end

    // Bounds checking
    always_comb begin
        case (dir_counter)
            2'd0: nb_in_bounds = (pointer_row > 0);
            2'd1: nb_in_bounds = (pointer_row < 9);
            2'd2: nb_in_bounds = (pointer_col > 0);
            2'd3: nb_in_bounds = (pointer_col < 9);
        endcase
    end

    // Wall check
    assign nb_not_wall = nb_in_bounds && !maze[nb_row * 10 + nb_col];

    // Visited check: if g-score is still 127, not visited
    assign nb_not_visited = nb_in_bounds && (g_score_table[nb_row * 10 + nb_col] == 7'd127);

    // Compute g, h, f for this neighbor
    assign nb_g = parent_g + 1;
    assign nb_h = ((nb_row > END_ROW) ? (nb_row - END_ROW) : (END_ROW - nb_row))
                + ((nb_col > END_COL) ? (nb_col - END_COL) : (END_COL - nb_col));
    assign nb_f = nb_g + nb_h;

    // Valid neighbor: in bounds, not a wall, not visited
    logic nb_valid;
    assign nb_valid = nb_in_bounds && nb_not_wall && nb_not_visited;

    // Sequential logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            dir_counter   <= 2'd0;
            update_state  <= 2'd0;
            pq_insert_en  <= 1'b0;
            pq_insert_row <= 4'd0;
            pq_insert_col <= 4'd0;
            pq_insert_f   <= 8'd0;
            pq_insert_h   <= 7'd0;
            update_done   <= 1'b0;
        end
        else begin
            case (update_state)
                // Idle: wait for update_en
                2'd0: begin
                    update_done  <= 1'b0;
                    pq_insert_en <= 1'b0;

                    if (update_en) begin
                        dir_counter  <= 2'd0;
                        update_state <= 2'd1;
                    end
                end

                // Check each neighbor (one per cycle)
                2'd1: begin
                    if (nb_valid) begin
                        pq_insert_en  <= 1'b1;
                        pq_insert_row <= nb_row;
                        pq_insert_col <= nb_col;
                        pq_insert_f   <= nb_f;
                        pq_insert_h   <= nb_h;
                    end
                    else begin
                        pq_insert_en <= 1'b0;
                    end

                    if (dir_counter == 2'd3) begin
                        update_state <= 2'd2;
                    end
                    else begin
                        dir_counter <= dir_counter + 1;
                    end
                end

                // Done
                2'd2: begin
                    pq_insert_en <= 1'b0;
                    update_done  <= 1'b1;

                    if (!update_en) begin
                        update_done  <= 1'b0;
                        update_state <= 2'd0;
                    end
                end
            endcase
        end
    end

endmodule