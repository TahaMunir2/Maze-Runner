# IoT FPGA System : Maze Runner & Pac-Man

A two-game IoT platform built on a pair of PYNQ-Z1 FPGA boards connected via an AWS EC2 relay server, with all live game state projected onto the floor through a browser-based interface.

**Game 1 : Maze Runner:** a 10×10 maze is generated in hardware using Kruskal's algorithm, solved by a BFS (or A*) hardware accelerator running entirely in programmable logic, and a physical rover navigates the shortest path. After the first run, three blue objects placed on wall cells are detected by the camera node and the maze is dynamically updated, triggering a re-solve and a new (potentially shorter) path.

**Game 2 : Pac-Man:** the rover becomes a user-controlled agent navigating a 7×13 arena via a wireless controller, collecting six coins while evading up to four ghost agents whose pursuit logic : line-of-sight detection and wall-following and runs entirely in FPGA fabric, with ghost positions relayed to the server at sub-100 ms round-trip latency.

---

## Repository Structure

| Folder | Description |
|--------|-------------|
| [`bfs_search/`](bfs_search/) | BFS hardware accelerator: SystemVerilog RTL, pipelined distmap + backtrace + FSM, AXI-Stream wrapper, Verilator testbench, Vivado bitstream. |
| [`aStar search/`](aStar%20search/) | A* hardware accelerator: SystemVerilog RTL, 4-state FSM, priority queue, neighbour expansion, backtrace, AXI-Stream wrapper, multi-maze testbench, Vivado bitstream. |
| [`ghost_new_ip/`](ghost_new_ip/) | Ghost AI hardware: single `ghost_top` instance (LOS + wall-follow 3-stage pipeline), 4× parallel `ghost_multi_axi_lite` wrapper, testbench, pre-built bitstream and HWH file. |
| [`mazegen_hw/`](mazegen_hw/) | Kruskal maze generation HLS IP: generates a unique 10×10 perfect maze each run via union-find. Includes bitstream and Jupyter notebook. |
| [`camera/`](camera/) | Camera pipeline notebook (`Video-Final.ipynb`): AXI VDMA + hardware downsampler, red-dot homography calibration, blue-blob detection, grid coordinate POST to AWS. |
| [`rover/`](rover/) | Rover control notebooks: Game 1 full pipeline (`GAME1-Copy1.ipynb`) and Game 2 Pac-Man controller (`Pacman_movement_controller.ipynb`). Includes MicroBlaze I2C IMU code and stepper motor control. |
| [`Hamming_code/`](Hamming_code/) | Hamming(7,4) integrity layer (`hamming_maze.py`): encodes maze rows as 7-bit codewords, detects and corrects 1-bit errors before BFS runs. |
| [`extension_parallel_solving/`](extension_parallel_solving/) | Extension: parallel maze solving experiment. See folder README for details. |
| [`voice/`](voice/) | Voice control unit: continuous 3-second audio recording loop, speech recognition, and server-side page navigation via `/set_page`. |
| [`website code/`](website%20code/) | AWS EC2 Flask server (`mission_control.py`) and all web pages (`index.html`, `fpga_demo.html`, `fpga_arena.html`, `archives.html`). |

---

## Getting Started

### 1. AWS Server

```bash
cd "website code"
pip install flask flask-cors boto3
python mission_control.py
```

The server runs on port 5000. Ensure AWS credentials are configured with access to the six DynamoDB tables: `MazeTable`, `RoverLogs`, `GhostLogs`, `VisionPositions`, `Leaderboard`, `VoiceCommands`.

### 2. Node B — Rover (Game 1)

Open `rover/GAME1-Copy1.ipynb` on the rover PYNQ board and run all cells in order:

1. WiFi connection
2. Kruskal maze generation (`mazegen_hw/`)
3. Maze POST to AWS → projection updates
4. BFS path computation (`bfs_search/`)
5. Physical rover navigation
6. Blue-dot wall removal and re-solve

### 3. Node A — Camera & Ghost (Game 1 / Game 2)

- **Game 1:** open `camera/Video-Final.ipynb` and run. The notebook calibrates the perspective transform using four red corner markers, then continuously detects blue objects and POSTs grid coordinates to AWS.
- **Game 2:** open `ghost_new_ip/ghosts_newmaze.ipynb` and run. Loads `ghost_bd.bit`, syncs the arena to AWS, and starts the ghost control loop.

### 4. Node B — Rover (Game 2)

Open `rover/Pacman_movement_controller.ipynb`. Use the wireless controller input loop to move the rover; each move is validated server-side before physical execution.

---

## Hardware Testing (Simulation)

Each hardware module has its own README with simulation instructions. For example:



**A\*:**
```bash
cd "aStar search"
iverilog -g2012 -o sim_astar astar_top.sv astar_fsm.sv astar_init.sv update_block.sv backtrace.sv astar_multi_tb.sv && vvp sim_astar
```


---

## Key Design Decisions

- **BFS over A\*:** BFS meets timing at 100 MHz after a 3-stage pipeline fix (WNS +0.5 ns). A* cannot close timing even after pipelining (WNS −260.5 ns) due to the 100-element parallel comparator tree. Both produce optimal paths on a 10×10 grid.
- **AXI DMA over AXI-Lite:** maze data transferred in a single burst with zero CPU involvement; path streamed back in one receive transaction with interrupt, not polling.
- **MicroBlaze for I2C:** Linux scheduler cannot guarantee microsecond I2C timing; a MicroBlaze soft-core running bare-metal C handles all IMU communication independently.
- **Hardware downsampler:** 640×480 → 320×240 in PL fabric before the frame reaches the ARM, keeping CPU load low enough for real-time blue-dot detection.
- **Hamming(7,4) integrity layer:** catches silent wall-bit flips between maze generation and BFS, preventing the rover from attempting a physically impossible path.
