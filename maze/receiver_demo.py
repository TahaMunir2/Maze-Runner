from maze import MazeEngine, process_update, get_render_state, set_maze, list_mazes

print("Available mazes:", list_mazes())

set_maze(2)  # try maze 2
eng = MazeEngine()
print("Render state:", get_render_state(eng))

print(process_update(eng, 1, 0))
print(process_update(eng, 0, 1))
print(process_update(eng, 0, 1))

