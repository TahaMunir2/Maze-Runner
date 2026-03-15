
################################################################
# This is a generated script based on design: ghost_bd
#
# Though there are limitations about the generated script,
# the main purpose of this utility is to make learning
# IP Integrator Tcl commands easier.
################################################################

namespace eval _tcl {
proc get_script_folder {} {
   set script_path [file normalize [info script]]
   set script_folder [file dirname $script_path]
   return $script_folder
}
}
variable script_folder
set script_folder [_tcl::get_script_folder]

################################################################
# Check if script is running in correct Vivado version.
################################################################
set scripts_vivado_version 2020.2
set current_vivado_version [version -short]

if { [string first $scripts_vivado_version $current_vivado_version] == -1 } {
   puts ""
   catch {common::send_gid_msg -ssname BD::TCL -id 2041 -severity "ERROR" "This script was generated using Vivado <$scripts_vivado_version> and is being run in <$current_vivado_version> of Vivado. Please run the script in Vivado <$scripts_vivado_version> then open the design in Vivado <$current_vivado_version>. Upgrade the design by running \"Tools => Report => Report IP Status...\", then run write_bd_tcl to create an updated script."}

   return 1
}

################################################################
# START
################################################################

# To test this script, run the following commands from Vivado Tcl console:
# source ghost_bd_script.tcl

# If there is no project opened, this script will create a
# project, but make sure you do not have an existing project
# <./myproj/project_1.xpr> in the current working folder.

set list_projs [get_projects -quiet]
if { $list_projs eq "" } {
   create_project project_1 myproj -part xc7z020clg400-1
}


# CHANGE DESIGN NAME HERE
variable design_name
set design_name ghost_bd

# If you do not already have an existing IP Integrator design open,
# you can create a design using the following command:
#    create_bd_design $design_name

# Creating design if needed
set errMsg ""
set nRet 0

set cur_design [current_bd_design -quiet]
set list_cells [get_bd_cells -quiet]

if { ${design_name} eq "" } {
   # USE CASES:
   #    1) Design_name not set

   set errMsg "Please set the variable <design_name> to a non-empty value."
   set nRet 1

} elseif { ${cur_design} ne "" && ${list_cells} eq "" } {
   # USE CASES:
   #    2): Current design opened AND is empty AND names same.
   #    3): Current design opened AND is empty AND names diff; design_name NOT in project.
   #    4): Current design opened AND is empty AND names diff; design_name exists in project.

   if { $cur_design ne $design_name } {
      common::send_gid_msg -ssname BD::TCL -id 2001 -severity "INFO" "Changing value of <design_name> from <$design_name> to <$cur_design> since current design is empty."
      set design_name [get_property NAME $cur_design]
   }
   common::send_gid_msg -ssname BD::TCL -id 2002 -severity "INFO" "Constructing design in IPI design <$cur_design>..."

} elseif { ${cur_design} ne "" && $list_cells ne "" && $cur_design eq $design_name } {
   # USE CASES:
   #    5) Current design opened AND has components AND same names.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 1
} elseif { [get_files -quiet ${design_name}.bd] ne "" } {
   # USE CASES: 
   #    6) Current opened design, has components, but diff names, design_name exists in project.
   #    7) No opened design, design_name exists in project.

   set errMsg "Design <$design_name> already exists in your project, please set the variable <design_name> to another value."
   set nRet 2

} else {
   # USE CASES:
   #    8) No opened design, design_name not in project.
   #    9) Current opened design, has components, but diff names, design_name not in project.

   common::send_gid_msg -ssname BD::TCL -id 2003 -severity "INFO" "Currently there is no design <$design_name> in project, so creating one..."

   create_bd_design $design_name

   common::send_gid_msg -ssname BD::TCL -id 2004 -severity "INFO" "Making design <$design_name> as current_bd_design."
   current_bd_design $design_name

}

common::send_gid_msg -ssname BD::TCL -id 2005 -severity "INFO" "Currently the variable <design_name> is equal to \"$design_name\"."

if { $nRet != 0 } {
   catch {common::send_gid_msg -ssname BD::TCL -id 2006 -severity "ERROR" $errMsg}
   return $nRet
}

##################################################################
# DESIGN PROCs
##################################################################



# Procedure to create entire design; Provide argument to make
# procedure reusable. If parentCell is "", will use root.
proc create_root_design { parentCell } {

  variable script_folder
  variable design_name

  if { $parentCell eq "" } {
     set parentCell [get_bd_cells /]
  }

  # Get object for parentCell
  set parentObj [get_bd_cells $parentCell]
  if { $parentObj == "" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2090 -severity "ERROR" "Unable to find parent cell <$parentCell>!"}
     return
  }

  # Make sure parentObj is hier blk
  set parentType [get_property TYPE $parentObj]
  if { $parentType ne "hier" } {
     catch {common::send_gid_msg -ssname BD::TCL -id 2091 -severity "ERROR" "Parent <$parentObj> has TYPE = <$parentType>. Expected to be <hier>."}
     return
  }

  # Save current instance; Restore later
  set oldCurInst [current_bd_instance .]

  # Set parent object as current
  current_bd_instance $parentObj


  # Create interface ports
  set DDR [ create_bd_intf_port -mode Master -vlnv xilinx.com:interface:ddrx_rtl:1.0 DDR ]

  set FIXED_IO [ create_bd_intf_port -mode Master -vlnv xilinx.com:display_processing_system7:fixedio_rtl:1.0 FIXED_IO ]


  # Create ports

  # Create instance: ghost_multi_0, and set properties
  set ghost_multi_0 [ create_bd_cell -type ip -vlnv user.org:user:ghost_multi_axi_lite:1.0 ghost_multi_0 ]

  # Create instance: gpio_ghost1, and set properties
  set gpio_ghost1 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio_ghost1 ]
  set_property -dict [ list \
   CONFIG.C_ALL_OUTPUTS {1} \
   CONFIG.C_GPIO_WIDTH {8} \
 ] $gpio_ghost1

  # Create instance: gpio_ghost2, and set properties
  set gpio_ghost2 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio_ghost2 ]
  set_property -dict [ list \
   CONFIG.C_ALL_OUTPUTS {1} \
   CONFIG.C_GPIO_WIDTH {8} \
 ] $gpio_ghost2

  # Create instance: gpio_ghost3, and set properties
  set gpio_ghost3 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio_ghost3 ]
  set_property -dict [ list \
   CONFIG.C_ALL_OUTPUTS {1} \
   CONFIG.C_GPIO_WIDTH {8} \
 ] $gpio_ghost3

  # Create instance: gpio_ghost4, and set properties
  set gpio_ghost4 [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio_ghost4 ]
  set_property -dict [ list \
   CONFIG.C_ALL_OUTPUTS {1} \
   CONFIG.C_GPIO_WIDTH {8} \
 ] $gpio_ghost4

  # Create instance: gpio_rover, and set properties
  set gpio_rover [ create_bd_cell -type ip -vlnv xilinx.com:ip:axi_gpio:2.0 gpio_rover ]
  set_property -dict [ list \
   CONFIG.C_ALL_OUTPUTS {1} \
   CONFIG.C_GPIO_WIDTH {8} \
 ] $gpio_rover

  # Create instance: proc_sys_reset_0, and set properties
  set proc_sys_reset_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:proc_sys_reset:5.0 proc_sys_reset_0 ]

  # Create instance: processing_system7_0, and set properties
  set processing_system7_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:processing_system7:5.5 processing_system7_0 ]
  set_property -dict [ list \
   CONFIG.PCW_FPGA_FCLK0_ENABLE {1} \
   CONFIG.PCW_FPGA_FCLK1_ENABLE {0} \
   CONFIG.PCW_FPGA_FCLK2_ENABLE {0} \
   CONFIG.PCW_FPGA_FCLK3_ENABLE {0} \
   CONFIG.PCW_M_AXI_GP0_ENABLE_STATIC_REMAP {1} \
   CONFIG.PCW_M_AXI_GP0_THREAD_ID_WIDTH {6} \
   CONFIG.PCW_USE_M_AXI_GP0 {1} \
 ] $processing_system7_0

  # Create instance: slice_ghost1_col, and set properties
  set slice_ghost1_col [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost1_col ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {7} \
   CONFIG.DIN_TO {4} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost1_col

  # Create instance: slice_ghost1_row, and set properties
  set slice_ghost1_row [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost1_row ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {3} \
   CONFIG.DIN_TO {0} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost1_row

  # Create instance: slice_ghost2_col, and set properties
  set slice_ghost2_col [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost2_col ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {7} \
   CONFIG.DIN_TO {4} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost2_col

  # Create instance: slice_ghost2_row, and set properties
  set slice_ghost2_row [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost2_row ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {3} \
   CONFIG.DIN_TO {0} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost2_row

  # Create instance: slice_ghost3_col, and set properties
  set slice_ghost3_col [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost3_col ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {7} \
   CONFIG.DIN_TO {4} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost3_col

  # Create instance: slice_ghost3_row, and set properties
  set slice_ghost3_row [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost3_row ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {3} \
   CONFIG.DIN_TO {0} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost3_row

  # Create instance: slice_ghost4_col, and set properties
  set slice_ghost4_col [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost4_col ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {7} \
   CONFIG.DIN_TO {4} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost4_col

  # Create instance: slice_ghost4_row, and set properties
  set slice_ghost4_row [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_ghost4_row ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {3} \
   CONFIG.DIN_TO {0} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_ghost4_row

  # Create instance: slice_rover_col, and set properties
  set slice_rover_col [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_rover_col ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {7} \
   CONFIG.DIN_TO {4} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_rover_col

  # Create instance: slice_rover_row, and set properties
  set slice_rover_row [ create_bd_cell -type ip -vlnv xilinx.com:ip:xlslice:1.0 slice_rover_row ]
  set_property -dict [ list \
   CONFIG.DIN_FROM {3} \
   CONFIG.DIN_TO {0} \
   CONFIG.DIN_WIDTH {8} \
 ] $slice_rover_row

  # Create instance: smartconnect_0, and set properties
  set smartconnect_0 [ create_bd_cell -type ip -vlnv xilinx.com:ip:smartconnect:1.0 smartconnect_0 ]
  set_property -dict [ list \
   CONFIG.NUM_MI {6} \
   CONFIG.NUM_SI {1} \
 ] $smartconnect_0

  # Create interface connections
  connect_bd_intf_net -intf_net processing_system7_0_DDR [get_bd_intf_ports DDR] [get_bd_intf_pins processing_system7_0/DDR]
  connect_bd_intf_net -intf_net processing_system7_0_FIXED_IO [get_bd_intf_ports FIXED_IO] [get_bd_intf_pins processing_system7_0/FIXED_IO]
  connect_bd_intf_net -intf_net processing_system7_0_M_AXI_GP0 [get_bd_intf_pins processing_system7_0/M_AXI_GP0] [get_bd_intf_pins smartconnect_0/S00_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M00_AXI [get_bd_intf_pins ghost_multi_0/S_AXI] [get_bd_intf_pins smartconnect_0/M00_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M01_AXI [get_bd_intf_pins gpio_ghost1/S_AXI] [get_bd_intf_pins smartconnect_0/M01_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M02_AXI [get_bd_intf_pins gpio_ghost2/S_AXI] [get_bd_intf_pins smartconnect_0/M02_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M03_AXI [get_bd_intf_pins gpio_ghost3/S_AXI] [get_bd_intf_pins smartconnect_0/M03_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M04_AXI [get_bd_intf_pins gpio_ghost4/S_AXI] [get_bd_intf_pins smartconnect_0/M04_AXI]
  connect_bd_intf_net -intf_net smartconnect_0_M05_AXI [get_bd_intf_pins gpio_rover/S_AXI] [get_bd_intf_pins smartconnect_0/M05_AXI]

  # Create port connections
  connect_bd_net -net gpio_ghost1_gpio_io_o [get_bd_pins gpio_ghost1/gpio_io_o] [get_bd_pins slice_ghost1_col/Din] [get_bd_pins slice_ghost1_row/Din]
  connect_bd_net -net gpio_ghost2_gpio_io_o [get_bd_pins gpio_ghost2/gpio_io_o] [get_bd_pins slice_ghost2_col/Din] [get_bd_pins slice_ghost2_row/Din]
  connect_bd_net -net gpio_ghost3_gpio_io_o [get_bd_pins gpio_ghost3/gpio_io_o] [get_bd_pins slice_ghost3_col/Din] [get_bd_pins slice_ghost3_row/Din]
  connect_bd_net -net gpio_ghost4_gpio_io_o [get_bd_pins gpio_ghost4/gpio_io_o] [get_bd_pins slice_ghost4_col/Din] [get_bd_pins slice_ghost4_row/Din]
  connect_bd_net -net gpio_rover_gpio_io_o [get_bd_pins gpio_rover/gpio_io_o] [get_bd_pins slice_rover_col/Din] [get_bd_pins slice_rover_row/Din]
  connect_bd_net -net proc_sys_reset_0_interconnect_aresetn [get_bd_pins proc_sys_reset_0/interconnect_aresetn] [get_bd_pins smartconnect_0/aresetn]
  connect_bd_net -net proc_sys_reset_0_peripheral_aresetn [get_bd_pins ghost_multi_0/S_AXI_ARESETN] [get_bd_pins gpio_ghost1/s_axi_aresetn] [get_bd_pins gpio_ghost2/s_axi_aresetn] [get_bd_pins gpio_ghost3/s_axi_aresetn] [get_bd_pins gpio_ghost4/s_axi_aresetn] [get_bd_pins gpio_rover/s_axi_aresetn] [get_bd_pins proc_sys_reset_0/peripheral_aresetn]
  connect_bd_net -net processing_system7_0_FCLK_CLK0 [get_bd_pins ghost_multi_0/S_AXI_ACLK] [get_bd_pins gpio_ghost1/s_axi_aclk] [get_bd_pins gpio_ghost2/s_axi_aclk] [get_bd_pins gpio_ghost3/s_axi_aclk] [get_bd_pins gpio_ghost4/s_axi_aclk] [get_bd_pins gpio_rover/s_axi_aclk] [get_bd_pins proc_sys_reset_0/slowest_sync_clk] [get_bd_pins processing_system7_0/FCLK_CLK0] [get_bd_pins processing_system7_0/M_AXI_GP0_ACLK] [get_bd_pins smartconnect_0/aclk]
  connect_bd_net -net processing_system7_0_FCLK_RESET0_N [get_bd_pins proc_sys_reset_0/ext_reset_in] [get_bd_pins processing_system7_0/FCLK_RESET0_N]
  connect_bd_net -net slice_ghost1_col_Dout [get_bd_pins ghost_multi_0/ghost1_col] [get_bd_pins slice_ghost1_col/Dout]
  connect_bd_net -net slice_ghost1_row_Dout [get_bd_pins ghost_multi_0/ghost1_row] [get_bd_pins slice_ghost1_row/Dout]
  connect_bd_net -net slice_ghost2_col_Dout [get_bd_pins ghost_multi_0/ghost2_col] [get_bd_pins slice_ghost2_col/Dout]
  connect_bd_net -net slice_ghost2_row_Dout [get_bd_pins ghost_multi_0/ghost2_row] [get_bd_pins slice_ghost2_row/Dout]
  connect_bd_net -net slice_ghost3_col_Dout [get_bd_pins ghost_multi_0/ghost3_col] [get_bd_pins slice_ghost3_col/Dout]
  connect_bd_net -net slice_ghost3_row_Dout [get_bd_pins ghost_multi_0/ghost3_row] [get_bd_pins slice_ghost3_row/Dout]
  connect_bd_net -net slice_ghost4_col_Dout [get_bd_pins ghost_multi_0/ghost4_col] [get_bd_pins slice_ghost4_col/Dout]
  connect_bd_net -net slice_ghost4_row_Dout [get_bd_pins ghost_multi_0/ghost4_row] [get_bd_pins slice_ghost4_row/Dout]
  connect_bd_net -net slice_rover_col_Dout [get_bd_pins ghost_multi_0/rover_col] [get_bd_pins slice_rover_col/Dout]
  connect_bd_net -net slice_rover_row_Dout [get_bd_pins ghost_multi_0/rover_row] [get_bd_pins slice_rover_row/Dout]

  # Create address segments
  assign_bd_address -offset 0x43C00000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs ghost_multi_0/S_AXI/axi_lite] -force
  assign_bd_address -offset 0x43C10000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs ghost_multi_0/S_AXI/reg0] -force
  assign_bd_address -offset 0x41200000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs gpio_ghost1/S_AXI/Reg] -force
  assign_bd_address -offset 0x41210000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs gpio_ghost2/S_AXI/Reg] -force
  assign_bd_address -offset 0x41220000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs gpio_ghost3/S_AXI/Reg] -force
  assign_bd_address -offset 0x41230000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs gpio_ghost4/S_AXI/Reg] -force
  assign_bd_address -offset 0x41240000 -range 0x00010000 -target_address_space [get_bd_addr_spaces processing_system7_0/Data] [get_bd_addr_segs gpio_rover/S_AXI/Reg] -force


  # Restore current instance
  current_bd_instance $oldCurInst

  validate_bd_design
  save_bd_design
}
# End of create_root_design()


##################################################################
# MAIN FLOW
##################################################################

create_root_design ""


