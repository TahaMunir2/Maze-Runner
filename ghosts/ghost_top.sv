module ghost_top (
input logic clk,
input logic rst,
input logic game_enable,


input logic [3:0] ghost_row,
input logic [3:0] ghost_col,
input logic [3:0] rover_row,
input logic [3:0] rover_col,

output logic [1:0] direction,
output logic valid
);

// =========================================================================
// Direction constants
// =========================================================================
localparam logic [1:0] DIR_UP = 2'b00;
localparam logic [1:0] DIR_DOWN = 2'b01;
localparam logic [1:0] DIR_LEFT = 2'b10;
localparam logic [1:0] DIR_RIGHT = 2'b11;

// =========================================================================
// Hardcoded maze as localparam - no sensitivities issue, pure constant
// MAZE[i] = 1 means wall, 0 means free. Index = row*10 + col.
//
// Packed as [0:99] so MAZE[0] = row0col0, MAZE[9] = row0col9, etc.
//
// Row 0: 1111111110 (cols 0-8 wall, col 9 free)
// Row 1: 1000000000
// Row 2: 1011011001
// Row 3: 1000000001
// Row 4: 1010110101
// Row 5: 0000000000
// Row 6: 1010110101
// Row 7: 1000000001
// Row 8: 1011011001
// Row 9: 0000000011 (cols 8-9 wall, rest free)
// =========================================================================
localparam logic [0:99] MAZE = {
10'b1111111110, // row 0
10'b1000000000, // row 1
10'b1011011001, // row 2
10'b1000000001, // row 3
10'b1010110101, // row 4
10'b0000000000, // row 5
10'b1010110101, // row 6
10'b1000000001, // row 7
10'b1011011001, // row 8
10'b0000000011 // row 9
};

// =========================================================================
// Internal facing register
// =========================================================================
logic [1:0] facing;

// =========================================================================
// Pipeline enable shift register (3 stages)
// =========================================================================
logic [2:0] pipe_en;

always_ff @(posedge clk or posedge rst) begin
if (rst) pipe_en <= 3'b0;
else pipe_en <= {pipe_en[1:0], game_enable};
end

// =========================================================================
// STAGE 1 - Line-of-Sight scan (all 4 directions)
// =========================================================================

// UP: same col, rover above ghost, no wall between
logic los_up_clear;
always_comb begin
los_up_clear = (rover_col == ghost_col) && (rover_row < ghost_row);
for (int r = 0; r < 10; r++) begin
if (los_up_clear)
if (r > rover_row && r < ghost_row)
if (MAZE[r * 10 + ghost_col]) los_up_clear = 1'b0;
end
end

// DOWN: same col, rover below ghost
logic los_down_clear;
always_comb begin
los_down_clear = (rover_col == ghost_col) && (rover_row > ghost_row);
for (int r = 0; r < 10; r++) begin
if (los_down_clear)
if (r > ghost_row && r < rover_row)
if (MAZE[r * 10 + ghost_col]) los_down_clear = 1'b0;
end
end

// LEFT: same row, rover left of ghost
logic los_left_clear;
always_comb begin
los_left_clear = (rover_row == ghost_row) && (rover_col < ghost_col);
for (int c = 0; c < 10; c++) begin
if (los_left_clear)
if (c > rover_col && c < ghost_col)
if (MAZE[ghost_row * 10 + c]) los_left_clear = 1'b0;
end
end

// RIGHT: same row, rover right of ghost
logic los_right_clear;
always_comb begin
los_right_clear = (rover_row == ghost_row) && (rover_col > ghost_col);
for (int c = 0; c < 10; c++) begin
if (los_right_clear)
if (c > ghost_col && c < rover_col)
if (MAZE[ghost_row * 10 + c]) los_right_clear = 1'b0;
end
end

// Priority: UP > DOWN > LEFT > RIGHT
logic los_detected_comb;
logic [1:0] los_dir_comb;
always_comb begin
if (los_up_clear) begin los_detected_comb=1'b1; los_dir_comb=DIR_UP; end
else if (los_down_clear) begin los_detected_comb=1'b1; los_dir_comb=DIR_DOWN; end
else if (los_left_clear) begin los_detected_comb=1'b1; los_dir_comb=DIR_LEFT; end
else if (los_right_clear) begin los_detected_comb=1'b1; los_dir_comb=DIR_RIGHT; end
else begin los_detected_comb=1'b0; los_dir_comb=DIR_UP; end
end

// Stage 1 register
logic s1_los_detected;
logic [1:0] s1_los_dir;
logic [3:0] s1_ghost_row, s1_ghost_col;

always_ff @(posedge clk or posedge rst) begin
if (rst) begin
s1_los_detected <= 1'b0;
s1_los_dir <= DIR_UP;
s1_ghost_row <= 4'd0;
s1_ghost_col <= 4'd0;
end else if (pipe_en[0]) begin
s1_los_detected <= los_detected_comb;
s1_los_dir <= los_dir_comb;
s1_ghost_row <= ghost_row;
s1_ghost_col <= ghost_col;
end
end

// =========================================================================
// STAGE 2 - Wall checks on ghost's 4 neighbours
// =========================================================================
logic wc_up, wc_down, wc_left, wc_right;
assign wc_up = (s1_ghost_row > 4'd0) &&
(MAZE[(s1_ghost_row - 4'd1) * 10 + s1_ghost_col] == 1'b0);
assign wc_down = (s1_ghost_row < 4'd9) &&
(MAZE[(s1_ghost_row + 4'd1) * 10 + s1_ghost_col] == 1'b0);
assign wc_left = (s1_ghost_col > 4'd0) &&
(MAZE[s1_ghost_row * 10 + (s1_ghost_col - 4'd1)] == 1'b0);
assign wc_right = (s1_ghost_col < 4'd9) &&
(MAZE[s1_ghost_row * 10 + (s1_ghost_col + 4'd1)] == 1'b0);

logic s2_can_up, s2_can_down, s2_can_left, s2_can_right;
logic s2_los_detected;
logic [1:0] s2_los_dir;
logic [1:0] s2_facing;

always_ff @(posedge clk or posedge rst) begin
if (rst) begin
s2_can_up <= 1'b0; s2_can_down <= 1'b0;
s2_can_left <= 1'b0; s2_can_right <= 1'b0;
s2_los_detected <= 1'b0;
s2_los_dir <= DIR_UP;
s2_facing <= DIR_UP;
end else if (pipe_en[1]) begin
s2_can_up <= wc_up;
s2_can_down <= wc_down;
s2_can_left <= wc_left;
s2_can_right <= wc_right;
s2_los_detected <= s1_los_detected;
s2_los_dir <= s1_los_dir;
s2_facing <= facing;
end
end

// =========================================================================
// STAGE 3 - Direction select
// =========================================================================

// Absolute direction priority ordered by current facing
// [0]=forward [1]=rel-right [2]=backward [3]=rel-left
logic [1:0] wf_priority [0:3];

always_comb begin
case (s2_facing)
DIR_UP: begin
wf_priority[0]=DIR_UP; wf_priority[1]=DIR_RIGHT;
wf_priority[2]=DIR_DOWN; wf_priority[3]=DIR_LEFT;
end
DIR_RIGHT: begin
wf_priority[0]=DIR_RIGHT; wf_priority[1]=DIR_DOWN;
wf_priority[2]=DIR_LEFT; wf_priority[3]=DIR_UP;
end
DIR_DOWN: begin
wf_priority[0]=DIR_DOWN; wf_priority[1]=DIR_LEFT;
wf_priority[2]=DIR_UP; wf_priority[3]=DIR_RIGHT;
end
DIR_LEFT: begin
wf_priority[0]=DIR_LEFT; wf_priority[1]=DIR_UP;
wf_priority[2]=DIR_RIGHT; wf_priority[3]=DIR_DOWN;
end
default: begin
wf_priority[0]=DIR_UP; wf_priority[1]=DIR_RIGHT;
wf_priority[2]=DIR_DOWN; wf_priority[3]=DIR_LEFT;
end
endcase
end

// Helper: is absolute direction d open?
function automatic logic dir_open(
input logic [1:0] d,
input logic cup, cdn, clft, crgt
);
case (d)
DIR_UP: return cup;
DIR_DOWN: return cdn;
DIR_LEFT: return clft;
DIR_RIGHT: return crgt;
default: return 1'b0;
endcase
endfunction

// Wall follower: iterate BACKWARDS so that higher-priority directions
// (lower index) overwrite lower-priority ones last.
// Final value = highest-priority open direction.
logic [1:0] wf_dir;
always_comb begin
wf_dir = wf_priority[3]; // lowest priority fallback
for (int i = 3; i >= 0; i--) begin
if (dir_open(wf_priority[i],
s2_can_up, s2_can_down,
s2_can_left, s2_can_right))
wf_dir = wf_priority[i];
end
end

// Final mux: LoS overrides wall follower
logic [1:0] chosen_dir;
assign chosen_dir = s2_los_detected ? s2_los_dir : wf_dir;

// Stage 3 output register + facing update
always_ff @(posedge clk or posedge rst) begin
if (rst) begin
direction <= DIR_UP;
valid <= 1'b0;
facing <= DIR_UP;
end else begin
valid <= 1'b0;
if (pipe_en[2]) begin
direction <= chosen_dir;
valid <= 1'b1;
facing <= chosen_dir;
end
end
end

endmodule
