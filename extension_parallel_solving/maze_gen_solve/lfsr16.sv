//generates random numbers
module lfsr16 (
    input  logic       clk,
    input  logic       rst,
    input  logic       enable,
    input  logic       load_seed,
    input  logic [15:0] seed,
    output logic [15:0] value
);
    logic feedback;

    always_ff @(posedge clk) begin
        if (rst) begin
            value <= 16'hACE1;
        end else if (load_seed) begin
            if (seed == 16'd0)
                value <= 16'hACE1;
            else
                value <= seed;
        end else if (enable) begin
            // taps: 16,14,13,11
            feedback = value[15] ^ value[13] ^ value[12] ^ value[10];
            value <= {value[14:0], feedback};
        end
    end
endmodule