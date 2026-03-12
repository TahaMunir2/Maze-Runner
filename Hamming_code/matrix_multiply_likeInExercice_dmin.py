"""
Hamming (7,4) Code — d_min finder for 10x10 maze
Treats each row of the maze as a 4-bit source block u,
computes the codeword x = u * G (mod 2), then finds
d_min = minimum Hamming weight of all non-zero codewords.

  u -> x = uG (mod2) -> weight(x)
  d_min = min weight over all non-zero codewords

Default maze:
  . # . . . # . . . G      S = (9,0)
  . # . # . # . # . .      G = (0,9)
  . . . # . . . # . .
  # # . # # # . # . .
  . . . . . . . # . .
  . # # # . # # # . .
  . . . # . . . . . .
  . # . # # # . # # .
  . # . . . . . . . .
  S # # # # . # # # .
"""

import numpy as np

# Generator matrix G (from Exercise 6)

G = np.array([
    [1, 0, 0, 0, 0, 1, 1],
    [0, 1, 0, 0, 1, 0, 1],
    [0, 0, 1, 0, 1, 1, 0],
    [0, 0, 0, 1, 1, 1, 1],
], dtype=int)

# Maze input 

def get_maze() -> np.ndarray:
    DEFAULT = np.array([
        [0, 1, 0, 0, 0, 1, 0, 0, 0, 0],   # row 0  — G at (0,9)
        [0, 1, 0, 1, 0, 1, 0, 1, 0, 0],   # row 1
        [0, 0, 0, 1, 0, 0, 0, 1, 0, 0],   # row 2
        [1, 1, 0, 1, 1, 1, 0, 1, 0, 0],   # row 3
        [0, 0, 0, 0, 0, 0, 0, 1, 0, 0],   # row 4
        [0, 1, 1, 1, 0, 1, 1, 1, 0, 0],   # row 5
        [0, 0, 0, 1, 0, 0, 0, 0, 0, 0],   # row 6
        [0, 1, 0, 1, 1, 1, 0, 1, 1, 0],   # row 7
        [0, 1, 0, 0, 0, 0, 0, 0, 0, 0],   # row 8
        [0, 1, 1, 1, 1, 0, 1, 1, 1, 0],   # row 9  — S at (9,0)
    ], dtype=int)

    print("\n  Enter 10x10 maze (0=path, 1=wall), one row per line.")
    print("  Each row: 10 digits separated by spaces, e.g.: 0 1 0 0 1 0 1 0 0 1")
    print("  Press Enter on Row 0 to use the built-in default maze.\n")

    rows = []
    for i in range(10):
        while True:
            line = input(f"  Row {i}: ").strip()
            if line == "" and i == 0:
                print("  -> Using default maze.\n")
                return DEFAULT
            if line == "":
                print("  (empty - enter 10 values, or press Enter on Row 0 for default)")
                continue
            parts = line.replace(",", " ").split()
            if len(parts) != 10:
                print(f"  Expected 10 values, got {len(parts)}. Try again.")
                continue
            if not all(p in ("0", "1") for p in parts):
                print("  Values must be 0 or 1 only. Try again.")
                continue
            rows.append([int(p) for p in parts])
            break

    return np.array(rows, dtype=int)

# Hamming encoding

def encode(u: np.ndarray) -> np.ndarray:
    """x = u * G (mod 2)"""
    return (u @ G) % 2

def hamming_weight(x: np.ndarray) -> int:
    return int(np.sum(x))



def print_maze(maze, title="Maze"):
    # S at (9,0), G at (0,9)
    print(f"\n  {title}")
    print(f"  {'-'*42}")
    for r in range(10):
        row_str = ""
        for c in range(10):
            if   (r, c) == (9, 0): row_str += "S "
            elif (r, c) == (0, 9): row_str += "G "
            elif maze[r, c] == 1:  row_str += "# "
            else:                  row_str += ". "
        print(f"  |{row_str}|")
    print(f"  {'-'*42}")



def main():
    print("\n" + "="*62)
    print("  (7,4) Hamming Code — Codeword Table & d_min")
    print("="*62)

    maze = get_maze()
    print_maze(maze, title="Input Maze")

    print(f"\n  Each maze row is treated as a 4-bit source block u (first 4 bits).")
    print(f"  Codeword x = u * G (mod 2),  weight = number of 1s in x.")
    print(f"\n  {'-'*58}")
    print(f"  {'Row':>3}  {'Source block u':>16}  {'Codeword x (7-bit)':>20}  {'Weight':>6}")
    print(f"  {'-'*58}")

    codewords = []
    for i, row in enumerate(maze):
        u = row[:4]          # first 4 bits of each row = source block
        x = encode(u)
        w = hamming_weight(x)
        codewords.append((u, x, w))
        print(f"  {i:>3}  {''.join(map(str,u)):>16}  {''.join(map(str,x)):>20}  {w:>6}")

    print(f"  {'-'*58}")

    # d_min = minimum weight of all non-zero codewords
    non_zero = [(u, x, w) for u, x, w in codewords if w > 0]

    if not non_zero:
        print("\n  All codewords are zero — d_min undefined.")
    else:
        d_min = min(w for _, _, w in non_zero)
        min_rows = [i for i, (_, _, w) in enumerate(codewords) if w == d_min]

        print(f"\n  Non-zero codeword weights: {sorted(set(w for _,_,w in non_zero))}")
        print(f"\n  d_min = {d_min}  (minimum weight among non-zero codewords)")
        print(f"  Achieved at row(s): {min_rows}")
        print(f"\n  A (7,4) Hamming code with d_min = {d_min} can:")
        print(f"    detect  up to {d_min - 1} error(s) per codeword")
        print(f"    correct up to {(d_min - 1) // 2} error(s) per codeword")

    print("\n" + "="*62 + "\n")

if __name__ == "__main__":
    main()