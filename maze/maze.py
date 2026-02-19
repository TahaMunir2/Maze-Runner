"""
maze.py — Node B (Maze + Pathfinding + Move Validation)

- 8x8 grid
- Walls are blocked cells
- Start is (0,0) top left
- Goal is (7,7) by default

Supports two input styles from Node A:
1) ABSOLUTE: Node A sends (x, y) as the rover's current grid cell
2) DELTA:    Node A sends (dx, dy) as a one-step move such as (1,0) or (0,-1)

Choose the mode by setting INPUT_MODE
"""

from collections import deque
from dataclasses import dataclass
from typing import List, Tuple, Optional, Dict

Coord = Tuple[int, int]

# -----------------------------
# Configuration
# -----------------------------

WIDTH = 8
HEIGHT = 8

START: Coord = (0, 0)
GOAL: Coord = (7, 7)

# INPUT_MODE:
# - "absolute": Node A sends absolute cell coordinates (x,y)
# - "delta":    Node A sends a move delta (dx,dy) like (1,0) or (0,-1)
INPUT_MODE = "delta" 


# -----------------------------
# 1 = free cell, 0 = wall
# -----------------------------


MAZES: Dict[int, List[List[int]]] = {
    # Maze 1 
    1: [
        [1, 1, 1, 1, 0, 1, 1, 1],  # y=0
        [0, 0, 1, 0, 0, 1, 0, 1],  # y=1
        [1, 1, 1, 1, 1, 1, 0, 1],  # y=2
        [1, 0, 0, 0, 0, 1, 1, 1],  # y=3
        [1, 1, 1, 1, 0, 1, 0, 0],  # y=4
        [0, 0, 0, 1, 0, 1, 1, 1],  # y=5
        [1, 1, 1, 1, 1, 0, 0, 1],  # y=6
        [1, 0, 0, 0, 1, 1, 1, 1],  # y=7
    ],

    # Maze 2 
    2: [
        [1, 1, 1, 0, 1, 1, 1, 1],
        [0, 0, 1, 0, 1, 0, 0, 1],
        [1, 1, 1, 1, 1, 1, 0, 1],
        [1, 0, 0, 0, 0, 1, 0, 1],
        [1, 1, 1, 1, 0, 1, 1, 1],
        [1, 0, 0, 1, 0, 0, 0, 1],
        [1, 1, 1, 1, 1, 1, 1, 1],
        [0, 0, 0, 0, 0, 0, 1, 1],
    ],

    # Maze 3 
    3: [
        [1, 1, 1, 1, 1, 1, 1, 1],
        [1, 0, 0, 0, 1, 0, 0, 1],
        [1, 1, 1, 0, 1, 1, 1, 1],
        [0, 0, 1, 0, 0, 0, 1, 0],
        [1, 1, 1, 1, 1, 0, 1, 1],
        [1, 0, 0, 0, 1, 0, 0, 1],
        [1, 1, 1, 1, 1, 1, 1, 1],
        [1, 0, 0, 0, 0, 0, 0, 1],
    ],
}

ACTIVE_MAZE_ID: int = 1

def list_mazes() -> List[int]:
    return sorted(MAZES.keys())

def get_grid() -> List[List[int]]:
    return MAZES[ACTIVE_MAZE_ID]

def set_maze(maze_id: int) -> None:
    global ACTIVE_MAZE_ID
    if maze_id not in MAZES:
        raise ValueError(f"Unknown maze_id {maze_id}. Available: {list_mazes()}")
    ACTIVE_MAZE_ID = maze_id

    g = get_grid()
    if len(g) != HEIGHT or any(len(row) != WIDTH for row in g):
        raise ValueError("Maze grid size does not match WIDTH/HEIGHT")

    sx, sy = START
    gx, gy = GOAL
    if g[sy][sx] == 0:
        raise ValueError("START is inside a wall for this maze")
    if g[gy][gx] == 0:
        raise ValueError("GOAL is inside a wall for this maze")



def in_bounds(x: int, y: int) -> bool:
    return 0 <= x < WIDTH and 0 <= y < HEIGHT

def is_free(x: int, y: int) -> bool:
    return in_bounds(x, y) and get_grid()[y][x] == 1


def manhattan(a: Coord, b: Coord) -> int:
    return abs(a[0] - b[0]) + abs(a[1] - b[1])

def neighbors(c: Coord) -> List[Coord]:
    x, y = c
    cand = [(x+1, y), (x-1, y), (x, y+1), (x, y-1)]
    return [(nx, ny) for (nx, ny) in cand if is_free(nx, ny)]

def direction_from_step(curr: Coord, nxt: Coord) -> Optional[str]:
    cx, cy = curr
    nx, ny = nxt
    dx, dy = nx - cx, ny - cy
    if (dx, dy) == (1, 0):  return "E"
    if (dx, dy) == (-1, 0): return "W"
    if (dx, dy) == (0, 1):  return "S"
    if (dx, dy) == (0, -1): return "N"
    return None


# -----------------------------
# BFS shortest path
# -----------------------------

def bfs_shortest_path(start: Coord, goal: Coord) -> Optional[List[Coord]]:
    """
    Returns list of coordinates from start to goal (inclusive), or None if no path.
    BFS is shortest-path on unweighted grids.
    """
    if not is_free(*start) or not is_free(*goal):
        return None

    q = deque([start])
    parent: Dict[Coord, Optional[Coord]] = {start: None}

    while q:
        cur = q.popleft()
        if cur == goal:
            break
        for nb in neighbors(cur):
            if nb not in parent:
                parent[nb] = cur
                q.append(nb)

    if goal not in parent:
        return None

    # reconstruct
    path = []
    cur = goal
    while cur is not None:
        path.append(cur)
        cur = parent[cur]
    path.reverse()
    return path


# -----------------------------
# Move validation
# -----------------------------

def validate_move(prev: Coord, curr: Coord) -> Tuple[bool, str]:
    """
    Returns (accepted, reason).
    Rules:
    - curr in bounds
    - curr is free (not wall)
    - move is exactly 1 step from prev (Manhattan distance == 1)
    """
    x, y = curr
    if not in_bounds(x, y):
        return False, "out_of_bounds"
    if not is_free(x, y):
        return False, "wall"
    if manhattan(prev, curr) != 1:
        return False, "jump"
    return True, "ok"


# -----------------------------
# Node B state machine wrapper
# -----------------------------

@dataclass
class MazeEngine:
    start: Coord = START
    goal: Coord = GOAL
    pos: Coord = START
    prev: Coord = START
    moves_accepted: int = 0
    moves_rejected: int = 0

    def reset(self) -> None:
        self.pos = self.start
        self.prev = self.start
        self.moves_accepted = 0
        self.moves_rejected = 0

    def update_from_node_a(self, a: int, b: int) -> Dict:
        """
        Main entry point.
        If INPUT_MODE == 'absolute': (a,b) = (x,y)
        If INPUT_MODE == 'delta':    (a,b) = (dx,dy)
        Returns a dict suitable to send to HDMI/cloud:
          {
            'prev': (px,py),
            'curr': (x,y),
            'accepted': bool,
            'reason': str,
            'next_move': 'N/E/S/W' or None,
            'remaining_len': int or None,
            'reached_goal': bool
          }
        """
        self.prev = self.pos

        if INPUT_MODE == "absolute":
            new_pos = (a, b)
        elif INPUT_MODE == "delta":
            dx, dy = a, b
            new_pos = (self.pos[0] + dx, self.pos[1] + dy)
        else:
            raise ValueError("INPUT_MODE must be 'absolute' or 'delta'")

        accepted, reason = validate_move(self.prev, new_pos)

        if accepted:
            self.pos = new_pos
            self.moves_accepted += 1
        else:
            # keep position unchanged if rejected
            self.moves_rejected += 1

        path = bfs_shortest_path(self.pos, self.goal)
        if path is None or len(path) < 2:
            next_move = None
            remaining_len = None if path is None else 0
        else:
            next_move = direction_from_step(self.pos, path[1])
            remaining_len = len(path) - 1

        reached_goal = (self.pos == self.goal)

        return {
            "prev": self.prev,
            "curr": self.pos,
            "attempted": new_pos,
            "accepted": accepted,
            "reason": reason,
            "next_move": next_move,
            "remaining_len": remaining_len,
            "reached_goal": reached_goal,
            "accepted_count": self.moves_accepted,
            "rejected_count": self.moves_rejected,
        }


def get_render_state(eng: "MazeEngine") -> dict:
    return {
        "maze_id": ACTIVE_MAZE_ID,
        "grid": get_grid(),
        "start": START,
        "goal": GOAL,
        "rover": eng.pos,
        "width": WIDTH,
        "height": HEIGHT,
    }


def process_update(eng: "MazeEngine", a: int, b: int) -> dict:
    """
    Wrapper used by Node A / cloud receiver.
    If INPUT_MODE='delta': (a,b) = (dx,dy)
    If INPUT_MODE='absolute': (a,b) = (x,y)
    """
    out = eng.update_from_node_a(a, b)
    return {
        "prev": out["prev"],
        "attempted": out["attempted"],
        "curr": out["curr"],
        "accepted": out["accepted"],
        "reason": out["reason"],
        "next_move": out["next_move"],
        "remaining_len": out["remaining_len"],
        "reached_goal": out["reached_goal"],
        "accepted_count": out["accepted_count"],
        "rejected_count": out["rejected_count"],
    }


def _print_grid_with_rover(rover: Coord) -> None:
    rx, ry = rover
    for y in range(HEIGHT):
        row = []
        for x in range(WIDTH):
            if (x, y) == START:
                row.append("S")
            elif (x, y) == GOAL:
                row.append("G")
            elif (x, y) == (rx, ry):
                row.append("R")
            else:
                row.append("." if get_grid()[y][x] == 1 else "#")

        print(" ".join(row))
    print()

if __name__ == "__main__":
    eng = MazeEngine()

    print("Initial maze:")
    _print_grid_with_rover(eng.pos)

    # (1,0)=right, (0,1)=down, (0,-1)=up, (-1,0)=left
    demo_moves = [(1,0), (1,0), (0,1), (0,1), (1,0), (0,1)]

    for step, (a, b) in enumerate(demo_moves, 1):
        out = eng.update_from_node_a(a, b)
        print(f"Step {step} | input=({a},{b}) | attempted={out['attempted']} | "
              f"accepted={out['accepted']} reason={out['reason']} "
              f"pos={out['curr']} next={out['next_move']} remaining={out['remaining_len']}")
        _print_grid_with_rover(eng.pos)

    print("Done.")


