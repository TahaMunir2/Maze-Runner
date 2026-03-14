#!/usr/bin/env bash
set -e

echo "Running tb_maze_solver_full_10x10..."

verilator --binary \
  tb_maze_solver_full_10x10.sv \
  maze_solver_full_10x10.sv

./obj_dir/Vtb_maze_solver_full_10x10