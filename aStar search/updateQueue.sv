module updateQueue #(
    parameter DATA_WIDTH = 8,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH,
    parameter G_SCORE_WIDTH = 7,
    parameter GOAL_CELL_COL = 9,
    parameter GOAL_CELL_ROW = 9
) (
    input logic clk,
    input logic [G_SCORE_WIDTH-1:0] g_score,
    input logic [DATA_WIDTH-1:0] data_in,
    output logic [DATA_WIDTH-1:0] data_out
);

    localparam F_SCORE_WIDTH = 8;
    localparam F_SCORE = DATA_WIDTH - CELL_WIDTH;
    localparam H_SCORE_WIDTH = 7;
    localparam H_SCORE = F_SCORE - F_SCORE_WIDTH;

    function logic [H_SCORE_WIDTH-1:0] getHScore(logic [DATA_WIDTH-1:0] entry);
        return (abs(entry[DATA_WIDTH-1:DATA_WIDTH-CELL_COLUMN_WIDTH] - GOAL_CELL_COL) + abs(entry[DATA_WIDTH-CELL_WIDTH-1:DATA_WIDTH-CELL_WIDTH-CELL_ROW_WIDTH] - GOAL_CELL_ROW));
    endfunction

    function logic [F_SCORE_WIDTH-1:0] getFScore(logic [DATA_WIDTH-1:0] entry);
        return g_score + getHScore(entry);
    endfunction

    function logic [DATA_WIDTH-1:0] updateQueueEntry(logic [DATA_WIDTH-1:0] entry);
        if(entry[0] == 1'b1) begin
            return data_in;
        end else begin
            logic [DATA_WIDTH-1:0] updated_entry;
            updated_entry[H_SCORE-1:H_SCORE-H_SCORE_WIDTH] = getHScore(entry);
            updated_entry[F_SCORE-1:F_SCORE-F_SCORE_WIDTH] = getFScore(entry);
            return updated_entry;
        end
    endfunction
    
    always_ff @(posedge clk) begin
        data_out <= updateQueueEntry(data_in);
    end

endmodule
