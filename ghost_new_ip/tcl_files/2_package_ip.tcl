# ---------------------------------------------------------------
# 2_package_ip.tcl
# ---------------------------------------------------------------
set src_dir  [get_property DIRECTORY [current_project]]/../
set ip_dir   ./ghost_game/ghost_game.srcs/ghost_multi_ip

file mkdir ${ip_dir}
file copy -force ghost_top.sv            ${ip_dir}/
file copy -force ghost_multi_axi_lite.sv ${ip_dir}/

# Open a temporary packaging project
create_project -in_memory -part xc7z020clg400-1

read_verilog -sv ${ip_dir}/ghost_top.sv
read_verilog -sv ${ip_dir}/ghost_multi_axi_lite.sv
set_property top ghost_multi_axi_lite [current_fileset]

ipx::package_project \
    -root_dir   ${ip_dir} \
    -vendor     user.org \
    -library    user \
    -taxonomy   /UserIP \
    -import_files \
    -set_current true

# ---- Infer AXI Lite slave interface ----
ipx::infer_bus_interface { \
    S_AXI_AWADDR  S_AXI_AWVALID S_AXI_AWREADY \
    S_AXI_WDATA   S_AXI_WSTRB   S_AXI_WVALID  S_AXI_WREADY \
    S_AXI_BRESP   S_AXI_BVALID  S_AXI_BREADY  \
    S_AXI_ARADDR  S_AXI_ARVALID S_AXI_ARREADY \
    S_AXI_RDATA   S_AXI_RRESP   S_AXI_RVALID  S_AXI_RREADY \
} xilinx.com:interface:aximm_rtl:1.0 [ipx::current_core]

set S_AXI_if [ipx::get_bus_interfaces S_AXI \
    -of_objects [ipx::current_core]]
set_property abstraction_type_vlnv \
    xilinx.com:interface:aximm_rtl:1.0 ${S_AXI_if}
set_property bus_type_vlnv \
    xilinx.com:interface:aximm:1.0     ${S_AXI_if}
set_property interface_mode slave      ${S_AXI_if}

# ---- Clock and reset ----
ipx::infer_bus_interface {S_AXI_ACLK} \
    xilinx.com:signal:clock_rtl:1.0   [ipx::current_core]
ipx::infer_bus_interface {S_AXI_ARESETN} \
    xilinx.com:signal:reset_rtl:1.0   [ipx::current_core]

# Associate clock to S_AXI interface
ipx::add_bus_parameter ASSOCIATED_BUSIF \
    [ipx::get_bus_interfaces S_AXI_ACLK \
        -of_objects [ipx::current_core]]
set_property value S_AXI \
    [ipx::get_bus_parameters ASSOCIATED_BUSIF \
        -of_objects [ipx::get_bus_interfaces S_AXI_ACLK \
            -of_objects [ipx::current_core]]]

# ---- Address space (16 bytes: 0x00-0x0C) ----
ipx::add_memory_map S_AXI [ipx::current_core]
set_property slave_memory_map_ref S_AXI ${S_AXI_if}
set mm [ipx::get_memory_maps S_AXI -of_objects [ipx::current_core]]
ipx::add_address_block axi_lite ${mm}
set ab [ipx::get_address_blocks axi_lite -of_objects ${mm}]
set_property range        16 ${ab}
set_property width        32 ${ab}

ipx::create_xgui_files [ipx::current_core]
ipx::update_checksums  [ipx::current_core]
ipx::save_core         [ipx::current_core]

close_project

# ---- Register IP repo in main project ----
open_project ./ghost_game/ghost_game.xpr
set_property ip_repo_paths ${ip_dir} [current_project]
update_ip_catalog -rebuild

puts ">>> IP packaged. Run 3_build_bd.tcl next."