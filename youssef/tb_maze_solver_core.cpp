#include "Vmaze_solver_core.h"
#include <verilated.h>
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <sstream>

// Helper to print path moves
void print_path(uint8_t path_len, uint32_t* path_words) {
    const char* dir_names[] = {"UP", "RIGHT", "DOWN", "LEFT"};
    std::cout << "Path (" << (int)path_len << " moves): ";
    
    for (int i = 0; i < path_len && i < 112; i++) {
        int word_idx = i / 16;
        int bit_pos = (i % 16) * 2;
        uint32_t word = path_words[word_idx];
        uint8_t dir = (word >> bit_pos) & 0x3;
        
        if (i < 20) {  // Print first 20 moves
            std::cout << dir_names[dir] << " ";
        } else if (i == 20) {
            std::cout << "... ";
        }
    }
    std::cout << std::endl;
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    
    Vmaze_solver_core* top = new Vmaze_solver_core;
    
    // Parse command line arguments for grid values
    uint32_t grid0 = 0xFFFFFFFF;
    uint32_t grid1 = 0xFFFFFFFF;
    uint32_t grid2 = 0xFFFFFFFF;
    uint32_t grid3 = 0x0000000F;
    
    if (argc >= 5) {
        grid0 = strtoul(argv[1], nullptr, 0);
        grid1 = strtoul(argv[2], nullptr, 0);
        grid2 = strtoul(argv[3], nullptr, 0);
        grid3 = strtoul(argv[4], nullptr, 0);
    }
    
    // Initialize clock and reset
    top->clk = 0;
    top->rst = 1;
    top->start = 0;
    
    // Initialize grid inputs
    top->grid0 = grid0;
    top->grid1 = grid1;
    top->grid2 = grid2;
    top->grid3 = grid3;
    
    // Reset cycle
    top->eval();
    top->clk = 1;
    top->eval();
    top->clk = 0;
    top->rst = 0;
    top->eval();
    
    // Verify grid setup
    uint32_t grid_array[4] = {top->grid0, top->grid1, top->grid2, top->grid3};
    int start_bit = 0;  // (0,0) -> bit 0
    int goal_bit = 99;  // (9,9) -> bit 99
    
    std::cout << "=== Maze Solver Test ===" << std::endl;
    std::cout << "Grid: " << std::hex 
              << "0x" << std::setfill('0') << std::setw(8) << top->grid0 << " "
              << "0x" << std::setfill('0') << std::setw(8) << top->grid1 << " "
              << "0x" << std::setfill('0') << std::setw(8) << top->grid2 << " "
              << "0x" << std::setfill('0') << std::setw(8) << top->grid3 << std::dec << std::endl;
    
    // Check start and goal
    int start_word = start_bit / 32;
    int start_bit_in_word = start_bit % 32;
    int goal_word = goal_bit / 32;
    int goal_bit_in_word = goal_bit % 32;
    
    bool start_free = (grid_array[start_word] >> start_bit_in_word) & 1;
    bool goal_free = (grid_array[goal_word] >> goal_bit_in_word) & 1;
    
    std::cout << "Start (0,0): " << (start_free ? "FREE" : "WALL") << std::endl;
    std::cout << "Goal (9,9): " << (goal_free ? "FREE" : "WALL") << std::endl;
    
    if (!start_free || !goal_free) {
        std::cout << "ERROR: Start or goal is blocked!" << std::endl;
        top->final();
        delete top;
        return 1;
    }
    
    top->start = 1;
    
    // Run simulation
    int cycle_count = 0;
    int max_cycles = 10000;
    
    for (int i = 0; i < max_cycles; i++) {
        top->clk = 1;
        top->eval();
        top->clk = 0;
        top->eval();
        cycle_count++;
        
        if (top->done) {
            std::cout << "\n=== Results ===" << std::endl;
            std::cout << "Cycles: " << cycle_count << std::endl;
            std::cout << "Valid: " << (top->valid ? "YES" : "NO") << std::endl;
            std::cout << "Path length: " << (int)top->path_len << std::endl;
            
            if (top->valid && top->path_len > 0) {
                uint32_t path_words[7] = {
                    top->path_word0, top->path_word1, top->path_word2,
                    top->path_word3, top->path_word4, top->path_word5,
                    top->path_word6
                };
                print_path(top->path_len, path_words);
            }
            break;
        }
    }
    
    if (cycle_count >= max_cycles) {
        std::cout << "\n=== Timeout ===" << std::endl;
        std::cout << "Simulation did not complete after " << max_cycles << " cycles" << std::endl;
        std::cout << "Valid: " << (top->valid ? "YES" : "NO") << std::endl;
        top->final();
        delete top;
        return 1;
    }
    
    top->final();
    delete top;
    
    return 0;
}
