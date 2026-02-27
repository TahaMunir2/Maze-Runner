module astar_init (
    input  logic        clk,
    input  logic        rst,
    input  logic        init_en,

    output logic [6:0]  g_write_index,
    output logic [6:0]  g_write_val,
    output logic        g_write_en,
    output logic [3:0]  pointer_row,
    output logic [3:0]  pointer_col,
    output logic        init_done
);

    // Start position: bottom left corner
    localparam logic [3:0] START_ROW = 4'd9;
    localparam logic [3:0] START_COL = 4'd0;

    // Counter to iterate through 100 entries
    logic [6:0] counter;

    // State: 0 = idle, 1 = clearing, 2 = done
    logic [1:0] init_state;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            counter      <= 7'd0;
            init_state   <= 2'd0;
            init_done    <= 1'b0;
            g_write_en   <= 1'b0;
            g_write_index <= 7'd0;
            g_write_val  <= 7'd0;
            pointer_row  <= 4'd0;
            pointer_col  <= 4'd0;
        end
        else begin
            case (init_state)
                // Waiting for init_en
                2'd0: begin
                    init_done  <= 1'b0;
                    g_write_en <= 1'b0;
                    if (init_en) begin
                        counter    <= 7'd0;
                        init_state <= 2'd1;
                    end
                end

                // Writing g-score table one entry per cycle
                2'd1: begin
                    g_write_en    <= 1'b1;
                    g_write_index <= counter;

                    if (counter == START_ROW * 10 + START_COL)
                        g_write_val <= 7'd0;       // start cell = 0
                    else
                        g_write_val <= 7'd127;     // all others = 127

                    if (counter == 7'd99) begin
                        pointer_row <= START_ROW;
                        pointer_col <= START_COL;
                        init_done   <= 1'b1;
                        init_state  <= 2'd2;
                    end
                    else begin
                        counter <= counter + 1;
                    end
                end

                // Done, wait for init_en to drop
                2'd2: begin
                    g_write_en <= 1'b0;
                    if (!init_en) begin
                        init_done  <= 1'b0;
                        init_state <= 2'd0;
                    end
                end
            endcase
        end
    end

endmodule