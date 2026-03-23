`timescale 1ns / 1ps

module tb_lfsr16;

    logic clk;
    logic rst;
    logic enable;
    logic load_seed;
    logic [15:0] seed;
    logic [15:0] value;

    lfsr16 dut (
        .clk(clk),
        .rst(rst),
        .enable(enable),
        .load_seed(load_seed),
        .seed(seed),
        .value(value)
    );

    always #5 clk = ~clk;

    initial begin
        clk = 0;
        rst = 1;
        enable = 0;
        load_seed = 0;
        seed = 16'h1234;

        #20;
        rst = 0;
        @(posedge clk);
        

        // Load seed
        @(posedge clk);
        load_seed = 1;
        seed = 16'h1234;

        @(posedge clk);
        load_seed = 0;
        enable = 1;

        repeat (20) begin
            @(posedge clk);
            $display("time=%0t value=%h", $time, value);
        end

        enable = 0;

        $display("tb_lfsr16 finished");
        #20;
        $finish;
    end

endmodule