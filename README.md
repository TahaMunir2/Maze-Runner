# Maze-Runner

A rover moves through a grid maze while two FPGA nodes and a cloud server track its position, validate moves, and guide it to the shortest path, with live visualisation over HDMI.

Goals:
- Local processing on FPGA nodes
- Node A: vision/position tracking of rover from overhead camera
- Node B: maze logic, move validation, shortest-path computation, guidance generation
- Cloud server
- Coordinates game/session, logs events, tracks timing and performance metrics
- Two-way communication
- Nodes send events to server (position, move attempts, results)
- Server sends commands/settings back (start/stop, guidance mode)
- Both FPGAs send data to server and receive configuration/commands

---
System architecture:

We use two FPGA nodes plus one cloud server:

Node A — Vision/Tracker FPGA 
- Looks down on rover with a camera
- Computes rover position on a grid (x, y) and optionally heading
- Sends position updates to: HDMI overlay (maze + rover marker), Node B (for validation/guidance), Cloud server (for logging/metrics)

Node B — Maze/Planner FPGA:
- Stores maze layout (walls) and sends it to HDMI
- Computes shortest path
- Receives rover position from Node A
- Outputs Move accepted/rejected (yes/no), Optional guidance (“next move: xx"), Receives settings from cloud server (maze selection, guidance on/off, difficulty)

Cloud Server:
- Maintains session state, scoreboard, timing, logs
- Collects performance metrics (latency, errors, completion time)
- transfers configuration between nodes


----
Demo behaviour:
- Maze appears on HDMI with rover marker.
- Rover moves step-by-step between grid cells.
- Node A detects new position and publishes it.
- Node B validates the move:
    -  if rover moved into a wall → reject + show warning
    - If legal → accept + update progress
- Node B can optionally guide rover with next recommended move along shortest path.
- Cloud server logs every step and displays run statistics



----
Inputs:
- Camera feed (Node A)
- Rover movement commands (from rover controller)
- Cloud commands (start/stop/config)

Outputs:
- HDMI display (maze + rover overlay + status text)
- “Accepted/Rejected” move status
- Guidance direction (optional)

Cloud dashboard:
- Performance metrics
- Position update rate (Hz) from Node A
- End-to-end latency: rover moves → Node B decision displayed (ms)
- Validation accuracy: false accepts/rejects
- completion time and wrong moves count

----

task splits:

Rover:
- Drive system (motors, control, speed)
- Ensure movement is grid-step based
- Rover can reliably move one cell at a time
- interface: MOVE(N/E/S/W) or manual control with discrete steps
- discrete steps (one tile per command)

HDMI / Display (visualisation):
- HDMI output pipeline
- Render maze grid + walls
- Render rover marker at (x,y)
- Render status text: ACCEPT/REJECT, next move arrow, timer...
- API for others:
    - drawMaze(maze_id or grid)
    - drawRover(x,y)
    - drawStatus(accepted, nextMove, stats)

Maze generation + shortest path + validation (Node B)
- Maze representation (grid with walls- shaded boxes for now)
- Path planning algorithm
- Move validation:
    - Compare previous position to new position
    - Ensure it’s a legal move (one step, not into wall)
    - validate_move(prev, curr) -> accepted/rejected
    - next_move(curr) -> direction
- Guidance mode:
    - Compute recommended next step from current position to goal
    - shortest_path_length and optional full path list
- Output to HDMI + send to cloud

Cloud server:
- Receive:
    - Node A position updates
    - Node B decisions + guidance + metrics
- Send:
    - start/stop
    - maze selection (or if we do a changing maze)
    - guidance on/off
    - difficulty parameters
    - dashboard

