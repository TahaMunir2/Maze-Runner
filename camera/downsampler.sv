`timescale 1ns / 1ps

module downsampler #(
    parameter INPUT_WIDTH = 640,
    parameter INPUT_HEIGHT = 480
)(
    input  wire aclk,
    input  wire aresetn,
    input  wire [23:0] s_axis_tdata,
    input  wire        s_axis_tvalid,
    output wire        s_axis_tready,
    input  wire        s_axis_tuser,
    input  wire        s_axis_tlast,
    output wire [23:0] m_axis_tdata,
    output wire        m_axis_tvalid,
    input  wire        m_axis_tready,
    output wire        m_axis_tuser,
    output wire        m_axis_tlast,
    output wire [2:0]  m_axis_tkeep 
);

    localparam OUTPUT_WIDTH = INPUT_WIDTH / 2;

    reg [10:0] in_x;
    reg [10:0] in_y;
    reg [10:0] out_x; 
    reg [23:0] prev_pixel;

    assign m_axis_tkeep = 3'b111; 

    wire keep = (in_x[0] == 1'b0) && (in_y[0] == 1'b0); // to remove odd rows and colums
    assign s_axis_tready = keep ? m_axis_tready : 1'b1;
    wire in_fire = s_axis_tvalid && s_axis_tready;
    wire [23:0] effective_prev = (in_x == 11'd0) ? s_axis_tdata : prev_pixel;
  wire [8:0] sum_r = s_axis_tdata[23:16] + effective_prev[23:16]; // 9 bits to prevent overflow
    wire [8:0] sum_g = s_axis_tdata[15:8]  + effective_prev[15:8];
    wire [8:0] sum_b = s_axis_tdata[7:0]   + effective_prev[7:0];
    wire [7:0] avg_r = sum_r[8:1];
    wire [7:0] avg_g = sum_g[8:1];
    wire [7:0] avg_b = sum_b[8:1];

    assign m_axis_tdata  = {avg_r, avg_g, avg_b};
    assign m_axis_tvalid = s_axis_tvalid && keep;
    assign m_axis_tuser  = s_axis_tuser && m_axis_tvalid;
    assign m_axis_tlast  = (out_x == (OUTPUT_WIDTH - 1)) && m_axis_tvalid;

    always @(posedge aclk) begin
        if (!aresetn) begin
            in_x  <= 11'd0;
            in_y  <= 11'd0;
            out_x <= 11'd0;
            prev_pixel <= 24'd0;
        end else if (in_fire) begin 
            prev_pixel <= s_axis_tdata;
            if (s_axis_tuser) begin
                in_x  <= 11'd1;
                in_y  <= 11'd0;
                out_x <= keep ? 11'd1 : 11'd0; 
            end 
            else if (s_axis_tlast) begin
                in_x  <= 11'd0;
                in_y  <= in_y + 11'd1;
                out_x <= 11'd0;
            end 
            else begin
                in_x  <= in_x + 11'd1;
                if (keep) begin
                  out_x <= out_x + 11'd1;
                end
            end
        end
    end

endmodule
