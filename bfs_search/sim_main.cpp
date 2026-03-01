#include "Vtb_bfs_top.h"
#include "verilated.h"

int main(int argc, char** argv) {
  Verilated::commandArgs(argc, argv);

  Vtb_bfs_top* top = new Vtb_bfs_top;

  while (!Verilated::gotFinish()) {
    top->eval();
    Verilated::timeInc(1);
  }

  top->final();
  delete top;
  return 0;
}
