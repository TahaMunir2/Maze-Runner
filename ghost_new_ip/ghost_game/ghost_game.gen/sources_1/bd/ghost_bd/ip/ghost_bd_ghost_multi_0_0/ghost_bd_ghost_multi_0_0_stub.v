// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Sun Mar 15 22:37:24 2026
// Host        : DZULDINIY-SWIFT running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode synth_stub
//               c:/Users/shold/Desktop/EIE-Y2/ghost_new_ip/ghost_game/ghost_game.gen/sources_1/bd/ghost_bd/ip/ghost_bd_ghost_multi_0_0/ghost_bd_ghost_multi_0_0_stub.v
// Design      : ghost_bd_ghost_multi_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* X_CORE_INFO = "ghost_multi_axi_lite,Vivado 2020.2" *)
module ghost_bd_ghost_multi_0_0(S_AXI_ACLK, S_AXI_ARESETN, S_AXI_AWADDR, 
  S_AXI_AWVALID, S_AXI_AWREADY, S_AXI_WDATA, S_AXI_WSTRB, S_AXI_WVALID, S_AXI_WREADY, 
  S_AXI_BRESP, S_AXI_BVALID, S_AXI_BREADY, S_AXI_ARADDR, S_AXI_ARVALID, S_AXI_ARREADY, 
  S_AXI_RDATA, S_AXI_RRESP, S_AXI_RVALID, S_AXI_RREADY, ghost1_row, ghost1_col, ghost2_row, 
  ghost2_col, ghost3_row, ghost3_col, ghost4_row, ghost4_col, rover_row, rover_col)
/* synthesis syn_black_box black_box_pad_pin="S_AXI_ACLK,S_AXI_ARESETN,S_AXI_AWADDR[3:0],S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WDATA[31:0],S_AXI_WSTRB[3:0],S_AXI_WVALID,S_AXI_WREADY,S_AXI_BRESP[1:0],S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARADDR[3:0],S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RDATA[31:0],S_AXI_RRESP[1:0],S_AXI_RVALID,S_AXI_RREADY,ghost1_row[3:0],ghost1_col[3:0],ghost2_row[3:0],ghost2_col[3:0],ghost3_row[3:0],ghost3_col[3:0],ghost4_row[3:0],ghost4_col[3:0],rover_row[3:0],rover_col[3:0]" */;
  input S_AXI_ACLK;
  input S_AXI_ARESETN;
  input [3:0]S_AXI_AWADDR;
  input S_AXI_AWVALID;
  output S_AXI_AWREADY;
  input [31:0]S_AXI_WDATA;
  input [3:0]S_AXI_WSTRB;
  input S_AXI_WVALID;
  output S_AXI_WREADY;
  output [1:0]S_AXI_BRESP;
  output S_AXI_BVALID;
  input S_AXI_BREADY;
  input [3:0]S_AXI_ARADDR;
  input S_AXI_ARVALID;
  output S_AXI_ARREADY;
  output [31:0]S_AXI_RDATA;
  output [1:0]S_AXI_RRESP;
  output S_AXI_RVALID;
  input S_AXI_RREADY;
  input [3:0]ghost1_row;
  input [3:0]ghost1_col;
  input [3:0]ghost2_row;
  input [3:0]ghost2_col;
  input [3:0]ghost3_row;
  input [3:0]ghost3_col;
  input [3:0]ghost4_row;
  input [3:0]ghost4_col;
  input [3:0]rover_row;
  input [3:0]rover_col;
endmodule
