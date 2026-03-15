# ---------------------------------------------------------------
# 3_build_bd.tcl
# ---------------------------------------------------------------
create_bd_design "ghost_bd"

# ---------------------------------------------------------------
# ZYNQ PS
# ---------------------------------------------------------------
create_bd_cell -type ip \
    -vlnv xilinx.com:ip:processing_system7:5.5 \
    processing_system7_0

apply_bd_automation \
    -rule xilinx.com:bd_rule:processing_system7 \
    -config {make_external "FIXED_IO, DDR" apply_board_preset "1"} \
    [get_bd_cells processing_system7_0]

set_property -dict [list \
    CONFIG.PCW_USE_M_AXI_GP0 {1} \
    CONFIG.PCW_M_AXI_GP0_ENABLE_STATIC_REMAP {1} \
] [get_bd_cells processing_system7_0]

# ---------------------------------------------------------------
# Proc system reset
# ---------------------------------------------------------------
create_bd_cell -type ip \
    -vlnv xilinx.com:ip:proc_sys_reset:5.0 \
    proc_sys_reset_0

# ---------------------------------------------------------------
# AXI SmartConnect  (1 master → 6 slaves)
# ---------------------------------------------------------------
create_bd_cell -type ip \
    -vlnv xilinx.com:ip:smartconnect:1.0 \
    smartconnect_0
set_property CONFIG.NUM_SI {1} [get_bd_cells smartconnect_0]
set_property CONFIG.NUM_MI {6} [get_bd_cells smartconnect_0]

# ---------------------------------------------------------------
# Your custom ghost IP
# ---------------------------------------------------------------
create_bd_cell -type ip \
    -vlnv user.org:user:ghost_multi_axi_lite:1.0 \
    ghost_multi_0

# ---------------------------------------------------------------
# 5 × AXI GPIO  (8-bit output only: [7:4]=col  [3:0]=row)
# ---------------------------------------------------------------
foreach cell {gpio_ghost1 gpio_ghost2 gpio_ghost3 gpio_ghost4 gpio_rover} {
    create_bd_cell -type ip \
        -vlnv xilinx.com:ip:axi_gpio:2.0 ${cell}
    set_property -dict [list \
        CONFIG.C_GPIO_WIDTH  {8} \
        CONFIG.C_ALL_OUTPUTS {1} \
    ] [get_bd_cells ${cell}]
}

# ---------------------------------------------------------------
# 10 × xlslice  (extract row [3:0] and col [7:4] from each GPIO)
# ---------------------------------------------------------------
foreach gh {ghost1 ghost2 ghost3 ghost4 rover} {
    # row slice → bits 3:0
    create_bd_cell -type ip \
        -vlnv xilinx.com:ip:xlslice:1.0 slice_${gh}_row
    set_property -dict [list \
        CONFIG.DIN_WIDTH {8} \
        CONFIG.DIN_FROM  {3} \
        CONFIG.DIN_TO    {0} \
    ] [get_bd_cells slice_${gh}_row]

    # col slice → bits 7:4
    create_bd_cell -type ip \
        -vlnv xilinx.com:ip:xlslice:1.0 slice_${gh}_col
    set_property -dict [list \
        CONFIG.DIN_WIDTH {8} \
        CONFIG.DIN_FROM  {7} \
        CONFIG.DIN_TO    {4} \
    ] [get_bd_cells slice_${gh}_col]
}

# ---------------------------------------------------------------
# CLOCK connections
# ---------------------------------------------------------------
set clk [get_bd_pins processing_system7_0/FCLK_CLK0]

connect_bd_net ${clk} \
    [get_bd_pins processing_system7_0/M_AXI_GP0_ACLK] \
    [get_bd_pins smartconnect_0/aclk]                  \
    [get_bd_pins proc_sys_reset_0/slowest_sync_clk]    \
    [get_bd_pins ghost_multi_0/S_AXI_ACLK]             \
    [get_bd_pins gpio_ghost1/s_axi_aclk]               \
    [get_bd_pins gpio_ghost2/s_axi_aclk]               \
    [get_bd_pins gpio_ghost3/s_axi_aclk]               \
    [get_bd_pins gpio_ghost4/s_axi_aclk]               \
    [get_bd_pins gpio_rover/s_axi_aclk]

# ---------------------------------------------------------------
# RESET connections
# ---------------------------------------------------------------
connect_bd_net \
    [get_bd_pins processing_system7_0/FCLK_RESET0_N] \
    [get_bd_pins proc_sys_reset_0/ext_reset_in]

connect_bd_net \
    [get_bd_pins proc_sys_reset_0/interconnect_aresetn] \
    [get_bd_pins smartconnect_0/aresetn]

set periph_rstn [get_bd_pins proc_sys_reset_0/peripheral_aresetn]
connect_bd_net ${periph_rstn} \
    [get_bd_pins ghost_multi_0/S_AXI_ARESETN] \
    [get_bd_pins gpio_ghost1/s_axi_aresetn]   \
    [get_bd_pins gpio_ghost2/s_axi_aresetn]   \
    [get_bd_pins gpio_ghost3/s_axi_aresetn]   \
    [get_bd_pins gpio_ghost4/s_axi_aresetn]   \
    [get_bd_pins gpio_rover/s_axi_aresetn]

# ---------------------------------------------------------------
# AXI bus connections  (SmartConnect → slaves)
# ---------------------------------------------------------------
connect_bd_intf_net \
    [get_bd_intf_pins processing_system7_0/M_AXI_GP0] \
    [get_bd_intf_pins smartconnect_0/S00_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M00_AXI] \
    [get_bd_intf_pins ghost_multi_0/S_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M01_AXI] \
    [get_bd_intf_pins gpio_ghost1/S_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M02_AXI] \
    [get_bd_intf_pins gpio_ghost2/S_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M03_AXI] \
    [get_bd_intf_pins gpio_ghost3/S_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M04_AXI] \
    [get_bd_intf_pins gpio_ghost4/S_AXI]

connect_bd_intf_net \
    [get_bd_intf_pins smartconnect_0/M05_AXI] \
    [get_bd_intf_pins gpio_rover/S_AXI]

# ---------------------------------------------------------------
# GPIO → xlslice → ghost_multi port connections
# ---------------------------------------------------------------
foreach gh {ghost1 ghost2 ghost3 ghost4 rover} {
    set gpio_out [get_bd_pins gpio_${gh}/gpio_io_o]

    connect_bd_net ${gpio_out} \
        [get_bd_pins slice_${gh}_row/Din] \
        [get_bd_pins slice_${gh}_col/Din]

    connect_bd_net \
        [get_bd_pins slice_${gh}_row/Dout] \
        [get_bd_pins ghost_multi_0/${gh}_row]

    connect_bd_net \
        [get_bd_pins slice_${gh}_col/Dout] \
        [get_bd_pins ghost_multi_0/${gh}_col]
}

# ---------------------------------------------------------------
# Assign addresses and validate
# ---------------------------------------------------------------
assign_bd_address
validate_bd_design
save_bd_design

# ---------------------------------------------------------------
# Wrap and set top
# ---------------------------------------------------------------
make_wrapper \
    -files [get_files ghost_bd.bd] \
    -top

set wrapper [get_files -filter \
    {NAME =~ *ghost_bd_wrapper*} \
    -of_objects [get_filesets sources_1]]

if {$wrapper eq ""} {
    add_files -norecurse \
        ./ghost_game/ghost_game.srcs/sources_1/bd/ghost_bd/hdl/ghost_bd_wrapper.v
}
set_property top ghost_bd_wrapper [current_fileset]
update_compile_order -fileset sources_1

puts ">>> Block design complete. Run 4_generate_bitstream.tcl next."
puts ">>> Check addresses in Address Editor before generating!"