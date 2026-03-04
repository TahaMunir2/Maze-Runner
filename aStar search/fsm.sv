module astar_fsm (
    input  logic        clk,
    input  logic        rst,
    input  logic        start,
    input  logic        update_done,
    input  logic        backtrace_done,
    input  logic        end_reached,

    output logic [1:0]  state,
    output logic        update_en,
    output logic        backtrace_en,
    output logic        path_ready,
    output logic        no_path
);

    // State encoding
    enum logic [1:0] {IDLE, UPDATE, BACKTRACING} current_state, next_state;

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
                    next_state = UPDATE;
            end

            UPDATE: begin
                if (end_reached)
                    next_state = BACKTRACING;
            end

            BACKTRACING: begin
                if (backtrace_done)
                    next_state = IDLE;
            end
        endcase
    end

    // Output logic
    assign state        = current_state;
    assign update_en    = (current_state == UPDATE);
    assign backtrace_en = (current_state == BACKTRACING);
    assign path_ready   = (current_state == BACKTRACING) && backtrace_done;

endmodule