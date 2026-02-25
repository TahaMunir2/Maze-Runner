module UpdateQueue #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4
) (
    input wire clk,
    input wire rst,
    input wire [DATA_WIDTH-1:0] data_in,
    input wire [ADDR_WIDTH-1:0] addr_in,
    input wire write_en,
    output reg [DATA_WIDTH-1:0] data_out,
    output reg [ADDR_WIDTH-1:0] addr_out
);
    
    reg [DATA_WIDTH-1:0] queue [0:(1<<ADDR_WIDTH)-1];
    
    always @(posedge clk or posedge rst) begin
        if (rst) begin
            data_out <= 0;
            addr_out <= 0;
        end else if (write_en) begin
            queue[addr_in] <= data_in;
            data_out <= data_in;
            addr_out <= addr_in;
        end else begin
            data_out <= queue[addr_in];
            addr_out <= addr_in;
        end
    end