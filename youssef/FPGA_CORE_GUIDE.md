# Guide: Running on 1, 16, and 64 Cores

## Overview

The `maze_solver_parallel.sv` module is parameterized to support any number of cores. This guide explains how to configure and use it for 1, 16, and 64 cores.

## Module Parameter

The key parameter is `NUM_CORES`:

```systemverilog
module maze_solver_parallel #(
    parameter int NUM_CORES = 16,  // Change this value
    ...
)
```

## Configuration for Different Core Counts

### Option 1: Compile-Time Configuration

Modify the parameter when instantiating the module:

```systemverilog
// For 1 core
maze_solver_parallel #(.NUM_CORES(1)) solver_1core (...);

// For 16 cores
maze_solver_parallel #(.NUM_CORES(16)) solver_16core (...);

// For 64 cores
maze_solver_parallel #(.NUM_CORES(64)) solver_64core (...);
```

### Option 2: Default Parameter

Change the default in `maze_solver_parallel.sv`:

```systemverilog
parameter int NUM_CORES = 16,  // Change to 1, 16, or 64
```

## Resource Requirements

### 1 Core
- **LUTs**: ~2,000
- **FFs**: ~3,000
- **BRAM**: ~2 blocks
- **Estimated**: ~4% of PYNQ Z-1 resources

### 16 Cores
- **LUTs**: ~32,000
- **FFs**: ~48,000
- **BRAM**: ~32 blocks
- **Estimated**: ~60% of PYNQ Z-1 resources
- **Status**: ✅ Fits on PYNQ Z-1

### 64 Cores
- **LUTs**: ~128,000
- **FFs**: ~192,000
- **BRAM**: ~128 blocks
- **Estimated**: ~240% of PYNQ Z-1 resources
- **Status**: ❌ **Does NOT fit on PYNQ Z-1**
- **Solution**: Use larger FPGA (xc7z045, Artix-7, or Kintex-7)

## Step-by-Step: Running on 1 Core

### 1. Modify the Module

```systemverilog
// In maze_solver_parallel.sv, line 5
parameter int NUM_CORES = 1,
```

### 2. Compile with Verilator (Test)

```bash
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel
```

### 3. Use in Vivado

```tcl
# In your Vivado TCL script
set_property generic {NUM_CORES=1} [get_files maze_solver_parallel.sv]
```

### 4. Python Interface

```python
# In maze_solver_pynq.py
solver = MazeSolverFPGA("maze_solver_1core.bit", num_cores=1)
```

## Step-by-Step: Running on 16 Cores

### 1. Modify the Module

```systemverilog
// In maze_solver_parallel.sv, line 5
parameter int NUM_CORES = 16,
```

### 2. Compile with Verilator (Test)

```bash
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel
```

### 3. Use in Vivado

```tcl
# In your Vivado TCL script
set_property generic {NUM_CORES=16} [get_files maze_solver_parallel.sv]
```

### 4. Python Interface

```python
# In maze_solver_pynq.py
solver = MazeSolverFPGA("maze_solver_16core.bit", num_cores=16)
```

### 5. Expected Performance

- **1000 mazes**: ~100-200 μs
- **Throughput**: ~5,000-10,000 mazes/second

## Step-by-Step: Running on 64 Cores

### ⚠️ Important: PYNQ Z-1 Cannot Support 64 Cores

You need a larger FPGA. Options:

1. **Xilinx Zynq-7045** (xc7z045)
2. **Artix-7** (xc7a200t)
3. **Kintex-7** (xc7k325t)

### 1. Modify the Module

```systemverilog
// In maze_solver_parallel.sv, line 5
parameter int NUM_CORES = 64,
```

### 2. Compile with Verilator (Test)

```bash
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel
```

### 3. Use in Vivado (Larger FPGA)

```tcl
# In your Vivado TCL script
set_property generic {NUM_CORES=64} [get_files maze_solver_parallel.sv]
# Make sure you're targeting a larger FPGA part
```

### 4. Python Interface

```python
# In maze_solver_pynq.py
solver = MazeSolverFPGA("maze_solver_64core.bit", num_cores=64)
```

### 5. Expected Performance

- **1000 mazes**: ~25-50 μs
- **Throughput**: ~20,000-40,000 mazes/second

## Creating Multiple Bitstreams

### Method 1: Separate Projects

Create different Vivado projects for each configuration:

```bash
# Project for 1 core
vivado -mode batch -source create_project_1core.tcl

# Project for 16 cores
vivado -mode batch -source create_project_16core.tcl

# Project for 64 cores (larger FPGA)
vivado -mode batch -source create_project_64core.tcl
```

### Method 2: Single Project with Generics

Use Vivado generics to create multiple configurations:

```tcl
# create_project.tcl
create_project maze_solver ./vivado_project -part xc7z020clg400-1

# Add source
add_files maze_solver_parallel.sv
add_files maze_solver_core.sv

# Create configurations
create_config -name config_1core -generic NUM_CORES=1
create_config -name config_16core -generic NUM_CORES=16

# Generate bitstreams
set_property config config_1core [current_run]
launch_runs impl_1 -to_step write_bitstream

set_property config config_16core [current_run]
launch_runs impl_1 -to_step write_bitstream
```

## Testing Each Configuration

### 1. Test with Verilator First

```bash
# Test 1 core
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel \
  -G NUM_CORES=1 --exe tb_parallel.cpp

# Test 16 cores
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel \
  -G NUM_CORES=16 --exe tb_parallel.cpp

# Test 64 cores
verilator -cc maze_solver_parallel.sv --top-module maze_solver_parallel \
  -G NUM_CORES=64 --exe tb_parallel.cpp
```

### 2. Test on FPGA

```python
# Test script
from maze_solver_pynq import MazeSolverFPGA
from maze_generator import generate_solvable_maze
import random

# Test with 1 core
solver_1 = MazeSolverFPGA("maze_solver_1core.bit", num_cores=1)
mazes = [generate_solvable_maze(random.Random(i)) for i in range(100)]
solutions_1 = solver_1.solve_batch(mazes)
print(f"1 core: {len(solutions_1)} mazes solved")

# Test with 16 cores
solver_16 = MazeSolverFPGA("maze_solver_16core.bit", num_cores=16)
solutions_16 = solver_16.solve_batch(mazes)
print(f"16 cores: {len(solutions_16)} mazes solved")
```

## Performance Comparison

| Cores | Resource Usage | 1000 Mazes | 50,000 Mazes | FPGA Required |
|-------|---------------|------------|--------------|---------------|
| 1     | ~4%           | ~2.6 ms    | ~130 ms      | PYNQ Z-1 ✅   |
| 16    | ~60%          | ~100-200 μs| ~5-10 ms     | PYNQ Z-1 ✅   |
| 64    | ~240%         | ~25-50 μs  | ~1.25-2.5 ms | Larger FPGA ⚠️ |

## Troubleshooting

### Issue: "Does not fit on device"
- **Solution**: Reduce NUM_CORES or use larger FPGA

### Issue: Timing violations
- **Solution**: Add pipeline stages or reduce clock frequency

### Issue: Memory interface errors
- **Solution**: Implement proper BRAM/DDR controller (see FPGA_DEPLOYMENT.md)

## Next Steps

1. **Start with 1 core**: Verify basic functionality
2. **Scale to 16 cores**: Test on PYNQ Z-1
3. **Optimize**: Fine-tune memory interface
4. **Scale to 64 cores**: If you have larger FPGA

## Files to Modify

- `maze_solver_parallel.sv`: Change `NUM_CORES` parameter
- `maze_solver_pynq.py`: Update `num_cores` in constructor
- Vivado project: Set generic parameter
