# Timing constraints for PYNQ Z-1 (xc7z020clg400-1)

# Clock constraints
create_clock -period 10.000 -name clk [get_ports clk]

# Input delays
set_input_delay -clock clk 2.0 [get_ports s_axi_*]
set_input_delay -clock clk 2.0 [get_ports grid*]

# Output delays
set_output_delay -clock clk 2.0 [get_ports path_*]
set_output_delay -clock clk 2.0 [get_ports done]
set_output_delay -clock clk 2.0 [get_ports valid]

# False paths
set_false_path -from [get_ports rst] -to [all_registers]

# Multi-cycle paths (if needed for memory access)
# set_multicycle_path -setup 2 -from [get_cells *maze_mem*] -to [get_cells *core*]

# Clock groups
set_clock_groups -asynchronous \
    -group [get_clocks clk] \
    -group [get_clocks -of_objects [get_pins processing_system7_0/FCLK_CLK0]]
