module detectNeighbour #(
    parameter CELL_COLS = 10,
    parameter CELL_ROWS = 10,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH + 1
) (
    input logic [CELL_WIDTH-1:0] current_cell,
    output logic [CELL_WIDTH-1:0] cell_N_out,
    output logic [CELL_WIDTH-1:0] cell_E_out,
    output logic [CELL_WIDTH-1:0] cell_S_out,
    output logic [CELL_WIDTH-1:0] cell_W_out,
);
    bit [CELL_COLS-1:0][CELL_ROWS-1:0] maze; // 2D array to represent the maze, where 1 indicates a wall and 0 indicates an open cell  

    always_comb begin
        // Extract current cell's column and row from the input
        logic [CELL_COLUMN_WIDTH-1:0] current_col = current_cell[CELL_WIDTH-1:CELL_WIDTH-CELL_COLUMN_WIDTH];
        logic [CELL_ROW_WIDTH-1:0] current_row = current_cell[CELL_ROW_WIDTH:1];

        // Determine the neighboring cells based on the current cell's position
        cell_N_out = (current_row > 0) ? {current_col, current_row - 1, cell_N_in} : 1'b1; // Set to 1 (wall) if out of bounds
        cell_E_out = (current_col < CELL_COLS - 1) ? {current_col + 1, current_row, cell_E_in} : 1'b1;
        cell_S_out = (current_row < CELL_ROWS - 1) ? {current_col, current_row + 1, cell_S_in} : 1'b1;
        cell_W_out = (current_col > 0) ? {current_col - 1, current_row, cell_W_in} : 1'b1;
    end


endmodule
