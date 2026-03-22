#ifndef KRUSKAL_MAZE_HLS_H
#define KRUSKAL_MAZE_HLS_H

#include <stdint.h>

#ifndef KRUSKAL_MAZE_MAX_ROWS
#define KRUSKAL_MAZE_MAX_ROWS 32
#endif

#ifndef KRUSKAL_MAZE_MAX_COLS
#define KRUSKAL_MAZE_MAX_COLS 32
#endif

#ifndef KRUSKAL_MAZE_DEFAULT_ROWS
#define KRUSKAL_MAZE_DEFAULT_ROWS 5
#endif

#ifndef KRUSKAL_MAZE_DEFAULT_COLS
#define KRUSKAL_MAZE_DEFAULT_COLS 5
#endif

static const int MAX_ROWS = KRUSKAL_MAZE_MAX_ROWS;
static const int MAX_COLS = KRUSKAL_MAZE_MAX_COLS;
static const int DEFAULT_ROWS = KRUSKAL_MAZE_DEFAULT_ROWS;
static const int DEFAULT_COLS = KRUSKAL_MAZE_DEFAULT_COLS;
static const int MAX_CELLS = MAX_ROWS * MAX_COLS;
static const int MAX_RIGHT_WALLS = MAX_ROWS * (MAX_COLS - 1);
static const int MAX_BOTTOM_WALLS = (MAX_ROWS - 1) * MAX_COLS;
static const int MAX_EDGES = MAX_RIGHT_WALLS + MAX_BOTTOM_WALLS;
static const int MAX_MAZE_GRID_ROWS = 2 * MAX_ROWS;
static const int MAX_MAZE_GRID_COLS = 2 * MAX_COLS;
static const int MAX_MAZE_GRID_CELLS = MAX_MAZE_GRID_ROWS * MAX_MAZE_GRID_COLS;

struct MazeEdge {
    uint16_t cell_a;
    uint16_t cell_b;
    uint16_t output_index;
    uint8_t is_right_wall;
};

int kruskal_maze_hls(
    uint16_t rows,
    uint16_t cols,
    uint32_t seed,
    uint8_t maze_grid[MAX_MAZE_GRID_CELLS]);

#endif