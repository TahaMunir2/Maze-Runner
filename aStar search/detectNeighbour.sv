module detectNeighbour #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4
) (
    input wire [DATA_WIDTH-1:0] current_node,
    input wire [DATA_WIDTH-1:0] neighbor_node,
    output reg is_neighbor
);
    
    always @(*) begin
        // Simple example: Check if the neighbor node is adjacent to the current node
        if (neighbor_node == current_node + 1 || neighbor_node == current_node - 1) begin
            is_neighbor = 1;
        end else begin
            is_neighbor = 0;
        end
    end