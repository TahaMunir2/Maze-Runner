module astar_fsm (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic [3:0]  pointer_row,
    input  logic [3:0]  pointer_col,
    input  logic        init_done,
    input  logic        update_done,
    input  logic        move_done,
    input  logic        backtrace_done,
    input  logic        queue_empty,

    output logic [1:0]  state,
    output logic        init_en,
    output logic        update_en,
    output logic        move_en,
    output logic        backtrace_en,
    output logic        path_ready,
    output logic        no_path
);

    // End point: top right corner of 10x10 grid
    localparam logic [3:0] END_ROW = 4'd0;
    localparam logic [3:0] END_COL = 4'd9;

    // State encoding
    localparam logic [1:0] IDLE       = 2'b00;
    localparam logic [1:0] UPDATE     = 2'b01;
    localparam logic [1:0] MOVE       = 2'b10;
    localparam logic [1:0] BACKTRACING = 2'b11;

    logic [1:0] current_state, next_state;

    // Track if start was pressed (hold init_en until init_done)
    logic init_active;

    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            init_active <= 1'b0;
        else if (current_state == IDLE && start)
            init_active <= 1'b1;
        else if (init_done)
            init_active <= 1'b0;
    end

    // Internal goal check
    logic pointer_at_goal;
    assign pointer_at_goal = (pointer_row == END_ROW) && (pointer_col == END_COL);

    // State register
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            current_state <= IDLE;
        else
            current_state <= next_state;
    end

    // Next state logic
    always_comb begin
        next_state = current_state;

        case (current_state)
            IDLE: begin
                if (init_active && init_done)
                    next_state = UPDATE;
            end

            UPDATE: begin
                if (update_done)
                    next_state = MOVE;
            end

            MOVE: begin
                if (pointer_at_goal)
                    next_state = BACKTRACING;
                else if (queue_empty)
                    next_state = IDLE;
                else if (move_done)
                    next_state = UPDATE;
            end

            BACKTRACING: begin
                if (backtrace_done)
                    next_state = IDLE;
            end
        endcase
    end

    // Output logic
    assign state        = current_state;
    assign init_en      = init_active;
    assign update_en    = (current_state == UPDATE);
    assign move_en      = (current_state == MOVE);
    assign backtrace_en = (current_state == BACKTRACING);
    assign path_ready   = (current_state == BACKTRACING) && backtrace_done;
    assign no_path      = (current_state == MOVE) && queue_empty;

endmodule