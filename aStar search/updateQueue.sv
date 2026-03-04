module updateQueue #(
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter G_SCORE_WIDTH = 7,
    parameter GOAL_CELL_COL = 9,
    parameter GOAL_CELL_ROW = 9,
    parameter F_SCORE_WIDTH = 8,
    parameter H_SCORE_WIDTH = 7,
    parameter DATA_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH + F_SCORE_WIDTH + H_SCORE_WIDTH,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH
) (
    input logic clk,
    input logic rst,
    input logic update_en,
    input logic [G_SCORE_WIDTH-1:0] g_score,
    input logic [CELL_WIDTH-1:0] cell_N_in,
    input logic [CELL_WIDTH-1:0] cell_E_in,
    input logic [CELL_WIDTH-1:0] cell_S_in,
    input logic [CELL_WIDTH-1:0] cell_W_in,
    output logic [DATA_WIDTH-1:0] packet_N_out,
    output logic [DATA_WIDTH-1:0] packet_E_out,
    output logic [DATA_WIDTH-1:0] packet_S_out,
    output logic [DATA_WIDTH-1:0] packet_W_out,
    output logic write_en
);
    localparam F_SCORE = DATA_WIDTH - CELL_WIDTH;
    localparam H_SCORE = F_SCORE - F_SCORE_WIDTH;

    function logic [H_SCORE_WIDTH-1:0] getHScore(logic [DATA_WIDTH-1:0] entry);
        return (abs(entry[DATA_WIDTH-1:DATA_WIDTH-CELL_COLUMN_WIDTH] - GOAL_CELL_COL) + abs(entry[DATA_WIDTH-CELL_WIDTH-1:DATA_WIDTH-CELL_WIDTH-CELL_ROW_WIDTH] - GOAL_CELL_ROW));
    endfunction

    function logic [F_SCORE_WIDTH-1:0] getFScore(logic [DATA_WIDTH-1:0] entry);
        return g_score + getHScore(entry);
    endfunction

    function logic [DATA_WIDTH-1:0] updateQueueEntry(logic [CELL_WIDTH-1:0] cell_in);
            logic [DATA_WIDTH-1:0] updated_entry;
            updated_entry[DATA_WIDTH-1:DATA_WIDTH-CELL_COLUMN_WIDTH] = cell_in[CELL_WIDTH-1:CELL_WIDTH-CELL_COLUMN_WIDTH];
            updated_entry[DATA_WIDTH-CELL_COLUMN_WIDTH-1:DATA_WIDTH-CELL_WIDTH] = cell_in[CELL_ROW_WIDTH:1];
            updated_entry[H_SCORE-1:H_SCORE-H_SCORE_WIDTH] = getHScore(cell_in);
            updated_entry[F_SCORE-1:F_SCORE-F_SCORE_WIDTH] = getFScore(cell_in);
            return updated_entry;
    endfunction
    
    always_ff @(posedge clk) begin
        if(rst || !update_en) begin
            packet_N_out <= '0;
            packet_E_out <= '0;
            packet_S_out <= '0;
            packet_W_out <= '0;
            write_en <= 1'b0;
        end else begin
            packet_N_out <= updateQueueEntry(cell_N_in);
            packet_E_out <= updateQueueEntry(cell_E_in);
            packet_S_out <= updateQueueEntry(cell_S_in);
            packet_W_out <= updateQueueEntry(cell_W_in);
            write_en <= 1'b1;
        end
    end

endmodule