# BFS Hardware Accelerator

Shortest-path solver for a 10×10 maze, implemented in SystemVerilog then on the PYNQ-Z2 FPGA. 
The accelerator receives the maze via AXI DMA and streams the shortest path back as a sequence of one-hot direction bytes.

---


| File | Description |
|---|---|
| `bfs_top.sv` | Top-level module — wires FSM, distmap, and backtrace together |
| `bfs_fsm.sv` | 3-state Moore FSM (IDLE → DIST → BT → IDLE) |
| `bfs_distmap_10x10.sv` | Pipelined wavefront BFS — builds distance map from goal |
| `bfs_backtrace_dist.sv` | Walks distance map from start → outputs direction sequence |
| `bfs_axis_wrapper.sv` | AXI4-Stream wrapper — interfaces with AXI DMA IP in Vivado |
| `tb_bfs_top.sv` | SystemVerilog testbench — loads maze, pulses start, prints path |
| `sim_main.cpp` | Verilator C++ |
| `design_1_wrapper (1).bit` | FPGA bitstream |
| `design_1.hwh` | Hardware handoff file |
| `bfs_hardware.png` | Vivado block design screenshot |
| `bfs_software.png` | Software BFS testing |

---

## Option 1 — Software Simulation (Verilator)

Simulates the RTL in software — no FPGA required.

```bash
cd bfs_search

# Compile RTL + testbench
verilator --cc --exe --build --timing \
  bfs_top.sv bfs_fsm.sv bfs_distmap_10x10.sv bfs_backtrace_dist.sv tb_bfs_top.sv \
  sim_main.cpp \
  --top-module tb_bfs_top \
  -o sim_bfs

# Run simulation
./obj_dir/sim_bfs
```

Expected output: maze printed to terminal, solve cycle count, and step-by-step direction sequence (UP / DOWN / LEFT / RIGHT) from start (bottom-left) to goal (top-right).

To test a different maze, edit the `rows[]` string array inside `tb_bfs_top.sv` — `#` = wall, `.` = free, `S` = start, `G` = goal.

---

## Option 2 — FPGA Deployment (PYNQ-Z2)

Runs the accelerator on real hardware using AXI DMA. Requires a PYNQ-Z2 board and the Jupyter notebook `bfs_fpga_test.ipynb` (at the repo root).

**Step 1 — Copy files to the board**

Downloaded the following to our jupyter notebook

```
bfs_search/design_1_wrapper (1).bit
bfs_search/design_1.hwh
```


**Step 2 — Run the notebook**


1. Loads the bitstream via `pynq.Overlay`
2. Generates a 10×10 maze (using the Kruskal hardware bitstream — see `mazegen_hw/`)
3. Packs the maze as 100 bytes and sends it to the accelerator over AXI DMA
4. Reads the path back as a stream of 4-bit one-hot direction codes
5. Displays the maze and the computed shortest path

**Direction encoding (one-hot, 4-bit)**

| Bits | Direction |
|---|---|
| `0001` | North (UP) |
| `0010` | South (DOWN) |
| `0100` | West (LEFT) |
| `1000` | East (RIGHT) |

---

## Notes

- Start cell: index 90 (row 9, col 0 — bottom-left)
- Goal cell: index 9 (row 0, col 9 — top-right)
- Cell encoding: `1` = wall, `0` = free passage
- If no path exists, the FSM asserts `no_path` and the notebook reports an unsolvable maze
- Timing: pipelined distmap achieves WNS = +0.5 ns at 100 MHz 
