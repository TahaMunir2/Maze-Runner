#!/usr/bin/env bash
set -e

echo "Running tb_lfsr16..."

verilator --binary \
  tb_lfsr16.sv \
  lfsr16.sv

./obj_dir/Vtb_lfsr16