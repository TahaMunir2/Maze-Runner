#!/usr/bin/env bash
set -e

echo "Running tb_maze_generator_10x10..."

verilator --binary \
  tb_maze_generator_10x10.sv \
  maze_generator_10x10.sv \
  maze_solver_light_10x10.sv \
  lfsr16.sv

./obj_dir/Vtb_maze_generator_10x10