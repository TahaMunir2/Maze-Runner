`timescale 1ns/1ps
// =============================================================================
// astar_axis_wrapper.sv
//
// AXI4-Stream wrapper around astar_top.
//
// RECEIVE (DMA ? Hardware):
//   - Accepts 100 bytes over AXI4-Stream (one byte per maze cell, bit[0] used)
//   - Once all 100 bytes received, pulses start to astar_top
//
// TRANSMIT (Hardware ? DMA):
//   - Waits for path_ready from astar_top
//   - Streams path_length bytes back (each byte = 4-bit direction in bits[3:0])
//   - If no_path, streams a single 0xFF byte back as error indicator
//
// Reset: active-low (aresetn) - standard AXI convention
// =============================================================================

module bfs_axis_wrapper (
    input  logic        aclk,
    input  logic        aresetn,        // active-low reset (AXI standard)

    // AXI4-Stream Slave - receives maze data from DMA
    input  logic [31:0]  s_axis_tdata,
    input  logic        s_axis_tvalid,
    output logic        s_axis_tready,
    input  logic        s_axis_tlast,

    // AXI4-Stream Master - sends path data back to DMA
    output logic [31:0]  m_axis_tdata,
    output logic        m_axis_tvalid,
    input  logic        m_axis_tready,
    output logic        m_axis_tlast
);

    // -------------------------------------------------------------------------
    // Convert active-low reset to active-high for astar_top
    // -------------------------------------------------------------------------
    logic rst;
    assign rst = ~aresetn;

    // -------------------------------------------------------------------------
    // Internal signals connecting to astar_top
    // -------------------------------------------------------------------------
    logic        start;
    logic        maze_arr [0:99];       // unpacked - matches astar_top port
    logic [3:0]  path_arr [0:98];       // unpacked - matches astar_top port
    logic [6:0]  path_length;
    logic        path_ready;
    logic        no_path;

    // -------------------------------------------------------------------------
    // Instantiate astar_top - NO changes needed to your existing files
    // -------------------------------------------------------------------------
    bfs_top bfs_inst (
        .clk         (aclk),
        .rst         (rst),
        .start       (start),
        .maze        (maze_arr),
        .path        (path_arr),
        .path_length (path_length),
        .path_ready  (path_ready),
        .no_path     (no_path)
    );

    // -------------------------------------------------------------------------
    // State machine
    // -------------------------------------------------------------------------
    typedef enum logic [2:0] {
        S_IDLE      = 3'd0,   // waiting for first maze byte
        S_RECV_MAZE = 3'd1,   // receiving 100 maze bytes from DMA
        S_RUNNING   = 3'd2,   // A* algorithm running, waiting for result
        S_SEND_PATH = 3'd3,   // streaming path back to DMA
        S_NO_PATH   = 3'd4    // sending 0xFF error byte to DMA
    } state_t;

    state_t      state;
    logic [6:0]  recv_count;    // how many maze bytes received so far (0-99)
    logic [6:0]  send_count;    // how many path bytes sent so far

    // -------------------------------------------------------------------------
    // Main sequential logic
    // -------------------------------------------------------------------------
    always_ff @(posedge aclk) begin
        if (!aresetn) begin
            state      <= S_IDLE;
            recv_count <= 7'd0;
            send_count <= 7'd0;
            start      <= 1'b0;
            for (int i = 0; i < 100; i++)
                maze_arr[i] <= 1'b0;
        end
        else begin
            start <= 1'b0;  // default: deasserted every cycle

            case (state)

                // -------------------------------------------------------------
                // IDLE: wait for DMA to start sending maze data
                // -------------------------------------------------------------
                S_IDLE: begin
                    recv_count <= 7'd0;
                    send_count <= 7'd0;
                    if (s_axis_tvalid)
                        state <= S_RECV_MAZE;
                end

                // -------------------------------------------------------------
                // RECV_MAZE: store each incoming byte as one maze cell
                //   byte[0] = maze cell value (1=wall, 0=free)
                //   after 100 bytes: pulse start to kick off A*
                // -------------------------------------------------------------
                S_RECV_MAZE: begin
                    if (s_axis_tvalid && s_axis_tready) begin
                        maze_arr[recv_count] <= s_axis_tdata[0];

                        if (recv_count == 7'd99) begin
                            start <= 1'b1;          // pulse start for one cycle
                            state <= S_RUNNING;
                        end
                        else begin
                            recv_count <= recv_count + 1;
                        end
                    end
                end

                // -------------------------------------------------------------
                // RUNNING: A* is computing, just wait for path_ready or no_path
                // -------------------------------------------------------------
                S_RUNNING: begin
                    if (path_ready) begin
                        send_count <= 7'd0;
                        state      <= S_SEND_PATH;
                    end
                    else if (no_path) begin
                        state <= S_NO_PATH;
                    end
                end

                // -------------------------------------------------------------
                // SEND_PATH: stream path bytes to DMA one by one
                //   each byte carries a 4-bit direction in bits[3:0]
                //   tlast is asserted on the final byte
                // -------------------------------------------------------------
                S_SEND_PATH: begin
                    if (m_axis_tvalid && m_axis_tready) begin
                        if (send_count == path_length - 1)
                            state <= S_IDLE;
                        else
                            send_count <= send_count + 1;
                    end
                end

                // -------------------------------------------------------------
                // NO_PATH: send a single 0xFF byte so Python knows no path found
                // -------------------------------------------------------------
                S_NO_PATH: begin
                    if (m_axis_tready)
                        state <= S_IDLE;
                end

                default: state <= S_IDLE;

            endcase
        end
    end

    // -------------------------------------------------------------------------
    // AXI4-Stream Slave: only ready when actively receiving maze bytes
    // -------------------------------------------------------------------------
    assign s_axis_tready = (state == S_RECV_MAZE);

    // -------------------------------------------------------------------------
    // AXI4-Stream Master: drive path data out
    // -------------------------------------------------------------------------
    always_comb begin
        case (state)
            S_SEND_PATH: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = {28'b0000, path_arr[send_count]};
                m_axis_tlast  = (send_count == path_length - 1);
            end
            S_NO_PATH: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = 32'hFFFFFFFF;      // error indicator: no path found
                m_axis_tlast  = 1'b1;
            end
            default: begin
                m_axis_tvalid = 1'b0;
                m_axis_tdata  = 8'h00;
                m_axis_tlast  = 1'b0;
            end
        endcase
    end

endmodule