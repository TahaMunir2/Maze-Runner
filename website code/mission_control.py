from flask import Flask, request, jsonify, send_from_directory
from flask_cors import CORS
import boto3
import time
from datetime import datetime

app = Flask(__name__)
CORS(app)

dynamodb = boto3.resource('dynamodb', region_name='eu-north-1')
maze_table = dynamodb.Table('MazeTable')
rover_logs = dynamodb.Table('RoverLogs')
ghost_logs = dynamodb.Table('GhostLogs')
leaderboard_table = dynamodb.Table('Leaderboard')
vision_table = dynamodb.Table('VisionPositions')

INITIAL_COINS = [[2,1],[7,3],[10,5],[4,0],[12,3],[1,5]]

state = {
    "arena": {
        "grid": "0" * 91,
        "cols": 13,
        "rows": 7,
        "rover_pos":  [0, 6],
        "ghost_pos":  [0, 0],
        "ghost2_pos": [12, 0],
        "ghost3_pos": [0, 3],
        "ghost4_pos": [12, 3],
        "collision": False,
        "victory": False,
        "active_ghosts": 1,
        "coins": list(INITIAL_COINS),
        "rover_history": [],
        "ghost_history": [],
        "game_start_time": None,
        "saved_to_db": False,
        "agent_name": "AGENT",
        "run_number": 1
    },
    "solver": {
        "grid": "0" * 100,
        "rows": 10,
        "cols": 10,
        "rover_pos": [0, 9],
        "history": ["SYSTEM_READY", "AWAITING_FPGA_MAZE"]
    }
}

def now_str():
    return datetime.now().strftime("%H:%M:%S")


def is_unix_timestamp(ts):
    try:
        val = float(ts)
        return val > 1000000
    except (ValueError, TypeError):
        return False


def format_timestamp_display(ts):
    if not ts:
        return '--:--:--'
    if is_unix_timestamp(ts):
        return datetime.fromtimestamp(float(ts)).strftime("%H:%M:%S")
    return str(ts)


def get_next_run_number():
    try:
        response = leaderboard_table.scan(ProjectionExpression='RunNumber')
        items = response.get('Items', [])
        if not items:
            return 1
        max_run = max(int(item.get('RunNumber', 0)) for item in items)
        return max_run + 1
    except Exception:
        return 1


def move_logic(current_pos, direction, grid, width):
    x, y = current_pos
    nx, ny = x, y
    direction = direction.upper()
    if direction == "UP":    ny -= 1
    elif direction == "DOWN":  ny += 1
    elif direction == "LEFT":  nx -= 1
    elif direction == "RIGHT": nx += 1
    height = len(grid) // width
    if 0 <= nx < width and 0 <= ny < height:
        if grid[ny * width + nx] == "0":
            return [nx, ny]
    return current_pos


def compute_active_ghosts():
    t = state["arena"]["game_start_time"]
    if t is None: return 1
    elapsed = time.time() - t
    return min(4, 1 + int(elapsed // 15))


def save_to_leaderboard(status):
    if state["arena"]["saved_to_db"]:
        return
    if state["arena"]["game_start_time"] is None:
        return
    elapsed = round(time.time() - state["arena"]["game_start_time"], 2)
    coins_collected = len(INITIAL_COINS) - len(state["arena"]["coins"])
    timestamp = now_str()
    agent_name = state["arena"].get("agent_name", "AGENT")
    run_number = state["arena"].get("run_number", 1)
    try:
        leaderboard_table.put_item(Item={
            'SessionID': f"SESS_{timestamp.replace(':', '')}",
            'Timestamp': timestamp,
            'Status': status,
            'TimeTaken': str(elapsed),
            'Coins': coins_collected,
            'AgentName': agent_name,
            'RunNumber': run_number
        })
        state["arena"]["saved_to_db"] = True
        print(f"[LEADERBOARD] Saved: {agent_name} Run#{run_number} | {status} | {elapsed}s | {coins_collected} coins | @ {timestamp}")
    except Exception as e:
        print(f"[LEADERBOARD ERROR] {e}")


@app.route('/')
def index(): return send_from_directory('.', 'index.html')

@app.route('/demo')
def demo_page(): return send_from_directory('.', 'fpga_demo.html')

@app.route('/solver')
def solver_page(): return send_from_directory('.', 'circuit_solver.html')

@app.route('/arena')
def arena_page(): return send_from_directory('.', 'fpga_arena.html')

@app.route('/archives')
def archives_page(): return send_from_directory('.', 'archives.html')


nav_state = {"page": None}

@app.route('/set_page', methods=['POST'])
def set_page():
    nav_state["page"] = request.json.get("page")
    return jsonify({"status": "SUCCESS"}), 200

@app.route('/get_page')
def get_page():
    page = nav_state["page"]
    nav_state["page"] = None
    return jsonify({"page": page}), 200


@app.route('/get_leaderboard')
def get_leaderboard():
    try:
        response = leaderboard_table.scan()
        items = response.get('Items', [])
        items_sorted = sorted(items, key=lambda x: (-int(x['Coins']), float(x['TimeTaken'])))
        for item in items_sorted:
            item['Timestamp'] = format_timestamp_display(item.get('Timestamp'))
        return jsonify({"leaderboard": items_sorted[:10]}), 200
    except Exception as e:
        return jsonify({"status": "ERROR", "message": str(e)}), 500


@app.route('/log_rover', methods=['POST'])
def log_rover():
    data = request.json
    rover_logs.put_item(Item={
        'MoveID': f"MOVE_{now_str().replace(':', '')}",
        'Timestamp': now_str(),
        'direction': data.get('direction'),
        'pos': str(data.get('pos'))
    })
    return jsonify({"status": "SUCCESS"}), 200


@app.route('/get_history')
def get_history():
    try:
        response = maze_table.scan()
        items = sorted(response.get('Items', []), key=lambda x: x.get('Timestamp', ''), reverse=True)
        return jsonify({"items": items}), 200
    except Exception as e:
        return jsonify({"status": "ERROR", "message": str(e)}), 500


@app.route('/push_positions', methods=['POST'])
def push_positions():
    vision_table.put_item(Item={
        'SnapshotID': 'LATEST',
        'Timestamp': now_str(),
        'positions': request.json.get('positions', [])
    })
    return jsonify({"status": "SUCCESS"}), 200


@app.route('/get_positions')
def get_positions():
    result = vision_table.get_item(Key={'SnapshotID': 'LATEST'})
    return jsonify(result.get('Item', {})), 200


@app.route('/stream_arena')
def get_arena():
    state["arena"]["active_ghosts"] = compute_active_ghosts()
    return jsonify(state["arena"]), 200


@app.route('/stream_solver')
def get_solver():
    return jsonify(state["solver"]), 200


@app.route('/reset_solver', methods=['POST'])
def reset_solver():
    state["solver"].update({
        "rover_pos": [0, 9],
        "history": ["SYSTEM_READY", "AWAITING_FPGA_MAZE"]
    })
    return jsonify({"status": "SUCCESS"}), 200


@app.route('/set_agent', methods=['POST'])
def set_agent():
    try:
        data = request.json
        name = data.get("name", "GUEST").strip().upper()
        if not name:
            name = "GUEST"
        run_number = get_next_run_number()
        state["arena"]["agent_name"] = name
        state["arena"]["run_number"] = run_number
        return jsonify({"status": "SUCCESS", "agent": name, "run": run_number}), 200
    except Exception as e:
        return jsonify({"status": "ERROR", "message": str(e)}), 500


@app.route('/validate_move', methods=['POST'])
def validate_move():
    if state["arena"]["collision"] or state["arena"]["victory"]:
        return jsonify({"status": "LOCKED"}), 200

    if state["arena"]["game_start_time"] is None:
        state["arena"]["game_start_time"] = time.time()
        state["arena"]["saved_to_db"] = False

    direction = request.json.get("direction")
    new_pos = move_logic(state["arena"]["rover_pos"], direction, state["arena"]["grid"], state["arena"]["cols"])
    state["arena"]["rover_pos"] = new_pos
    state["arena"]["rover_history"].insert(0, f"ROVER: {direction} -> {new_pos}")

    if new_pos in state["arena"]["coins"]:
        state["arena"]["coins"].remove(new_pos)
        if not state["arena"]["coins"]:
            state["arena"]["victory"] = True
            state["arena"]["rover_history"].insert(0, "MISSION_SUCCESS")
            save_to_leaderboard("VICTORY")
            return jsonify({"status": "VICTORY", "pos": new_pos}), 200

    ghost_keys = ["ghost_pos", "ghost2_pos", "ghost3_pos", "ghost4_pos"]
    for i in range(state["arena"]["active_ghosts"]):
        if new_pos == state["arena"][ghost_keys[i]]:
            state["arena"]["collision"] = True
            state["arena"]["rover_history"].insert(0, "CRITICAL_CONTACT")
            save_to_leaderboard("KIA")
            return jsonify({"status": "COLLISION", "pos": new_pos}), 200

    return jsonify({"status": "SUCCESS", "pos": new_pos}), 200


@app.route('/reset_arena', methods=['POST'])
def reset_arena():
    state["arena"].update({
        "rover_pos": [0, 6],
        "collision": False,
        "victory": False,
        "game_start_time": None,
        "coins": list(INITIAL_COINS),
        "saved_to_db": False
    })
    state["arena"]["rover_history"].insert(0, "MISSION_RESET")
    return jsonify({"status": "SUCCESS"}), 200


@app.route('/update_ghost', methods=['POST'])
def update_ghost():
    if state["arena"]["collision"] or state["arena"]["victory"]:
        return jsonify({"status": "LOCKED"}), 200

    data = request.json
    direction = data.get("direction")
    ghost_id = data.get("ghost_id", 1)
    target = {1: "ghost_pos", 2: "ghost2_pos", 3: "ghost3_pos", 4: "ghost4_pos"}.get(ghost_id, "ghost_pos")

    state["arena"][target] = move_logic(state["arena"][target], direction, state["arena"]["grid"], state["arena"]["cols"])

    event_str = f"GHOST_{ghost_id}: {direction} -> {state['arena'][target]}"
    state["arena"]["ghost_history"].insert(0, event_str)
    ghost_logs.put_item(Item={
        'MazeID': 'ARENA',
        'Timestamp': int(time.time()),
        'event': event_str
    })

    if state["arena"][target] == state["arena"]["rover_pos"]:
        state["arena"]["collision"] = True
        state["arena"]["rover_history"].insert(0, "CRITICAL_CONTACT")
        save_to_leaderboard("KIA")

    return jsonify({"status": "SUCCESS"}), 200


@app.route('/sync_maze', methods=['POST'])
def sync_maze():
    global state
    try:
        data = request.json
        grid_str = data.get("grid_data")
        r = int(data.get("rows", 10))
        c = int(data.get("cols", 10))
        m_id = data.get("maze_id", f"FPGA_{now_str().replace(':', '')}")
        state["solver"].update({"grid": grid_str, "rows": r, "cols": c})
        state["solver"]["history"].insert(0, f"MAZE_SYNCED: {m_id}")
        state["arena"].update({"grid": grid_str, "rows": r, "cols": c})
        maze_table.put_item(Item={
            'MazeID': m_id,
            'grid_data': grid_str,
            'rows': r,
            'cols': c,
            'Timestamp': now_str()
        })
        return jsonify({"status": "SUCCESS", "id": m_id}), 200
    except Exception as e:
        return jsonify({"status": "ERROR", "message": str(e)}), 500


@app.route('/sync_arena', methods=['POST'])
def sync_arena():
    global state
    try:
        data = request.json
        grid_str = data.get("grid_data")
        r = int(data.get("rows", 7))
        c = int(data.get("cols", 13))
        state["arena"].update({"grid": grid_str, "rows": r, "cols": c})
        maze_table.put_item(Item={
            'MazeID': 'FPGA_ARENA',
            'grid_data': grid_str,
            'rows': r,
            'cols': c,
            'Timestamp': now_str()
        })
        return jsonify({"status": "SUCCESS"}), 200
    except Exception as e:
        return jsonify({"status": "ERROR", "message": str(e)}), 500


if __name__ == '__main__':
    app.run(host='0.0.0.0', port=5000)