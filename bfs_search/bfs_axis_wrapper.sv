`timescale 1ns/1ps

module bfs_axis_wrapper (
    input  logic        aclk,
    input  logic        aresetn,


    input  logic [31:0]  s_axis_tdata,
    input  logic        s_axis_tvalid,
    output logic        s_axis_tready,
    input  logic        s_axis_tlast,


    output logic [31:0]  m_axis_tdata,
    output logic        m_axis_tvalid,
    input  logic        m_axis_tready,
    output logic        m_axis_tlast
);

    logic rst;
    assign rst = ~aresetn;


    logic        start;
    logic        maze_arr [0:99];       
    logic [3:0]  path_arr [0:98];       
    logic [6:0]  path_length;
    logic        path_ready;
    logic        no_path;

  
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

    typedef enum logic [2:0] {
        S_IDLE      = 3'd0,   
        S_RECV_MAZE = 3'd1,  
        S_RUNNING   = 3'd2,   
        S_SEND_PATH = 3'd3,   
        S_NO_PATH   = 3'd4    
    } state_t;

    state_t      state;
    logic [6:0]  recv_count;    
    logic [6:0]  send_count;  

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

                S_IDLE: begin
                    recv_count <= 7'd0;
                    send_count <= 7'd0;
                    if (s_axis_tvalid)
                        state <= S_RECV_MAZE;
                end

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

                S_RUNNING: begin
                    if (path_ready) begin
                        send_count <= 7'd0;
                        state      <= S_SEND_PATH;
                    end
                    else if (no_path) begin
                        state <= S_NO_PATH;
                    end
                end

                S_SEND_PATH: begin
                    if (m_axis_tvalid && m_axis_tready) begin
                        if (send_count == path_length - 1)
                            state <= S_IDLE;
                        else
                            send_count <= send_count + 1;
                    end
                end
                S_NO_PATH: begin
                    if (m_axis_tready)
                        state <= S_IDLE;
                end

                default: state <= S_IDLE;

            endcase
        end
    end

    assign s_axis_tready = (state == S_RECV_MAZE);


    always_comb begin
        case (state)
            S_SEND_PATH: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = {28'b0000, path_arr[send_count]};
                m_axis_tlast  = (send_count == path_length - 1);
            end
            S_NO_PATH: begin
                m_axis_tvalid = 1'b1;
                m_axis_tdata  = 32'hFFFFFFFF;
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