module detectNeighbour #(
    parameter MAZE_COLS = 10,
    parameter MAZE_ROWS = 10,
    parameter CELL_COLUMN_WIDTH = 4,
    parameter CELL_ROW_WIDTH = 4,
    parameter CELL_WIDTH = CELL_COLUMN_WIDTH + CELL_ROW_WIDTH
) (

    input logic [CELL_WIDTH-1:0] current_cell,
    input logic maze [0:MAZE_COLS*MAZE_ROWS-1], // 2D array representing the maze (0 for open, 1 for wall)
    output logic [CELL_WIDTH-1:0] cell_N_out,
    output logic [CELL_WIDTH-1:0] cell_E_out,
    output logic [CELL_WIDTH-1:0] cell_S_out,
    output logic [CELL_WIDTH-1:0] cell_W_out
);

    always_comb begin
        // Extract current cell's column and row from the input
        logic [CELL_COLUMN_WIDTH-1:0] current_col = current_cell[CELL_WIDTH-1:CELL_WIDTH-CELL_COLUMN_WIDTH];
        logic [CELL_ROW_WIDTH-1:0] current_row = current_cell[CELL_ROW_WIDTH:1];

        // Determine the neighboring cells based on the current cell's position
        assign cell_N_out = (current_row > 0) ? {current_col, current_row - 1, maze[current_col + (current_row - 1) * MAZE_COLS]} : {CELL_WIDTH{1'b1}}; // Set to 1 (wall) if out of bounds
        assign cell_E_out = (current_col < MAZE_COLS - 1) ? {current_col + 1, current_row, maze[current_col + 1 + current_row * MAZE_COLS]} : {CELL_WIDTH{1'b1}};
        assign cell_S_out = (current_row < MAZE_ROWS - 1) ? {current_col, current_row + 1, maze[current_col + (current_row + 1) * MAZE_COLS]} : {CELL_WIDTH{1'b1}};
        assign cell_W_out = (current_col > 0) ? {current_col - 1, current_row, maze[current_col - 1 + current_row * MAZE_COLS]} : {CELL_WIDTH{1'b1}};
    end


endmodule
