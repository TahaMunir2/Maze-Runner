# maze_sw.py  (Node B software side, 10x10)
from __future__ import annotations
from dataclasses import dataclass
from collections import deque
from typing import Dict, List, Optional, Tuple
import random
import time

Coord = Tuple[int, int]

W = 10
H = 10
START: Coord = (0, 0)
GOAL: Coord = (9, 9)

# Node A currently sends DELTA (dx,dy). Later switch to "absolute" if you can.
INPUT_MODE = "delta"   # "delta" or "absolute"

# Directions (for outputs / debugging)
DIRS = {
    "N": (0, -1),
    "E": (1, 0),
    "S": (0, 1),
    "W": (-1, 0),
}

# ---------------------------
# Maze library (10x10)
# 1 = free, 0 = wall
# ---------------------------
MAZES: Dict[int, List[List[int]]] = {
    1: [
        [1,1,1,1,1, 1,0,1,1,1],
        [0,0,1,0,1, 1,0,1,0,1],
        [1,1,1,0,1, 1,1,1,0,1],
        [1,0,1,0,0, 0,0,1,0,1],
        [1,0,1,1,1, 1,1,1,0,1],
        [1,0,0,0,0, 0,1,0,0,1],
        [1,1,1,1,1, 0,1,1,1,1],
        [0,0,0,0,1, 0,0,0,0,1],
        [1,1,1,0,1, 1,1,1,0,1],
        [1,1,1,0,1, 0,0,1,1,1],
    ],
    2: [
        [1,1,1,1,0, 1,1,1,1,1],
        [1,0,0,1,0, 1,0,0,0,1],
        [1,1,1,1,1, 1,1,1,0,1],
        [0,0,0,0,0, 0,0,1,0,1],
        [1,1,1,1,1, 1,0,1,1,1],
        [1,0,0,0,0, 1,0,0,0,1],
        [1,1,1,1,0, 1,1,1,1,1],
        [1,0,0,1,0, 0,0,0,0,1],
        [1,1,1,1,1, 1,1,1,0,1],
        [1,1,1,1,1, 1,1,1,1,1],
    ],
}

ACTIVE_MAZE_ID = 1

def list_mazes() -> List[int]:
    return sorted(MAZES.keys())

def get_grid() -> List[List[int]]:
    return MAZES[ACTIVE_MAZE_ID]

def set_maze(maze_id: int) -> None:
    global ACTIVE_MAZE_ID
    if maze_id not in MAZES:
        raise ValueError(f"Unknown maze_id {maze_id}. Available: {list_mazes()}")
    ACTIVE_MAZE_ID = maze_id
    _sanity_check_grid(get_grid())

def _sanity_check_grid(grid: List[List[int]]) -> None:
    if len(grid) != H or any(len(r) != W for r in grid):
        raise ValueError("Grid must be 10x10")
    sx, sy = START
    gx, gy = GOAL
    if grid[sy][sx] == 0:
        raise ValueError("START is inside a wall")
    if grid[gy][gx] == 0:
        raise ValueError("GOAL is inside a wall")

# ---------------------------
# Random maze generator (software)
# ---------------------------
def generate_random_maze(
    seed: int,
    wall_prob: float = 0.28,
    max_tries: int = 200
) -> List[List[int]]:
    """
    Generate a random 10x10 maze that is guaranteed solvable from START to GOAL.
    wall_prob controls density of walls (0.20–0.35 is reasonable for 10x10).
    """
    rng = random.Random(seed)

    for _ in range(max_tries):
        grid = [[1]*W for _ in range(H)]
        for y in range(H):
            for x in range(W):
                if (x, y) in (START, GOAL):
                    continue
                grid[y][x] = 0 if rng.random() < wall_prob else 1

        if bfs_shortest_path(grid, START, GOAL) is not None:
            return grid

    raise RuntimeError("Failed to generate solvable maze; lower wall_prob or increase max_tries")

def install_generated_maze(maze_id: int, grid: List[List[int]]) -> None:
    """
    Add/replace a maze in MAZES at runtime.
    """
    _sanity_check_grid(grid)
    MAZES[maze_id] = grid

# ---------------------------
# Grid helpers
# ---------------------------
def in_bounds(x: int, y: int) -> bool:
    return 0 <= x < W and 0 <= y < H

def is_free(grid: List[List[int]], x: int, y: int) -> bool:
    return in_bounds(x, y) and grid[y][x] == 1

def neighbors(grid: List[List[int]], c: Coord) -> List[Coord]:
    x, y = c
    cand = [(x+1,y),(x-1,y),(x,y+1),(x,y-1)]
    return [(nx,ny) for (nx,ny) in cand if is_free(grid, nx, ny)]

def manhattan(a: Coord, b: Coord) -> int:
    return abs(a[0]-b[0]) + abs(a[1]-b[1])

def direction_from_step(curr: Coord, nxt: Coord) -> Optional[str]:
    dx = nxt[0] - curr[0]
    dy = nxt[1] - curr[1]
    if (dx, dy) == (0, -1): return "N"
    if (dx, dy) == (1, 0):  return "E"
    if (dx, dy) == (0, 1):  return "S"
    if (dx, dy) == (-1, 0): return "W"
    return None

# ---------------------------
# Software BFS (fallback / testing)
# ---------------------------
def bfs_shortest_path(grid: List[List[int]], start: Coord, goal: Coord) -> Optional[List[Coord]]:
    if not is_free(grid, *start) or not is_free(grid, *goal):
        return None

    q = deque([start])
    parent: Dict[Coord, Optional[Coord]] = {start: None}

    while q:
        cur = q.popleft()
        if cur == goal:
            break
        for nb in neighbors(grid, cur):
            if nb not in parent:
                parent[nb] = cur
                q.append(nb)

    if goal not in parent:
        return None

    path = []
    cur = goal
    while cur is not None:
        path.append(cur)
        cur = parent[cur]
    path.reverse()
    return path

# ---------------------------
# Move validation
# ---------------------------
def validate_move(grid: List[List[int]], prev: Coord, curr: Coord) -> Tuple[bool, str]:
    x, y = curr
    if not in_bounds(x, y):
        return False, "out_of_bounds"
    if not is_free(grid, x, y):
        return False, "wall"
    if manhattan(prev, curr) != 1:
        return False, "jump"
    return True, "ok"

# ---------------------------
# Hardware packing (100 bits -> 4x32-bit regs)
# Bit order: idx = y*10 + x (row-major)
# bit=1 means FREE, bit=0 means WALL
# ---------------------------
def pack_grid_10x10_to_u32(grid: List[List[int]]) -> List[int]:
    _sanity_check_grid(grid)
    bits = 0
    for y in range(H):
        for x in range(W):
            idx = y*W + x
            if grid[y][x] == 1:
                bits |= (1 << idx)
    # 100 bits -> 4 words (128 bits). Upper 28 bits unused.
    w0 = (bits >> 0)  & 0xFFFFFFFF
    w1 = (bits >> 32) & 0xFFFFFFFF
    w2 = (bits >> 64) & 0xFFFFFFFF
    w3 = (bits >> 96) & 0xFFFFFFFF
    return [w0, w1, w2, w3]

def decode_next_dir(dir2: int) -> str:
    # 00=N, 01=E, 10=S, 11=W
    return {0:"N", 1:"E", 2:"S", 3:"W"}.get(dir2, "?")

# ---------------------------
# Engine + integration hooks
# ---------------------------
@dataclass
class MazeEngine:
    start: Coord = START
    goal: Coord = GOAL
    pos: Coord = START
    prev: Coord = START
    accepted: int = 0
    rejected: int = 0

    def reset(self) -> None:
        self.pos = self.start
        self.prev = self.start
        self.accepted = 0
        self.rejected = 0

    def update_from_node_a(self, a: int, b: int) -> Dict:
        grid = get_grid()
        self.prev = self.pos

        if INPUT_MODE == "absolute":
            attempted = (a, b)
        elif INPUT_MODE == "delta":
            attempted = (self.pos[0] + a, self.pos[1] + b)
        else:
            raise ValueError("INPUT_MODE must be 'absolute' or 'delta'")

        ok, reason = validate_move(grid, self.prev, attempted)
        if ok:
            self.pos = attempted
            self.accepted += 1
        else:
            self.rejected += 1

        # software guidance (fallback)
        path = bfs_shortest_path(grid, self.pos, self.goal)
        if path is None or len(path) < 2:
            next_move = None
            remaining_len = None if path is None else 0
        else:
            next_move = direction_from_step(self.pos, path[1])
            remaining_len = len(path) - 1

        return {
            "prev": self.prev,
            "attempted": attempted,
            "curr": self.pos,
            "accepted": ok,
            "reason": reason,
            "next_move_sw": next_move,
            "remaining_len_sw": remaining_len,
            "reached_goal": (self.pos == self.goal),
            "accepted_count": self.accepted,
            "rejected_count": self.rejected,
            "maze_id": ACTIVE_MAZE_ID,
        }

def get_render_state(eng: MazeEngine) -> dict:
    return {
        "maze_id": ACTIVE_MAZE_ID,
        "grid": get_grid(),
        "start": START,
        "goal": GOAL,
        "rover": eng.pos,
        "width": W,
        "height": H,
    }
