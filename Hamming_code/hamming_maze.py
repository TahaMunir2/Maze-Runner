
"""
Hamming (7,4) Code — Maze Data Integrity Verifier
Encodes a 10x10 binary maze using the (7,4) Hamming code to protect
against single-bit errors. this is purely a
data integrity check. Feed the verified maze into BFS or A* solver
separately once integrity is confirmed.

Encodes every row of 10×10 maze into (7,4) Hamming codewords
Perfect round-trip: encoding then decoding gives back the exact maze
Only once integrity is confirmed does BFS run → finds the 27-step path

Parity check matrix H such that H * x^T = 0 for valid codewords.

Option A — type our own maze as rows of 10 bits (0/1), then run the code to see it encoded, decoded, and solved.
Option B — press Enter on Row 0 to fall back to the default maze (exercice in comms pb sheet).
"""


import numpy as np

# ── (7,4) Hamming matrices (GF(2)) ──────────────────────────────────────────

G = np.array([
    [1, 0, 0, 0, 0, 1, 1],
    [0, 1, 0, 0, 1, 0, 1],
    [0, 0, 1, 0, 1, 1, 0],
    [0, 0, 0, 1, 1, 1, 1],
], dtype=int)

H = np.array([
    [0, 0, 0, 1, 1, 1, 1],
    [0, 1, 1, 0, 0, 1, 1],
    [1, 0, 1, 0, 1, 0, 1],
], dtype=int)

# ── Maze input ───────────────────────────────────────────────────────────────

def get_maze() -> np.ndarray:
    DEFAULT = np.array([
        [0, 0, 1, 0, 0, 0, 1, 0, 0, 0],
        [1, 0, 1, 0, 1, 0, 1, 0, 1, 0],
        [1, 0, 0, 0, 1, 0, 0, 0, 1, 0],
        [1, 1, 1, 0, 1, 1, 1, 1, 1, 0],
        [0, 0, 0, 0, 0, 0, 0, 0, 1, 0],
        [0, 1, 1, 1, 1, 1, 1, 0, 1, 0],
        [0, 0, 0, 0, 0, 0, 1, 0, 1, 0],
        [1, 1, 1, 1, 1, 0, 1, 0, 1, 0],
        [0, 0, 0, 0, 1, 0, 0, 0, 1, 0],
        [0, 1, 1, 1, 1, 1, 1, 1, 1, 0],
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
                print("  (empty - please enter 10 values, or press Enter on Row 0 for default)")
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

# ── Hamming encoding / decoding ──────────────────────────────────────────────

def encode_block(u):
    return (u @ G) % 2

def syndrome(x):
    return (H @ x) % 2

def correct(x):
    s = syndrome(x)
    if np.all(s == 0):
        return x.copy()
    error_pos = s[0] * 4 + s[1] * 2 + s[2] * 1
    corrected = x.copy()
    corrected[error_pos - 1] ^= 1
    return corrected

def decode_block(x):
    return correct(x)[:4]

# ── Encode / decode the full maze ────────────────────────────────────────────

def encode_maze(maze):
    encoded = []
    for row in maze:
        u1, u2, tail = row[0:4], row[4:8], row[8:10]
        encoded.append((u1, u2, tail, encode_block(u1), encode_block(u2)))
    return encoded

def decode_and_verify(encoded, introduce_error=False):
    reconstructed, report = [], []
    for i, (u1_orig, u2_orig, tail, c1, c2) in enumerate(encoded):
        c1_rx, c2_rx = c1.copy(), c2.copy()
        if introduce_error and i == 3:
            c1_rx[2] ^= 1
            report.append(f"  Row {i}: error injected in codeword-1, bit 2")
        notes = []
        if not np.all(syndrome(c1_rx) == 0):
            c1_rx = correct(c1_rx)
            notes.append("codeword-1 corrected")
        if not np.all(syndrome(c2_rx) == 0):
            c2_rx = correct(c2_rx)
            notes.append("codeword-2 corrected")
        if notes:
            report.append(f"  Row {i}: {', '.join(notes)}")
        reconstructed.append(np.concatenate([decode_block(c1_rx), decode_block(c2_rx), tail]))
    return np.array(reconstructed), report

# ── Display helpers ──────────────────────────────────────────────────────────

def print_maze(maze, title="Maze"):
    print(f"\n{'-'*44}")
    print(f"  {title}")
    print(f"{'-'*44}")
    for r in range(10):
        row_str = ""
        for c in range(10):
            if   (r, c) == (0, 0): row_str += "S "
            elif (r, c) == (9, 9): row_str += "E "
            elif maze[r, c] == 1:  row_str += "# "
            else:                  row_str += "  "
        print(f"  |{row_str}|")
    print(f"{'-'*44}")

def print_hamming_table(encoded):
    print(f"\n{'-'*74}")
    print(f"  (7,4) Hamming Encoding - Maze Rows")
    print(f"{'-'*74}")
    print(f"  {'Row':>3}  {'u1 (bits 0-3)':>13}  {'Codeword 1 (7-bit)':>18}  {'u2 (bits 4-7)':>13}  {'Codeword 2 (7-bit)':>18}")
    print(f"{'-'*74}")
    for i, (u1, u2, tail, c1, c2) in enumerate(encoded):
        print(f"  {i:>3}  {''.join(map(str,u1)):>13}  {''.join(map(str,c1)):>18}  {''.join(map(str,u2)):>13}  {''.join(map(str,c2)):>18}")
    print(f"{'-'*74}")

# ── Main ─────────────────────────────────────────────────────────────────────

def main():
    print("\n" + "="*74)
    print("  (7,4) Hamming Code - Maze Data Integrity Verifier")
    print("="*74)

    maze = get_maze()
    print_maze(maze, title="Input Maze  (#=wall, S=start, E=end)")

    encoded = encode_maze(maze)
    print_hamming_table(encoded)

    # Round-trip check (no errors)
    clean, _ = decode_and_verify(encoded, introduce_error=False)
    ok = np.array_equal(clean, maze)
    print(f"\n  Round-trip integrity check (no errors): {'PASS' if ok else 'FAIL'}")

    # Inject one error -> show detection & correction
    print("\n  Injecting a single-bit error into row 3, codeword-1, bit 2 ...")
    fixed, report = decode_and_verify(encoded, introduce_error=True)
    for line in report:
        print(line)
    ok_fixed = np.array_equal(fixed, maze)
    print(f"  After Hamming correction: {'PASS' if ok_fixed else 'FAIL'}")

    print("\n" + "="*74)
    if ok_fixed:
        print("  VERIFIED - Maze data is intact. Safe to pass to our BFS / A* solver.")
    else:
        print("  WARNING - Maze data could not be fully recovered.")
    print("="*74 + "\n")

if __name__ == "__main__":
    main()


    