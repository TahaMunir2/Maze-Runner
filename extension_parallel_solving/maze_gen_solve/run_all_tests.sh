#!/usr/bin/env bash
set -e

echo "================================="
echo "Running ALL testbenches"
echo "================================="

./run_tb_lfsr16.sh
echo

./run_tb_solver_light.sh
echo

./run_tb_solver_full.sh
echo

./run_tb_generator.sh
echo

./run_tb_worker.sh
echo

./run_tb_top.sh
echo

echo "================================="
echo "All tests finished"
echo "================================="