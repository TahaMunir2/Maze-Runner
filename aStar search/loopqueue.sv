module loopQueue #(
    parameter DATA_WIDTH = 8,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH,
    parameter GOAL_CELL_COL = 9,
    parameter GOAL_CELL_ROW = 9
) (
    input logic clk,
    input logic [DATA_WIDTH-1:0] data_in,
    input logic write_en,
    output logic [DATA_WIDTH-1:0] data_out
);
    localparam F_SCORE_WIDTH = 8;
    localparam F_SCORE = DATA_WIDTH - CELL_WIDTH;
    localparam H_SCORE_WIDTH = 7;
    localparam H_SCORE = F_SCORE - F_SCORE_WIDTH;
    
    logic [DATA_WIDTH-1:0] queue [$];

    always_ff @(posedge clk) begin
        if(write_en) begin
            queue.push_front(data_in);
        end

        logic [DATA_WIDTH-1:0] lowest_cost;

        foreach(queue[i]) begin
            if(i == 0) begin
                lowest_cost = queue[i];
            end else if(queue[i][F_SCORE-1:F_SCORE-F_SCORE_WIDTH] <= lowest_cost[F_SCORE-1:F_SCORE-F_SCORE_WIDTH] && queue[i][H_SCORE-1:H_SCORE-H_SCORE_WIDTH] < lowest_cost[H_SCORE-1:H_SCORE-H_SCORE_WIDTH]) begin
                lowest_cost = queue[i];
            end
        end

        data_out <= lowest_cost;
    end

endmodule
