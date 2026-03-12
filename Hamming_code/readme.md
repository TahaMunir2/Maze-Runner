# Hamming (7,4) Code — Maze Data Integrity Verifier

> Linking Exercise 6 (Communications) to the Maze-Runner project

---

## Table of Contents
1. [What is the (7,4) Hamming Code?](#1-what-is-the-74-hamming-code)
2. [The Generator Matrix G](#2-the-generator-matrix-g)
3. [Exercise 6 — All 16 Codewords and d_min](#3-exercise-6--all-16-codewords-and-d_min)
4. [What Does d_min = 3 Mean?](#4-what-does-d_min--3-mean)
5. [How This Applies to the 10×10 Maze](#5-how-this-applies-to-the-1010-maze)
6. [d_min vs Path Length](#6-d_min-vs-path-length)
7. [Summary](#7-summary)

---

## 1. What is the (7,4) Hamming Code?

The **(7,4) Hamming code** is an error-correcting code that takes **4 data bits** and produces a **7-bit codeword** by appending 3 parity bits. It was designed so that any single-bit transmission error can be automatically detected and corrected at the receiver.

The numbers (7, 4) mean:

| Symbol | Value | Meaning |
|--------|-------|---------|
| n | 7 | Total bits in the codeword |
| k | 4 | Data bits you actually want to send |
| n − k | 3 | Parity / redundancy bits added |

---

## 2. The Generator Matrix G

Every codeword is computed using the generator matrix G from **Exercise 6**:

```
x = u · G  (mod 2)
```

where `u` is your 4-bit source block and `x` is the resulting 7-bit codeword.

```
    [ 1  0  0  0  |  0  1  1 ]
G = [ 0  1  0  0  |  1  0  1 ]
    [ 0  0  1  0  |  1  1  0 ]
    [ 0  0  0  1  |  1  1  1 ]
```

The **left 4×4 block** is the identity matrix (systematic form) — meaning the first 4 bits of every codeword are exactly your original data. The **right 4×3 block** generates the parity bits.

In Python (numpy):

```python
G = np.array([
    [1, 0, 0, 0, 0, 1, 1],
    [0, 1, 0, 0, 1, 0, 1],
    [0, 0, 1, 0, 1, 1, 0],
    [0, 0, 0, 1, 1, 1, 1],
], dtype=int)

x = (u @ G) % 2   # encode a 4-bit block u
```

---

## 3. Exercise 6 — All 16 Codewords and d_min

Exercise 6 enumerates all 16 possible codewords (one per 4-bit input from `[0 0 0 0]` to `[1 1 1 1]`), computes `x = uG (mod 2)`, and finds the weight (number of 1s) of each:

| Source block u | Codeword x = uG (mod 2) | Weight |
|:--------------:|:-----------------------:|:------:|
| `0 0 0 0` | `0 0 0 0 0 0 0` | 0 |
| `0 0 0 1` | `0 0 0 1 1 1 1` | 4 |
| `0 0 1 0` | `0 0 1 0 1 1 0` | **3** ← d_min |
| `0 0 1 1` | `0 0 1 1 0 0 1` | **3** ← d_min |
| `0 1 0 0` | `0 1 0 0 1 0 1` | **3** ← d_min |
| `0 1 0 1` | `0 1 0 1 0 1 0` | **3** ← d_min |
| `0 1 1 0` | `0 1 1 0 0 1 1` | 4 |
| `0 1 1 1` | `0 1 1 1 1 0 0` | 4 |
| `1 0 0 0` | `1 0 0 0 0 1 1` | **3** ← d_min |
| `1 0 0 1` | `1 0 0 1 1 0 0` | **3** ← d_min |
| `1 0 1 0` | `1 0 1 0 1 0 1` | 4 |
| `1 0 1 1` | `1 0 1 1 0 1 0` | 4 |
| `1 1 0 0` | `1 1 0 0 1 1 0` | 4 |
| `1 1 0 1` | `1 1 0 1 0 0 1` | 4 |
| `1 1 1 0` | `1 1 1 0 0 0 0` | **3** ← d_min |
| `1 1 1 1` | `1 1 1 1 1 1 1` | 7 |

**d_min = 3** — the minimum weight among all non-zero codewords.

---

## 4. What Does d_min = 3 Mean?

**d_min** (minimum Hamming distance) is the smallest number of bit positions by which any two distinct codewords differ. For a linear code, this equals the minimum weight of all non-zero codewords — exactly what Exercise 6 computes.

### Why does d_min matter?

It directly determines the error-handling capability of the code:

- **Detect** up to `d_min − 1` errors
- **Correct** up to `⌊(d_min − 1) / 2⌋` errors

For our code with **d_min = 3**:
- ✅ Detects up to **2** bit errors per codeword
- ✅ Corrects up to **1** bit error per codeword *(single-error-correcting, SEC)*

### Is a higher d_min better?

Yes — but it requires more redundancy bits, reducing efficiency:

| d_min | Errors detected | Errors corrected | Notes |
|:-----:|:---------------:|:----------------:|-------|
| 1 | 0 | 0 | Useless — no protection at all |
| 2 | 1 | 0 | Can detect but not correct |
| **3** | **2** | **1** | **(7,4) Hamming — our code** ✅ |
| 4 | 3 | 1 | Extended Hamming |
| 5 | 4 | 2 | BCH codes |

**d_min = 3 is the sweet spot** — the minimum distance that allows single-bit error correction, achieved with only 3 redundancy bits for 4 data bits.

### How correction works — the syndrome

The **parity check matrix H** is used to compute the syndrome `s = Hx (mod 2)`:

```python
H = np.array([
    [0, 0, 0, 1, 1, 1, 1],
    [0, 1, 1, 0, 0, 1, 1],
    [1, 0, 1, 0, 1, 0, 1],
], dtype=int)

s = (H @ x) % 2   # syndrome of received codeword x
```

- If `s = [0 0 0]` → no error
- Otherwise → `s` encodes the **binary index** of the erroneous bit (1-indexed), which is then flipped to correct it

---

## 5. How This Applies to the 10×10 Maze

The maze is a 10×10 binary matrix where `0 = open path` and `1 = wall`. Each row contains 10 bits. In `hamming_maze.py`, the first 4 bits of each row are treated as a source block `u`, and encoded into a 7-bit codeword `x = uG (mod 2)`.

### What the script does

```
Input maze (10×10)
        │
        ▼
┌─────────────────────┐
│  Hamming Encoding   │  Each row → two 4-bit nibbles → two 7-bit codewords
└─────────────────────┘
        │
        ▼
┌─────────────────────┐
│  Round-trip check   │  Encode → decode → confirm maze is identical: PASS ✓
└─────────────────────┘
        │
        ▼
┌─────────────────────┐
│  Error injection    │  Flip one bit, detect via syndrome, correct it: PASS ✓
└─────────────────────┘
        │
        ▼
  VERIFIED ✅  Safe to pass to BFS / A* solver
```

### Why this matters

If a wall bit flipped from `1→0` silently (memory corruption, transmission error), your solver would navigate a physically impossible maze and return a wrong path. The Hamming layer catches and fixes this **before** BFS or A* ever runs.

### Running the script

```bash
pip install numpy
python hamming_maze.py
```

Then either enter your maze row by row (10 space-separated 0s and 1s per row), or press **Enter** on Row 0 to use the built-in default maze.

---

## 6. d_min vs Path Length

They come from entirely different mathematical frameworks:

| Concept | Maze / BFS / A* | Hamming Code |
|---------|----------------|--------------|
| What is measured | Steps along a path through cells | Bit differences between codewords |
| The distance metric | Graph distance (hops between cells) | Hamming distance (differing bit positions) |
| The minimum value | Shortest path length (e.g. 18 steps) | d_min = 3 (min weight of non-zero codewords) |
| What it tells you | How efficiently you navigate the maze | How many errors the code can detect/correct |
| Does it depend on the maze? | Yes — changes with every maze | No — fixed property of G, always 3 |

**d_min = 3** is a fixed property of the generator matrix G. It does not change no matter what maze you feed in. You could run the (7,4) Hamming code on any binary data and always get d_min = 3.

**Path length** depends entirely on the maze layout and algorithm. BFS guarantees the shortest path in hops; A* finds it more efficiently using a heuristic. Neither has anything to do with the bit-level structure of the code.

The link between the two in this project is purely **sequential**:
```
Hamming verifies data integrity  →  BFS / A* solves the verified maze
```

---

## 7. Summary

| Term | Definition |
|------|-----------|
| Generator matrix G | Defines which 4-bit inputs map to which 7-bit codewords |
| `x = uG (mod 2)` | The encoding operation — produces a codeword from a source block |
| Hamming weight | Number of 1s in a codeword |
| d_min = 3 | Minimum weight of all non-zero codewords — fixed property of G |
| Syndrome | `s = Hx (mod 2)` — used to detect and locate a single-bit error |
| Error correction | d_min = 3 allows detection of 2 errors and correction of 1 |
| Maze application | Hamming verifies maze data integrity before BFS/A* solves it |
| Path length | A graph property of the maze — completely unrelated to d_min |

---

*Part of the [Maze-Runner](../README.md) project — Communications extension linking (7,4) Hamming coding theory to maze data integrity.*