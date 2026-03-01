#include "Vtb_bfs_wavefront_10x10.h"
#include "verilated.h"

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);
  Vtb_bfs_wavefront_10x10* top = new Vtb_bfs_wavefront_10x10;

  while (!Verilated::gotFinish()) {
    top->eval();
    Verilated::timeInc(1);
  }

  top->final();
  delete top;
  return 0;
}
