"""
PYNQ interface for parallel maze solver
READY FOR FPGA IMPLEMENTATION
Run this on the PYNQ Z-1 board
"""

from pynq import Overlay, MMIO, allocate
import numpy as np
from typing import List, Tuple
import time

class MazeSolverFPGA:
    """
    FPGA-based parallel maze solver for PYNQ Z-1
    
    Usage:
        solver = MazeSolverFPGA("maze_solver.bit", num_cores=16)
        solutions = solver.solve_batch(mazes)
    """
    
    # AXI4-Lite register map
    REG_CTRL = 0x00      # Control register
    REG_STATUS = 0x04    # Status register
    REG_NUM_MAZES = 0x08 # Number of mazes
    REG_DONE = 0x0C      # Mazes completed
    REG_MAZE_BASE = 0x20 # Maze memory base address
    REG_RESULT_BASE = 0x24 # Result memory base address
    
    # Memory base addresses (adjust based on your Vivado address map)
    MAZE_MEM_BASE = 0x1000   # Maze storage: 1000 mazes * 16 bytes = 16 KB
    RESULT_MEM_BASE = 0x2000 # Result storage: 1000 mazes * 32 bytes = 32 KB
    
    def __init__(self, bitstream_path: str, num_cores: int = 16):
        """
        Initialize FPGA solver
        
        Args:
            bitstream_path: Path to .bit file
            num_cores: Number of parallel cores (must match hardware)
        """
        self.overlay = Overlay(bitstream_path)
        self.num_cores = num_cores
        
        # Memory-mapped I/O addresses (adjust based on your Vivado design)
        # These are example addresses - check your address map in Vivado
        self.CTRL_BASE = 0x43C00000  # AXI4-Lite control base
        
        # Control registers via AXI4-Lite
        self.ctrl = MMIO(self.CTRL_BASE, 0x10000)
        
        # Allocate memory buffers in DDR (for large batches)
        self.maze_buffer = allocate(shape=(10000, 4), dtype=np.uint32)
        self.result_buffer = allocate(shape=(10000, 8), dtype=np.uint32)
        
        # Initialize memory base addresses
        self.ctrl.write(self.REG_MAZE_BASE, self.MAZE_MEM_BASE)
        self.ctrl.write(self.REG_RESULT_BASE, self.RESULT_MEM_BASE)
    
    def pack_maze(self, grid: List[List[int]]) -> List[int]:
        """
        Pack 10x10 grid into 4 32-bit words
        
        Args:
            grid: 10x10 grid (1=free, 0=wall)
        
        Returns:
            List of 4 uint32 values
        """
        bits = 0
        for y in range(10):
            for x in range(10):
                idx = y * 10 + x
                if grid[y][x] == 1:
                    bits |= (1 << idx)
        
        return [
            (bits >> 0) & 0xFFFFFFFF,
            (bits >> 32) & 0xFFFFFFFF,
            (bits >> 64) & 0xFFFFFFFF,
            (bits >> 96) & 0xFFFFFFFF,
        ]
    
    def unpack_path(self, path_words: List[int], path_len: int) -> List[str]:
        """
        Unpack path from 32-bit words to list of moves
        
        Args:
            path_words: List of 7 32-bit words
            path_len: Number of moves
        
        Returns:
            List of moves ('u', 'r', 'd', 'l')
        """
        dir_map = {0: 'u', 1: 'r', 2: 'd', 3: 'l'}
        moves = []
        
        for i in range(path_len):
            word_idx = i // 16
            bit_pos = (i % 16) * 2
            word = path_words[word_idx]
            dir_code = (word >> bit_pos) & 0x3
            moves.append(dir_map[dir_code])
        
        return moves
    
    def write_maze_to_fpga(self, maze_idx: int, packed: List[int]):
        """
        Write a single maze to FPGA memory via AXI4-Lite
        
        Args:
            maze_idx: Index of maze (0-based)
            packed: 4 words of maze data
        """
        base_addr = self.MAZE_MEM_BASE + (maze_idx * 16)  # 4 words * 4 bytes
        
        for i, word in enumerate(packed):
            addr = base_addr + (i * 4)
            self.ctrl.write(addr, word)
    
    def read_result_from_fpga(self, maze_idx: int) -> Tuple[int, List[int], bool]:
        """
        Read a single result from FPGA memory via AXI4-Lite
        
        Args:
            maze_idx: Index of maze (0-based)
        
        Returns:
            (path_len, path_words, valid)
        """
        base_addr = self.RESULT_MEM_BASE + (maze_idx * 32)  # 8 words * 4 bytes
        
        path_len = self.ctrl.read(base_addr + 0) & 0xFF
        path_words = [
            self.ctrl.read(base_addr + 4),
            self.ctrl.read(base_addr + 8),
            self.ctrl.read(base_addr + 12),
            self.ctrl.read(base_addr + 16),
            self.ctrl.read(base_addr + 20),
            self.ctrl.read(base_addr + 24),
            self.ctrl.read(base_addr + 28),
        ]
        valid = (self.ctrl.read(base_addr + 28) >> 31) & 0x1
        
        return path_len, path_words, bool(valid)
    
    def solve_batch(self, mazes: List[List[List[int]]], 
                   timeout: float = 10.0) -> List[List[str]]:
        """
        Solve a batch of mazes on FPGA
        
        Args:
            mazes: List of 10x10 grids
            timeout: Maximum time to wait (seconds)
        
        Returns:
            List of solutions (each is list of moves)
        """
        num_mazes = len(mazes)
        print(f"Solving {num_mazes} mazes on FPGA with {self.num_cores} cores...")
        
        # Pack all mazes
        start_pack = time.time()
        packed_mazes = [self.pack_maze(grid) for grid in mazes]
        pack_time = time.time() - start_pack
        print(f"  Packed {num_mazes} mazes in {pack_time:.3f}s")
        
        # Write mazes to FPGA memory
        start_write = time.time()
        for i, packed in enumerate(packed_mazes):
            self.write_maze_to_fpga(i, packed)
        write_time = time.time() - start_write
        print(f"  Wrote to FPGA memory in {write_time:.3f}s")
        
        # Configure FPGA
        self.ctrl.write(self.REG_NUM_MAZES, num_mazes)
        
        # Start processing
        start_solve = time.time()
        self.ctrl.write(self.REG_CTRL, 0x02)  # Set start bit
        
        # Wait for completion (poll or use interrupt)
        start_wait = time.time()
        while True:
            status = self.ctrl.read(self.REG_STATUS)
            done = self.ctrl.read(self.REG_DONE)
            
            if done >= num_mazes:
                break
            
            if time.time() - start_wait > timeout:
                raise TimeoutError(f"FPGA timeout after {timeout}s")
            
            time.sleep(0.001)  # Poll every 1ms
        
        solve_time = time.time() - start_solve
        print(f"  Solved in {solve_time:.3f}s ({num_mazes/solve_time:.0f} mazes/s)")
        
        # Read results
        start_read = time.time()
        solutions = []
        for i in range(num_mazes):
            path_len, path_words, valid = self.read_result_from_fpga(i)
            if valid:
                moves = self.unpack_path(path_words, path_len)
                solutions.append(moves)
            else:
                solutions.append([])  # No solution found
        
        read_time = time.time() - start_read
        print(f"  Read results in {read_time:.3f}s")
        
        total_time = time.time() - start_pack
        print(f"Total time: {total_time:.3f}s")
        print(f"Throughput: {num_mazes/total_time:.0f} mazes/s")
        
        return solutions
    
    def solve_batch_streaming(self, mazes: List[List[List[int]]], 
                             batch_size: int = 1000) -> List[List[str]]:
        """
        Solve large batches by processing in chunks
        
        Args:
            mazes: List of all mazes to solve
            batch_size: Number of mazes per batch
        
        Returns:
            List of all solutions
        """
        all_solutions = []
        num_batches = (len(mazes) + batch_size - 1) // batch_size
        
        for batch_idx in range(num_batches):
            start_idx = batch_idx * batch_size
            end_idx = min(start_idx + batch_size, len(mazes))
            batch = mazes[start_idx:end_idx]
            
            print(f"Processing batch {batch_idx+1}/{num_batches} "
                  f"({len(batch)} mazes)...")
            
            solutions = self.solve_batch(batch)
            all_solutions.extend(solutions)
        
        return all_solutions


# Example usage
if __name__ == "__main__":
    from maze_generator import generate_solvable_maze
    import random
    
    # Initialize solver
    solver = MazeSolverFPGA("maze_solver.bit", num_cores=16)
    
    # Generate test mazes
    print("Generating 1000 test mazes...")
    rng = random.Random(42)
    mazes = [generate_solvable_maze(rng) for _ in range(1000)]
    
    # Solve on FPGA
    solutions = solver.solve_batch(mazes)
    
    print(f"\nSolved {len(solutions)} mazes")
    print(f"First solution: {solutions[0][:10]}...")
