# Software (PS/Python):
# create/select maze grid (10×10)
# pack grid into 100 bits (4×32-bit words)
# write grid + goal to AXI-Lite regs
# write current rover position to AXI-Lite regs
# trigger hardware start + read outputs

# Hardware (PL/SystemVerilog):
# computes distance-map BFS and outputs: dist_curr. next_dir, next_valid


from __future__ import annotations
from typing import List, Tuple
import random
from collections import deque

W = 10
H = 10
START = (0, 0)
GOAL  = (9, 9)

# ---------------------------
# Solvability check (software)
# ---------------------------
def _in_bounds(x: int, y: int) -> bool:
    return 0 <= x < W and 0 <= y < H

def _is_free(grid: List[List[int]], x: int, y: int) -> bool:
    return _in_bounds(x, y) and grid[y][x] == 0

def _neighbors(grid: List[List[int]], x: int, y: int):
    for nx, ny in ((x+1,y),(x-1,y),(x,y+1),(x,y-1)):
        if _is_free(grid, nx, ny):
            yield nx, ny

def is_solvable(grid: List[List[int]], start=START, goal=GOAL) -> bool:
    if not _is_free(grid, *start) or not _is_free(grid, *goal):
        return False
    q = deque([start])
    seen = {start}
    while q:
        x, y = q.popleft()
        if (x, y) == goal:
            return True
        for nx, ny in _neighbors(grid, x, y):
            if (nx, ny) not in seen:
                seen.add((nx, ny))
                q.append((nx, ny))
    return False

# ---------------------------
# Maze generation (software)
# ---------------------------
def generate_random_maze(seed: int, wall_prob: float = 0.28, max_tries: int = 300) -> List[List[int]]:
    """
    Returns a solvable 10x10 maze.
    0 = free, 1 = wall
    """
    rng = random.Random(seed)

    for _ in range(max_tries):
        grid = [[0]*W for _ in range(H)]
        for y in range(H):
            for x in range(W):
                if (x, y) in (START, GOAL):
                    continue
                grid[y][x] = 1 if rng.random() < wall_prob else 0

        if is_solvable(grid):
            return grid

    raise RuntimeError("Couldn't generate a solvable maze; lower wall_prob or increase max_tries")

# ---------------------------
# Pack 10x10 grid into 100 bits (row-major)
# bit idx = y*10 + x, bit=1 means FREE
# Output: 4x32-bit words for AXI registers
# ---------------------------
def pack_grid_10x10_to_u32(grid: List[List[int]]) -> List[int]:
    if len(grid) != H or any(len(r) != W for r in grid):
        raise ValueError("Grid must be 10x10")

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
        (bits >> 96) & 0xFFFFFFFF,  # only bits up to 99 are used
    ]

def print_maze(grid: List[List[int]]) -> None:
    for y in range(H):
        row = []
        for x in range(W):
            if (x, y) == START:
                row.append("S")
            elif (x, y) == GOAL:
                row.append("G")
            else:
                row.append("." if grid[y][x] == 1 else "#")
        print(" ".join(row))
    print()

# ---------------------------
# PYNQ AXI-Lite driver stub (fill in bitfile + IP name)
# ---------------------------
def hw_write_maze(ip, grid: List[List[int]], goal=GOAL):
    """
    ip: PYNQ IP object (AXI-Lite)
    Writes grid + goal into registers.
    Register map assumed:
      0x10 GRID0, 0x14 GRID1, 0x18 GRID2, 0x1C GRID3
      0x08 GOAL (gx in [3:0], gy in [7:4])
    """
    w0, w1, w2, w3 = pack_grid_10x10_to_u32(grid)
    ip.write(0x10, w0)
    ip.write(0x14, w1)
    ip.write(0x18, w2)
    ip.write(0x1C, w3)
    gx, gy = goal
    ip.write(0x08, (gx & 0xF) | ((gy & 0xF) << 4))

def hw_request_solution(ip, curr_xy: Tuple[int, int]):
    """
    Writes curr position + start, waits done, reads out.
    Register map assumed:
      0x0C CURR (cx in [3:0], cy in [7:4])
      0x00 CTRL start bit0
      0x04 STATUS done bit0
      0x20 OUT: dist[6:0], dir[8:7], valid[9]
    """
    cx, cy = curr_xy
    ip.write(0x0C, (cx & 0xF) | ((cy & 0xF) << 4))
    ip.write(0x00, 0x1)  # start

    # poll done
    import time
    t0 = time.time()
    while True:
        if ip.read(0x04) & 0x1:
            break
        if (time.time() - t0) > 0.2:
            raise TimeoutError("HW solver timed out")

    out = ip.read(0x20)
    dist = out & 0x7F
    nxt  = (out >> 7) & 0x3
    valid = (out >> 9) & 0x1
    return dist, nxt, valid

if __name__ == "__main__":
    grid = generate_random_maze(seed=42, wall_prob=0.28)
    print_maze(grid)
    print("Packed words:", pack_grid_10x10_to_u32(grid))
    print("Solvable:", is_solvable(grid))


