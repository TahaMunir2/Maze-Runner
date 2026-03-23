# A* Hardware Accelerator

## Folder Structure

| File | Description |
|------|-------------|
| `astar_top.sv` | Top-level module. Instantiates all sub-modules, holds the flat 100-entry priority queue array, and contains the single pipeline register added to fix negative slack on the min-f comparator. |
| `astar_fsm.sv` | 4-state Moore FSM (IDLE → UPDATE → MOVE → BACKTRACING). Controls the enable signals for each sub-module and asserts `path_ready` or `no_path` on completion. |
| `astar_init.sv` | Initialisation block. On `start`, writes the g-score table one entry per cycle: 0 for the start cell, 127 for all others. Asserts `init_done` after 100 cycles. |
| `update_block.sv` | Neighbour expansion block. Uses a 2-bit `dir_counter` to evaluate one neighbour per cycle (UP/DOWN/LEFT/RIGHT), computing g, h (Manhattan distance), and f = g + h before inserting valid candidates into the priority queue. |
| `backtrace.sv` | Path reconstruction block. Walks backwards from the goal through the g-score table one step per cycle, outputting 4-bit one-hot direction bytes and asserting `backtrace_done` when the start cell is reached. |
| `astar_axis_wrapper.sv` | AXI-Stream wrapper. Receives the 100-cell maze as four packed 32-bit words from the ARM via AXI DMA, asserts `start`, waits for `path_ready`, then streams the path back one direction byte per beat with `tlast` on the final byte. Sends `0xFFFFFFFF` as a sentinel if `no_path` is asserted. |
| `astar_multi_tb.sv` | SystemVerilog testbench covering 6 test cases (see below). |
| `astar_hardware.png` | Screenshot of the Vivado block design. |
| `astar_system.hwh` / `astar_system_wrapper.tcl` / `component.xml` | Vivado hardware handoff and block design files used to generate the `.bit` bitstream loaded by the Jupyter notebook on the PYNQ board. |

---

## Running the Simulation
```bash
iverilog -g2012 -o sim_astar \
  astar_top.sv astar_fsm.sv astar_init.sv update_block.sv backtrace.sv astar_multi_tb.sv
vvp sim_astar
```

The simulation produces `astar_multi.vcd` for waveform inspection in GTKWave.

---

## Testbench Cases

| # | Maze | Expected result |
|---|------|-----------------|
| 1 | Wide open — no walls | Path found, heuristic steers toward goal |
| 2 | Single L-shaped corridor | Path found, unique route |
| 3 | Spiral maze | Path found, navigates through spiral |
| 4 | Zigzag forced path | Path found, follows forced zigzag |
| 5 | Goal walled off | `no_path` asserted |
| 6 | Dense maze with narrow passages | Path found through tight corridors |

Each test case resets the DUT, asserts `start`, then waits for either `backtrace_done` or `no_path`. A 500,000 cycle watchdog kills the simulation if neither fires.

---

## Running on the PYNQ Board

The `.bit` file generated from the Vivado block design (`astar_system_wrapper.tcl`) is loaded by the Jupyter notebook on the PYNQ board. The notebook handles the DMA transfer: it allocates input/output buffers, writes the maze, triggers the send channel, and reads back the decoded path, identical to the BFS notebook workflow. Refer to the BFS notebook for the full DMA transfer procedure.
