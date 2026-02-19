# Maze-Runner

A rover moves through a grid maze while two FPGA nodes and a cloud server track its position, validate moves, and guide it to the shortest path, with live visualisation on AWS.

## Goals:
- Local processing on FPGA nodes
- Node A: Projection of Generation of Maze and Validation of Moves
- Node B: Generate the shortest path and Follow Verbal Commands
- Cloud server
- Logs moves, tracks timing and performance metrics
- Two-way communication
- Node A sends the maze to the server, and servers sends it to Node B
- Node B sends each move to the server, and the server validates it with Node A

---
## System architecture:

We use two FPGA nodes plus one cloud server:

Node A — Camera
- Looks down on rover with a camera
- Uses python library to counter distortion
- Generates Maze on ARM CPU
- H.264 encoder on FPGA logic
- Rejects or accepts moves by Node B

Node B — Rover
- Stores maze layout taken from server
- Computes the shortest path
- Some kind of Accelerator to generate the fastest path
- Lab 2 filters for Manual Override instructions (STT)
- Connected to motors using GPIO pins which go forward by 1 unit in any of the 4 directions

Cloud Server:
- Maintains history of moves (incase a wrong move is taken it gives the inverse to go back)
- Transfers communication between nodes
- Displays video image of arena with maze projected onto it
- Can be used to test different maze finding algorithms

---
## Task splits:

Rover FPGA:
- Drive system (motors, control, speed)
- Ensure movement is grid-step based
- manual control with voice commands (FIR Filters)
- Accelerator for whatever algorithm we use to generate the shortest path

Camera FPGA:
- Requires some kind of hardware encoding to take the workload off the CPU
- Livestreams feed to AWS
- Some script on AWS server overlays maze grid onto camera feed
- Needs to be on a stand in the middle square that looks directly downwards onto the grid

Maze generation + shortest path + validation (Node B)
- Maze representation (grid with walls- shaded boxes for now)
- Path planning algorithm
- Move validation:
    - Compare the previous position to the new position
    - Ensure it’s a legal move (one step, not into the wall)
    - validate_move(prev, curr) -> accepted/rejected
    - next_move(curr) -> direction
- Guidance mode:
    - Compute the recommended next step from the current position to the goal
    - shortest_path_length and optional full path list
- Output Send to the cloud


