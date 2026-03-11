# FPGA Deployment Guide - PYNQ Z-1

## Overview

This guide explains how to deploy the parallel maze solver to a Xilinx PYNQ Z-1 board to process 1000-50,000 mazes in parallel.

## Architecture

### Current Design
- **Single core**: Processes one maze at a time
- **Sequential**: Must wait for each maze to complete

### Parallel Design (for FPGA)
- **Multiple cores**: 16-64 `maze_solver_core` instances
- **Scheduler**: Assigns mazes to available cores
- **Memory interface**: Stores input mazes and output solutions
- **AXI4-Lite interface**: Communication with ARM processor

## Step-by-Step Deployment

### 1. Install Vivado and PYNQ Tools

```bash
# Install Vivado (requires Xilinx account)
# Download from: https://www.xilinx.com/support/download.html

# Install PYNQ image on SD card
# Download from: https://github.com/Xilinx/PYNQ/releases
```

### 2. Create Vivado Project

```tcl
# create_project.tcl
create_project maze_solver ./vivado_project -part xc7z020clg400-1

# Add source files
add_files maze_solver_core.sv
add_files maze_solver_parallel.sv

# Create block design with Zynq processor
create_bd_design "design_1"
create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0
create_bd_cell -type module -reference maze_solver_parallel maze_solver_parallel_0

# Connect AXI interface
apply_bd_automation -rule xilinx.com:bd_rule:axi4 -config { Clk_master {/processing_system7_0/FCLK_CLK0} Clk_slave {Auto} Clk_xbar {Auto} Master {/processing_system7_0/M_AXI_GP0} Slave {/maze_solver_parallel_0/s_axi} ddr_seg {Auto} intc_ip {New AXI Interconnect} master_apm {0}} [get_bd_intf_pins maze_solver_parallel_0/s_axi]

# Connect interrupts
connect_bd_net [get_bd_pins maze_solver_parallel_0/irq] [get_bd_pins processing_system7_0/IRQ_F2P]

# Generate bitstream
launch_runs impl_1 -to_step write_bitstream
```

### 3. Resource Estimation

For **16 cores** on PYNQ Z-1 (xc7z020):
- **LUTs**: ~16 × 2000 = 32,000 (device has 53,200)
- **FFs**: ~16 × 3000 = 48,000 (device has 106,400)
- **BRAM**: ~16 × 2 = 32 blocks (device has 140)
- **DSP**: Minimal

For **64 cores**: May need larger FPGA (xc7z045 or Artix-7)

### 4. Memory Interface Design

You need to add a memory controller to store:
- **Input mazes**: 1000 mazes × 16 bytes = 16 KB
- **Output solutions**: 1000 mazes × ~40 bytes = 40 KB

Options:
1. **BRAM**: Fast, limited capacity (~140 blocks = 5 MB)
2. **DDR via AXI**: Large capacity, slower access
3. **Hybrid**: BRAM for active mazes, DDR for storage

### 5. Python Interface (PYNQ)

Create `maze_solver_pynq.py`:

```python
from pynq import Overlay, MMIO
import numpy as np
from maze_generator import pack_grid_10x10_to_u32

class MazeSolverFPGA:
    def __init__(self, bitstream_path):
        self.overlay = Overlay(bitstream_path)
        self.solver = self.overlay.maze_solver_parallel_0
        
        # Memory map (adjust addresses based on your design)
        self.ctrl_base = 0x43C00000
        self.mem_base = 0x43C10000
        self.ctrl = MMIO(self.ctrl_base, 0x10000)
        self.mem = MMIO(self.mem_base, 0x100000)
    
    def solve_batch(self, mazes):
        """
        Solve a batch of mazes on FPGA
        
        Args:
            mazes: List of 10x10 grids (each is list of lists)
        
        Returns:
            List of solutions (each is list of moves)
        """
        num_mazes = len(mazes)
        
        # Pack mazes into memory
        for i, grid in enumerate(mazes):
            packed = pack_grid_10x10_to_u32(grid)
            addr = i * 16  # 4 words × 4 bytes = 16 bytes per maze
            for j, word in enumerate(packed):
                self.mem.write(addr + j*4, word)
        
        # Configure number of mazes
        self.ctrl.write(0x08, num_mazes)
        
        # Start processing
        self.ctrl.write(0x00, 0x02)  # Set start bit
        
        # Wait for completion (poll or use interrupt)
        while True:
            status = self.ctrl.read(0x04)
            done = self.ctrl.read(0x0C)
            if done >= num_mazes:
                break
        
        # Read results
        solutions = []
        for i in range(num_mazes):
            # Read path from memory (address depends on your design)
            # This is simplified - you need to implement result memory interface
            path_len = self.mem.read(result_base + i*64)
            # ... read path words and decode ...
            solutions.append(path)
        
        return solutions

# Usage
overlay = Overlay("maze_solver.bit")
solver = MazeSolverFPGA("maze_solver.bit")

# Generate 1000 mazes
from maze_generator import generate_solvable_maze
import random
mazes = [generate_solvable_maze(random.Random(i)) for i in range(1000)]

# Solve on FPGA
solutions = solver.solve_batch(mazes)
```

### 6. Optimization Strategies

#### A. Increase Parallelism
```systemverilog
parameter int NUM_CORES = 32;  // Increase from 16 to 32
```

#### B. Pipeline Memory Access
- Use dual-port BRAM
- Prefetch next maze while current one processes
- Stream results out while processing continues

#### C. Reduce Resource Usage
- Share common logic between cores
- Use time-multiplexed resources
- Optimize queue implementation (use shift registers)

#### D. For 50,000 Mazes
You'll need:
1. **External memory** (DDR) for storage
2. **DMA** for fast data transfer
3. **Batch processing**: Process in chunks of 1000
4. **Multiple FPGA runs** or larger FPGA

### 7. Performance Estimation

**Single core**: ~260 cycles per maze
- At 100 MHz: 2.6 μs per maze
- 1000 mazes: 2.6 ms (sequential)

**16 cores (parallel)**:
- 1000 mazes: 2.6 ms / 16 = 162.5 μs (theoretical)
- Plus overhead: ~500 μs total

**64 cores**:
- 1000 mazes: ~100 μs
- 50,000 mazes: ~5 ms (in batches)

### 8. Complete Build Script

```bash
#!/bin/bash
# build_fpga.sh

# 1. Run Vivado
vivado -mode batch -source create_project.tcl

# 2. Generate bitstream
vivado -mode batch -source generate_bitstream.tcl

# 3. Export to PYNQ
cp vivado_project/design_1.runs/impl_1/design_1_wrapper.bit ./maze_solver.bit
cp vivado_project/design_1.runs/impl_1/design_1_wrapper.hwh ./maze_solver.hwh

# 4. Copy to PYNQ board
scp maze_solver.bit maze_solver.hwh xilinx@192.168.2.99:/home/xilinx/jupyter_notebooks/
```

### 9. Testing on PYNQ

```python
# In Jupyter notebook on PYNQ
from pynq import Overlay
from maze_solver_pynq import MazeSolverFPGA

overlay = Overlay("maze_solver.bit")
solver = MazeSolverFPGA("maze_solver.bit")

# Test with 1000 mazes
import time
start = time.time()
solutions = solver.solve_batch(mazes_1000)
end = time.time()
print(f"Solved 1000 mazes in {end-start:.3f} seconds")
```

## Next Steps

1. **Implement full AXI4-Lite interface** (current is simplified)
2. **Add memory controller** for maze storage
3. **Implement result memory interface**
4. **Add DMA** for large batch transfers
5. **Optimize core count** based on resource usage
6. **Add error handling** and status reporting

## Files Needed

- `maze_solver_core.sv` - Single core (already exists)
- `maze_solver_parallel.sv` - Parallel wrapper (created above)
- `maze_solver_pynq.py` - Python interface (to be created)
- `create_project.tcl` - Vivado project script
- `constraints.xdc` - Timing constraints
