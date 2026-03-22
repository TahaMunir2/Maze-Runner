#include <cstdlib>
#include <ctime>
#include <deque>
#include <iostream>

#include "../src/kruskal_maze_hls.h"

namespace {

static int maze_grid_index(int row, int col) {
    return row * MAX_MAZE_GRID_COLS + col;
}

static bool validate_maze(
    int grid_rows,
    int grid_cols,
    const uint8_t maze_grid[MAX_MAZE_GRID_CELLS]) {
    if (grid_rows <= 0 || grid_cols <= 0 || (grid_rows & 1) != 0 || (grid_cols & 1) != 0) {
        return false;
    }

    const int logical_rows = grid_rows / 2;
    const int logical_cols = grid_cols / 2;
    const int start_row = 0;
    const int start_col = 0;
    const int goal_row = grid_rows - 1;
    const int goal_col = grid_cols - 1;
    bool visited[MAX_MAZE_GRID_CELLS] = {false};
    std::deque<int> row_queue;
    std::deque<int> col_queue;
    int reachable_cells = 0;

    if (maze_grid[maze_grid_index(start_row, start_col)] != 0U ||
        maze_grid[maze_grid_index(goal_row, goal_col)] != 0U ||
        maze_grid[maze_grid_index(goal_row - 1, goal_col)] != 0U) {
        return false;
    }

    row_queue.push_back(start_row);
    col_queue.push_back(start_col);
    visited[maze_grid_index(start_row, start_col)] = true;

    while (!row_queue.empty()) {
        int row = row_queue.front();
        int col = col_queue.front();
        row_queue.pop_front();
        col_queue.pop_front();

        if ((row & 1) == 0 && (col & 1) == 0) {
            ++reachable_cells;
        }

        static const int row_delta[4] = {-1, 1, 0, 0};
        static const int col_delta[4] = {0, 0, -1, 1};

        for (int direction = 0; direction < 4; ++direction) {
            int next_row = row + row_delta[direction];
            int next_col = col + col_delta[direction];

            if (next_row < 0 || next_row >= grid_rows || next_col < 0 || next_col >= grid_cols) {
                continue;
            }

            int next_index = maze_grid_index(next_row, next_col);
            if (visited[next_index] || maze_grid[next_index] != 0U) {
                continue;
            }

            visited[next_index] = true;
            row_queue.push_back(next_row);
            col_queue.push_back(next_col);
        }
    }

    if (!visited[maze_grid_index(goal_row, goal_col)]) {
        return false;
    }

    return reachable_cells == logical_rows * logical_cols;
}

static void print_maze(
    int grid_rows,
    int grid_cols,
    const uint8_t maze_grid[MAX_MAZE_GRID_CELLS]) {
    for (int row = 0; row < grid_rows; ++row) {
        for (int col = 0; col < grid_cols; ++col) {
            std::cout << static_cast<int>(maze_grid[maze_grid_index(row, col)]);
            if (col + 1 < grid_cols) {
                std::cout << ' ';
            }
        }
        std::cout << '\n';
    }
}

}  // namespace

int main() {
    uint8_t maze_grid[MAX_MAZE_GRID_CELLS] = {0};

    const int rows = 0;
    const int cols = 0;
    const int grid_rows = (rows == 0) ? (2 * DEFAULT_ROWS) : rows;
    const int grid_cols = (cols == 0) ? (2 * DEFAULT_COLS) : cols;
    const int logical_rows = grid_rows / 2;
    const int logical_cols = grid_cols / 2;
    const uint32_t seed = static_cast<uint32_t>(std::time(nullptr));

    int status = kruskal_maze_hls(rows, cols, seed, maze_grid);
    if (status != 0) {
        std::cerr << "Generator returned error code " << status << '\n';
        return EXIT_FAILURE;
    }

    if (!validate_maze(grid_rows, grid_cols, maze_grid)) {
        std::cerr << "Generated maze is not a valid spanning tree\n";
        return EXIT_FAILURE;
    }

    std::cout << "Generated maze for grid input " << grid_rows << "x" << grid_cols
              << " (logical " << logical_rows << "x" << logical_cols
              << ") with seed " << seed << ":\n";
    print_maze(grid_rows, grid_cols, maze_grid);
    std::cout << "Validation passed\n";

    return EXIT_SUCCESS;
}