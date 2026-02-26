module loopQueue #(
    parameter DATA_WIDTH = CELL_WIDTH + F_SCORE_WIDTH + H_SCORE_WIDTH,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH + 1,
    parameter G_SCORE_WIDTH = 7,
    parameter GOAL_CELL_COL = 9,
    parameter GOAL_CELL_ROW = 9
    parameter F_SCORE_WIDTH = 8;
    parameter F_SCORE = DATA_WIDTH - CELL_WIDTH;
    parameter H_SCORE_WIDTH = 7;
    parameter H_SCORE = F_SCORE - F_SCORE_WIDTH;
) (
    input logic clk,
    input logic [DATA_WIDTH-1:0] packet_N_in,
    input logic [DATA_WIDTH-1:0] packet_E_in,
    input logic [DATA_WIDTH-1:0] packet_S_in,
    input logic [DATA_WIDTH-1:0] packet_W_in,
    input logic [G_SCORE_WIDTH-1:0] g_score,
    input logic write_en,
    output logic [CELL_WIDTH-1:0] cell_out,
    output logic [G_SCORE_WIDTH-1:0] g_score_out
);
    
    logic [DATA_WIDTH-1:0] queue [$];
    logic [DATA_WIDTH-1:0] lowest_cost;

    always_ff @(posedge clk) begin
        if(write_en) begin
            if(packet_N_in[0] != 0) begin
                queue.push_front(packet_N_in);
            end
            if(packet_E_in[0] != 0) begin
                queue.push_front(packet_E_in);
            end
            if(packet_S_in[0] != 0) begin
                queue.push_front(packet_S_in);
            end
            if(packet_W_in[0] != 0) begin
                queue.push_front(packet_W_in);
            end
            g_score_out <= g_score + 1'b1;
        end else begin
            g_score_out <= g_score;
        end
    end

    always_comb begin : findLowestCost

        for(int i = 0; i < queue.size(); i++) begin
            if(i == 0) begin
                lowest_cost = queue[i];
            end else if(queue[i][F_SCORE-1:F_SCORE-F_SCORE_WIDTH] <= lowest_cost[F_SCORE-1:F_SCORE-F_SCORE_WIDTH] && queue[i][H_SCORE-1:H_SCORE-H_SCORE_WIDTH] < lowest_cost[H_SCORE-1:H_SCORE-H_SCORE_WIDTH]) begin
                lowest_cost = queue[i];
            end
        end

        cell_out = lowest_cost[CELL_WIDTH-1:0];
    end

endmodule
