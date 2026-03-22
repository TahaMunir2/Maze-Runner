#include "kruskal_maze_hls.h"

static inline uint16_t cell_index(uint16_t row, uint16_t col, uint16_t cols) {
    return static_cast<uint16_t>(row * cols + col);
}

static inline uint16_t right_wall_index(uint16_t row, uint16_t col) {
    return static_cast<uint16_t>(row * (MAX_COLS - 1) + col);
}

static inline uint16_t bottom_wall_index(uint16_t row, uint16_t col) {
    return static_cast<uint16_t>(row * MAX_COLS + col);
}

static inline uint16_t maze_grid_index(uint16_t row, uint16_t col) {
    return static_cast<uint16_t>(row * MAX_MAZE_GRID_COLS + col);
}

static inline uint32_t next_random(uint32_t state) {
    uint32_t value = (state == 0U) ? 0xA341316CU : state;
    value ^= value << 13;
    value ^= value >> 17;
    value ^= value << 5;
    return value;
}

static uint16_t find_root(uint16_t node, uint16_t parent[MAX_CELLS]) {
#pragma HLS INLINE off
    uint16_t current = node;

    while (parent[current] != current) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=MAX_CELLS
#pragma HLS PIPELINE II=2
        current = parent[current];
    }

    uint16_t root = current;
    current = node;

    while (parent[current] != current) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=MAX_CELLS
#pragma HLS PIPELINE II=2
        uint16_t next = parent[current];
        parent[current] = root;
        current = next;
    }

    return root;
}

static void union_sets(
    uint16_t left,
    uint16_t right,
    uint16_t parent[MAX_CELLS],
    uint8_t rank[MAX_CELLS]) {
#pragma HLS INLINE off
    uint16_t left_root = find_root(left, parent);
    uint16_t right_root = find_root(right, parent);

    if (left_root == right_root) {
        return;
    }

    if (rank[left_root] < rank[right_root]) {
        parent[left_root] = right_root;
    } else if (rank[left_root] > rank[right_root]) {
        parent[right_root] = left_root;
    } else {
        parent[right_root] = left_root;
        rank[left_root] = static_cast<uint8_t>(rank[left_root] + 1U);
    }
}

int kruskal_maze_hls(
    uint16_t rows,
    uint16_t cols,
    uint32_t seed,
    uint8_t maze_grid[MAX_MAZE_GRID_CELLS]) {
#pragma HLS INTERFACE s_axilite port=rows bundle=CTRL
#pragma HLS INTERFACE s_axilite port=cols bundle=CTRL
#pragma HLS INTERFACE s_axilite port=seed bundle=CTRL
#pragma HLS INTERFACE m_axi port=maze_grid offset=slave bundle=MAZE depth=MAX_MAZE_GRID_CELLS max_widen_bitwidth=8
#pragma HLS INTERFACE s_axilite port=maze_grid bundle=CTRL
#pragma HLS INTERFACE s_axilite port=return bundle=CTRL

    uint16_t effective_grid_rows =
        (rows == 0U) ? static_cast<uint16_t>(2 * DEFAULT_ROWS) : rows;
    uint16_t effective_grid_cols =
        (cols == 0U) ? static_cast<uint16_t>(2 * DEFAULT_COLS) : cols;

    if (effective_grid_rows == 0U || effective_grid_cols == 0U ||
        effective_grid_rows > MAX_MAZE_GRID_ROWS || effective_grid_cols > MAX_MAZE_GRID_COLS ||
        (effective_grid_rows & 1U) != 0U || (effective_grid_cols & 1U) != 0U) {
        return -1;
    }

    uint16_t logical_rows = static_cast<uint16_t>(effective_grid_rows / 2U);
    uint16_t logical_cols = static_cast<uint16_t>(effective_grid_cols / 2U);

    MazeEdge edges[MAX_EDGES];
    uint16_t parent[MAX_CELLS];
    uint8_t rank[MAX_CELLS];
    uint8_t right_walls[MAX_RIGHT_WALLS];
    uint8_t bottom_walls[MAX_BOTTOM_WALLS];
    uint8_t maze_local[MAX_MAZE_GRID_CELLS];

    for (int index = 0; index < MAX_MAZE_GRID_CELLS; ++index) {
#pragma HLS PIPELINE II=1
        maze_local[index] = 1U;
    }

    for (int index = 0; index < MAX_RIGHT_WALLS; ++index) {
#pragma HLS PIPELINE II=1
        right_walls[index] = 0U;
    }

    for (int index = 0; index < MAX_BOTTOM_WALLS; ++index) {
#pragma HLS PIPELINE II=1
        bottom_walls[index] = 0U;
    }

    uint16_t cell_count = static_cast<uint16_t>(logical_rows * logical_cols);

    for (uint16_t cell = 0; cell < cell_count; ++cell) {
#pragma HLS PIPELINE II=1
        parent[cell] = cell;
        rank[cell] = 0U;
    }

    uint16_t edge_count = 0U;

    for (uint16_t row = 0; row < logical_rows; ++row) {
        for (uint16_t col = 0; col + 1U < logical_cols; ++col) {
#pragma HLS LOOP_FLATTEN off
            MazeEdge edge;
            edge.cell_a = cell_index(row, col, logical_cols);
            edge.cell_b = cell_index(row, static_cast<uint16_t>(col + 1U), logical_cols);
            edge.output_index = right_wall_index(row, col);
            edge.is_right_wall = 1U;
            edges[edge_count] = edge;
            right_walls[edge.output_index] = 1U;
            ++edge_count;
        }
    }

    for (uint16_t row = 0; row + 1U < logical_rows; ++row) {
        for (uint16_t col = 0; col < logical_cols; ++col) {
#pragma HLS LOOP_FLATTEN off
            MazeEdge edge;
            edge.cell_a = cell_index(row, col, logical_cols);
            edge.cell_b = cell_index(static_cast<uint16_t>(row + 1U), col, logical_cols);
            edge.output_index = bottom_wall_index(row, col);
            edge.is_right_wall = 0U;
            edges[edge_count] = edge;
            bottom_walls[edge.output_index] = 1U;
            ++edge_count;
        }
    }

    uint32_t random_state = (seed == 0U) ? 1U : seed;

    for (int index = static_cast<int>(edge_count) - 1; index > 0; --index) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=MAX_EDGES
#pragma HLS PIPELINE II=3
        random_state = next_random(random_state);
        int swap_index = static_cast<int>(random_state % static_cast<uint32_t>(index + 1));

        MazeEdge temp = edges[index];
        edges[index] = edges[swap_index];
        edges[swap_index] = temp;
    }

    uint16_t passages = 0U;

    for (uint16_t edge_index = 0; edge_index < edge_count; ++edge_index) {
#pragma HLS LOOP_TRIPCOUNT min=1 max=MAX_EDGES
#pragma HLS LOOP_FLATTEN off
        MazeEdge edge = edges[edge_index];
        uint16_t root_a = find_root(edge.cell_a, parent);
        uint16_t root_b = find_root(edge.cell_b, parent);

        if (root_a != root_b) {
            union_sets(root_a, root_b, parent, rank);

            if (edge.is_right_wall != 0U) {
                right_walls[edge.output_index] = 0U;
            } else {
                bottom_walls[edge.output_index] = 0U;
            }

            ++passages;

            if (passages + 1U == cell_count) {
                break;
            }
        }
    }

    for (uint16_t row = 0; row < logical_rows; ++row) {
        for (uint16_t col = 0; col < logical_cols; ++col) {
#pragma HLS LOOP_FLATTEN off
#pragma HLS PIPELINE II=1
            uint16_t grid_row = static_cast<uint16_t>(2U * row);
            uint16_t grid_col = static_cast<uint16_t>(2U * col);
            maze_local[maze_grid_index(grid_row, grid_col)] = 0U;
        }
    }

    for (uint16_t row = 0; row < logical_rows; ++row) {
        for (uint16_t col = 0; col + 1U < logical_cols; ++col) {
#pragma HLS LOOP_FLATTEN off
#pragma HLS PIPELINE II=1
            if (right_walls[right_wall_index(row, col)] == 0U) {
                uint16_t grid_row = static_cast<uint16_t>(2U * row);
                uint16_t grid_col = static_cast<uint16_t>(2U * col + 1U);
                maze_local[maze_grid_index(grid_row, grid_col)] = 0U;
            }
        }
    }

    for (uint16_t row = 0; row + 1U < logical_rows; ++row) {
        for (uint16_t col = 0; col < logical_cols; ++col) {
#pragma HLS LOOP_FLATTEN off
#pragma HLS PIPELINE II=1
            if (bottom_walls[bottom_wall_index(row, col)] == 0U) {
                uint16_t grid_row = static_cast<uint16_t>(2U * row + 1U);
                uint16_t grid_col = static_cast<uint16_t>(2U * col);
                maze_local[maze_grid_index(grid_row, grid_col)] = 0U;
            }
        }
    }

    uint16_t last_grid_row = static_cast<uint16_t>(effective_grid_rows - 1U);
    uint16_t last_grid_col = static_cast<uint16_t>(effective_grid_cols - 1U);
    maze_local[maze_grid_index(static_cast<uint16_t>(last_grid_row - 1U), last_grid_col)] = 0U;
    maze_local[maze_grid_index(last_grid_row, last_grid_col)] = 0U;

    for (int index = 0; index < MAX_MAZE_GRID_CELLS; ++index) {
#pragma HLS PIPELINE II=1
        maze_grid[index] = maze_local[index];
    }

    return 0;
}