# Ghost AI Hardware

## Folder Structure

| File | Description |
|------|-------------|
| `ghost_top.sv` | Single ghost instance. Implements the full 3-stage pipeline: Stage 0 (combinational) performs parallel LOS detection in all four directions against the hardcoded 91-bit 7×13 MAZE ROM; Stage 1 (registered at FF S1) performs wall checks, asserting four `can_*` flags; Stage 2 (registered at FF S2) selects the final direction — LOS chase if detected, otherwise wall-following using a priority table indexed by the `facing` register. Output `direction` and `valid` are latched at FF S3. |
| `ghost_multi_axi_lite.sv` | Top-level wrapper instantiating four `ghost_top` instances in parallel, all sharing the same rover position and `game_enable` signal. Exposes a full AXI-Lite slave interface to the ARM. Ghost positions are written via five external GPIO blocks; the processor reads back each ghost's direction and valid flag from offsets `0x00`–`0x0C`. Writing bit 0 to offset `0x00` controls `game_enable`. |
| `ghost_top_tb.sv` | SystemVerilog testbench covering 10 test groups (see below). |
| `ghost_bd.bit` | Pre-built Vivado bitstream loaded by the Jupyter notebook on Node A. Contains the full block design: four `ghost_top` instances, the AXI-Lite wrapper, five GPIO blocks, and the ZYNQ7 Processing System. |
| `ghost_bd.hwh` | Hardware handoff file required by PYNQ to map IP block addresses. Loaded alongside `ghost_bd.bit` in the Jupyter notebook. |

---

## Running the Simulation

```bash
iverilog -g2012 -o sim_ghost \
  ghost_top.sv ghost_top_tb.sv
vvp sim_ghost
```

The simulation produces `ghost_top_tb.vcd` for waveform inspection in GTKWave.

---

## Testbench Cases

| # | Test | What is verified |
|---|------|-----------------|
| 1 | Reset behaviour | `direction` = UP, `valid` = 0 after reset |
| 2 | Wall follower | Ghost at (6,0), rover out of LOS, output is a legal move |
| 3 | LOS UP | Ghost (4,1), rover (1,1), clear column, direction = UP |
| 4 | LOS DOWN | Ghost (1,1), rover (5,1), clear column, direction = DOWN |
| 5 | LOS LEFT | Ghost (1,10), rover (1,1), clear row, direction = LEFT |
| 6 | LOS RIGHT | Ghost (1,1), rover (1,11), clear row, direction = RIGHT |
| 7 | LOS blocked by wall | Wall between ghost and rover, wall-follower takes over, legal move output |
| 8 | Boundary cells | Ghost at all four corners and near-boundary free cells — no out-of-bounds direction produced |
| 9 | `game_enable` freeze | Enable deasserted after valid output, `direction` unchanged, `valid` = 0 for 6 cycles |
| 10 | Valid pulse width | `valid` asserted for exactly 1 clock cycle per enable pulse |

A 10,000 ns watchdog kills the simulation if any test hangs.

---

## Running on the PYNQ Board

Load the bitstream and run the ghost loop from the Jupyter notebook (`ghosts_newmaze.ipynb`):

```python
from pynq import Bitstream, MMIO

ol = Bitstream('ghost_bd.bit')
ol.download()

ghost      = MMIO(0x43C00000, 0x10)   # AXI-Lite ghost IP
rover_gpio = MMIO(0x41240000, 0x10)   # rover position GPIO
g1_gpio    = MMIO(0x41200000, 0x10)   # ghost 1 position GPIO
# ... repeat for g2–g4
```

Ghost and rover positions are packed as `(col << 4) | row` into each GPIO register. After a 10 ms settle the processor reads four AXI-Lite offsets (`0x00`–`0x0C`) to retrieve each ghost's direction and valid flag, then POSTs each valid direction to the AWS server via `/update_ghost`.



## Block Design

![Ghost Hardware Vivado block design](ghost_block_design.png)
