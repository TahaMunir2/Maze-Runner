from __future__ import annotations
from typing import List, Tuple, Optional
from collections import deque
import random
import time

W, H = 10, 10
START = (0, 0)
GOAL  = (9, 9)

# ---------------------------
# Helpers
# ---------------------------
def in_bounds(x: int, y: int) -> bool:
    return 0 <= x < W and 0 <= y < H

def is_free(grid: List[List[int]], x: int, y: int) -> bool:
    return in_bounds(x, y) and grid[y][x] == 1

def neighbors(grid: List[List[int]], x: int, y: int):
    # (dx, dy, move_char)
    for dx, dy, mv in ((1,0,'r'), (-1,0,'l'), (0,1,'d'), (0,-1,'u')):
        nx, ny = x + dx, y + dy
        if is_free(grid, nx, ny):
            yield nx, ny, mv

# ---------------------------
# 1) Solvability check (BFS reachability)
# ---------------------------
def is_solvable(grid: List[List[int]], start=START, goal=GOAL) -> bool:
    if not is_free(grid, *start) or not is_free(grid, *goal):
        return False

    q = deque([start])
    seen = {start}

    while q:
        x, y = q.popleft()
        if (x, y) == goal:
            return True
        for nx, ny, _mv in neighbors(grid, x, y):
            if (nx, ny) not in seen:
                seen.add((nx, ny))
                q.append((nx, ny))

    return False

# ---------------------------
# 2) Generate solvable maze
# ---------------------------
def generate_solvable_maze(
    rng: random.Random,
    wall_prob: float = 0.28,
    max_tries: int = 500
) -> List[List[int]]:
    """
    1 = free, 0 = wall, guaranteed solvable.
    """
    for _ in range(max_tries):
        grid = [[1]*W for _ in range(H)]
        for y in range(H):
            for x in range(W):
                if (x, y) in (START, GOAL):
                    continue
                grid[y][x] = 0 if rng.random() < wall_prob else 1

        if is_solvable(grid):
            return grid

    raise RuntimeError("Couldn't generate a solvable maze; lower wall_prob or increase max_tries")

# ---------------------------
# 3) Solve maze and return full path as ['r','l','u','d',...]
# ---------------------------
def solve_moves_rlud(grid: List[List[int]], start=START, goal=GOAL) -> Optional[List[str]]:
    if not is_free(grid, *start) or not is_free(grid, *goal):
        return None

    q = deque([start])
    parent: dict[Tuple[int,int], Tuple[Tuple[int,int], str] | None] = {start: None}

    while q:
        x, y = q.popleft()
        if (x, y) == goal:
            break

        for nx, ny, mv in neighbors(grid, x, y):
            if (nx, ny) not in parent:
                parent[(nx, ny)] = ((x, y), mv)
                q.append((nx, ny))
    else:
        return None

    # Reconstruct path
    moves: List[str] = []
    cur = goal
    while cur != start:
        prev, mv = parent[cur]  # type: ignore[misc]
        moves.append(mv)
        cur = prev
    moves.reverse()
    return moves

# ---------------------------
# 4) Pack 10x10 grid to 4x32-bit words (for FPGA later)
# ---------------------------
def pack_grid_10x10_to_u32(grid: List[List[int]]) -> List[int]:
    bits = 0
    for y in range(H):
        for x in range(W):
            idx = y*W + x
            if grid[y][x] == 1:
                bits |= (1 << idx)

    return [
        (bits >> 0)  & 0xFFFFFFFF,
        (bits >> 32) & 0xFFFFFFFF,
        (bits >> 64) & 0xFFFFFFFF,
        (bits >> 96) & 0xFFFFFFFF,
    ]

# ---------------------------
# 5) Batch run: generate + solve N mazes
# ---------------------------
def run_batch(num_mazes: int = 1000, seed: int = 123, wall_prob: float = 0.28):
    rng = random.Random(seed)

    packed_inputs: List[List[int]] = []
    solutions: List[List[str]] = []   # each is list of 'r','l','u','d'

    t0 = time.time()

    for _ in range(num_mazes):
        grid = generate_solvable_maze(rng, wall_prob=wall_prob)
        moves = solve_moves_rlud(grid)
        if moves is None:
            # Should not happen because generator guarantees solvable
            raise RuntimeError("Unexpected: generated a solvable maze but solver returned None")

        packed_inputs.append(pack_grid_10x10_to_u32(grid))
        solutions.append(moves)

    t1 = time.time()
    print(f"Generated + solved {num_mazes} mazes in {t1 - t0:.3f}s")
    print(f"Average steps: {sum(len(m) for m in solutions)/num_mazes:.2f}")

    return packed_inputs, solutions

if __name__ == "__main__":
    run_batch(num_mazes=1000, seed=42, wall_prob=0.28)