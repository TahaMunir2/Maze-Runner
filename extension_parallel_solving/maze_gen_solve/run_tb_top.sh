#!/usr/bin/env bash
set -e

echo "Running tb_maze_system_top..."

verilator --binary \
  tb_maze_system_top.sv \
  maze_system_top.sv \
  maze_worker_engine.sv \
  maze_generator_10x10.sv \
  maze_solver_light_10x10.sv \
  maze_solver_full_10x10.sv \
  lfsr16.sv

./obj_dir/Vtb_maze_system_top