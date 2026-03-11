#!/usr/bin/env python3
"""
Test script to generate a maze and test the SystemVerilog solver
"""
import subprocess
import struct
import sys
from maze_generator import generate_solvable_maze, solve_moves_rlud, pack_grid_10x10_to_u32
import random

def print_grid_visual(grid):
    """Print a visual representation of the grid"""
    print("Maze visualization:")
    print("  " + "".join(str(i % 10) for i in range(10)))
    for y in range(10):
        print(f"{y} ", end="")
        for x in range(10):
            if grid[y][x] == 1:
                print(".", end="")  # Free cell
            else:
                print("#", end="")  # Wall
        print()
    print()

def test_single_maze(seed=42, verbose=True):
    """Generate a single maze and test it"""
    rng = random.Random(seed)
    
    # Generate a solvable maze
    if verbose:
        print(f"=== Generating maze with seed {seed} ===")
    grid = generate_solvable_maze(rng, wall_prob=0.28)
    
    if verbose:
        print_grid_visual(grid)
    
    # Solve with Python reference
    moves_python = solve_moves_rlud(grid)
    if moves_python is None:
        print("ERROR: Python solver returned None for a solvable maze!")
        return False
    
    if verbose:
        print(f"Python solution: {len(moves_python)} moves")
        print(f"First 20 moves: {moves_python[:20]}")
        if len(moves_python) > 20:
            print(f"Last 10 moves: {moves_python[-10:]}")
    
    # Pack grid for SystemVerilog
    packed = pack_grid_10x10_to_u32(grid)
    if verbose:
        print(f"\nPacked grid (hex):")
        for i, val in enumerate(packed):
            print(f"  grid{i} = 0x{val:08X}")
    
    # Run the SystemVerilog testbench with grid values as arguments
    if verbose:
        print("\n=== Running SystemVerilog solver ===")
    
    cmd = ['./obj_dir/Vmaze_solver_core'] + [f'0x{val:08X}' for val in packed]
    result = subprocess.run(cmd, capture_output=True, text=True, timeout=10)
    
    if verbose:
        print(result.stdout)
    if result.stderr:
        print("Errors:", file=sys.stderr)
        print(result.stderr, file=sys.stderr)
    
    # Parse output
    valid = None
    path_len = None
    for line in result.stdout.split('\n'):
        if 'Valid:' in line:
            valid = 'YES' in line or '1' in line.split(':')[1] or 'true' in line.lower()
        if 'Path length:' in line:
            try:
                path_len = int(line.split(':')[1].strip())
            except:
                pass
    
    print(f"\n=== Comparison ===")
    print(f"Python path length:   {len(moves_python)}")
    print(f"SystemVerilog valid:  {valid}")
    print(f"SystemVerilog length: {path_len}")
    
    if valid and path_len == len(moves_python):
        print("\n✓ TEST PASSED!")
        return True
    else:
        print("\n✗ TEST FAILED!")
        if not valid:
            print("  - SystemVerilog returned invalid solution")
        if path_len != len(moves_python):
            print(f"  - Path length mismatch: expected {len(moves_python)}, got {path_len}")
        return False

def test_multiple_mazes(num_tests=5):
    """Test multiple mazes"""
    print(f"=== Testing {num_tests} mazes ===\n")
    passed = 0
    failed = 0
    
    for i in range(num_tests):
        print(f"\n{'='*60}")
        print(f"Test {i+1}/{num_tests}")
        print('='*60)
        if test_single_maze(seed=42+i, verbose=True):
            passed += 1
        else:
            failed += 1
    
    print(f"\n{'='*60}")
    print(f"Summary: {passed} passed, {failed} failed out of {num_tests} tests")
    print('='*60)
    
    return failed == 0

if __name__ == "__main__":
    if len(sys.argv) > 1 and sys.argv[1] == "--multiple":
        success = test_multiple_mazes(num_tests=5)
    else:
        success = test_single_maze(seed=42, verbose=True)
    exit(0 if success else 1)
