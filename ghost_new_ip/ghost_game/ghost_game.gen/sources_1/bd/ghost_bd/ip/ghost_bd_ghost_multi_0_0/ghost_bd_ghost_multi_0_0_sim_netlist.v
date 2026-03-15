// Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
// Date        : Sun Mar 15 22:37:24 2026
// Host        : DZULDINIY-SWIFT running 64-bit major release  (build 9200)
// Command     : write_verilog -force -mode funcsim
//               c:/Users/shold/Desktop/EIE-Y2/ghost_new_ip/ghost_game/ghost_game.gen/sources_1/bd/ghost_bd/ip/ghost_bd_ghost_multi_0_0/ghost_bd_ghost_multi_0_0_sim_netlist.v
// Design      : ghost_bd_ghost_multi_0_0
// Purpose     : This verilog netlist is a functional simulation representation of the design and should not be modified
//               or synthesized. This netlist cannot be used for SDF annotated simulation.
// Device      : xc7z020clg400-1
// --------------------------------------------------------------------------------
`timescale 1 ps / 1 ps

(* CHECK_LICENSE_TYPE = "ghost_bd_ghost_multi_0_0,ghost_multi_axi_lite,{}" *) (* DowngradeIPIdentifiedWarnings = "yes" *) (* IP_DEFINITION_SOURCE = "package_project" *) 
(* X_CORE_INFO = "ghost_multi_axi_lite,Vivado 2020.2" *) 
(* NotValidForBitStream *)
module ghost_bd_ghost_multi_0_0
   (S_AXI_ACLK,
    S_AXI_ARESETN,
    S_AXI_AWADDR,
    S_AXI_AWVALID,
    S_AXI_AWREADY,
    S_AXI_WDATA,
    S_AXI_WSTRB,
    S_AXI_WVALID,
    S_AXI_WREADY,
    S_AXI_BRESP,
    S_AXI_BVALID,
    S_AXI_BREADY,
    S_AXI_ARADDR,
    S_AXI_ARVALID,
    S_AXI_ARREADY,
    S_AXI_RDATA,
    S_AXI_RRESP,
    S_AXI_RVALID,
    S_AXI_RREADY,
    ghost1_row,
    ghost1_col,
    ghost2_row,
    ghost2_col,
    ghost3_row,
    ghost3_col,
    ghost4_row,
    ghost4_col,
    rover_row,
    rover_col);
  (* X_INTERFACE_INFO = "xilinx.com:signal:clock:1.0 S_AXI_ACLK CLK" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXI_ACLK, ASSOCIATED_BUSIF S_AXI, ASSOCIATED_RESET S_AXI_ARESETN, FREQ_HZ 50000000, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN ghost_bd_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0" *) input S_AXI_ACLK;
  (* X_INTERFACE_INFO = "xilinx.com:signal:reset:1.0 S_AXI_ARESETN RST" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXI_ARESETN, POLARITY ACTIVE_LOW, INSERT_VIP 0" *) input S_AXI_ARESETN;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWADDR" *) input [3:0]S_AXI_AWADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWVALID" *) input S_AXI_AWVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI AWREADY" *) output S_AXI_AWREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WDATA" *) input [31:0]S_AXI_WDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WSTRB" *) input [3:0]S_AXI_WSTRB;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WVALID" *) input S_AXI_WVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI WREADY" *) output S_AXI_WREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BRESP" *) output [1:0]S_AXI_BRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BVALID" *) output S_AXI_BVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI BREADY" *) input S_AXI_BREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARADDR" *) input [3:0]S_AXI_ARADDR;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARVALID" *) input S_AXI_ARVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI ARREADY" *) output S_AXI_ARREADY;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RDATA" *) output [31:0]S_AXI_RDATA;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RRESP" *) output [1:0]S_AXI_RRESP;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RVALID" *) output S_AXI_RVALID;
  (* X_INTERFACE_INFO = "xilinx.com:interface:aximm:1.0 S_AXI RREADY" *) (* X_INTERFACE_PARAMETER = "XIL_INTERFACENAME S_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 50000000, ID_WIDTH 0, ADDR_WIDTH 4, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ghost_bd_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0" *) input S_AXI_RREADY;
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

  wire \<const0> ;
  wire S_AXI_ACLK;
  wire [3:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARVALID;
  wire [3:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire [3:0]\^S_AXI_RDATA ;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire [31:0]S_AXI_WDATA;
  wire S_AXI_WREADY;
  wire S_AXI_WVALID;
  wire [3:0]ghost1_col;
  wire [3:0]ghost1_row;
  wire [3:0]ghost2_col;
  wire [3:0]ghost2_row;
  wire [3:0]ghost3_col;
  wire [3:0]ghost3_row;
  wire [3:0]ghost4_col;
  wire [3:0]ghost4_row;
  wire inst_n_10;
  wire inst_n_11;
  wire inst_n_12;
  wire inst_n_5;
  wire inst_n_6;
  wire inst_n_7;
  wire inst_n_8;
  wire inst_n_9;
  wire [3:0]rover_col;
  wire [3:0]rover_row;
  wire \s1_los_dir[1]_i_100__0_n_0 ;
  wire \s1_los_dir[1]_i_100__1_n_0 ;
  wire \s1_los_dir[1]_i_100_n_0 ;
  wire \s1_los_dir[1]_i_101__0_n_0 ;
  wire \s1_los_dir[1]_i_101__1_n_0 ;
  wire \s1_los_dir[1]_i_101__2_n_0 ;
  wire \s1_los_dir[1]_i_102__0_n_0 ;
  wire \s1_los_dir[1]_i_102__1_n_0 ;
  wire \s1_los_dir[1]_i_102__2_n_0 ;
  wire \s1_los_dir[1]_i_103__0_n_0 ;
  wire \s1_los_dir[1]_i_103__1_n_0 ;
  wire \s1_los_dir[1]_i_103__2_n_0 ;
  wire \s1_los_dir[1]_i_104__0_n_0 ;
  wire \s1_los_dir[1]_i_104__1_n_0 ;
  wire \s1_los_dir[1]_i_104__2_n_0 ;
  wire \s1_los_dir[1]_i_106_n_0 ;
  wire \s1_los_dir[1]_i_107_n_0 ;
  wire \s1_los_dir[1]_i_108_n_0 ;
  wire \s1_los_dir[1]_i_109_n_0 ;
  wire \s1_los_dir[1]_i_110_n_0 ;
  wire \s1_los_dir[1]_i_111_n_0 ;
  wire \s1_los_dir[1]_i_112_n_0 ;
  wire \s1_los_dir[1]_i_113_n_0 ;
  wire \s1_los_dir[1]_i_97__0_n_0 ;
  wire \s1_los_dir[1]_i_97__1_n_0 ;
  wire \s1_los_dir[1]_i_97__2_n_0 ;
  wire \s1_los_dir[1]_i_98__0_n_0 ;
  wire \s1_los_dir[1]_i_98__1_n_0 ;
  wire \s1_los_dir[1]_i_98_n_0 ;
  wire \s1_los_dir[1]_i_99__0_n_0 ;
  wire \s1_los_dir[1]_i_99__1_n_0 ;
  wire \s1_los_dir[1]_i_99_n_0 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_0 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_1 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_2 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_3 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_4 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_5 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_6 ;
  wire \s1_los_dir_reg[1]_i_90__0_n_7 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_0 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_1 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_2 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_3 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_4 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_5 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_6 ;
  wire \s1_los_dir_reg[1]_i_90__1_n_7 ;
  wire \s1_los_dir_reg[1]_i_90_n_0 ;
  wire \s1_los_dir_reg[1]_i_90_n_1 ;
  wire \s1_los_dir_reg[1]_i_90_n_2 ;
  wire \s1_los_dir_reg[1]_i_90_n_3 ;
  wire \s1_los_dir_reg[1]_i_90_n_4 ;
  wire \s1_los_dir_reg[1]_i_90_n_5 ;
  wire \s1_los_dir_reg[1]_i_90_n_6 ;
  wire \s1_los_dir_reg[1]_i_90_n_7 ;
  wire \s1_los_dir_reg[1]_i_91__0_n_7 ;
  wire \s1_los_dir_reg[1]_i_91__1_n_7 ;
  wire \s1_los_dir_reg[1]_i_91_n_7 ;
  wire \s1_los_dir_reg[1]_i_98_n_0 ;
  wire \s1_los_dir_reg[1]_i_98_n_1 ;
  wire \s1_los_dir_reg[1]_i_98_n_2 ;
  wire \s1_los_dir_reg[1]_i_98_n_3 ;
  wire \s1_los_dir_reg[1]_i_98_n_4 ;
  wire \s1_los_dir_reg[1]_i_98_n_5 ;
  wire \s1_los_dir_reg[1]_i_98_n_6 ;
  wire \s1_los_dir_reg[1]_i_98_n_7 ;
  wire \s1_los_dir_reg[1]_i_99_n_7 ;
  wire s2_can_down_i_8__0_n_0;
  wire s2_can_down_i_8__1_n_0;
  wire s2_can_down_i_8__2_n_0;
  wire s2_can_down_i_8_n_0;
  wire s2_can_up_i_8__0_n_0;
  wire s2_can_up_i_8__1_n_0;
  wire s2_can_up_i_8__2_n_0;
  wire s2_can_up_i_8_n_0;
  wire [3:0]\NLW_s1_los_dir_reg[1]_i_91_CO_UNCONNECTED ;
  wire [3:1]\NLW_s1_los_dir_reg[1]_i_91_O_UNCONNECTED ;
  wire [3:0]\NLW_s1_los_dir_reg[1]_i_91__0_CO_UNCONNECTED ;
  wire [3:1]\NLW_s1_los_dir_reg[1]_i_91__0_O_UNCONNECTED ;
  wire [3:0]\NLW_s1_los_dir_reg[1]_i_91__1_CO_UNCONNECTED ;
  wire [3:1]\NLW_s1_los_dir_reg[1]_i_91__1_O_UNCONNECTED ;
  wire [3:0]\NLW_s1_los_dir_reg[1]_i_99_CO_UNCONNECTED ;
  wire [3:1]\NLW_s1_los_dir_reg[1]_i_99_O_UNCONNECTED ;

  assign S_AXI_BRESP[1] = \<const0> ;
  assign S_AXI_BRESP[0] = \<const0> ;
  assign S_AXI_RDATA[31] = \<const0> ;
  assign S_AXI_RDATA[30] = \<const0> ;
  assign S_AXI_RDATA[29] = \<const0> ;
  assign S_AXI_RDATA[28] = \<const0> ;
  assign S_AXI_RDATA[27] = \<const0> ;
  assign S_AXI_RDATA[26] = \<const0> ;
  assign S_AXI_RDATA[25] = \<const0> ;
  assign S_AXI_RDATA[24] = \<const0> ;
  assign S_AXI_RDATA[23] = \<const0> ;
  assign S_AXI_RDATA[22] = \<const0> ;
  assign S_AXI_RDATA[21] = \<const0> ;
  assign S_AXI_RDATA[20] = \<const0> ;
  assign S_AXI_RDATA[19] = \<const0> ;
  assign S_AXI_RDATA[18] = \<const0> ;
  assign S_AXI_RDATA[17] = \<const0> ;
  assign S_AXI_RDATA[16] = \<const0> ;
  assign S_AXI_RDATA[15] = \<const0> ;
  assign S_AXI_RDATA[14] = \<const0> ;
  assign S_AXI_RDATA[13] = \<const0> ;
  assign S_AXI_RDATA[12] = \<const0> ;
  assign S_AXI_RDATA[11] = \<const0> ;
  assign S_AXI_RDATA[10] = \<const0> ;
  assign S_AXI_RDATA[9] = \<const0> ;
  assign S_AXI_RDATA[8] = \<const0> ;
  assign S_AXI_RDATA[7] = \<const0> ;
  assign S_AXI_RDATA[6] = \<const0> ;
  assign S_AXI_RDATA[5] = \<const0> ;
  assign S_AXI_RDATA[4] = \<const0> ;
  assign S_AXI_RDATA[3:0] = \^S_AXI_RDATA [3:0];
  assign S_AXI_RRESP[1] = \<const0> ;
  assign S_AXI_RRESP[0] = \<const0> ;
  GND GND
       (.G(\<const0> ));
  ghost_bd_ghost_multi_0_0_ghost_multi_axi_lite inst
       (.O(inst_n_5),
        .S(s2_can_down_i_8_n_0),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARADDR(S_AXI_ARADDR[3:2]),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .S_AXI_ARREADY(S_AXI_ARREADY),
        .S_AXI_ARVALID(S_AXI_ARVALID),
        .S_AXI_AWADDR(S_AXI_AWADDR[3:2]),
        .S_AXI_AWREADY(S_AXI_AWREADY),
        .S_AXI_AWVALID(S_AXI_AWVALID),
        .S_AXI_BREADY(S_AXI_BREADY),
        .S_AXI_BVALID(S_AXI_BVALID),
        .S_AXI_RDATA(\^S_AXI_RDATA ),
        .S_AXI_RREADY(S_AXI_RREADY),
        .S_AXI_RVALID(S_AXI_RVALID),
        .S_AXI_WDATA(S_AXI_WDATA[0]),
        .S_AXI_WREADY(S_AXI_WREADY),
        .S_AXI_WVALID(S_AXI_WVALID),
        .ghost1_col(ghost1_col),
        .ghost1_row(ghost1_row),
        .ghost2_col(ghost2_col),
        .ghost2_row(ghost2_row),
        .ghost3_col(ghost3_col),
        .ghost3_row(ghost3_row),
        .ghost4_col(ghost4_col),
        .ghost4_row(ghost4_row),
        .rover_col(rover_col),
        .rover_row(rover_row),
        .\s1_ghost_row_reg[2] (inst_n_6),
        .\s1_ghost_row_reg[2]_0 (inst_n_7),
        .\s1_ghost_row_reg[2]_1 (inst_n_8),
        .\s1_ghost_row_reg[2]_2 (inst_n_9),
        .\s1_ghost_row_reg[2]_3 (inst_n_10),
        .\s1_ghost_row_reg[2]_4 (inst_n_11),
        .\s1_ghost_row_reg[2]_5 (inst_n_12),
        .\s1_los_dir[0]_i_4 (\s1_los_dir_reg[1]_i_99_n_7 ),
        .\s1_los_dir[0]_i_4__0 (\s1_los_dir_reg[1]_i_91_n_7 ),
        .\s1_los_dir[0]_i_4__1 (\s1_los_dir_reg[1]_i_91__0_n_7 ),
        .\s1_los_dir[0]_i_4__2 (\s1_los_dir_reg[1]_i_91__1_n_7 ),
        .\s1_los_dir[1]_i_33__0 ({\s1_los_dir_reg[1]_i_90_n_4 ,\s1_los_dir_reg[1]_i_90_n_5 ,\s1_los_dir_reg[1]_i_90_n_6 ,\s1_los_dir_reg[1]_i_90_n_7 }),
        .\s1_los_dir[1]_i_33__1 ({\s1_los_dir_reg[1]_i_90__0_n_4 ,\s1_los_dir_reg[1]_i_90__0_n_5 ,\s1_los_dir_reg[1]_i_90__0_n_6 ,\s1_los_dir_reg[1]_i_90__0_n_7 }),
        .\s1_los_dir[1]_i_33__2 ({\s1_los_dir_reg[1]_i_90__1_n_4 ,\s1_los_dir_reg[1]_i_90__1_n_5 ,\s1_los_dir_reg[1]_i_90__1_n_6 ,\s1_los_dir_reg[1]_i_90__1_n_7 }),
        .\s1_los_dir[1]_i_35 ({\s1_los_dir_reg[1]_i_98_n_4 ,\s1_los_dir_reg[1]_i_98_n_5 ,\s1_los_dir_reg[1]_i_98_n_6 ,\s1_los_dir_reg[1]_i_98_n_7 }),
        .s2_can_down_reg(s2_can_down_i_8__0_n_0),
        .s2_can_down_reg_0(s2_can_down_i_8__1_n_0),
        .s2_can_down_reg_1(s2_can_down_i_8__2_n_0),
        .s2_can_up_i_2(s2_can_up_i_8_n_0),
        .s2_can_up_i_2__0(s2_can_up_i_8__0_n_0),
        .s2_can_up_i_2__1(s2_can_up_i_8__1_n_0),
        .s2_can_up_i_2__2(s2_can_up_i_8__2_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_100 
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[3]),
        .I3(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_100_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_100__0 
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[3]),
        .I3(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_100__0_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_100__1 
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[3]),
        .I3(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_100__1_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_101__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[3]),
        .I2(ghost2_row[2]),
        .I3(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_101__0_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_101__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[3]),
        .I2(ghost3_row[2]),
        .I3(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_101__1_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_101__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[3]),
        .I2(ghost4_row[2]),
        .I3(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_101__2_n_0 ));
  LUT4 #(
    .INIT(16'h6696)) 
    \s1_los_dir[1]_i_102__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[3]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[2]),
        .O(\s1_los_dir[1]_i_102__0_n_0 ));
  LUT4 #(
    .INIT(16'h6696)) 
    \s1_los_dir[1]_i_102__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[3]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[2]),
        .O(\s1_los_dir[1]_i_102__1_n_0 ));
  LUT4 #(
    .INIT(16'h6696)) 
    \s1_los_dir[1]_i_102__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[3]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[2]),
        .O(\s1_los_dir[1]_i_102__2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_103__0 
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_103__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_103__1 
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_103__1_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_103__2 
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_103__2_n_0 ));
  LUT3 #(
    .INIT(8'h59)) 
    \s1_los_dir[1]_i_104__0 
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[1]),
        .I2(ghost2_row[3]),
        .O(\s1_los_dir[1]_i_104__0_n_0 ));
  LUT3 #(
    .INIT(8'h59)) 
    \s1_los_dir[1]_i_104__1 
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[1]),
        .I2(ghost3_row[3]),
        .O(\s1_los_dir[1]_i_104__1_n_0 ));
  LUT3 #(
    .INIT(8'h59)) 
    \s1_los_dir[1]_i_104__2 
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[1]),
        .I2(ghost4_row[3]),
        .O(\s1_los_dir[1]_i_104__2_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_106 
       (.I0(ghost1_row[0]),
        .I1(ghost1_row[2]),
        .O(\s1_los_dir[1]_i_106_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_107 
       (.I0(ghost1_row[3]),
        .I1(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_107_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[1]_i_108 
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_108_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_109 
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[3]),
        .I3(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_109_n_0 ));
  LUT4 #(
    .INIT(16'hB44B)) 
    \s1_los_dir[1]_i_110 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[3]),
        .I2(ghost1_row[2]),
        .I3(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_110_n_0 ));
  LUT4 #(
    .INIT(16'h6696)) 
    \s1_los_dir[1]_i_111 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[3]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[2]),
        .O(\s1_los_dir[1]_i_111_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_112 
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_112_n_0 ));
  LUT3 #(
    .INIT(8'h59)) 
    \s1_los_dir[1]_i_113 
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[1]),
        .I2(ghost1_row[3]),
        .O(\s1_los_dir[1]_i_113_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_97__0 
       (.I0(ghost2_row[0]),
        .I1(ghost2_row[2]),
        .O(\s1_los_dir[1]_i_97__0_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_97__1 
       (.I0(ghost3_row[0]),
        .I1(ghost3_row[2]),
        .O(\s1_los_dir[1]_i_97__1_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_97__2 
       (.I0(ghost4_row[0]),
        .I1(ghost4_row[2]),
        .O(\s1_los_dir[1]_i_97__2_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_98 
       (.I0(ghost2_row[3]),
        .I1(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_98_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_98__0 
       (.I0(ghost3_row[3]),
        .I1(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_98__0_n_0 ));
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_98__1 
       (.I0(ghost4_row[3]),
        .I1(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_98__1_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[1]_i_99 
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_99_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[1]_i_99__0 
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_99__0_n_0 ));
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[1]_i_99__1 
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_99__1_n_0 ));
  CARRY4 \s1_los_dir_reg[1]_i_90 
       (.CI(1'b0),
        .CO({\s1_los_dir_reg[1]_i_90_n_0 ,\s1_los_dir_reg[1]_i_90_n_1 ,\s1_los_dir_reg[1]_i_90_n_2 ,\s1_los_dir_reg[1]_i_90_n_3 }),
        .CYINIT(1'b0),
        .DI({\s1_los_dir[1]_i_97__0_n_0 ,\s1_los_dir[1]_i_98_n_0 ,\s1_los_dir[1]_i_99_n_0 ,1'b0}),
        .O({\s1_los_dir_reg[1]_i_90_n_4 ,\s1_los_dir_reg[1]_i_90_n_5 ,\s1_los_dir_reg[1]_i_90_n_6 ,\s1_los_dir_reg[1]_i_90_n_7 }),
        .S({\s1_los_dir[1]_i_100_n_0 ,\s1_los_dir[1]_i_101__0_n_0 ,\s1_los_dir[1]_i_102__0_n_0 ,\s1_los_dir[1]_i_103__0_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_90__0 
       (.CI(1'b0),
        .CO({\s1_los_dir_reg[1]_i_90__0_n_0 ,\s1_los_dir_reg[1]_i_90__0_n_1 ,\s1_los_dir_reg[1]_i_90__0_n_2 ,\s1_los_dir_reg[1]_i_90__0_n_3 }),
        .CYINIT(1'b0),
        .DI({\s1_los_dir[1]_i_97__1_n_0 ,\s1_los_dir[1]_i_98__0_n_0 ,\s1_los_dir[1]_i_99__0_n_0 ,1'b0}),
        .O({\s1_los_dir_reg[1]_i_90__0_n_4 ,\s1_los_dir_reg[1]_i_90__0_n_5 ,\s1_los_dir_reg[1]_i_90__0_n_6 ,\s1_los_dir_reg[1]_i_90__0_n_7 }),
        .S({\s1_los_dir[1]_i_100__0_n_0 ,\s1_los_dir[1]_i_101__1_n_0 ,\s1_los_dir[1]_i_102__1_n_0 ,\s1_los_dir[1]_i_103__1_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_90__1 
       (.CI(1'b0),
        .CO({\s1_los_dir_reg[1]_i_90__1_n_0 ,\s1_los_dir_reg[1]_i_90__1_n_1 ,\s1_los_dir_reg[1]_i_90__1_n_2 ,\s1_los_dir_reg[1]_i_90__1_n_3 }),
        .CYINIT(1'b0),
        .DI({\s1_los_dir[1]_i_97__2_n_0 ,\s1_los_dir[1]_i_98__1_n_0 ,\s1_los_dir[1]_i_99__1_n_0 ,1'b0}),
        .O({\s1_los_dir_reg[1]_i_90__1_n_4 ,\s1_los_dir_reg[1]_i_90__1_n_5 ,\s1_los_dir_reg[1]_i_90__1_n_6 ,\s1_los_dir_reg[1]_i_90__1_n_7 }),
        .S({\s1_los_dir[1]_i_100__1_n_0 ,\s1_los_dir[1]_i_101__2_n_0 ,\s1_los_dir[1]_i_102__2_n_0 ,\s1_los_dir[1]_i_103__2_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_91 
       (.CI(\s1_los_dir_reg[1]_i_90_n_0 ),
        .CO(\NLW_s1_los_dir_reg[1]_i_91_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_s1_los_dir_reg[1]_i_91_O_UNCONNECTED [3:1],\s1_los_dir_reg[1]_i_91_n_7 }),
        .S({1'b0,1'b0,1'b0,\s1_los_dir[1]_i_104__0_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_91__0 
       (.CI(\s1_los_dir_reg[1]_i_90__0_n_0 ),
        .CO(\NLW_s1_los_dir_reg[1]_i_91__0_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_s1_los_dir_reg[1]_i_91__0_O_UNCONNECTED [3:1],\s1_los_dir_reg[1]_i_91__0_n_7 }),
        .S({1'b0,1'b0,1'b0,\s1_los_dir[1]_i_104__1_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_91__1 
       (.CI(\s1_los_dir_reg[1]_i_90__1_n_0 ),
        .CO(\NLW_s1_los_dir_reg[1]_i_91__1_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_s1_los_dir_reg[1]_i_91__1_O_UNCONNECTED [3:1],\s1_los_dir_reg[1]_i_91__1_n_7 }),
        .S({1'b0,1'b0,1'b0,\s1_los_dir[1]_i_104__2_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_98 
       (.CI(1'b0),
        .CO({\s1_los_dir_reg[1]_i_98_n_0 ,\s1_los_dir_reg[1]_i_98_n_1 ,\s1_los_dir_reg[1]_i_98_n_2 ,\s1_los_dir_reg[1]_i_98_n_3 }),
        .CYINIT(1'b0),
        .DI({\s1_los_dir[1]_i_106_n_0 ,\s1_los_dir[1]_i_107_n_0 ,\s1_los_dir[1]_i_108_n_0 ,1'b0}),
        .O({\s1_los_dir_reg[1]_i_98_n_4 ,\s1_los_dir_reg[1]_i_98_n_5 ,\s1_los_dir_reg[1]_i_98_n_6 ,\s1_los_dir_reg[1]_i_98_n_7 }),
        .S({\s1_los_dir[1]_i_109_n_0 ,\s1_los_dir[1]_i_110_n_0 ,\s1_los_dir[1]_i_111_n_0 ,\s1_los_dir[1]_i_112_n_0 }));
  CARRY4 \s1_los_dir_reg[1]_i_99 
       (.CI(\s1_los_dir_reg[1]_i_98_n_0 ),
        .CO(\NLW_s1_los_dir_reg[1]_i_99_CO_UNCONNECTED [3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({\NLW_s1_los_dir_reg[1]_i_99_O_UNCONNECTED [3:1],\s1_los_dir_reg[1]_i_99_n_7 }),
        .S({1'b0,1'b0,1'b0,\s1_los_dir[1]_i_113_n_0 }));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_down_i_8
       (.I0(inst_n_5),
        .O(s2_can_down_i_8_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_down_i_8__0
       (.I0(inst_n_7),
        .O(s2_can_down_i_8__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_down_i_8__1
       (.I0(inst_n_9),
        .O(s2_can_down_i_8__1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_down_i_8__2
       (.I0(inst_n_11),
        .O(s2_can_down_i_8__2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_up_i_8
       (.I0(inst_n_6),
        .O(s2_can_up_i_8_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_up_i_8__0
       (.I0(inst_n_8),
        .O(s2_can_up_i_8__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_up_i_8__1
       (.I0(inst_n_10),
        .O(s2_can_up_i_8__1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_up_i_8__2
       (.I0(inst_n_12),
        .O(s2_can_up_i_8__2_n_0));
endmodule

(* ORIG_REF_NAME = "ghost_multi_axi_lite" *) 
module ghost_bd_ghost_multi_0_0_ghost_multi_axi_lite
   (S_AXI_AWREADY,
    S_AXI_WREADY,
    S_AXI_ARREADY,
    S_AXI_BVALID,
    S_AXI_RVALID,
    O,
    \s1_ghost_row_reg[2] ,
    \s1_ghost_row_reg[2]_0 ,
    \s1_ghost_row_reg[2]_1 ,
    \s1_ghost_row_reg[2]_2 ,
    \s1_ghost_row_reg[2]_3 ,
    \s1_ghost_row_reg[2]_4 ,
    \s1_ghost_row_reg[2]_5 ,
    S_AXI_RDATA,
    S_AXI_ACLK,
    S,
    s2_can_up_i_2,
    \s1_los_dir[1]_i_35 ,
    ghost1_row,
    ghost1_col,
    rover_col,
    rover_row,
    \s1_los_dir[0]_i_4 ,
    s2_can_down_reg,
    s2_can_up_i_2__0,
    \s1_los_dir[1]_i_33__0 ,
    ghost2_row,
    ghost2_col,
    \s1_los_dir[0]_i_4__0 ,
    s2_can_down_reg_0,
    s2_can_up_i_2__1,
    \s1_los_dir[1]_i_33__1 ,
    ghost3_row,
    ghost3_col,
    \s1_los_dir[0]_i_4__1 ,
    s2_can_down_reg_1,
    s2_can_up_i_2__2,
    \s1_los_dir[1]_i_33__2 ,
    ghost4_row,
    ghost4_col,
    \s1_los_dir[0]_i_4__2 ,
    S_AXI_ARVALID,
    S_AXI_ARESETN,
    S_AXI_WVALID,
    S_AXI_AWVALID,
    S_AXI_BREADY,
    S_AXI_RREADY,
    S_AXI_WDATA,
    S_AXI_AWADDR,
    S_AXI_ARADDR);
  output S_AXI_AWREADY;
  output S_AXI_WREADY;
  output S_AXI_ARREADY;
  output S_AXI_BVALID;
  output S_AXI_RVALID;
  output [0:0]O;
  output [0:0]\s1_ghost_row_reg[2] ;
  output [0:0]\s1_ghost_row_reg[2]_0 ;
  output [0:0]\s1_ghost_row_reg[2]_1 ;
  output [0:0]\s1_ghost_row_reg[2]_2 ;
  output [0:0]\s1_ghost_row_reg[2]_3 ;
  output [0:0]\s1_ghost_row_reg[2]_4 ;
  output [0:0]\s1_ghost_row_reg[2]_5 ;
  output [3:0]S_AXI_RDATA;
  input S_AXI_ACLK;
  input [0:0]S;
  input [0:0]s2_can_up_i_2;
  input [3:0]\s1_los_dir[1]_i_35 ;
  input [3:0]ghost1_row;
  input [3:0]ghost1_col;
  input [3:0]rover_col;
  input [3:0]rover_row;
  input [0:0]\s1_los_dir[0]_i_4 ;
  input [0:0]s2_can_down_reg;
  input [0:0]s2_can_up_i_2__0;
  input [3:0]\s1_los_dir[1]_i_33__0 ;
  input [3:0]ghost2_row;
  input [3:0]ghost2_col;
  input [0:0]\s1_los_dir[0]_i_4__0 ;
  input [0:0]s2_can_down_reg_0;
  input [0:0]s2_can_up_i_2__1;
  input [3:0]\s1_los_dir[1]_i_33__1 ;
  input [3:0]ghost3_row;
  input [3:0]ghost3_col;
  input [0:0]\s1_los_dir[0]_i_4__1 ;
  input [0:0]s2_can_down_reg_1;
  input [0:0]s2_can_up_i_2__2;
  input [3:0]\s1_los_dir[1]_i_33__2 ;
  input [3:0]ghost4_row;
  input [3:0]ghost4_col;
  input [0:0]\s1_los_dir[0]_i_4__2 ;
  input S_AXI_ARVALID;
  input S_AXI_ARESETN;
  input S_AXI_WVALID;
  input S_AXI_AWVALID;
  input S_AXI_BREADY;
  input S_AXI_RREADY;
  input [0:0]S_AXI_WDATA;
  input [1:0]S_AXI_AWADDR;
  input [1:0]S_AXI_ARADDR;

  wire [0:0]O;
  wire [0:0]S;
  wire S_AXI_ACLK;
  wire [1:0]S_AXI_ARADDR;
  wire S_AXI_ARESETN;
  wire S_AXI_ARREADY;
  wire S_AXI_ARREADY0;
  wire S_AXI_ARVALID;
  wire [1:0]S_AXI_AWADDR;
  wire S_AXI_AWREADY;
  wire S_AXI_AWREADY0;
  wire S_AXI_AWVALID;
  wire S_AXI_BREADY;
  wire S_AXI_BVALID;
  wire S_AXI_BVALID_i_1_n_0;
  wire [3:0]S_AXI_RDATA;
  wire S_AXI_RREADY;
  wire S_AXI_RVALID;
  wire S_AXI_RVALID_i_1_n_0;
  wire [0:0]S_AXI_WDATA;
  wire S_AXI_WREADY;
  wire S_AXI_WREADY0;
  wire S_AXI_WVALID;
  wire aw_active_i_1_n_0;
  wire aw_active_reg_n_0;
  wire [1:0]\direction[0]_1 ;
  wire [1:0]\direction[1]_2 ;
  wire [1:0]\direction[2]_3 ;
  wire [1:0]\direction[3]_4 ;
  wire game_enable_i_1_n_0;
  wire game_enable_reg_n_0;
  wire [3:0]ghost1_col;
  wire ghost1_n_0;
  wire ghost1_n_2;
  wire [3:0]ghost1_row;
  wire [3:0]ghost2_col;
  wire [3:0]ghost2_row;
  wire [3:0]ghost3_col;
  wire [3:0]ghost3_row;
  wire [3:0]ghost4_col;
  wire ghost4_n_10;
  wire ghost4_n_11;
  wire ghost4_n_12;
  wire ghost4_n_13;
  wire ghost4_n_14;
  wire ghost4_n_2;
  wire ghost4_n_3;
  wire ghost4_n_4;
  wire ghost4_n_5;
  wire ghost4_n_6;
  wire ghost4_n_7;
  wire ghost4_n_8;
  wire ghost4_n_9;
  wire [3:0]ghost4_row;
  wire p_0_in__0;
  wire [3:0]read_data;
  wire [3:0]rover_col;
  wire [3:0]rover_row;
  wire rst;
  wire [0:0]\s1_ghost_row_reg[2] ;
  wire [0:0]\s1_ghost_row_reg[2]_0 ;
  wire [0:0]\s1_ghost_row_reg[2]_1 ;
  wire [0:0]\s1_ghost_row_reg[2]_2 ;
  wire [0:0]\s1_ghost_row_reg[2]_3 ;
  wire [0:0]\s1_ghost_row_reg[2]_4 ;
  wire [0:0]\s1_ghost_row_reg[2]_5 ;
  wire [0:0]\s1_los_dir[0]_i_4 ;
  wire [0:0]\s1_los_dir[0]_i_4__0 ;
  wire [0:0]\s1_los_dir[0]_i_4__1 ;
  wire [0:0]\s1_los_dir[0]_i_4__2 ;
  wire [3:0]\s1_los_dir[1]_i_33__0 ;
  wire [3:0]\s1_los_dir[1]_i_33__1 ;
  wire [3:0]\s1_los_dir[1]_i_33__2 ;
  wire [3:0]\s1_los_dir[1]_i_35 ;
  wire [0:0]s2_can_down_reg;
  wire [0:0]s2_can_down_reg_0;
  wire [0:0]s2_can_down_reg_1;
  wire [0:0]s2_can_up_i_2;
  wire [0:0]s2_can_up_i_2__0;
  wire [0:0]s2_can_up_i_2__1;
  wire [0:0]s2_can_up_i_2__2;
  wire \valid[0]_0 ;
  wire w_active_i_1_n_0;
  wire w_active_reg_n_0;

  LUT2 #(
    .INIT(4'h2)) 
    S_AXI_ARREADY_i_1
       (.I0(S_AXI_ARVALID),
        .I1(S_AXI_RVALID),
        .O(S_AXI_ARREADY0));
  FDCE S_AXI_ARREADY_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(S_AXI_ARREADY0),
        .Q(S_AXI_ARREADY));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT2 #(
    .INIT(4'h2)) 
    S_AXI_AWREADY_i_1
       (.I0(S_AXI_AWVALID),
        .I1(aw_active_reg_n_0),
        .O(S_AXI_AWREADY0));
  FDCE S_AXI_AWREADY_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(S_AXI_AWREADY0),
        .Q(S_AXI_AWREADY));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT4 #(
    .INIT(16'h7444)) 
    S_AXI_BVALID_i_1
       (.I0(S_AXI_BREADY),
        .I1(S_AXI_BVALID),
        .I2(w_active_reg_n_0),
        .I3(aw_active_reg_n_0),
        .O(S_AXI_BVALID_i_1_n_0));
  FDCE S_AXI_BVALID_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(S_AXI_BVALID_i_1_n_0),
        .Q(S_AXI_BVALID));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \S_AXI_RDATA[0]_i_1 
       (.I0(\direction[3]_4 [0]),
        .I1(\direction[1]_2 [0]),
        .I2(S_AXI_ARADDR[0]),
        .I3(\direction[2]_3 [0]),
        .I4(S_AXI_ARADDR[1]),
        .I5(\direction[0]_1 [0]),
        .O(read_data[0]));
  LUT6 #(
    .INIT(64'hAFA0CFCFAFA0C0C0)) 
    \S_AXI_RDATA[1]_i_1 
       (.I0(\direction[3]_4 [1]),
        .I1(\direction[1]_2 [1]),
        .I2(S_AXI_ARADDR[0]),
        .I3(\direction[2]_3 [1]),
        .I4(S_AXI_ARADDR[1]),
        .I5(\direction[0]_1 [1]),
        .O(read_data[1]));
  LUT3 #(
    .INIT(8'h02)) 
    \S_AXI_RDATA[3]_i_1 
       (.I0(game_enable_reg_n_0),
        .I1(S_AXI_ARADDR[0]),
        .I2(S_AXI_ARADDR[1]),
        .O(read_data[3]));
  FDCE \S_AXI_RDATA_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(S_AXI_ARREADY0),
        .CLR(rst),
        .D(read_data[0]),
        .Q(S_AXI_RDATA[0]));
  FDCE \S_AXI_RDATA_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(S_AXI_ARREADY0),
        .CLR(rst),
        .D(read_data[1]),
        .Q(S_AXI_RDATA[1]));
  FDCE \S_AXI_RDATA_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(S_AXI_ARREADY0),
        .CLR(rst),
        .D(\valid[0]_0 ),
        .Q(S_AXI_RDATA[2]));
  FDCE \S_AXI_RDATA_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(S_AXI_ARREADY0),
        .CLR(rst),
        .D(read_data[3]),
        .Q(S_AXI_RDATA[3]));
  LUT3 #(
    .INIT(8'h74)) 
    S_AXI_RVALID_i_1
       (.I0(S_AXI_RREADY),
        .I1(S_AXI_RVALID),
        .I2(S_AXI_ARVALID),
        .O(S_AXI_RVALID_i_1_n_0));
  FDCE S_AXI_RVALID_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(S_AXI_RVALID_i_1_n_0),
        .Q(S_AXI_RVALID));
  LUT2 #(
    .INIT(4'h2)) 
    S_AXI_WREADY_i_1
       (.I0(S_AXI_WVALID),
        .I1(w_active_reg_n_0),
        .O(S_AXI_WREADY0));
  FDCE S_AXI_WREADY_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(S_AXI_WREADY0),
        .Q(S_AXI_WREADY));
  (* SOFT_HLUTNM = "soft_lutpair118" *) 
  LUT3 #(
    .INIT(8'h74)) 
    aw_active_i_1
       (.I0(w_active_reg_n_0),
        .I1(aw_active_reg_n_0),
        .I2(S_AXI_AWVALID),
        .O(aw_active_i_1_n_0));
  FDCE aw_active_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(aw_active_i_1_n_0),
        .Q(aw_active_reg_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFBF00000080)) 
    game_enable_i_1
       (.I0(S_AXI_WDATA),
        .I1(w_active_reg_n_0),
        .I2(aw_active_reg_n_0),
        .I3(S_AXI_AWADDR[1]),
        .I4(S_AXI_AWADDR[0]),
        .I5(game_enable_reg_n_0),
        .O(game_enable_i_1_n_0));
  FDCE game_enable_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(game_enable_i_1_n_0),
        .Q(game_enable_reg_n_0));
  ghost_bd_ghost_multi_0_0_ghost_top ghost1
       (.AR(rst),
        .D(\valid[0]_0 ),
        .E(ghost1_n_0),
        .O(O),
        .S(S),
        .S_AXI_ACLK(S_AXI_ACLK),
        .S_AXI_ARESETN(S_AXI_ARESETN),
        .\direction_reg[1]_0 (\direction[0]_1 ),
        .ghost1_col(ghost1_col),
        .ghost1_row(ghost1_row),
        .p_0_in__0(p_0_in__0),
        .\pipe_en_reg[0]_0 (ghost1_n_2),
        .\pipe_en_reg[0]_1 (game_enable_reg_n_0),
        .rover_col(rover_col),
        .rover_row(rover_row),
        .\s1_ghost_row_reg[2]_0 (\s1_ghost_row_reg[2] ),
        .s1_los_detected_i_2_0(ghost4_n_5),
        .s1_los_detected_i_5_0(ghost4_n_6),
        .s1_los_detected_reg_0(ghost4_n_2),
        .s1_los_detected_reg_1(ghost4_n_4),
        .\s1_los_dir[0]_i_4_0 (\s1_los_dir[0]_i_4 ),
        .\s1_los_dir[0]_i_5_0 (ghost4_n_8),
        .\s1_los_dir[1]_i_29_0 (ghost4_n_10),
        .\s1_los_dir[1]_i_2_0 (ghost4_n_7),
        .\s1_los_dir[1]_i_35_0 (\s1_los_dir[1]_i_35 ),
        .\s1_los_dir[1]_i_5_0 (ghost4_n_12),
        .\s1_los_dir[1]_i_6_0 (ghost4_n_3),
        .\s1_los_dir[1]_i_6_1 (ghost4_n_14),
        .\s1_los_dir_reg[1]_0 (ghost4_n_9),
        .\s1_los_dir_reg[1]_1 (ghost4_n_11),
        .\s1_los_dir_reg[1]_2 (ghost4_n_13),
        .s2_can_up_i_2_0(s2_can_up_i_2));
  ghost_bd_ghost_multi_0_0_ghost_top_0 ghost2
       (.AR(rst),
        .D(\direction[1]_2 ),
        .E(ghost1_n_0),
        .S_AXI_ACLK(S_AXI_ACLK),
        .ghost2_col(ghost2_col),
        .ghost2_row(ghost2_row),
        .p_0_in__0(p_0_in__0),
        .rover_col(rover_col),
        .rover_row(rover_row),
        .\s1_ghost_row_reg[2]_0 (\s1_ghost_row_reg[2]_0 ),
        .\s1_ghost_row_reg[2]_1 (\s1_ghost_row_reg[2]_1 ),
        .s1_los_detected_i_2__0_0(ghost4_n_5),
        .s1_los_detected_i_4_0(ghost4_n_6),
        .s1_los_detected_reg_0(ghost1_n_2),
        .s1_los_detected_reg_1(ghost4_n_2),
        .s1_los_detected_reg_2(ghost4_n_4),
        .\s1_los_dir[0]_i_4__0_0 (\s1_los_dir[0]_i_4__0 ),
        .\s1_los_dir[0]_i_5__0_0 (ghost4_n_8),
        .\s1_los_dir[1]_i_27__0_0 (ghost4_n_10),
        .\s1_los_dir[1]_i_2__0_0 (ghost4_n_7),
        .\s1_los_dir[1]_i_33__0_0 (\s1_los_dir[1]_i_33__0 ),
        .\s1_los_dir[1]_i_5__0_0 (ghost4_n_12),
        .\s1_los_dir[1]_i_6__0_0 (ghost4_n_3),
        .\s1_los_dir[1]_i_6__0_1 (ghost4_n_14),
        .\s1_los_dir_reg[1]_0 (ghost4_n_9),
        .\s1_los_dir_reg[1]_1 (ghost4_n_11),
        .\s1_los_dir_reg[1]_2 (ghost4_n_13),
        .s2_can_down_reg_0(s2_can_down_reg),
        .s2_can_up_i_2__0_0(s2_can_up_i_2__0));
  ghost_bd_ghost_multi_0_0_ghost_top_1 ghost3
       (.AR(rst),
        .D(\direction[2]_3 ),
        .E(ghost1_n_0),
        .S_AXI_ACLK(S_AXI_ACLK),
        .ghost3_col(ghost3_col),
        .ghost3_row(ghost3_row),
        .p_0_in__0(p_0_in__0),
        .rover_col(rover_col),
        .rover_row(rover_row),
        .\s1_ghost_row_reg[2]_0 (\s1_ghost_row_reg[2]_2 ),
        .\s1_ghost_row_reg[2]_1 (\s1_ghost_row_reg[2]_3 ),
        .s1_los_detected_i_2__1_0(ghost4_n_5),
        .s1_los_detected_i_4__0_0(ghost4_n_6),
        .s1_los_detected_reg_0(ghost1_n_2),
        .s1_los_detected_reg_1(ghost4_n_2),
        .s1_los_detected_reg_2(ghost4_n_4),
        .\s1_los_dir[0]_i_4__1_0 (\s1_los_dir[0]_i_4__1 ),
        .\s1_los_dir[0]_i_5__1_0 (ghost4_n_8),
        .\s1_los_dir[1]_i_27__1_0 (ghost4_n_10),
        .\s1_los_dir[1]_i_2__1_0 (ghost4_n_7),
        .\s1_los_dir[1]_i_33__1_0 (\s1_los_dir[1]_i_33__1 ),
        .\s1_los_dir[1]_i_5__1_0 (ghost4_n_12),
        .\s1_los_dir[1]_i_6__1_0 (ghost4_n_3),
        .\s1_los_dir[1]_i_6__1_1 (ghost4_n_14),
        .\s1_los_dir_reg[1]_0 (ghost4_n_9),
        .\s1_los_dir_reg[1]_1 (ghost4_n_11),
        .\s1_los_dir_reg[1]_2 (ghost4_n_13),
        .s2_can_down_reg_0(s2_can_down_reg_0),
        .s2_can_up_i_2__1_0(s2_can_up_i_2__1));
  ghost_bd_ghost_multi_0_0_ghost_top_2 ghost4
       (.AR(rst),
        .D(\direction[3]_4 ),
        .E(ghost1_n_0),
        .S_AXI_ACLK(S_AXI_ACLK),
        .ghost4_col(ghost4_col),
        .ghost4_row(ghost4_row),
        .p_0_in__0(p_0_in__0),
        .rover_col(rover_col),
        .\rover_col[2]_0 (ghost4_n_9),
        .\rover_col[2]_1 (ghost4_n_10),
        .\rover_col[2]_2 (ghost4_n_11),
        .\rover_col[2]_3 (ghost4_n_13),
        .\rover_col[3]_0 (ghost4_n_8),
        .\rover_col[3]_1 (ghost4_n_12),
        .\rover_col[3]_2 (ghost4_n_14),
        .rover_col_2_sp_1(ghost4_n_7),
        .rover_col_3_sp_1(ghost4_n_3),
        .rover_row(rover_row),
        .\rover_row[2]_0 (ghost4_n_4),
        .rover_row_0_sp_1(ghost4_n_5),
        .rover_row_2_sp_1(ghost4_n_2),
        .rover_row_3_sp_1(ghost4_n_6),
        .\s1_ghost_row_reg[2]_0 (\s1_ghost_row_reg[2]_4 ),
        .\s1_ghost_row_reg[2]_1 (\s1_ghost_row_reg[2]_5 ),
        .\s1_los_dir[0]_i_4__2_0 (\s1_los_dir[0]_i_4__2 ),
        .\s1_los_dir[1]_i_33__2_0 (\s1_los_dir[1]_i_33__2 ),
        .\s1_los_dir_reg[0]_0 (ghost1_n_2),
        .s2_can_down_reg_0(s2_can_down_reg_1),
        .s2_can_up_i_2__2_0(s2_can_up_i_2__2));
  (* SOFT_HLUTNM = "soft_lutpair117" *) 
  LUT3 #(
    .INIT(8'h74)) 
    w_active_i_1
       (.I0(aw_active_reg_n_0),
        .I1(w_active_reg_n_0),
        .I2(S_AXI_WVALID),
        .O(w_active_i_1_n_0));
  FDCE w_active_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(rst),
        .D(w_active_i_1_n_0),
        .Q(w_active_reg_n_0));
endmodule

(* ORIG_REF_NAME = "ghost_top" *) 
module ghost_bd_ghost_multi_0_0_ghost_top
   (E,
    AR,
    \pipe_en_reg[0]_0 ,
    p_0_in__0,
    D,
    O,
    \s1_ghost_row_reg[2]_0 ,
    \direction_reg[1]_0 ,
    S_AXI_ACLK,
    \pipe_en_reg[0]_1 ,
    S,
    s2_can_up_i_2_0,
    s1_los_detected_reg_0,
    \s1_los_dir[1]_i_35_0 ,
    ghost1_row,
    \s1_los_dir[1]_i_6_0 ,
    ghost1_col,
    rover_col,
    rover_row,
    s1_los_detected_reg_1,
    s1_los_detected_i_2_0,
    s1_los_detected_i_5_0,
    \s1_los_dir[1]_i_2_0 ,
    \s1_los_dir[0]_i_5_0 ,
    \s1_los_dir_reg[1]_0 ,
    \s1_los_dir[1]_i_29_0 ,
    \s1_los_dir_reg[1]_1 ,
    \s1_los_dir[1]_i_5_0 ,
    \s1_los_dir_reg[1]_2 ,
    \s1_los_dir[1]_i_6_1 ,
    \s1_los_dir[0]_i_4_0 ,
    S_AXI_ARESETN);
  output [0:0]E;
  output [0:0]AR;
  output [0:0]\pipe_en_reg[0]_0 ;
  output p_0_in__0;
  output [0:0]D;
  output [0:0]O;
  output [0:0]\s1_ghost_row_reg[2]_0 ;
  output [1:0]\direction_reg[1]_0 ;
  input S_AXI_ACLK;
  input \pipe_en_reg[0]_1 ;
  input [0:0]S;
  input [0:0]s2_can_up_i_2_0;
  input s1_los_detected_reg_0;
  input [3:0]\s1_los_dir[1]_i_35_0 ;
  input [3:0]ghost1_row;
  input \s1_los_dir[1]_i_6_0 ;
  input [3:0]ghost1_col;
  input [3:0]rover_col;
  input [3:0]rover_row;
  input s1_los_detected_reg_1;
  input s1_los_detected_i_2_0;
  input s1_los_detected_i_5_0;
  input \s1_los_dir[1]_i_2_0 ;
  input \s1_los_dir[0]_i_5_0 ;
  input \s1_los_dir_reg[1]_0 ;
  input \s1_los_dir[1]_i_29_0 ;
  input \s1_los_dir_reg[1]_1 ;
  input \s1_los_dir[1]_i_5_0 ;
  input \s1_los_dir_reg[1]_2 ;
  input \s1_los_dir[1]_i_6_1 ;
  input [0:0]\s1_los_dir[0]_i_4_0 ;
  input S_AXI_ARESETN;

  wire [0:0]AR;
  wire [0:0]D;
  wire [0:0]E;
  wire [0:0]O;
  wire [0:0]S;
  wire S_AXI_ACLK;
  wire S_AXI_ARESETN;
  wire \direction[0]_i_1_n_0 ;
  wire \direction[1]_i_1_n_0 ;
  wire [1:0]\direction_reg[1]_0 ;
  wire [3:0]ghost1_col;
  wire [3:0]ghost1_row;
  wire los_detected_comb;
  wire [1:0]los_dir_comb;
  wire p_0_in__0;
  wire [5:5]p_1_in;
  wire [0:0]\pipe_en_reg[0]_0 ;
  wire \pipe_en_reg[0]_1 ;
  wire [3:0]rover_col;
  wire [3:0]rover_row;
  wire [3:0]s1_ghost_col;
  wire [3:0]s1_ghost_row;
  wire [0:0]\s1_ghost_row_reg[2]_0 ;
  wire s1_los_detected;
  wire s1_los_detected_i_10_n_0;
  wire s1_los_detected_i_11_n_0;
  wire s1_los_detected_i_12_n_0;
  wire s1_los_detected_i_13_n_0;
  wire s1_los_detected_i_14_n_0;
  wire s1_los_detected_i_15_n_0;
  wire s1_los_detected_i_16_n_0;
  wire s1_los_detected_i_18_n_0;
  wire s1_los_detected_i_19_n_0;
  wire s1_los_detected_i_21_n_0;
  wire s1_los_detected_i_22_n_0;
  wire s1_los_detected_i_23_n_0;
  wire s1_los_detected_i_24_n_0;
  wire s1_los_detected_i_26_n_0;
  wire s1_los_detected_i_27_n_0;
  wire s1_los_detected_i_28_n_0;
  wire s1_los_detected_i_29_n_0;
  wire s1_los_detected_i_2_0;
  wire s1_los_detected_i_2_n_0;
  wire s1_los_detected_i_30_n_0;
  wire s1_los_detected_i_3_n_0;
  wire s1_los_detected_i_5_0;
  wire s1_los_detected_i_5_n_0;
  wire s1_los_detected_i_6_n_0;
  wire s1_los_detected_i_7_n_0;
  wire s1_los_detected_i_8_n_0;
  wire s1_los_detected_i_9_n_0;
  wire s1_los_detected_reg_0;
  wire s1_los_detected_reg_1;
  wire [1:0]s1_los_dir;
  wire \s1_los_dir[0]_i_10_n_0 ;
  wire \s1_los_dir[0]_i_11_n_0 ;
  wire \s1_los_dir[0]_i_12_n_0 ;
  wire \s1_los_dir[0]_i_13_n_0 ;
  wire \s1_los_dir[0]_i_14_n_0 ;
  wire \s1_los_dir[0]_i_15_n_0 ;
  wire \s1_los_dir[0]_i_16_n_0 ;
  wire \s1_los_dir[0]_i_17_n_0 ;
  wire \s1_los_dir[0]_i_18_n_0 ;
  wire \s1_los_dir[0]_i_19_n_0 ;
  wire \s1_los_dir[0]_i_20_n_0 ;
  wire \s1_los_dir[0]_i_21_n_0 ;
  wire \s1_los_dir[0]_i_22_n_0 ;
  wire \s1_los_dir[0]_i_23_n_0 ;
  wire \s1_los_dir[0]_i_2_n_0 ;
  wire \s1_los_dir[0]_i_3_n_0 ;
  wire [0:0]\s1_los_dir[0]_i_4_0 ;
  wire \s1_los_dir[0]_i_4_n_0 ;
  wire \s1_los_dir[0]_i_5_0 ;
  wire \s1_los_dir[0]_i_5_n_0 ;
  wire \s1_los_dir[0]_i_6_n_0 ;
  wire \s1_los_dir[0]_i_7_n_0 ;
  wire \s1_los_dir[0]_i_8_n_0 ;
  wire \s1_los_dir[0]_i_9_n_0 ;
  wire \s1_los_dir[1]_i_101_n_0 ;
  wire \s1_los_dir[1]_i_102_n_0 ;
  wire \s1_los_dir[1]_i_103_n_0 ;
  wire \s1_los_dir[1]_i_104_n_0 ;
  wire \s1_los_dir[1]_i_105_n_0 ;
  wire \s1_los_dir[1]_i_10_n_0 ;
  wire \s1_los_dir[1]_i_114_n_0 ;
  wire \s1_los_dir[1]_i_11_n_0 ;
  wire \s1_los_dir[1]_i_12_n_0 ;
  wire \s1_los_dir[1]_i_13_n_0 ;
  wire \s1_los_dir[1]_i_14_n_0 ;
  wire \s1_los_dir[1]_i_15_n_0 ;
  wire \s1_los_dir[1]_i_16_n_0 ;
  wire \s1_los_dir[1]_i_17_n_0 ;
  wire \s1_los_dir[1]_i_18_n_0 ;
  wire \s1_los_dir[1]_i_19_n_0 ;
  wire \s1_los_dir[1]_i_21_n_0 ;
  wire \s1_los_dir[1]_i_22__2_n_0 ;
  wire \s1_los_dir[1]_i_24_n_0 ;
  wire \s1_los_dir[1]_i_25_n_0 ;
  wire \s1_los_dir[1]_i_26_n_0 ;
  wire \s1_los_dir[1]_i_27_n_0 ;
  wire \s1_los_dir[1]_i_28_n_0 ;
  wire \s1_los_dir[1]_i_29_0 ;
  wire \s1_los_dir[1]_i_29_n_0 ;
  wire \s1_los_dir[1]_i_2_0 ;
  wire \s1_los_dir[1]_i_2_n_0 ;
  wire \s1_los_dir[1]_i_30_n_0 ;
  wire \s1_los_dir[1]_i_31_n_0 ;
  wire \s1_los_dir[1]_i_32_n_0 ;
  wire \s1_los_dir[1]_i_33_n_0 ;
  wire \s1_los_dir[1]_i_34_n_0 ;
  wire [3:0]\s1_los_dir[1]_i_35_0 ;
  wire \s1_los_dir[1]_i_35_n_0 ;
  wire \s1_los_dir[1]_i_37_n_0 ;
  wire \s1_los_dir[1]_i_38_n_0 ;
  wire \s1_los_dir[1]_i_39_n_0 ;
  wire \s1_los_dir[1]_i_3_n_0 ;
  wire \s1_los_dir[1]_i_40_n_0 ;
  wire \s1_los_dir[1]_i_41__2_n_0 ;
  wire \s1_los_dir[1]_i_42_n_0 ;
  wire \s1_los_dir[1]_i_43__2_n_0 ;
  wire \s1_los_dir[1]_i_44_n_0 ;
  wire \s1_los_dir[1]_i_45_n_0 ;
  wire \s1_los_dir[1]_i_46_n_0 ;
  wire \s1_los_dir[1]_i_47_n_0 ;
  wire \s1_los_dir[1]_i_48_n_0 ;
  wire \s1_los_dir[1]_i_49_n_0 ;
  wire \s1_los_dir[1]_i_4_n_0 ;
  wire \s1_los_dir[1]_i_50_n_0 ;
  wire \s1_los_dir[1]_i_51_n_0 ;
  wire \s1_los_dir[1]_i_52_n_0 ;
  wire \s1_los_dir[1]_i_53_n_0 ;
  wire \s1_los_dir[1]_i_54_n_0 ;
  wire \s1_los_dir[1]_i_56_n_0 ;
  wire \s1_los_dir[1]_i_57_n_0 ;
  wire \s1_los_dir[1]_i_58_n_0 ;
  wire \s1_los_dir[1]_i_5_0 ;
  wire \s1_los_dir[1]_i_5_n_0 ;
  wire \s1_los_dir[1]_i_60_n_0 ;
  wire \s1_los_dir[1]_i_61__2_n_0 ;
  wire \s1_los_dir[1]_i_62__2_n_0 ;
  wire \s1_los_dir[1]_i_63_n_0 ;
  wire \s1_los_dir[1]_i_64_n_0 ;
  wire \s1_los_dir[1]_i_65_n_0 ;
  wire \s1_los_dir[1]_i_66_n_0 ;
  wire \s1_los_dir[1]_i_68_n_0 ;
  wire \s1_los_dir[1]_i_69_n_0 ;
  wire \s1_los_dir[1]_i_6_0 ;
  wire \s1_los_dir[1]_i_6_1 ;
  wire \s1_los_dir[1]_i_6_n_0 ;
  wire \s1_los_dir[1]_i_70_n_0 ;
  wire \s1_los_dir[1]_i_71_n_0 ;
  wire \s1_los_dir[1]_i_72_n_0 ;
  wire \s1_los_dir[1]_i_73_n_0 ;
  wire \s1_los_dir[1]_i_74_n_0 ;
  wire \s1_los_dir[1]_i_75_n_0 ;
  wire \s1_los_dir[1]_i_76_n_0 ;
  wire \s1_los_dir[1]_i_77_n_0 ;
  wire \s1_los_dir[1]_i_78__2_n_0 ;
  wire \s1_los_dir[1]_i_79_n_0 ;
  wire \s1_los_dir[1]_i_7_n_0 ;
  wire \s1_los_dir[1]_i_80_n_0 ;
  wire \s1_los_dir[1]_i_81_n_0 ;
  wire \s1_los_dir[1]_i_82_n_0 ;
  wire \s1_los_dir[1]_i_83__2_n_0 ;
  wire \s1_los_dir[1]_i_84_n_0 ;
  wire \s1_los_dir[1]_i_85_n_0 ;
  wire \s1_los_dir[1]_i_86_n_0 ;
  wire \s1_los_dir[1]_i_87__2_n_0 ;
  wire \s1_los_dir[1]_i_88_n_0 ;
  wire \s1_los_dir[1]_i_89_n_0 ;
  wire \s1_los_dir[1]_i_8_n_0 ;
  wire \s1_los_dir[1]_i_90_n_0 ;
  wire \s1_los_dir[1]_i_93__2_n_0 ;
  wire \s1_los_dir[1]_i_94_n_0 ;
  wire \s1_los_dir[1]_i_95_n_0 ;
  wire \s1_los_dir[1]_i_96_n_0 ;
  wire \s1_los_dir[1]_i_97_n_0 ;
  wire \s1_los_dir[1]_i_9_n_0 ;
  wire \s1_los_dir_reg[1]_0 ;
  wire \s1_los_dir_reg[1]_1 ;
  wire \s1_los_dir_reg[1]_2 ;
  wire s2_can_down;
  wire s2_can_down_i_10_n_0;
  wire s2_can_down_i_11_n_0;
  wire s2_can_down_i_12_n_0;
  wire s2_can_down_i_13_n_0;
  wire s2_can_down_i_14_n_0;
  wire s2_can_down_i_15_n_0;
  wire s2_can_down_i_17_n_0;
  wire s2_can_down_i_18_n_0;
  wire s2_can_down_i_19_n_0;
  wire s2_can_down_i_20_n_0;
  wire s2_can_down_i_21_n_0;
  wire s2_can_down_i_22_n_0;
  wire s2_can_down_i_23_n_0;
  wire s2_can_down_i_24_n_0;
  wire s2_can_down_i_2_n_0;
  wire s2_can_down_i_4_n_0;
  wire s2_can_down_i_6_n_0;
  wire s2_can_down_i_9_n_0;
  wire s2_can_down_reg_i_16_n_0;
  wire s2_can_down_reg_i_16_n_1;
  wire s2_can_down_reg_i_16_n_2;
  wire s2_can_down_reg_i_16_n_3;
  wire s2_can_down_reg_i_16_n_5;
  wire s2_can_down_reg_i_16_n_6;
  wire s2_can_down_reg_i_16_n_7;
  wire s2_can_down_reg_i_3_n_2;
  wire s2_can_down_reg_i_3_n_3;
  wire s2_can_down_reg_i_3_n_5;
  wire s2_can_down_reg_i_3_n_6;
  wire s2_can_down_reg_i_3_n_7;
  wire s2_can_down_reg_i_5_n_0;
  wire s2_can_down_reg_i_5_n_1;
  wire s2_can_down_reg_i_5_n_2;
  wire s2_can_down_reg_i_5_n_3;
  wire s2_can_down_reg_i_5_n_4;
  wire s2_can_down_reg_i_5_n_5;
  wire s2_can_down_reg_i_5_n_6;
  wire s2_can_down_reg_i_5_n_7;
  wire s2_can_down_reg_i_7_n_7;
  wire s2_can_left;
  wire s2_can_left_i_10_n_0;
  wire s2_can_left_i_11_n_0;
  wire s2_can_left_i_12_n_0;
  wire s2_can_left_i_13_n_0;
  wire s2_can_left_i_14_n_0;
  wire s2_can_left_i_15_n_0;
  wire s2_can_left_i_3_n_0;
  wire s2_can_left_i_6_n_0;
  wire s2_can_left_i_8_n_0;
  wire s2_can_left_i_9_n_0;
  wire s2_can_left_reg_i_4_n_2;
  wire s2_can_left_reg_i_4_n_3;
  wire s2_can_left_reg_i_4_n_5;
  wire s2_can_left_reg_i_4_n_6;
  wire s2_can_left_reg_i_4_n_7;
  wire s2_can_left_reg_i_5_n_0;
  wire s2_can_left_reg_i_5_n_1;
  wire s2_can_left_reg_i_5_n_2;
  wire s2_can_left_reg_i_5_n_3;
  wire s2_can_left_reg_i_5_n_4;
  wire s2_can_left_reg_i_5_n_5;
  wire s2_can_left_reg_i_5_n_6;
  wire s2_can_left_reg_i_5_n_7;
  wire s2_can_right;
  wire s2_can_right_i_10_n_0;
  wire s2_can_right_i_11_n_0;
  wire s2_can_right_i_12_n_0;
  wire s2_can_right_i_13_n_0;
  wire s2_can_right_i_14_n_0;
  wire s2_can_right_i_15_n_0;
  wire s2_can_right_i_16_n_0;
  wire s2_can_right_i_17_n_0;
  wire s2_can_right_i_18_n_0;
  wire s2_can_right_i_19_n_0;
  wire s2_can_right_i_20_n_0;
  wire s2_can_right_i_21_n_0;
  wire s2_can_right_i_22_n_0;
  wire s2_can_right_i_2_n_0;
  wire s2_can_right_i_3_n_0;
  wire s2_can_right_i_4_n_0;
  wire s2_can_right_i_5_n_0;
  wire s2_can_right_i_6_n_0;
  wire s2_can_right_i_8_n_0;
  wire s2_can_right_reg_i_7_n_0;
  wire s2_can_right_reg_i_7_n_1;
  wire s2_can_right_reg_i_7_n_2;
  wire s2_can_right_reg_i_7_n_3;
  wire s2_can_right_reg_i_7_n_4;
  wire s2_can_right_reg_i_7_n_5;
  wire s2_can_right_reg_i_7_n_6;
  wire s2_can_right_reg_i_7_n_7;
  wire s2_can_right_reg_i_9_n_7;
  wire s2_can_up;
  wire s2_can_up_i_10_n_0;
  wire s2_can_up_i_12_n_0;
  wire s2_can_up_i_13_n_0;
  wire s2_can_up_i_14_n_0;
  wire s2_can_up_i_15_n_0;
  wire s2_can_up_i_17_n_0;
  wire s2_can_up_i_18_n_0;
  wire s2_can_up_i_19_n_0;
  wire s2_can_up_i_20_n_0;
  wire s2_can_up_i_21_n_0;
  wire s2_can_up_i_22_n_0;
  wire s2_can_up_i_23_n_0;
  wire s2_can_up_i_24_n_0;
  wire [0:0]s2_can_up_i_2_0;
  wire s2_can_up_i_2_n_0;
  wire s2_can_up_i_5_n_0;
  wire s2_can_up_i_6_n_0;
  wire s2_can_up_i_9_n_0;
  wire s2_can_up_reg_i_16_n_0;
  wire s2_can_up_reg_i_16_n_1;
  wire s2_can_up_reg_i_16_n_2;
  wire s2_can_up_reg_i_16_n_3;
  wire s2_can_up_reg_i_16_n_5;
  wire s2_can_up_reg_i_16_n_6;
  wire s2_can_up_reg_i_16_n_7;
  wire s2_can_up_reg_i_3_n_2;
  wire s2_can_up_reg_i_3_n_3;
  wire s2_can_up_reg_i_3_n_5;
  wire s2_can_up_reg_i_3_n_6;
  wire s2_can_up_reg_i_3_n_7;
  wire s2_can_up_reg_i_4_n_0;
  wire s2_can_up_reg_i_4_n_1;
  wire s2_can_up_reg_i_4_n_2;
  wire s2_can_up_reg_i_4_n_3;
  wire s2_can_up_reg_i_4_n_4;
  wire s2_can_up_reg_i_4_n_5;
  wire s2_can_up_reg_i_4_n_6;
  wire s2_can_up_reg_i_7_n_7;
  wire [1:0]s2_facing;
  wire s2_los_detected;
  wire [1:0]s2_los_dir;
  wire wc_down;
  wire [1:1]wc_down5;
  wire wc_left;
  wire wc_left01_in;
  wire wc_right;
  wire wc_up;
  wire [1:0]wf_dir;
  wire [3:2]NLW_s2_can_down_reg_i_3_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_down_reg_i_3_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_down_reg_i_7_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_down_reg_i_7_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_left_reg_i_4_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_left_reg_i_4_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_right_reg_i_9_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_right_reg_i_9_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_up_reg_i_3_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_up_reg_i_3_O_UNCONNECTED;
  wire [0:0]NLW_s2_can_up_reg_i_4_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_up_reg_i_7_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_up_reg_i_7_O_UNCONNECTED;

  LUT1 #(
    .INIT(2'h1)) 
    S_AXI_AWREADY_i_2
       (.I0(S_AXI_ARESETN),
        .O(AR));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[0]_i_1 
       (.I0(s2_los_dir[0]),
        .I1(s2_los_detected),
        .I2(wf_dir[0]),
        .I3(p_0_in__0),
        .I4(\direction_reg[1]_0 [0]),
        .O(\direction[0]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hFAAA0032FABB3332)) 
    \direction[0]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir[0]));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[1]_i_1 
       (.I0(s2_los_dir[1]),
        .I1(s2_los_detected),
        .I2(wf_dir[1]),
        .I3(p_0_in__0),
        .I4(\direction_reg[1]_0 [1]),
        .O(\direction[1]_i_1_n_0 ));
  LUT6 #(
    .INIT(64'hF555FF31F0113031)) 
    \direction[1]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir[1]));
  FDCE \direction_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[0]_i_1_n_0 ),
        .Q(\direction_reg[1]_0 [0]));
  FDCE \direction_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[1]_i_1_n_0 ),
        .Q(\direction_reg[1]_0 [1]));
  FDCE \pipe_en_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\pipe_en_reg[0]_1 ),
        .Q(\pipe_en_reg[0]_0 ));
  FDCE \pipe_en_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\pipe_en_reg[0]_0 ),
        .Q(E));
  FDCE \pipe_en_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(E),
        .Q(p_0_in__0));
  FDCE \s1_ghost_col_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_col[0]),
        .Q(s1_ghost_col[0]));
  FDCE \s1_ghost_col_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_col[1]),
        .Q(s1_ghost_col[1]));
  FDCE \s1_ghost_col_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_col[2]),
        .Q(s1_ghost_col[2]));
  FDCE \s1_ghost_col_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_col[3]),
        .Q(s1_ghost_col[3]));
  FDCE \s1_ghost_row_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_row[0]),
        .Q(s1_ghost_row[0]));
  FDCE \s1_ghost_row_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_row[1]),
        .Q(s1_ghost_row[1]));
  FDCE \s1_ghost_row_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_row[2]),
        .Q(s1_ghost_row[2]));
  FDCE \s1_ghost_row_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(ghost1_row[3]),
        .Q(s1_ghost_row[3]));
  LUT5 #(
    .INIT(32'hEEEEFFFE)) 
    s1_los_detected_i_1
       (.I0(los_dir_comb[1]),
        .I1(s1_los_detected_i_2_n_0),
        .I2(s1_los_detected_i_3_n_0),
        .I3(s1_los_detected_reg_0),
        .I4(s1_los_detected_i_5_n_0),
        .O(los_detected_comb));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT4 #(
    .INIT(16'h805E)) 
    s1_los_detected_i_10
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[0]),
        .O(s1_los_detected_i_10_n_0));
  (* SOFT_HLUTNM = "soft_lutpair15" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    s1_los_detected_i_11
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .I3(ghost1_col[0]),
        .O(s1_los_detected_i_11_n_0));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT2 #(
    .INIT(4'h1)) 
    s1_los_detected_i_12
       (.I0(ghost1_row[3]),
        .I1(ghost1_row[2]),
        .O(s1_los_detected_i_12_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_13
       (.I0(s1_los_detected_i_5_0),
        .I1(s1_los_detected_i_26_n_0),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[3]),
        .I5(ghost1_col[0]),
        .O(s1_los_detected_i_13_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFF0F00DF0D)) 
    s1_los_detected_i_14
       (.I0(ghost1_row[2]),
        .I1(rover_row[2]),
        .I2(ghost1_row[3]),
        .I3(rover_row[3]),
        .I4(s1_los_detected_i_27_n_0),
        .I5(s1_los_detected_i_28_n_0),
        .O(s1_los_detected_i_14_n_0));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT4 #(
    .INIT(16'h303E)) 
    s1_los_detected_i_15
       (.I0(ghost1_col[1]),
        .I1(ghost1_col[3]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[0]),
        .O(s1_los_detected_i_15_n_0));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    s1_los_detected_i_16
       (.I0(ghost1_row[3]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[2]),
        .O(s1_los_detected_i_16_n_0));
  (* SOFT_HLUTNM = "soft_lutpair13" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    s1_los_detected_i_18
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[3]),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[0]),
        .O(s1_los_detected_i_18_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF070707)) 
    s1_los_detected_i_19
       (.I0(rover_row[1]),
        .I1(rover_row[0]),
        .I2(rover_row[3]),
        .I3(ghost1_row[1]),
        .I4(ghost1_row[2]),
        .I5(ghost1_row[3]),
        .O(s1_los_detected_i_19_n_0));
  LUT6 #(
    .INIT(64'h00000000000000AB)) 
    s1_los_detected_i_2
       (.I0(s1_los_detected_i_6_n_0),
        .I1(rover_row[2]),
        .I2(rover_row[3]),
        .I3(s1_los_detected_i_7_n_0),
        .I4(s1_los_detected_i_8_n_0),
        .I5(s1_los_detected_i_9_n_0),
        .O(s1_los_detected_i_2_n_0));
  LUT6 #(
    .INIT(64'hBEFFFFBEFFFFFFFF)) 
    s1_los_detected_i_21
       (.I0(s1_los_detected_i_29_n_0),
        .I1(ghost1_col[0]),
        .I2(rover_col[0]),
        .I3(ghost1_col[3]),
        .I4(rover_col[3]),
        .I5(s1_los_detected_i_30_n_0),
        .O(s1_los_detected_i_21_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_22
       (.I0(rover_row[0]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[2]),
        .I3(rover_row[2]),
        .I4(ghost1_row[1]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_22_n_0));
  LUT6 #(
    .INIT(64'hFEFFFFFFFEFEFEFE)) 
    s1_los_detected_i_23
       (.I0(ghost1_row[3]),
        .I1(ghost1_row[2]),
        .I2(ghost1_row[1]),
        .I3(rover_row[1]),
        .I4(rover_row[0]),
        .I5(s1_los_detected_reg_1),
        .O(s1_los_detected_i_23_n_0));
  LUT6 #(
    .INIT(64'hCECECEEFCECEEFFF)) 
    s1_los_detected_i_24
       (.I0(ghost1_row[2]),
        .I1(ghost1_row[3]),
        .I2(\s1_los_dir[1]_i_47_n_0 ),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_24_n_0));
  LUT6 #(
    .INIT(64'hFFFFFF15FFFF1515)) 
    s1_los_detected_i_26
       (.I0(ghost1_row[3]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_26_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_27
       (.I0(ghost1_row[0]),
        .I1(rover_row[0]),
        .I2(rover_row[2]),
        .I3(ghost1_row[2]),
        .I4(rover_row[1]),
        .I5(ghost1_row[1]),
        .O(s1_los_detected_i_27_n_0));
  LUT6 #(
    .INIT(64'hEEEEEAAAAAAAAAAA)) 
    s1_los_detected_i_28
       (.I0(s1_los_detected_i_21_n_0),
        .I1(s1_los_detected_i_11_n_0),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[2]),
        .I4(ghost1_row[3]),
        .I5(s1_los_detected_i_2_0),
        .O(s1_los_detected_i_28_n_0));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'h44F4)) 
    s1_los_detected_i_29
       (.I0(rover_col[2]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .I3(rover_col[1]),
        .O(s1_los_detected_i_29_n_0));
  LUT6 #(
    .INIT(64'h7077FFFF50555055)) 
    s1_los_detected_i_3
       (.I0(s1_los_detected_i_10_n_0),
        .I1(ghost1_row[0]),
        .I2(rover_row[0]),
        .I3(s1_los_detected_i_11_n_0),
        .I4(ghost1_row[1]),
        .I5(s1_los_detected_i_12_n_0),
        .O(s1_los_detected_i_3_n_0));
  (* SOFT_HLUTNM = "soft_lutpair12" *) 
  LUT4 #(
    .INIT(16'hD0DD)) 
    s1_los_detected_i_30
       (.I0(rover_col[1]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(rover_col[2]),
        .O(s1_los_detected_i_30_n_0));
  LUT6 #(
    .INIT(64'hFFF1F1F1F1F1F1F1)) 
    s1_los_detected_i_5
       (.I0(s1_los_detected_i_13_n_0),
        .I1(s1_los_detected_i_12_n_0),
        .I2(s1_los_detected_i_14_n_0),
        .I3(s1_los_detected_i_15_n_0),
        .I4(s1_los_detected_i_16_n_0),
        .I5(s1_los_detected_reg_1),
        .O(s1_los_detected_i_5_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_6
       (.I0(s1_los_detected_i_18_n_0),
        .I1(s1_los_detected_i_19_n_0),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[3]),
        .I5(ghost1_col[0]),
        .O(s1_los_detected_i_6_n_0));
  LUT6 #(
    .INIT(64'h000000001D1C0000)) 
    s1_los_detected_i_7
       (.I0(ghost1_col[0]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[3]),
        .I3(ghost1_col[1]),
        .I4(s1_los_detected_i_12_n_0),
        .I5(s1_los_detected_i_2_0),
        .O(s1_los_detected_i_7_n_0));
  LUT6 #(
    .INIT(64'hBABABABAFBFBBAFB)) 
    s1_los_detected_i_8
       (.I0(s1_los_detected_i_21_n_0),
        .I1(rover_row[3]),
        .I2(ghost1_row[3]),
        .I3(rover_row[2]),
        .I4(ghost1_row[2]),
        .I5(s1_los_detected_i_22_n_0),
        .O(s1_los_detected_i_8_n_0));
  LUT6 #(
    .INIT(64'h7000000005550550)) 
    s1_los_detected_i_9
       (.I0(s1_los_detected_i_23_n_0),
        .I1(s1_los_detected_i_24_n_0),
        .I2(ghost1_col[3]),
        .I3(ghost1_col[2]),
        .I4(ghost1_col[1]),
        .I5(ghost1_col[0]),
        .O(s1_los_detected_i_9_n_0));
  FDCE s1_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(los_detected_comb),
        .Q(s1_los_detected));
  LUT2 #(
    .INIT(4'hE)) 
    \s1_los_dir[0]_i_1 
       (.I0(\s1_los_dir[0]_i_2_n_0 ),
        .I1(s1_los_detected_i_2_n_0),
        .O(los_dir_comb[0]));
  (* SOFT_HLUTNM = "soft_lutpair6" *) 
  LUT5 #(
    .INIT(32'hFFA8FFFF)) 
    \s1_los_dir[0]_i_10 
       (.I0(ghost1_col[2]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[0]),
        .I3(ghost1_col[3]),
        .I4(\s1_los_dir_reg[1]_1 ),
        .O(\s1_los_dir[0]_i_10_n_0 ));
  LUT6 #(
    .INIT(64'h22288888E22BB88B)) 
    \s1_los_dir[0]_i_11 
       (.I0(\s1_los_dir[1]_i_58_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[0]_i_21_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[0]_i_19_n_0 ),
        .O(\s1_los_dir[0]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'hEEEEEEEA)) 
    \s1_los_dir[0]_i_12 
       (.I0(\s1_los_dir[1]_i_29_0 ),
        .I1(ghost1_col[3]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[0]),
        .O(\s1_los_dir[0]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'hEEEBBBBB2EE88BB8)) 
    \s1_los_dir[0]_i_13 
       (.I0(\s1_los_dir[1]_i_71_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[0]_i_22_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[1]_i_51_n_0 ),
        .O(\s1_los_dir[0]_i_13_n_0 ));
  LUT6 #(
    .INIT(64'h00FF101030302020)) 
    \s1_los_dir[0]_i_14 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_74_n_0 ),
        .I2(\s1_los_dir[1]_i_75_n_0 ),
        .I3(\s1_los_dir[1]_i_51_n_0 ),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .I5(\s1_los_dir[0]_i_4_0 ),
        .O(\s1_los_dir[0]_i_14_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFF111)) 
    \s1_los_dir[0]_i_15 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost1_col[0]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[2]),
        .I5(ghost1_col[3]),
        .O(\s1_los_dir[0]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'h828882888288BEBB)) 
    \s1_los_dir[0]_i_16 
       (.I0(\s1_los_dir[1]_i_53_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_35_0 [3]),
        .I3(\s1_los_dir[0]_i_23_n_0 ),
        .I4(\s1_los_dir[1]_i_51_n_0 ),
        .I5(\s1_los_dir[1]_i_50_n_0 ),
        .O(\s1_los_dir[0]_i_16_n_0 ));
  LUT6 #(
    .INIT(64'h2888288828882B8B)) 
    \s1_los_dir[0]_i_17 
       (.I0(\s1_los_dir[1]_i_48_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_43__2_n_0 ),
        .I4(ghost1_row[1]),
        .I5(ghost1_row[0]),
        .O(\s1_los_dir[0]_i_17_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'hAAA9)) 
    \s1_los_dir[0]_i_18 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .O(\s1_los_dir[0]_i_18_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[0]_i_19 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .O(\s1_los_dir[0]_i_19_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \s1_los_dir[0]_i_2 
       (.I0(\s1_los_dir[1]_i_4_n_0 ),
        .I1(\s1_los_dir[0]_i_3_n_0 ),
        .I2(\s1_los_dir[0]_i_4_n_0 ),
        .I3(\s1_los_dir[1]_i_19_n_0 ),
        .I4(\s1_los_dir[0]_i_5_n_0 ),
        .I5(\s1_los_dir[0]_i_6_n_0 ),
        .O(\s1_los_dir[0]_i_2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair17" *) 
  LUT4 #(
    .INIT(16'h0332)) 
    \s1_los_dir[0]_i_20 
       (.I0(ghost1_row[0]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(ghost1_row[1]),
        .O(\s1_los_dir[0]_i_20_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT4 #(
    .INIT(16'h0004)) 
    \s1_los_dir[0]_i_21 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .O(\s1_los_dir[0]_i_21_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT4 #(
    .INIT(16'h0054)) 
    \s1_los_dir[0]_i_22 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[0]_i_22_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'h0F0FFFFE)) 
    \s1_los_dir[0]_i_23 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[0]_i_23_n_0 ));
  LUT6 #(
    .INIT(64'h7707770700007707)) 
    \s1_los_dir[0]_i_3 
       (.I0(\s1_los_dir[0]_i_7_n_0 ),
        .I1(\s1_los_dir[0]_i_8_n_0 ),
        .I2(\s1_los_dir[0]_i_9_n_0 ),
        .I3(\s1_los_dir[0]_i_10_n_0 ),
        .I4(\s1_los_dir[0]_i_11_n_0 ),
        .I5(\s1_los_dir[0]_i_12_n_0 ),
        .O(\s1_los_dir[0]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hFF04FF04FFFFFF04)) 
    \s1_los_dir[0]_i_4 
       (.I0(\s1_los_dir[0]_i_13_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_37_n_0 ),
        .I3(\s1_los_dir[1]_i_77_n_0 ),
        .I4(\s1_los_dir[0]_i_14_n_0 ),
        .I5(\s1_los_dir[1]_i_72_n_0 ),
        .O(\s1_los_dir[0]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h44F444F4FFFF44F4)) 
    \s1_los_dir[0]_i_5 
       (.I0(\s1_los_dir[0]_i_15_n_0 ),
        .I1(\s1_los_dir[0]_i_16_n_0 ),
        .I2(\s1_los_dir[0]_i_17_n_0 ),
        .I3(\s1_los_dir[1]_i_49_n_0 ),
        .I4(\s1_los_dir[1]_i_11_n_0 ),
        .I5(\s1_los_dir[1]_i_10_n_0 ),
        .O(\s1_los_dir[0]_i_5_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT4 #(
    .INIT(16'h0008)) 
    \s1_los_dir[0]_i_6 
       (.I0(\s1_los_dir[1]_i_9_n_0 ),
        .I1(\s1_los_dir[1]_i_6_0 ),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[3]),
        .O(\s1_los_dir[0]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h0100000001010101)) 
    \s1_los_dir[0]_i_7 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2_0 ),
        .O(\s1_los_dir[0]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h38AAAE3C08AAA200)) 
    \s1_los_dir[0]_i_8 
       (.I0(\s1_los_dir[1]_i_66_n_0 ),
        .I1(\s1_los_dir[0]_i_18_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_43__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40_n_0 ),
        .I5(\s1_los_dir[1]_i_47_n_0 ),
        .O(\s1_los_dir[0]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h7D3C3CDD41000011)) 
    \s1_los_dir[0]_i_9 
       (.I0(\s1_los_dir[0]_i_19_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_43__2_n_0 ),
        .I3(\s1_los_dir[1]_i_41__2_n_0 ),
        .I4(\s1_los_dir[0]_i_20_n_0 ),
        .I5(\s1_los_dir[1]_i_60_n_0 ),
        .O(\s1_los_dir[0]_i_9_n_0 ));
  LUT6 #(
    .INIT(64'h0404040404FF0404)) 
    \s1_los_dir[1]_i_1 
       (.I0(\s1_los_dir[1]_i_2_n_0 ),
        .I1(\s1_los_dir[1]_i_3_n_0 ),
        .I2(\s1_los_dir[1]_i_4_n_0 ),
        .I3(\s1_los_dir[1]_i_5_n_0 ),
        .I4(\s1_los_dir[1]_i_6_n_0 ),
        .I5(\s1_los_dir[1]_i_7_n_0 ),
        .O(los_dir_comb[1]));
  LUT6 #(
    .INIT(64'hF111FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_10 
       (.I0(rover_col[0]),
        .I1(rover_col[1]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_10_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT5 #(
    .INIT(32'hFFFF6FF6)) 
    \s1_los_dir[1]_i_101 
       (.I0(ghost1_row[1]),
        .I1(rover_row[1]),
        .I2(ghost1_row[0]),
        .I3(rover_row[0]),
        .I4(\s1_los_dir[1]_i_114_n_0 ),
        .O(\s1_los_dir[1]_i_101_n_0 ));
  LUT6 #(
    .INIT(64'h20F220F2B0FB20F2)) 
    \s1_los_dir[1]_i_102 
       (.I0(ghost1_col[2]),
        .I1(rover_col[2]),
        .I2(ghost1_col[3]),
        .I3(rover_col[3]),
        .I4(ghost1_col[1]),
        .I5(rover_col[1]),
        .O(\s1_los_dir[1]_i_102_n_0 ));
  LUT5 #(
    .INIT(32'hA2A200A2)) 
    \s1_los_dir[1]_i_103 
       (.I0(s1_los_detected_i_30_n_0),
        .I1(rover_col[3]),
        .I2(ghost1_col[3]),
        .I3(rover_col[0]),
        .I4(ghost1_col[0]),
        .O(\s1_los_dir[1]_i_103_n_0 ));
  LUT6 #(
    .INIT(64'hDD4D0000FFFFDD4D)) 
    \s1_los_dir[1]_i_104 
       (.I0(rover_col[2]),
        .I1(ghost1_col[2]),
        .I2(rover_col[1]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[3]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_104_n_0 ));
  LUT5 #(
    .INIT(32'hAEAEFFAE)) 
    \s1_los_dir[1]_i_105 
       (.I0(s1_los_detected_i_29_n_0),
        .I1(ghost1_col[0]),
        .I2(rover_col[0]),
        .I3(ghost1_col[3]),
        .I4(rover_col[3]),
        .O(\s1_los_dir[1]_i_105_n_0 ));
  LUT6 #(
    .INIT(64'hB2B88B8B82888888)) 
    \s1_los_dir[1]_i_11 
       (.I0(\s1_los_dir[1]_i_45_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_46_n_0 ),
        .I3(\s1_los_dir[1]_i_43__2_n_0 ),
        .I4(\s1_los_dir[1]_i_41__2_n_0 ),
        .I5(\s1_los_dir[1]_i_44_n_0 ),
        .O(\s1_los_dir[1]_i_11_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair11" *) 
  LUT4 #(
    .INIT(16'h6FF6)) 
    \s1_los_dir[1]_i_114 
       (.I0(rover_row[3]),
        .I1(ghost1_row[3]),
        .I2(rover_row[2]),
        .I3(ghost1_row[2]),
        .O(\s1_los_dir[1]_i_114_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_12 
       (.I0(\s1_los_dir[1]_i_47_n_0 ),
        .I1(\s1_los_dir[1]_i_43__2_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_40_n_0 ),
        .I4(\s1_los_dir[1]_i_48_n_0 ),
        .I5(\s1_los_dir[1]_i_49_n_0 ),
        .O(\s1_los_dir[1]_i_12_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_13 
       (.I0(\s1_los_dir[1]_i_50_n_0 ),
        .I1(\s1_los_dir[1]_i_51_n_0 ),
        .I2(\s1_los_dir[1]_i_52_n_0 ),
        .I3(\s1_los_dir[1]_i_53_n_0 ),
        .I4(\s1_los_dir[1]_i_54_n_0 ),
        .I5(\s1_los_dir[1]_i_2_0 ),
        .O(\s1_los_dir[1]_i_13_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_14 
       (.I0(\s1_los_dir[1]_i_56_n_0 ),
        .I1(\s1_los_dir[1]_i_57_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_58_n_0 ),
        .I4(\s1_los_dir[1]_i_38_n_0 ),
        .I5(\s1_los_dir[1]_i_29_0 ),
        .O(\s1_los_dir[1]_i_14_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_15 
       (.I0(\s1_los_dir[1]_i_60_n_0 ),
        .I1(\s1_los_dir[1]_i_61__2_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_62__2_n_0 ),
        .I4(\s1_los_dir_reg[1]_1 ),
        .I5(\s1_los_dir[1]_i_63_n_0 ),
        .O(\s1_los_dir[1]_i_15_n_0 ));
  LUT6 #(
    .INIT(64'hFFFF417DFFFFFFFF)) 
    \s1_los_dir[1]_i_16 
       (.I0(\s1_los_dir[1]_i_64_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_65_n_0 ),
        .I3(\s1_los_dir[1]_i_66_n_0 ),
        .I4(\s1_los_dir[1]_i_5_0 ),
        .I5(\s1_los_dir[1]_i_68_n_0 ),
        .O(\s1_los_dir[1]_i_16_n_0 ));
  LUT6 #(
    .INIT(64'h0400000404444404)) 
    \s1_los_dir[1]_i_17 
       (.I0(\s1_los_dir[1]_i_37_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_69_n_0 ),
        .I3(\s1_los_dir[1]_i_70_n_0 ),
        .I4(\s1_los_dir[1]_i_40_n_0 ),
        .I5(\s1_los_dir[1]_i_71_n_0 ),
        .O(\s1_los_dir[1]_i_17_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_18 
       (.I0(\s1_los_dir[1]_i_72_n_0 ),
        .I1(\s1_los_dir[1]_i_73_n_0 ),
        .I2(\s1_los_dir[1]_i_74_n_0 ),
        .I3(\s1_los_dir[1]_i_75_n_0 ),
        .I4(\s1_los_dir[1]_i_76_n_0 ),
        .I5(\s1_los_dir[1]_i_77_n_0 ),
        .O(\s1_los_dir[1]_i_18_n_0 ));
  LUT5 #(
    .INIT(32'h0000BE82)) 
    \s1_los_dir[1]_i_19 
       (.I0(\s1_los_dir[1]_i_78__2_n_0 ),
        .I1(\s1_los_dir[1]_i_79_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_80_n_0 ),
        .I4(\s1_los_dir[1]_i_81_n_0 ),
        .O(\s1_los_dir[1]_i_19_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_2 
       (.I0(\s1_los_dir[1]_i_8_n_0 ),
        .I1(\s1_los_dir[1]_i_9_n_0 ),
        .I2(\s1_los_dir[1]_i_10_n_0 ),
        .I3(\s1_los_dir[1]_i_11_n_0 ),
        .I4(\s1_los_dir[1]_i_12_n_0 ),
        .I5(\s1_los_dir[1]_i_13_n_0 ),
        .O(\s1_los_dir[1]_i_2_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_21 
       (.I0(\s1_los_dir[1]_i_82_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_83__2_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[1]_i_44_n_0 ),
        .O(\s1_los_dir[1]_i_21_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT3 #(
    .INIT(8'h15)) 
    \s1_los_dir[1]_i_22__2 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .O(\s1_los_dir[1]_i_22__2_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_24 
       (.I0(\s1_los_dir[1]_i_84_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_85_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[1]_i_47_n_0 ),
        .O(\s1_los_dir[1]_i_24_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_25 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[1]),
        .I4(ghost1_col[0]),
        .I5(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_25_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFF01FFFFFFFF)) 
    \s1_los_dir[1]_i_26 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2_0 ),
        .O(\s1_los_dir[1]_i_26_n_0 ));
  LUT6 #(
    .INIT(64'hEEBEBBBB22828888)) 
    \s1_los_dir[1]_i_27 
       (.I0(\s1_los_dir[1]_i_80_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_86_n_0 ),
        .I3(\s1_los_dir[1]_i_87__2_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[1]_i_78__2_n_0 ),
        .O(\s1_los_dir[1]_i_27_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_28 
       (.I0(\s1_los_dir[1]_i_50_n_0 ),
        .I1(\s1_los_dir[1]_i_51_n_0 ),
        .I2(\s1_los_dir[1]_i_52_n_0 ),
        .I3(\s1_los_dir[1]_i_53_n_0 ),
        .I4(\s1_los_dir[1]_i_5_0 ),
        .I5(\s1_los_dir[1]_i_88_n_0 ),
        .O(\s1_los_dir[1]_i_28_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_29 
       (.I0(\s1_los_dir[1]_i_47_n_0 ),
        .I1(\s1_los_dir[1]_i_43__2_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_40_n_0 ),
        .I4(\s1_los_dir[1]_i_48_n_0 ),
        .I5(\s1_los_dir[1]_i_89_n_0 ),
        .O(\s1_los_dir[1]_i_29_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_3 
       (.I0(\s1_los_dir[1]_i_14_n_0 ),
        .I1(\s1_los_dir[1]_i_15_n_0 ),
        .I2(\s1_los_dir[1]_i_16_n_0 ),
        .I3(\s1_los_dir[1]_i_17_n_0 ),
        .I4(\s1_los_dir[1]_i_18_n_0 ),
        .I5(\s1_los_dir[1]_i_19_n_0 ),
        .O(\s1_los_dir[1]_i_3_n_0 ));
  LUT6 #(
    .INIT(64'hBE82000000000000)) 
    \s1_los_dir[1]_i_30 
       (.I0(\s1_los_dir[1]_i_56_n_0 ),
        .I1(\s1_los_dir[1]_i_57_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_58_n_0 ),
        .I4(\s1_los_dir_reg[1]_0 ),
        .I5(\s1_los_dir[1]_i_90_n_0 ),
        .O(\s1_los_dir[1]_i_30_n_0 ));
  LUT6 #(
    .INIT(64'h000000000000BE82)) 
    \s1_los_dir[1]_i_31 
       (.I0(\s1_los_dir[1]_i_60_n_0 ),
        .I1(\s1_los_dir[1]_i_61__2_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_62__2_n_0 ),
        .I4(\s1_los_dir[1]_i_6_0 ),
        .I5(\s1_los_dir[1]_i_22__2_n_0 ),
        .O(\s1_los_dir[1]_i_31_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFBE82FFFF)) 
    \s1_los_dir[1]_i_32 
       (.I0(\s1_los_dir[1]_i_69_n_0 ),
        .I1(\s1_los_dir[1]_i_70_n_0 ),
        .I2(\s1_los_dir[1]_i_40_n_0 ),
        .I3(\s1_los_dir[1]_i_71_n_0 ),
        .I4(ghost1_col[3]),
        .I5(\s1_los_dir_reg[1]_2 ),
        .O(\s1_los_dir[1]_i_32_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_33 
       (.I0(\s1_los_dir[1]_i_64_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_65_n_0 ),
        .I3(\s1_los_dir[1]_i_66_n_0 ),
        .I4(\s1_los_dir[1]_i_6_1 ),
        .I5(\s1_los_dir[1]_i_54_n_0 ),
        .O(\s1_los_dir[1]_i_33_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_34 
       (.I0(\s1_los_dir[1]_i_93__2_n_0 ),
        .I1(\s1_los_dir[1]_i_73_n_0 ),
        .I2(\s1_los_dir[1]_i_74_n_0 ),
        .I3(\s1_los_dir[1]_i_75_n_0 ),
        .I4(\s1_los_dir[1]_i_76_n_0 ),
        .I5(\s1_los_dir[1]_i_94_n_0 ),
        .O(\s1_los_dir[1]_i_34_n_0 ));
  LUT6 #(
    .INIT(64'h000000004FF44004)) 
    \s1_los_dir[1]_i_35 
       (.I0(\s1_los_dir[1]_i_95_n_0 ),
        .I1(\s1_los_dir[1]_i_44_n_0 ),
        .I2(\s1_los_dir[1]_i_96_n_0 ),
        .I3(\s1_los_dir[1]_i_40_n_0 ),
        .I4(\s1_los_dir[1]_i_45_n_0 ),
        .I5(\s1_los_dir[1]_i_97_n_0 ),
        .O(\s1_los_dir[1]_i_35_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT4 #(
    .INIT(16'hFF80)) 
    \s1_los_dir[1]_i_37 
       (.I0(ghost1_col[0]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_37_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'h01FF)) 
    \s1_los_dir[1]_i_38 
       (.I0(ghost1_col[0]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_38_n_0 ));
  LUT6 #(
    .INIT(64'h27270F0D04A40082)) 
    \s1_los_dir[1]_i_39 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .I4(\s1_los_dir[1]_i_35_0 [0]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_39_n_0 ));
  LUT6 #(
    .INIT(64'hFF10101010101010)) 
    \s1_los_dir[1]_i_4 
       (.I0(ghost1_col[3]),
        .I1(\s1_los_dir_reg[1]_0 ),
        .I2(\s1_los_dir[1]_i_21_n_0 ),
        .I3(\s1_los_dir[1]_i_22__2_n_0 ),
        .I4(\s1_los_dir_reg[1]_2 ),
        .I5(\s1_los_dir[1]_i_24_n_0 ),
        .O(\s1_los_dir[1]_i_4_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555655)) 
    \s1_los_dir[1]_i_40 
       (.I0(\s1_los_dir[0]_i_4_0 ),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(\s1_los_dir[1]_i_35_0 [3]),
        .I3(\s1_los_dir[1]_i_47_n_0 ),
        .I4(\s1_los_dir[1]_i_35_0 [1]),
        .I5(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[1]_i_40_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'h55555556)) 
    \s1_los_dir[1]_i_41__2 
       (.I0(\s1_los_dir[1]_i_35_0 [2]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[0]),
        .I4(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_41__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT4 #(
    .INIT(16'h1554)) 
    \s1_los_dir[1]_i_42 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[1]_i_42_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555556)) 
    \s1_los_dir[1]_i_43__2 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[0]),
        .I4(ghost1_row[1]),
        .I5(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[1]_i_43__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair27" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_44 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_44_n_0 ));
  LUT6 #(
    .INIT(64'h0013401780DCA2D4)) 
    \s1_los_dir[1]_i_45 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(ghost1_row[0]),
        .I4(ghost1_row[1]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_45_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair16" *) 
  LUT4 #(
    .INIT(16'h8001)) 
    \s1_los_dir[1]_i_46 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_46_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair1" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_47 
       (.I0(ghost1_row[0]),
        .I1(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_47_n_0 ));
  LUT6 #(
    .INIT(64'h6022355C000835CC)) 
    \s1_los_dir[1]_i_48 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(ghost1_row[0]),
        .I5(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_48_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair14" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    \s1_los_dir[1]_i_49 
       (.I0(ghost1_col[1]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[3]),
        .I3(\s1_los_dir[0]_i_5_0 ),
        .O(\s1_los_dir[1]_i_49_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_5 
       (.I0(\s1_los_dir[1]_i_25_n_0 ),
        .I1(\s1_los_dir[1]_i_9_n_0 ),
        .I2(\s1_los_dir[1]_i_26_n_0 ),
        .I3(\s1_los_dir[1]_i_27_n_0 ),
        .I4(\s1_los_dir[1]_i_28_n_0 ),
        .I5(\s1_los_dir[1]_i_29_n_0 ),
        .O(\s1_los_dir[1]_i_5_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_50 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_50_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \s1_los_dir[1]_i_51 
       (.I0(ghost1_row[0]),
        .I1(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_51_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT4 #(
    .INIT(16'h5666)) 
    \s1_los_dir[1]_i_52 
       (.I0(\s1_los_dir[0]_i_4_0 ),
        .I1(\s1_los_dir[1]_i_35_0 [3]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_52_n_0 ));
  LUT6 #(
    .INIT(64'h5CCC22A05CC60800)) 
    \s1_los_dir[1]_i_53 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(ghost1_row[0]),
        .I5(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_53_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    \s1_los_dir[1]_i_54 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .I3(ghost1_col[0]),
        .O(\s1_los_dir[1]_i_54_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair7" *) 
  LUT5 #(
    .INIT(32'h44400004)) 
    \s1_los_dir[1]_i_56 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_56_n_0 ));
  LUT6 #(
    .INIT(64'h0000001155555554)) 
    \s1_los_dir[1]_i_57 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(ghost1_row[1]),
        .I2(ghost1_row[0]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [1]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_57_n_0 ));
  LUT6 #(
    .INIT(64'h083009B52AA82AA0)) 
    \s1_los_dir[1]_i_58 
       (.I0(ghost1_row[0]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [2]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(ghost1_row[1]),
        .I5(\s1_los_dir[1]_i_35_0 [3]),
        .O(\s1_los_dir[1]_i_58_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_6 
       (.I0(\s1_los_dir[1]_i_30_n_0 ),
        .I1(\s1_los_dir[1]_i_31_n_0 ),
        .I2(\s1_los_dir[1]_i_32_n_0 ),
        .I3(\s1_los_dir[1]_i_33_n_0 ),
        .I4(\s1_los_dir[1]_i_34_n_0 ),
        .I5(\s1_los_dir[1]_i_35_n_0 ),
        .O(\s1_los_dir[1]_i_6_n_0 ));
  LUT6 #(
    .INIT(64'h1F0C0054FF00E000)) 
    \s1_los_dir[1]_i_60 
       (.I0(ghost1_row[1]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .I5(\s1_los_dir[1]_i_35_0 [3]),
        .O(\s1_los_dir[1]_i_60_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF880001)) 
    \s1_los_dir[1]_i_61__2 
       (.I0(\s1_los_dir[1]_i_35_0 [0]),
        .I1(ghost1_row[1]),
        .I2(ghost1_row[0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .I5(\s1_los_dir[1]_i_35_0 [3]),
        .O(\s1_los_dir[1]_i_61__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT4 #(
    .INIT(16'h0802)) 
    \s1_los_dir[1]_i_62__2 
       (.I0(ghost1_row[0]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(ghost1_row[1]),
        .I3(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_62__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair18" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    \s1_los_dir[1]_i_63 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[0]),
        .I2(ghost1_col[1]),
        .I3(ghost1_col[2]),
        .O(\s1_los_dir[1]_i_63_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h00000095)) 
    \s1_los_dir[1]_i_64 
       (.I0(\s1_los_dir[1]_i_35_0 [2]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[0]),
        .I4(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_64_n_0 ));
  LUT6 #(
    .INIT(64'h1155115511551554)) 
    \s1_los_dir[1]_i_65 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(ghost1_row[0]),
        .I5(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_65_n_0 ));
  LUT6 #(
    .INIT(64'h078DA4822F0D0002)) 
    \s1_los_dir[1]_i_66 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(ghost1_row[0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .I5(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_66_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair19" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \s1_los_dir[1]_i_68 
       (.I0(ghost1_col[2]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_68_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'h3F7FFFBF)) 
    \s1_los_dir[1]_i_69 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_69_n_0 ));
  LUT6 #(
    .INIT(64'h404040FF40404040)) 
    \s1_los_dir[1]_i_7 
       (.I0(\s1_los_dir_reg[1]_1 ),
        .I1(\s1_los_dir[1]_i_37_n_0 ),
        .I2(\s1_los_dir[1]_i_24_n_0 ),
        .I3(rover_col[3]),
        .I4(\s1_los_dir[1]_i_38_n_0 ),
        .I5(\s1_los_dir[1]_i_21_n_0 ),
        .O(\s1_los_dir[1]_i_7_n_0 ));
  LUT6 #(
    .INIT(64'h0000111155555554)) 
    \s1_los_dir[1]_i_70 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .I4(\s1_los_dir[1]_i_35_0 [0]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_70_n_0 ));
  LUT6 #(
    .INIT(64'hA5FBC5B3C5F7C5FF)) 
    \s1_los_dir[1]_i_71 
       (.I0(\s1_los_dir[1]_i_35_0 [2]),
        .I1(\s1_los_dir[1]_i_35_0 [3]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[0]),
        .I4(\s1_los_dir[1]_i_35_0 [0]),
        .I5(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_71_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_72 
       (.I0(ghost1_col[2]),
        .I1(ghost1_col[1]),
        .I2(ghost1_col[0]),
        .I3(ghost1_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_72_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair22" *) 
  LUT3 #(
    .INIT(8'hA9)) 
    \s1_los_dir[1]_i_73 
       (.I0(\s1_los_dir[0]_i_4_0 ),
        .I1(\s1_los_dir[1]_i_35_0 [3]),
        .I2(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_73_n_0 ));
  LUT6 #(
    .INIT(64'hCCC0CCC800033333)) 
    \s1_los_dir[1]_i_74 
       (.I0(ghost1_row[1]),
        .I1(\s1_los_dir[1]_i_35_0 [3]),
        .I2(\s1_los_dir[1]_i_35_0 [0]),
        .I3(\s1_los_dir[1]_i_35_0 [1]),
        .I4(ghost1_row[0]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_74_n_0 ));
  LUT6 #(
    .INIT(64'hF6BFF48FF49FFC0F)) 
    \s1_los_dir[1]_i_75 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [3]),
        .I3(\s1_los_dir[1]_i_35_0 [2]),
        .I4(ghost1_row[1]),
        .I5(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[1]_i_75_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair20" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \s1_los_dir[1]_i_76 
       (.I0(\s1_los_dir[0]_i_4_0 ),
        .I1(\s1_los_dir[1]_i_35_0 [2]),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_76_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hFE)) 
    \s1_los_dir[1]_i_77 
       (.I0(\s1_los_dir[1]_i_101_n_0 ),
        .I1(\s1_los_dir[1]_i_102_n_0 ),
        .I2(\s1_los_dir[1]_i_103_n_0 ),
        .O(\s1_los_dir[1]_i_77_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair5" *) 
  LUT5 #(
    .INIT(32'h20001030)) 
    \s1_los_dir[1]_i_78__2 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[1]),
        .I2(ghost1_row[0]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_78__2_n_0 ));
  LUT6 #(
    .INIT(64'h0011555555555554)) 
    \s1_los_dir[1]_i_79 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .I4(\s1_los_dir[1]_i_35_0 [1]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_79_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_8 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[2]),
        .I2(rover_col[2]),
        .I3(rover_col[1]),
        .I4(rover_col[0]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_8_n_0 ));
  LUT6 #(
    .INIT(64'h74F0D2D2202A0020)) 
    \s1_los_dir[1]_i_80 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [2]),
        .I3(ghost1_row[1]),
        .I4(\s1_los_dir[1]_i_35_0 [1]),
        .I5(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_80_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFF4)) 
    \s1_los_dir[1]_i_81 
       (.I0(rover_col[1]),
        .I1(\s1_los_dir[1]_i_2_0 ),
        .I2(ghost1_col[0]),
        .I3(ghost1_col[3]),
        .I4(ghost1_col[1]),
        .I5(ghost1_col[2]),
        .O(\s1_los_dir[1]_i_81_n_0 ));
  LUT6 #(
    .INIT(64'h02021F5F002AD050)) 
    \s1_los_dir[1]_i_82 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(ghost1_row[1]),
        .I4(ghost1_row[0]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_82_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair21" *) 
  LUT4 #(
    .INIT(16'h0110)) 
    \s1_los_dir[1]_i_83__2 
       (.I0(\s1_los_dir[1]_i_35_0 [0]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[0]),
        .O(\s1_los_dir[1]_i_83__2_n_0 ));
  LUT6 #(
    .INIT(64'h0727270F2404A400)) 
    \s1_los_dir[1]_i_84 
       (.I0(\s1_los_dir[1]_i_35_0 [3]),
        .I1(\s1_los_dir[1]_i_35_0 [1]),
        .I2(ghost1_row[0]),
        .I3(ghost1_row[1]),
        .I4(\s1_los_dir[1]_i_35_0 [0]),
        .I5(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_84_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair23" *) 
  LUT4 #(
    .INIT(16'h0154)) 
    \s1_los_dir[1]_i_85 
       (.I0(\s1_los_dir[1]_i_35_0 [1]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .O(\s1_los_dir[1]_i_85_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair4" *) 
  LUT5 #(
    .INIT(32'hF0E00001)) 
    \s1_los_dir[1]_i_86 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_86_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair25" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \s1_los_dir[1]_i_87__2 
       (.I0(\s1_los_dir[1]_i_35_0 [0]),
        .I1(ghost1_row[0]),
        .I2(ghost1_row[1]),
        .O(\s1_los_dir[1]_i_87__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair26" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_88 
       (.I0(ghost1_col[2]),
        .I1(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_88_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair2" *) 
  LUT5 #(
    .INIT(32'h5777FFFF)) 
    \s1_los_dir[1]_i_89 
       (.I0(\s1_los_dir[1]_i_29_0 ),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .I3(ghost1_col[0]),
        .I4(ghost1_col[3]),
        .O(\s1_los_dir[1]_i_89_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_9 
       (.I0(\s1_los_dir[1]_i_39_n_0 ),
        .I1(\s1_los_dir[1]_i_40_n_0 ),
        .I2(\s1_los_dir[1]_i_41__2_n_0 ),
        .I3(\s1_los_dir[1]_i_42_n_0 ),
        .I4(\s1_los_dir[1]_i_43__2_n_0 ),
        .I5(\s1_los_dir[1]_i_44_n_0 ),
        .O(\s1_los_dir[1]_i_9_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair10" *) 
  LUT3 #(
    .INIT(8'hA8)) 
    \s1_los_dir[1]_i_90 
       (.I0(ghost1_col[3]),
        .I1(ghost1_col[2]),
        .I2(ghost1_col[1]),
        .O(\s1_los_dir[1]_i_90_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_93__2 
       (.I0(rover_col[2]),
        .I1(rover_col[1]),
        .I2(rover_col[0]),
        .I3(rover_col[3]),
        .I4(ghost1_col[3]),
        .I5(ghost1_col[2]),
        .O(\s1_los_dir[1]_i_93__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair24" *) 
  LUT3 #(
    .INIT(8'hBF)) 
    \s1_los_dir[1]_i_94 
       (.I0(\s1_los_dir[1]_i_101_n_0 ),
        .I1(\s1_los_dir[1]_i_104_n_0 ),
        .I2(\s1_los_dir[1]_i_105_n_0 ),
        .O(\s1_los_dir[1]_i_94_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair3" *) 
  LUT5 #(
    .INIT(32'h80007FFF)) 
    \s1_los_dir[1]_i_95 
       (.I0(ghost1_row[1]),
        .I1(ghost1_row[0]),
        .I2(\s1_los_dir[1]_i_35_0 [1]),
        .I3(\s1_los_dir[1]_i_35_0 [0]),
        .I4(\s1_los_dir[1]_i_35_0 [2]),
        .O(\s1_los_dir[1]_i_95_n_0 ));
  LUT6 #(
    .INIT(64'h0111111111111110)) 
    \s1_los_dir[1]_i_96 
       (.I0(\s1_los_dir[1]_i_35_0 [2]),
        .I1(\s1_los_dir[1]_i_35_0 [3]),
        .I2(ghost1_row[1]),
        .I3(ghost1_row[0]),
        .I4(\s1_los_dir[1]_i_35_0 [0]),
        .I5(\s1_los_dir[1]_i_35_0 [1]),
        .O(\s1_los_dir[1]_i_96_n_0 ));
  LUT6 #(
    .INIT(64'h8FFF8FFF8FFFFFFF)) 
    \s1_los_dir[1]_i_97 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost1_col[2]),
        .I3(ghost1_col[3]),
        .I4(ghost1_col[0]),
        .I5(ghost1_col[1]),
        .O(\s1_los_dir[1]_i_97_n_0 ));
  FDCE \s1_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(los_dir_comb[0]),
        .Q(s1_los_dir[0]));
  FDCE \s1_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\pipe_en_reg[0]_0 ),
        .CLR(AR),
        .D(los_dir_comb[1]),
        .Q(s1_los_dir[1]));
  LUT6 #(
    .INIT(64'h0000000707070007)) 
    s2_can_down_i_1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[3]),
        .I3(s2_can_down_i_2_n_0),
        .I4(s2_can_down_reg_i_3_n_5),
        .I5(s2_can_down_i_4_n_0),
        .O(wc_down));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_10
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16_n_6),
        .O(s2_can_down_i_10_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_11
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_11_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_12
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_down_i_12_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_13
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_down_reg_i_16_n_7),
        .O(s2_can_down_i_13_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_14
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .O(s2_can_down_i_14_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_15
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_15_n_0));
  LUT4 #(
    .INIT(16'h542B)) 
    s2_can_down_i_17
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_down_i_17_n_0));
  LUT4 #(
    .INIT(16'h8505)) 
    s2_can_down_i_18
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_18_n_0));
  LUT4 #(
    .INIT(16'h1A9A)) 
    s2_can_down_i_19
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_19_n_0));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_down_i_2
       (.I0(s2_can_down_reg_i_3_n_6),
        .I1(s2_can_down_reg_i_5_n_6),
        .I2(s2_can_down_reg_i_3_n_7),
        .I3(s2_can_down_reg_i_5_n_5),
        .I4(s2_can_down_reg_i_5_n_4),
        .I5(s2_can_down_reg_i_5_n_7),
        .O(s2_can_down_i_2_n_0));
  LUT2 #(
    .INIT(4'hE)) 
    s2_can_down_i_20
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_20_n_0));
  LUT4 #(
    .INIT(16'h651A)) 
    s2_can_down_i_21
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_21_n_0));
  LUT4 #(
    .INIT(16'h4B52)) 
    s2_can_down_i_22
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_22_n_0));
  LUT4 #(
    .INIT(16'h1CE3)) 
    s2_can_down_i_23
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_23_n_0));
  LUT3 #(
    .INIT(8'h65)) 
    s2_can_down_i_24
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_down_i_24_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    s2_can_down_i_4
       (.I0(s2_can_down_reg_i_3_n_7),
        .I1(s2_can_down_reg_i_5_n_7),
        .I2(s2_can_down_reg_i_5_n_6),
        .O(s2_can_down_i_4_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_down_i_6
       (.I0(s2_can_down_reg_i_16_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_down_i_6_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_down_i_9
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16_n_6),
        .I2(s2_can_down_reg_i_16_n_5),
        .O(s2_can_down_i_9_n_0));
  FDCE s2_can_down_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_down),
        .Q(s2_can_down));
  CARRY4 s2_can_down_reg_i_16
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_16_n_0,s2_can_down_reg_i_16_n_1,s2_can_down_reg_i_16_n_2,s2_can_down_reg_i_16_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_18_n_0,s2_can_down_i_19_n_0,s2_can_down_i_20_n_0,1'b0}),
        .O({O,s2_can_down_reg_i_16_n_5,s2_can_down_reg_i_16_n_6,s2_can_down_reg_i_16_n_7}),
        .S({s2_can_down_i_21_n_0,s2_can_down_i_22_n_0,s2_can_down_i_23_n_0,s2_can_down_i_24_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_3
       (.CI(s2_can_down_reg_i_5_n_0),
        .CO({NLW_s2_can_down_reg_i_3_CO_UNCONNECTED[3:2],s2_can_down_reg_i_3_n_2,s2_can_down_reg_i_3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_down_i_6_n_0}),
        .O({NLW_s2_can_down_reg_i_3_O_UNCONNECTED[3],s2_can_down_reg_i_3_n_5,s2_can_down_reg_i_3_n_6,s2_can_down_reg_i_3_n_7}),
        .S({1'b0,s2_can_down_reg_i_7_n_7,S,s2_can_down_i_9_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_5
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_5_n_0,s2_can_down_reg_i_5_n_1,s2_can_down_reg_i_5_n_2,s2_can_down_reg_i_5_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_10_n_0,s1_ghost_col[2],s2_can_down_i_11_n_0,s1_ghost_row[0]}),
        .O({s2_can_down_reg_i_5_n_4,s2_can_down_reg_i_5_n_5,s2_can_down_reg_i_5_n_6,s2_can_down_reg_i_5_n_7}),
        .S({s2_can_down_i_12_n_0,s2_can_down_i_13_n_0,s2_can_down_i_14_n_0,s2_can_down_i_15_n_0}));
  CARRY4 s2_can_down_reg_i_7
       (.CI(s2_can_down_reg_i_16_n_0),
        .CO(NLW_s2_can_down_reg_i_7_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_down_reg_i_7_O_UNCONNECTED[3:1],s2_can_down_reg_i_7_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_down_i_17_n_0}));
  LUT6 #(
    .INIT(64'hA2A2A202A2A2A2A2)) 
    s2_can_left_i_1
       (.I0(wc_left01_in),
        .I1(s2_can_left_i_3_n_0),
        .I2(s2_can_left_reg_i_4_n_5),
        .I3(s2_can_left_reg_i_5_n_6),
        .I4(s2_can_left_reg_i_5_n_7),
        .I5(s2_can_left_reg_i_4_n_7),
        .O(wc_left));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_10
       (.I0(s1_ghost_row[1]),
        .O(s2_can_left_i_10_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_11
       (.I0(s1_ghost_row[0]),
        .O(s2_can_left_i_11_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_left_i_12
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_left_i_12_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_13
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7_n_7),
        .O(s2_can_left_i_13_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_14
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .O(s2_can_left_i_14_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_15
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_left_i_15_n_0));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    s2_can_left_i_2
       (.I0(s1_ghost_col[2]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_col[3]),
        .O(wc_left01_in));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_left_i_3
       (.I0(s2_can_left_reg_i_4_n_6),
        .I1(s2_can_left_reg_i_5_n_6),
        .I2(s2_can_left_reg_i_4_n_7),
        .I3(s2_can_left_reg_i_5_n_5),
        .I4(s2_can_left_reg_i_5_n_4),
        .I5(s2_can_left_reg_i_5_n_7),
        .O(s2_can_left_i_3_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_left_i_6
       (.I0(s2_can_right_reg_i_7_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_left_i_6_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_7
       (.I0(s2_can_right_reg_i_7_n_4),
        .O(p_1_in));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_left_i_8
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7_n_6),
        .I2(s2_can_right_reg_i_7_n_5),
        .O(s2_can_left_i_8_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_9
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7_n_6),
        .O(s2_can_left_i_9_n_0));
  FDCE s2_can_left_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_left),
        .Q(s2_can_left));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_4
       (.CI(s2_can_left_reg_i_5_n_0),
        .CO({NLW_s2_can_left_reg_i_4_CO_UNCONNECTED[3:2],s2_can_left_reg_i_4_n_2,s2_can_left_reg_i_4_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_left_i_6_n_0}),
        .O({NLW_s2_can_left_reg_i_4_O_UNCONNECTED[3],s2_can_left_reg_i_4_n_5,s2_can_left_reg_i_4_n_6,s2_can_left_reg_i_4_n_7}),
        .S({1'b0,s2_can_right_reg_i_9_n_7,p_1_in,s2_can_left_i_8_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_5
       (.CI(1'b0),
        .CO({s2_can_left_reg_i_5_n_0,s2_can_left_reg_i_5_n_1,s2_can_left_reg_i_5_n_2,s2_can_left_reg_i_5_n_3}),
        .CYINIT(1'b1),
        .DI({s2_can_left_i_9_n_0,s1_ghost_col[2],s2_can_left_i_10_n_0,s2_can_left_i_11_n_0}),
        .O({s2_can_left_reg_i_5_n_4,s2_can_left_reg_i_5_n_5,s2_can_left_reg_i_5_n_6,s2_can_left_reg_i_5_n_7}),
        .S({s2_can_left_i_12_n_0,s2_can_left_i_13_n_0,s2_can_left_i_14_n_0,s2_can_left_i_15_n_0}));
  LUT6 #(
    .INIT(64'h0000077777770777)) 
    s2_can_right_i_1
       (.I0(s1_ghost_col[3]),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_i_2_n_0),
        .I3(s2_can_right_i_3_n_0),
        .I4(s2_can_right_i_4_n_0),
        .I5(s2_can_right_i_5_n_0),
        .O(wc_right));
  LUT5 #(
    .INIT(32'h2ABFD540)) 
    s2_can_right_i_10
       (.I0(s2_can_right_i_8_n_0),
        .I1(s2_can_right_reg_i_7_n_6),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7_n_5),
        .I4(s2_can_right_reg_i_7_n_4),
        .O(s2_can_right_i_10_n_0));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h7887)) 
    s2_can_right_i_11
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_11_n_0));
  LUT6 #(
    .INIT(64'h7887F00FF00F8778)) 
    s2_can_right_i_12
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .I2(s2_can_right_reg_i_7_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s1_ghost_col[1]),
        .I5(s1_ghost_row[1]),
        .O(s2_can_right_i_12_n_0));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h56A9A956)) 
    s2_can_right_i_13
       (.I0(s2_can_right_i_6_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7_n_7),
        .I3(s2_can_right_reg_i_7_n_6),
        .I4(s1_ghost_col[3]),
        .O(s2_can_right_i_13_n_0));
  (* SOFT_HLUTNM = "soft_lutpair9" *) 
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_14
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_right_i_14_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_15
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .O(s2_can_right_i_15_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_16
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .O(s2_can_right_i_16_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    s2_can_right_i_17
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_17_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_18
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[3]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_18_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_19
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[3]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_19_n_0));
  (* SOFT_HLUTNM = "soft_lutpair8" *) 
  LUT4 #(
    .INIT(16'h0990)) 
    s2_can_right_i_2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_2_n_0));
  LUT4 #(
    .INIT(16'h2DD2)) 
    s2_can_right_i_20
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_right_i_20_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_21
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_21_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    s2_can_right_i_22
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .O(s2_can_right_i_22_n_0));
  LUT6 #(
    .INIT(64'hAB54FD02FD0254AB)) 
    s2_can_right_i_3
       (.I0(s2_can_right_i_6_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7_n_7),
        .I3(s2_can_right_reg_i_7_n_5),
        .I4(s2_can_right_reg_i_7_n_6),
        .I5(s1_ghost_col[3]),
        .O(s2_can_right_i_3_n_0));
  LUT6 #(
    .INIT(64'h15550111EAAAFEEE)) 
    s2_can_right_i_4
       (.I0(s2_can_right_reg_i_7_n_4),
        .I1(s2_can_right_reg_i_7_n_5),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7_n_6),
        .I4(s2_can_right_i_8_n_0),
        .I5(s2_can_right_reg_i_9_n_7),
        .O(s2_can_right_i_4_n_0));
  LUT6 #(
    .INIT(64'hF0A52D0F18080088)) 
    s2_can_right_i_5
       (.I0(s2_can_right_i_10_n_0),
        .I1(s2_can_right_i_11_n_0),
        .I2(s2_can_right_i_3_n_0),
        .I3(s2_can_right_i_12_n_0),
        .I4(s2_can_right_i_13_n_0),
        .I5(s2_can_right_i_14_n_0),
        .O(s2_can_right_i_5_n_0));
  LUT6 #(
    .INIT(64'h0666666F666F666F)) 
    s2_can_right_i_6
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7_n_7),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_col[1]),
        .I4(s1_ghost_row[0]),
        .I5(s1_ghost_col[0]),
        .O(s2_can_right_i_6_n_0));
  (* SOFT_HLUTNM = "soft_lutpair0" *) 
  LUT5 #(
    .INIT(32'h999F0009)) 
    s2_can_right_i_8
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7_n_6),
        .I2(s2_can_right_reg_i_7_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s2_can_right_i_6_n_0),
        .O(s2_can_right_i_8_n_0));
  FDCE s2_can_right_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_right),
        .Q(s2_can_right));
  CARRY4 s2_can_right_reg_i_7
       (.CI(1'b0),
        .CO({s2_can_right_reg_i_7_n_0,s2_can_right_reg_i_7_n_1,s2_can_right_reg_i_7_n_2,s2_can_right_reg_i_7_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_right_i_15_n_0,s2_can_right_i_16_n_0,s2_can_right_i_17_n_0,1'b0}),
        .O({s2_can_right_reg_i_7_n_4,s2_can_right_reg_i_7_n_5,s2_can_right_reg_i_7_n_6,s2_can_right_reg_i_7_n_7}),
        .S({s2_can_right_i_18_n_0,s2_can_right_i_19_n_0,s2_can_right_i_20_n_0,s2_can_right_i_21_n_0}));
  CARRY4 s2_can_right_reg_i_9
       (.CI(s2_can_right_reg_i_7_n_0),
        .CO(NLW_s2_can_right_reg_i_9_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_right_reg_i_9_O_UNCONNECTED[3:1],s2_can_right_reg_i_9_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_right_i_22_n_0}));
  LUT5 #(
    .INIT(32'h0000FFFE)) 
    s2_can_up_i_1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[2]),
        .I4(s2_can_up_i_2_n_0),
        .O(wc_up));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_10
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16_n_6),
        .O(s2_can_up_i_10_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_up_i_11
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .O(wc_down5));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_up_i_12
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_up_i_12_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_13
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_up_reg_i_16_n_7),
        .O(s2_can_up_i_13_n_0));
  LUT3 #(
    .INIT(8'h69)) 
    s2_can_up_i_14
       (.I0(s1_ghost_col[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_14_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_15
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_up_i_15_n_0));
  LUT4 #(
    .INIT(16'h42BF)) 
    s2_can_up_i_17
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_17_n_0));
  LUT4 #(
    .INIT(16'h1213)) 
    s2_can_up_i_18
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_18_n_0));
  LUT4 #(
    .INIT(16'h6564)) 
    s2_can_up_i_19
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_19_n_0));
  LUT6 #(
    .INIT(64'h0028FFFF00280000)) 
    s2_can_up_i_2
       (.I0(s2_can_up_reg_i_3_n_7),
        .I1(s1_ghost_col[0]),
        .I2(s1_ghost_row[0]),
        .I3(s2_can_up_reg_i_4_n_6),
        .I4(s2_can_up_reg_i_3_n_5),
        .I5(s2_can_up_i_5_n_0),
        .O(s2_can_up_i_2_n_0));
  LUT3 #(
    .INIT(8'hED)) 
    s2_can_up_i_20
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_20_n_0));
  LUT4 #(
    .INIT(16'h9599)) 
    s2_can_up_i_21
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_21_n_0));
  LUT4 #(
    .INIT(16'h5964)) 
    s2_can_up_i_22
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_22_n_0));
  LUT4 #(
    .INIT(16'h738C)) 
    s2_can_up_i_23
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_23_n_0));
  LUT3 #(
    .INIT(8'hA6)) 
    s2_can_up_i_24
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_up_i_24_n_0));
  LUT6 #(
    .INIT(64'hF0A5870F42020022)) 
    s2_can_up_i_5
       (.I0(s2_can_up_reg_i_3_n_6),
        .I1(s2_can_up_reg_i_4_n_6),
        .I2(s2_can_up_reg_i_3_n_7),
        .I3(s2_can_up_reg_i_4_n_5),
        .I4(s2_can_up_reg_i_4_n_4),
        .I5(s2_can_right_i_14_n_0),
        .O(s2_can_up_i_5_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_up_i_6
       (.I0(s2_can_up_reg_i_16_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_up_i_6_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_up_i_9
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16_n_6),
        .I2(s2_can_up_reg_i_16_n_5),
        .O(s2_can_up_i_9_n_0));
  FDCE s2_can_up_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_up),
        .Q(s2_can_up));
  CARRY4 s2_can_up_reg_i_16
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_16_n_0,s2_can_up_reg_i_16_n_1,s2_can_up_reg_i_16_n_2,s2_can_up_reg_i_16_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_18_n_0,s2_can_up_i_19_n_0,s2_can_up_i_20_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_0 ,s2_can_up_reg_i_16_n_5,s2_can_up_reg_i_16_n_6,s2_can_up_reg_i_16_n_7}),
        .S({s2_can_up_i_21_n_0,s2_can_up_i_22_n_0,s2_can_up_i_23_n_0,s2_can_up_i_24_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_3
       (.CI(s2_can_up_reg_i_4_n_0),
        .CO({NLW_s2_can_up_reg_i_3_CO_UNCONNECTED[3:2],s2_can_up_reg_i_3_n_2,s2_can_up_reg_i_3_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_up_i_6_n_0}),
        .O({NLW_s2_can_up_reg_i_3_O_UNCONNECTED[3],s2_can_up_reg_i_3_n_5,s2_can_up_reg_i_3_n_6,s2_can_up_reg_i_3_n_7}),
        .S({1'b0,s2_can_up_reg_i_7_n_7,s2_can_up_i_2_0,s2_can_up_i_9_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_4
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_4_n_0,s2_can_up_reg_i_4_n_1,s2_can_up_reg_i_4_n_2,s2_can_up_reg_i_4_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_10_n_0,s1_ghost_col[2],wc_down5,s1_ghost_row[0]}),
        .O({s2_can_up_reg_i_4_n_4,s2_can_up_reg_i_4_n_5,s2_can_up_reg_i_4_n_6,NLW_s2_can_up_reg_i_4_O_UNCONNECTED[0]}),
        .S({s2_can_up_i_12_n_0,s2_can_up_i_13_n_0,s2_can_up_i_14_n_0,s2_can_up_i_15_n_0}));
  CARRY4 s2_can_up_reg_i_7
       (.CI(s2_can_up_reg_i_16_n_0),
        .CO(NLW_s2_can_up_reg_i_7_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_up_reg_i_7_O_UNCONNECTED[3:1],s2_can_up_reg_i_7_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_up_i_17_n_0}));
  FDCE \s2_facing_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\direction_reg[1]_0 [0]),
        .Q(s2_facing[0]));
  FDCE \s2_facing_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(\direction_reg[1]_0 [1]),
        .Q(s2_facing[1]));
  FDCE s2_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_detected),
        .Q(s2_los_detected));
  FDCE \s2_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[0]),
        .Q(s2_los_dir[0]));
  FDCE \s2_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[1]),
        .Q(s2_los_dir[1]));
  FDCE valid_reg
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(p_0_in__0),
        .Q(D));
endmodule

(* ORIG_REF_NAME = "ghost_top" *) 
module ghost_bd_ghost_multi_0_0_ghost_top_0
   (\s1_ghost_row_reg[2]_0 ,
    \s1_ghost_row_reg[2]_1 ,
    D,
    E,
    S_AXI_ACLK,
    AR,
    s1_los_detected_reg_0,
    s2_can_down_reg_0,
    s2_can_up_i_2__0_0,
    s1_los_detected_reg_1,
    \s1_los_dir[1]_i_33__0_0 ,
    ghost2_row,
    \s1_los_dir[1]_i_6__0_0 ,
    ghost2_col,
    rover_col,
    rover_row,
    s1_los_detected_reg_2,
    s1_los_detected_i_2__0_0,
    s1_los_detected_i_4_0,
    \s1_los_dir[1]_i_2__0_0 ,
    \s1_los_dir[0]_i_5__0_0 ,
    \s1_los_dir_reg[1]_0 ,
    \s1_los_dir[1]_i_27__0_0 ,
    \s1_los_dir_reg[1]_1 ,
    \s1_los_dir[1]_i_5__0_0 ,
    \s1_los_dir_reg[1]_2 ,
    \s1_los_dir[1]_i_6__0_1 ,
    \s1_los_dir[0]_i_4__0_0 ,
    p_0_in__0);
  output [0:0]\s1_ghost_row_reg[2]_0 ;
  output [0:0]\s1_ghost_row_reg[2]_1 ;
  output [1:0]D;
  input [0:0]E;
  input S_AXI_ACLK;
  input [0:0]AR;
  input [0:0]s1_los_detected_reg_0;
  input [0:0]s2_can_down_reg_0;
  input [0:0]s2_can_up_i_2__0_0;
  input s1_los_detected_reg_1;
  input [3:0]\s1_los_dir[1]_i_33__0_0 ;
  input [3:0]ghost2_row;
  input \s1_los_dir[1]_i_6__0_0 ;
  input [3:0]ghost2_col;
  input [3:0]rover_col;
  input [3:0]rover_row;
  input s1_los_detected_reg_2;
  input s1_los_detected_i_2__0_0;
  input s1_los_detected_i_4_0;
  input \s1_los_dir[1]_i_2__0_0 ;
  input \s1_los_dir[0]_i_5__0_0 ;
  input \s1_los_dir_reg[1]_0 ;
  input \s1_los_dir[1]_i_27__0_0 ;
  input \s1_los_dir_reg[1]_1 ;
  input \s1_los_dir[1]_i_5__0_0 ;
  input \s1_los_dir_reg[1]_2 ;
  input \s1_los_dir[1]_i_6__0_1 ;
  input [0:0]\s1_los_dir[0]_i_4__0_0 ;
  input p_0_in__0;

  wire [0:0]AR;
  wire [1:0]D;
  wire [0:0]E;
  wire S_AXI_ACLK;
  wire \direction[0]_i_1__0_n_0 ;
  wire \direction[1]_i_1__0_n_0 ;
  wire [3:0]ghost2_col;
  wire [3:0]ghost2_row;
  wire los_detected_comb;
  wire [1:0]los_dir_comb;
  wire p_0_in__0;
  wire [5:5]p_1_in;
  wire [3:0]rover_col;
  wire [3:0]rover_row;
  wire [3:0]s1_ghost_col;
  wire [3:0]s1_ghost_row;
  wire [0:0]\s1_ghost_row_reg[2]_0 ;
  wire [0:0]\s1_ghost_row_reg[2]_1 ;
  wire s1_los_detected;
  wire s1_los_detected_i_10__0_n_0;
  wire s1_los_detected_i_11__0_n_0;
  wire s1_los_detected_i_12__0_n_0;
  wire s1_los_detected_i_13__0_n_0;
  wire s1_los_detected_i_14__0_n_0;
  wire s1_los_detected_i_15__0_n_0;
  wire s1_los_detected_i_16__0_n_0;
  wire s1_los_detected_i_17_n_0;
  wire s1_los_detected_i_18__0_n_0;
  wire s1_los_detected_i_19__0_n_0;
  wire s1_los_detected_i_20_n_0;
  wire s1_los_detected_i_21__0_n_0;
  wire s1_los_detected_i_22__0_n_0;
  wire s1_los_detected_i_23__0_n_0;
  wire s1_los_detected_i_24__0_n_0;
  wire s1_los_detected_i_25_n_0;
  wire s1_los_detected_i_26__0_n_0;
  wire s1_los_detected_i_2__0_0;
  wire s1_los_detected_i_2__0_n_0;
  wire s1_los_detected_i_3__0_n_0;
  wire s1_los_detected_i_4_0;
  wire s1_los_detected_i_4_n_0;
  wire s1_los_detected_i_5__0_n_0;
  wire s1_los_detected_i_6__0_n_0;
  wire s1_los_detected_i_7__0_n_0;
  wire s1_los_detected_i_8__0_n_0;
  wire s1_los_detected_i_9__0_n_0;
  wire [0:0]s1_los_detected_reg_0;
  wire s1_los_detected_reg_1;
  wire s1_los_detected_reg_2;
  wire [1:0]s1_los_dir;
  wire \s1_los_dir[0]_i_10__0_n_0 ;
  wire \s1_los_dir[0]_i_11__0_n_0 ;
  wire \s1_los_dir[0]_i_12__0_n_0 ;
  wire \s1_los_dir[0]_i_13__0_n_0 ;
  wire \s1_los_dir[0]_i_14__0_n_0 ;
  wire \s1_los_dir[0]_i_15__0_n_0 ;
  wire \s1_los_dir[0]_i_16__0_n_0 ;
  wire \s1_los_dir[0]_i_17__0_n_0 ;
  wire \s1_los_dir[0]_i_18__0_n_0 ;
  wire \s1_los_dir[0]_i_19__0_n_0 ;
  wire \s1_los_dir[0]_i_20__0_n_0 ;
  wire \s1_los_dir[0]_i_21__0_n_0 ;
  wire \s1_los_dir[0]_i_22__0_n_0 ;
  wire \s1_los_dir[0]_i_23__0_n_0 ;
  wire \s1_los_dir[0]_i_2__0_n_0 ;
  wire \s1_los_dir[0]_i_3__0_n_0 ;
  wire [0:0]\s1_los_dir[0]_i_4__0_0 ;
  wire \s1_los_dir[0]_i_4__0_n_0 ;
  wire \s1_los_dir[0]_i_5__0_0 ;
  wire \s1_los_dir[0]_i_5__0_n_0 ;
  wire \s1_los_dir[0]_i_6__0_n_0 ;
  wire \s1_los_dir[0]_i_7__0_n_0 ;
  wire \s1_los_dir[0]_i_8__0_n_0 ;
  wire \s1_los_dir[0]_i_9__0_n_0 ;
  wire \s1_los_dir[1]_i_105__0_n_0 ;
  wire \s1_los_dir[1]_i_10__0_n_0 ;
  wire \s1_los_dir[1]_i_11__0_n_0 ;
  wire \s1_los_dir[1]_i_12__0_n_0 ;
  wire \s1_los_dir[1]_i_13__0_n_0 ;
  wire \s1_los_dir[1]_i_14__0_n_0 ;
  wire \s1_los_dir[1]_i_15__0_n_0 ;
  wire \s1_los_dir[1]_i_16__0_n_0 ;
  wire \s1_los_dir[1]_i_17__0_n_0 ;
  wire \s1_los_dir[1]_i_18__0_n_0 ;
  wire \s1_los_dir[1]_i_19__0_n_0 ;
  wire \s1_los_dir[1]_i_20_n_0 ;
  wire \s1_los_dir[1]_i_21__0_n_0 ;
  wire \s1_los_dir[1]_i_22_n_0 ;
  wire \s1_los_dir[1]_i_23_n_0 ;
  wire \s1_los_dir[1]_i_24__0_n_0 ;
  wire \s1_los_dir[1]_i_25__0_n_0 ;
  wire \s1_los_dir[1]_i_26__0_n_0 ;
  wire \s1_los_dir[1]_i_27__0_0 ;
  wire \s1_los_dir[1]_i_27__0_n_0 ;
  wire \s1_los_dir[1]_i_28__0_n_0 ;
  wire \s1_los_dir[1]_i_29__0_n_0 ;
  wire \s1_los_dir[1]_i_2__0_0 ;
  wire \s1_los_dir[1]_i_2__0_n_0 ;
  wire \s1_los_dir[1]_i_30__0_n_0 ;
  wire \s1_los_dir[1]_i_31__0_n_0 ;
  wire \s1_los_dir[1]_i_32__0_n_0 ;
  wire [3:0]\s1_los_dir[1]_i_33__0_0 ;
  wire \s1_los_dir[1]_i_33__0_n_0 ;
  wire \s1_los_dir[1]_i_34__0_n_0 ;
  wire \s1_los_dir[1]_i_35__0_n_0 ;
  wire \s1_los_dir[1]_i_36_n_0 ;
  wire \s1_los_dir[1]_i_37__0_n_0 ;
  wire \s1_los_dir[1]_i_38__0_n_0 ;
  wire \s1_los_dir[1]_i_39__0_n_0 ;
  wire \s1_los_dir[1]_i_3__0_n_0 ;
  wire \s1_los_dir[1]_i_40__0_n_0 ;
  wire \s1_los_dir[1]_i_41_n_0 ;
  wire \s1_los_dir[1]_i_42__0_n_0 ;
  wire \s1_los_dir[1]_i_43_n_0 ;
  wire \s1_los_dir[1]_i_44__0_n_0 ;
  wire \s1_los_dir[1]_i_45__0_n_0 ;
  wire \s1_los_dir[1]_i_46__0_n_0 ;
  wire \s1_los_dir[1]_i_47__0_n_0 ;
  wire \s1_los_dir[1]_i_48__0_n_0 ;
  wire \s1_los_dir[1]_i_49__0_n_0 ;
  wire \s1_los_dir[1]_i_4__0_n_0 ;
  wire \s1_los_dir[1]_i_50__0_n_0 ;
  wire \s1_los_dir[1]_i_51__0_n_0 ;
  wire \s1_los_dir[1]_i_52__0_n_0 ;
  wire \s1_los_dir[1]_i_53__0_n_0 ;
  wire \s1_los_dir[1]_i_54__0_n_0 ;
  wire \s1_los_dir[1]_i_55_n_0 ;
  wire \s1_los_dir[1]_i_56__0_n_0 ;
  wire \s1_los_dir[1]_i_57__0_n_0 ;
  wire \s1_los_dir[1]_i_58__0_n_0 ;
  wire \s1_los_dir[1]_i_59_n_0 ;
  wire \s1_los_dir[1]_i_5__0_0 ;
  wire \s1_los_dir[1]_i_5__0_n_0 ;
  wire \s1_los_dir[1]_i_60__0_n_0 ;
  wire \s1_los_dir[1]_i_61_n_0 ;
  wire \s1_los_dir[1]_i_62_n_0 ;
  wire \s1_los_dir[1]_i_63__0_n_0 ;
  wire \s1_los_dir[1]_i_64__0_n_0 ;
  wire \s1_los_dir[1]_i_65__0_n_0 ;
  wire \s1_los_dir[1]_i_66__0_n_0 ;
  wire \s1_los_dir[1]_i_67_n_0 ;
  wire \s1_los_dir[1]_i_68__0_n_0 ;
  wire \s1_los_dir[1]_i_69__0_n_0 ;
  wire \s1_los_dir[1]_i_6__0_0 ;
  wire \s1_los_dir[1]_i_6__0_1 ;
  wire \s1_los_dir[1]_i_6__0_n_0 ;
  wire \s1_los_dir[1]_i_70__0_n_0 ;
  wire \s1_los_dir[1]_i_71__0_n_0 ;
  wire \s1_los_dir[1]_i_72__0_n_0 ;
  wire \s1_los_dir[1]_i_73__0_n_0 ;
  wire \s1_los_dir[1]_i_74__0_n_0 ;
  wire \s1_los_dir[1]_i_75__0_n_0 ;
  wire \s1_los_dir[1]_i_76__0_n_0 ;
  wire \s1_los_dir[1]_i_77__0_n_0 ;
  wire \s1_los_dir[1]_i_78_n_0 ;
  wire \s1_los_dir[1]_i_79__0_n_0 ;
  wire \s1_los_dir[1]_i_7__0_n_0 ;
  wire \s1_los_dir[1]_i_80__0_n_0 ;
  wire \s1_los_dir[1]_i_81__0_n_0 ;
  wire \s1_los_dir[1]_i_82__0_n_0 ;
  wire \s1_los_dir[1]_i_83_n_0 ;
  wire \s1_los_dir[1]_i_84__0_n_0 ;
  wire \s1_los_dir[1]_i_85__0_n_0 ;
  wire \s1_los_dir[1]_i_86__0_n_0 ;
  wire \s1_los_dir[1]_i_87_n_0 ;
  wire \s1_los_dir[1]_i_88__0_n_0 ;
  wire \s1_los_dir[1]_i_89__0_n_0 ;
  wire \s1_los_dir[1]_i_8__0_n_0 ;
  wire \s1_los_dir[1]_i_92_n_0 ;
  wire \s1_los_dir[1]_i_93_n_0 ;
  wire \s1_los_dir[1]_i_94__0_n_0 ;
  wire \s1_los_dir[1]_i_95__0_n_0 ;
  wire \s1_los_dir[1]_i_96__0_n_0 ;
  wire \s1_los_dir[1]_i_9__0_n_0 ;
  wire \s1_los_dir_reg[1]_0 ;
  wire \s1_los_dir_reg[1]_1 ;
  wire \s1_los_dir_reg[1]_2 ;
  wire s2_can_down;
  wire s2_can_down_i_10__0_n_0;
  wire s2_can_down_i_11__0_n_0;
  wire s2_can_down_i_12__0_n_0;
  wire s2_can_down_i_13__0_n_0;
  wire s2_can_down_i_14__0_n_0;
  wire s2_can_down_i_15__0_n_0;
  wire s2_can_down_i_17__0_n_0;
  wire s2_can_down_i_18__0_n_0;
  wire s2_can_down_i_19__0_n_0;
  wire s2_can_down_i_20__0_n_0;
  wire s2_can_down_i_21__0_n_0;
  wire s2_can_down_i_22__0_n_0;
  wire s2_can_down_i_23__0_n_0;
  wire s2_can_down_i_24__0_n_0;
  wire s2_can_down_i_2__0_n_0;
  wire s2_can_down_i_4__0_n_0;
  wire s2_can_down_i_6__0_n_0;
  wire s2_can_down_i_9__0_n_0;
  wire [0:0]s2_can_down_reg_0;
  wire s2_can_down_reg_i_16__0_n_0;
  wire s2_can_down_reg_i_16__0_n_1;
  wire s2_can_down_reg_i_16__0_n_2;
  wire s2_can_down_reg_i_16__0_n_3;
  wire s2_can_down_reg_i_16__0_n_5;
  wire s2_can_down_reg_i_16__0_n_6;
  wire s2_can_down_reg_i_16__0_n_7;
  wire s2_can_down_reg_i_3__0_n_2;
  wire s2_can_down_reg_i_3__0_n_3;
  wire s2_can_down_reg_i_3__0_n_5;
  wire s2_can_down_reg_i_3__0_n_6;
  wire s2_can_down_reg_i_3__0_n_7;
  wire s2_can_down_reg_i_5__0_n_0;
  wire s2_can_down_reg_i_5__0_n_1;
  wire s2_can_down_reg_i_5__0_n_2;
  wire s2_can_down_reg_i_5__0_n_3;
  wire s2_can_down_reg_i_5__0_n_4;
  wire s2_can_down_reg_i_5__0_n_5;
  wire s2_can_down_reg_i_5__0_n_6;
  wire s2_can_down_reg_i_5__0_n_7;
  wire s2_can_down_reg_i_7__0_n_7;
  wire s2_can_left;
  wire s2_can_left_i_10__0_n_0;
  wire s2_can_left_i_11__0_n_0;
  wire s2_can_left_i_12__0_n_0;
  wire s2_can_left_i_13__0_n_0;
  wire s2_can_left_i_14__0_n_0;
  wire s2_can_left_i_15__0_n_0;
  wire s2_can_left_i_3__0_n_0;
  wire s2_can_left_i_6__0_n_0;
  wire s2_can_left_i_8__0_n_0;
  wire s2_can_left_i_9__0_n_0;
  wire s2_can_left_reg_i_4__0_n_2;
  wire s2_can_left_reg_i_4__0_n_3;
  wire s2_can_left_reg_i_4__0_n_5;
  wire s2_can_left_reg_i_4__0_n_6;
  wire s2_can_left_reg_i_4__0_n_7;
  wire s2_can_left_reg_i_5__0_n_0;
  wire s2_can_left_reg_i_5__0_n_1;
  wire s2_can_left_reg_i_5__0_n_2;
  wire s2_can_left_reg_i_5__0_n_3;
  wire s2_can_left_reg_i_5__0_n_4;
  wire s2_can_left_reg_i_5__0_n_5;
  wire s2_can_left_reg_i_5__0_n_6;
  wire s2_can_left_reg_i_5__0_n_7;
  wire s2_can_right;
  wire s2_can_right_i_10__0_n_0;
  wire s2_can_right_i_11__0_n_0;
  wire s2_can_right_i_12__0_n_0;
  wire s2_can_right_i_13__0_n_0;
  wire s2_can_right_i_14__0_n_0;
  wire s2_can_right_i_15__0_n_0;
  wire s2_can_right_i_16__0_n_0;
  wire s2_can_right_i_17__0_n_0;
  wire s2_can_right_i_18__0_n_0;
  wire s2_can_right_i_19__0_n_0;
  wire s2_can_right_i_20__0_n_0;
  wire s2_can_right_i_21__0_n_0;
  wire s2_can_right_i_22__0_n_0;
  wire s2_can_right_i_2__0_n_0;
  wire s2_can_right_i_3__0_n_0;
  wire s2_can_right_i_4__0_n_0;
  wire s2_can_right_i_5__0_n_0;
  wire s2_can_right_i_6__0_n_0;
  wire s2_can_right_i_8__0_n_0;
  wire s2_can_right_reg_i_7__0_n_0;
  wire s2_can_right_reg_i_7__0_n_1;
  wire s2_can_right_reg_i_7__0_n_2;
  wire s2_can_right_reg_i_7__0_n_3;
  wire s2_can_right_reg_i_7__0_n_4;
  wire s2_can_right_reg_i_7__0_n_5;
  wire s2_can_right_reg_i_7__0_n_6;
  wire s2_can_right_reg_i_7__0_n_7;
  wire s2_can_right_reg_i_9__0_n_7;
  wire s2_can_up;
  wire s2_can_up_i_10__0_n_0;
  wire s2_can_up_i_12__0_n_0;
  wire s2_can_up_i_13__0_n_0;
  wire s2_can_up_i_14__0_n_0;
  wire s2_can_up_i_15__0_n_0;
  wire s2_can_up_i_17__0_n_0;
  wire s2_can_up_i_18__0_n_0;
  wire s2_can_up_i_19__0_n_0;
  wire s2_can_up_i_20__0_n_0;
  wire s2_can_up_i_21__0_n_0;
  wire s2_can_up_i_22__0_n_0;
  wire s2_can_up_i_23__0_n_0;
  wire s2_can_up_i_24__0_n_0;
  wire [0:0]s2_can_up_i_2__0_0;
  wire s2_can_up_i_2__0_n_0;
  wire s2_can_up_i_5__0_n_0;
  wire s2_can_up_i_6__0_n_0;
  wire s2_can_up_i_9__0_n_0;
  wire s2_can_up_reg_i_16__0_n_0;
  wire s2_can_up_reg_i_16__0_n_1;
  wire s2_can_up_reg_i_16__0_n_2;
  wire s2_can_up_reg_i_16__0_n_3;
  wire s2_can_up_reg_i_16__0_n_5;
  wire s2_can_up_reg_i_16__0_n_6;
  wire s2_can_up_reg_i_16__0_n_7;
  wire s2_can_up_reg_i_3__0_n_2;
  wire s2_can_up_reg_i_3__0_n_3;
  wire s2_can_up_reg_i_3__0_n_5;
  wire s2_can_up_reg_i_3__0_n_6;
  wire s2_can_up_reg_i_3__0_n_7;
  wire s2_can_up_reg_i_4__0_n_0;
  wire s2_can_up_reg_i_4__0_n_1;
  wire s2_can_up_reg_i_4__0_n_2;
  wire s2_can_up_reg_i_4__0_n_3;
  wire s2_can_up_reg_i_4__0_n_4;
  wire s2_can_up_reg_i_4__0_n_5;
  wire s2_can_up_reg_i_4__0_n_6;
  wire s2_can_up_reg_i_7__0_n_7;
  wire [1:0]s2_facing;
  wire s2_los_detected;
  wire [1:0]s2_los_dir;
  wire wc_down;
  wire [1:1]wc_down5;
  wire wc_left;
  wire wc_left01_in;
  wire wc_right;
  wire wc_up;
  wire [1:0]wf_dir__0;
  wire [3:2]NLW_s2_can_down_reg_i_3__0_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_down_reg_i_3__0_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_down_reg_i_7__0_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_down_reg_i_7__0_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_left_reg_i_4__0_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_left_reg_i_4__0_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_right_reg_i_9__0_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_right_reg_i_9__0_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_up_reg_i_3__0_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_up_reg_i_3__0_O_UNCONNECTED;
  wire [0:0]NLW_s2_can_up_reg_i_4__0_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_up_reg_i_7__0_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_up_reg_i_7__0_O_UNCONNECTED;

  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[0]_i_1__0 
       (.I0(s2_los_dir[0]),
        .I1(s2_los_detected),
        .I2(wf_dir__0[0]),
        .I3(p_0_in__0),
        .I4(D[0]),
        .O(\direction[0]_i_1__0_n_0 ));
  LUT6 #(
    .INIT(64'hFAAA0032FABB3332)) 
    \direction[0]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__0[0]));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[1]_i_1__0 
       (.I0(s2_los_dir[1]),
        .I1(s2_los_detected),
        .I2(wf_dir__0[1]),
        .I3(p_0_in__0),
        .I4(D[1]),
        .O(\direction[1]_i_1__0_n_0 ));
  LUT6 #(
    .INIT(64'hF555FF31F0113031)) 
    \direction[1]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__0[1]));
  FDCE \direction_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[0]_i_1__0_n_0 ),
        .Q(D[0]));
  FDCE \direction_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[1]_i_1__0_n_0 ),
        .Q(D[1]));
  FDCE \s1_ghost_col_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_col[0]),
        .Q(s1_ghost_col[0]));
  FDCE \s1_ghost_col_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_col[1]),
        .Q(s1_ghost_col[1]));
  FDCE \s1_ghost_col_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_col[2]),
        .Q(s1_ghost_col[2]));
  FDCE \s1_ghost_col_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_col[3]),
        .Q(s1_ghost_col[3]));
  FDCE \s1_ghost_row_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_row[0]),
        .Q(s1_ghost_row[0]));
  FDCE \s1_ghost_row_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_row[1]),
        .Q(s1_ghost_row[1]));
  FDCE \s1_ghost_row_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_row[2]),
        .Q(s1_ghost_row[2]));
  FDCE \s1_ghost_row_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost2_row[3]),
        .Q(s1_ghost_row[3]));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    s1_los_detected_i_10__0
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .I3(ghost2_col[0]),
        .O(s1_los_detected_i_10__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT2 #(
    .INIT(4'h1)) 
    s1_los_detected_i_11__0
       (.I0(ghost2_row[3]),
        .I1(ghost2_row[2]),
        .O(s1_los_detected_i_11__0_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_12__0
       (.I0(s1_los_detected_i_4_0),
        .I1(s1_los_detected_i_22__0_n_0),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[3]),
        .I5(ghost2_col[0]),
        .O(s1_los_detected_i_12__0_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFF0F00DF0D)) 
    s1_los_detected_i_13__0
       (.I0(ghost2_row[2]),
        .I1(rover_row[2]),
        .I2(ghost2_row[3]),
        .I3(rover_row[3]),
        .I4(s1_los_detected_i_23__0_n_0),
        .I5(s1_los_detected_i_24__0_n_0),
        .O(s1_los_detected_i_13__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT4 #(
    .INIT(16'h303E)) 
    s1_los_detected_i_14__0
       (.I0(ghost2_col[1]),
        .I1(ghost2_col[3]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[0]),
        .O(s1_los_detected_i_14__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    s1_los_detected_i_15__0
       (.I0(ghost2_row[3]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[2]),
        .O(s1_los_detected_i_15__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair41" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    s1_los_detected_i_16__0
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[3]),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[0]),
        .O(s1_los_detected_i_16__0_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF070707)) 
    s1_los_detected_i_17
       (.I0(rover_row[1]),
        .I1(rover_row[0]),
        .I2(rover_row[3]),
        .I3(ghost2_row[1]),
        .I4(ghost2_row[2]),
        .I5(ghost2_row[3]),
        .O(s1_los_detected_i_17_n_0));
  LUT6 #(
    .INIT(64'hBEFFFFBEFFFFFFFF)) 
    s1_los_detected_i_18__0
       (.I0(s1_los_detected_i_25_n_0),
        .I1(ghost2_col[0]),
        .I2(rover_col[0]),
        .I3(ghost2_col[3]),
        .I4(rover_col[3]),
        .I5(s1_los_detected_i_26__0_n_0),
        .O(s1_los_detected_i_18__0_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_19__0
       (.I0(rover_row[0]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[2]),
        .I3(rover_row[2]),
        .I4(ghost2_row[1]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_19__0_n_0));
  LUT5 #(
    .INIT(32'hEEEEFFFE)) 
    s1_los_detected_i_1__0
       (.I0(los_dir_comb[1]),
        .I1(s1_los_detected_i_2__0_n_0),
        .I2(s1_los_detected_i_3__0_n_0),
        .I3(s1_los_detected_reg_1),
        .I4(s1_los_detected_i_4_n_0),
        .O(los_detected_comb));
  LUT6 #(
    .INIT(64'hFEFFFFFFFEFEFEFE)) 
    s1_los_detected_i_20
       (.I0(ghost2_row[3]),
        .I1(ghost2_row[2]),
        .I2(ghost2_row[1]),
        .I3(rover_row[1]),
        .I4(rover_row[0]),
        .I5(s1_los_detected_reg_2),
        .O(s1_los_detected_i_20_n_0));
  LUT6 #(
    .INIT(64'hCECECEEFCECEEFFF)) 
    s1_los_detected_i_21__0
       (.I0(ghost2_row[2]),
        .I1(ghost2_row[3]),
        .I2(\s1_los_dir[1]_i_44__0_n_0 ),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_21__0_n_0));
  LUT6 #(
    .INIT(64'hFFFFFF15FFFF1515)) 
    s1_los_detected_i_22__0
       (.I0(ghost2_row[3]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_22__0_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_23__0
       (.I0(ghost2_row[0]),
        .I1(rover_row[0]),
        .I2(rover_row[2]),
        .I3(ghost2_row[2]),
        .I4(rover_row[1]),
        .I5(ghost2_row[1]),
        .O(s1_los_detected_i_23__0_n_0));
  LUT6 #(
    .INIT(64'hEEEEEAAAAAAAAAAA)) 
    s1_los_detected_i_24__0
       (.I0(s1_los_detected_i_18__0_n_0),
        .I1(s1_los_detected_i_10__0_n_0),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[2]),
        .I4(ghost2_row[3]),
        .I5(s1_los_detected_i_2__0_0),
        .O(s1_los_detected_i_24__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT4 #(
    .INIT(16'h44F4)) 
    s1_los_detected_i_25
       (.I0(rover_col[2]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .I3(rover_col[1]),
        .O(s1_los_detected_i_25_n_0));
  (* SOFT_HLUTNM = "soft_lutpair40" *) 
  LUT4 #(
    .INIT(16'hD0DD)) 
    s1_los_detected_i_26__0
       (.I0(rover_col[1]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(rover_col[2]),
        .O(s1_los_detected_i_26__0_n_0));
  LUT6 #(
    .INIT(64'h00000000000000AB)) 
    s1_los_detected_i_2__0
       (.I0(s1_los_detected_i_5__0_n_0),
        .I1(rover_row[2]),
        .I2(rover_row[3]),
        .I3(s1_los_detected_i_6__0_n_0),
        .I4(s1_los_detected_i_7__0_n_0),
        .I5(s1_los_detected_i_8__0_n_0),
        .O(s1_los_detected_i_2__0_n_0));
  LUT6 #(
    .INIT(64'h7077FFFF50555055)) 
    s1_los_detected_i_3__0
       (.I0(s1_los_detected_i_9__0_n_0),
        .I1(ghost2_row[0]),
        .I2(rover_row[0]),
        .I3(s1_los_detected_i_10__0_n_0),
        .I4(ghost2_row[1]),
        .I5(s1_los_detected_i_11__0_n_0),
        .O(s1_los_detected_i_3__0_n_0));
  LUT6 #(
    .INIT(64'hFFF1F1F1F1F1F1F1)) 
    s1_los_detected_i_4
       (.I0(s1_los_detected_i_12__0_n_0),
        .I1(s1_los_detected_i_11__0_n_0),
        .I2(s1_los_detected_i_13__0_n_0),
        .I3(s1_los_detected_i_14__0_n_0),
        .I4(s1_los_detected_i_15__0_n_0),
        .I5(s1_los_detected_reg_2),
        .O(s1_los_detected_i_4_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_5__0
       (.I0(s1_los_detected_i_16__0_n_0),
        .I1(s1_los_detected_i_17_n_0),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[3]),
        .I5(ghost2_col[0]),
        .O(s1_los_detected_i_5__0_n_0));
  LUT6 #(
    .INIT(64'h000000001D1C0000)) 
    s1_los_detected_i_6__0
       (.I0(ghost2_col[0]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[3]),
        .I3(ghost2_col[1]),
        .I4(s1_los_detected_i_11__0_n_0),
        .I5(s1_los_detected_i_2__0_0),
        .O(s1_los_detected_i_6__0_n_0));
  LUT6 #(
    .INIT(64'hBABABABAFBFBBAFB)) 
    s1_los_detected_i_7__0
       (.I0(s1_los_detected_i_18__0_n_0),
        .I1(rover_row[3]),
        .I2(ghost2_row[3]),
        .I3(rover_row[2]),
        .I4(ghost2_row[2]),
        .I5(s1_los_detected_i_19__0_n_0),
        .O(s1_los_detected_i_7__0_n_0));
  LUT6 #(
    .INIT(64'h7000000005550550)) 
    s1_los_detected_i_8__0
       (.I0(s1_los_detected_i_20_n_0),
        .I1(s1_los_detected_i_21__0_n_0),
        .I2(ghost2_col[3]),
        .I3(ghost2_col[2]),
        .I4(ghost2_col[1]),
        .I5(ghost2_col[0]),
        .O(s1_los_detected_i_8__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair43" *) 
  LUT4 #(
    .INIT(16'h805E)) 
    s1_los_detected_i_9__0
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[0]),
        .O(s1_los_detected_i_9__0_n_0));
  FDCE s1_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_detected_comb),
        .Q(s1_los_detected));
  (* SOFT_HLUTNM = "soft_lutpair34" *) 
  LUT5 #(
    .INIT(32'hFFA8FFFF)) 
    \s1_los_dir[0]_i_10__0 
       (.I0(ghost2_col[2]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[0]),
        .I3(ghost2_col[3]),
        .I4(\s1_los_dir_reg[1]_1 ),
        .O(\s1_los_dir[0]_i_10__0_n_0 ));
  LUT6 #(
    .INIT(64'h22288888E22BB88B)) 
    \s1_los_dir[0]_i_11__0 
       (.I0(\s1_los_dir[1]_i_54__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[0]_i_21__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[0]_i_19__0_n_0 ),
        .O(\s1_los_dir[0]_i_11__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT5 #(
    .INIT(32'hEEEEEEEA)) 
    \s1_los_dir[0]_i_12__0 
       (.I0(\s1_los_dir[1]_i_27__0_0 ),
        .I1(ghost2_col[3]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[0]),
        .O(\s1_los_dir[0]_i_12__0_n_0 ));
  LUT6 #(
    .INIT(64'hEEEBBBBB2EE88BB8)) 
    \s1_los_dir[0]_i_13__0 
       (.I0(\s1_los_dir[1]_i_65__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[0]_i_22__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[1]_i_48__0_n_0 ),
        .O(\s1_los_dir[0]_i_13__0_n_0 ));
  LUT6 #(
    .INIT(64'h00FF101030302020)) 
    \s1_los_dir[0]_i_14__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_68__0_n_0 ),
        .I2(\s1_los_dir[1]_i_69__0_n_0 ),
        .I3(\s1_los_dir[1]_i_48__0_n_0 ),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .I5(\s1_los_dir[0]_i_4__0_0 ),
        .O(\s1_los_dir[0]_i_14__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFF111)) 
    \s1_los_dir[0]_i_15__0 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost2_col[0]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[2]),
        .I5(ghost2_col[3]),
        .O(\s1_los_dir[0]_i_15__0_n_0 ));
  LUT6 #(
    .INIT(64'h828882888288BEBB)) 
    \s1_los_dir[0]_i_16__0 
       (.I0(\s1_los_dir[1]_i_50__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_33__0_0 [3]),
        .I3(\s1_los_dir[0]_i_23__0_n_0 ),
        .I4(\s1_los_dir[1]_i_48__0_n_0 ),
        .I5(\s1_los_dir[1]_i_47__0_n_0 ),
        .O(\s1_los_dir[0]_i_16__0_n_0 ));
  LUT6 #(
    .INIT(64'h2888288828882B8B)) 
    \s1_los_dir[0]_i_17__0 
       (.I0(\s1_los_dir[1]_i_45__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_40__0_n_0 ),
        .I4(ghost2_row[1]),
        .I5(ghost2_row[0]),
        .O(\s1_los_dir[0]_i_17__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT4 #(
    .INIT(16'hAAA9)) 
    \s1_los_dir[0]_i_18__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .O(\s1_los_dir[0]_i_18__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[0]_i_19__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .O(\s1_los_dir[0]_i_19__0_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \s1_los_dir[0]_i_1__0 
       (.I0(\s1_los_dir[0]_i_2__0_n_0 ),
        .I1(s1_los_detected_i_2__0_n_0),
        .O(los_dir_comb[0]));
  (* SOFT_HLUTNM = "soft_lutpair45" *) 
  LUT4 #(
    .INIT(16'h0332)) 
    \s1_los_dir[0]_i_20__0 
       (.I0(ghost2_row[0]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(ghost2_row[1]),
        .O(\s1_los_dir[0]_i_20__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT4 #(
    .INIT(16'h0004)) 
    \s1_los_dir[0]_i_21__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .O(\s1_los_dir[0]_i_21__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT4 #(
    .INIT(16'h0054)) 
    \s1_los_dir[0]_i_22__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[0]_i_22__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT5 #(
    .INIT(32'h0F0FFFFE)) 
    \s1_los_dir[0]_i_23__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[0]_i_23__0_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \s1_los_dir[0]_i_2__0 
       (.I0(\s1_los_dir[1]_i_4__0_n_0 ),
        .I1(\s1_los_dir[0]_i_3__0_n_0 ),
        .I2(\s1_los_dir[0]_i_4__0_n_0 ),
        .I3(\s1_los_dir[1]_i_19__0_n_0 ),
        .I4(\s1_los_dir[0]_i_5__0_n_0 ),
        .I5(\s1_los_dir[0]_i_6__0_n_0 ),
        .O(\s1_los_dir[0]_i_2__0_n_0 ));
  LUT6 #(
    .INIT(64'h7707770700007707)) 
    \s1_los_dir[0]_i_3__0 
       (.I0(\s1_los_dir[0]_i_7__0_n_0 ),
        .I1(\s1_los_dir[0]_i_8__0_n_0 ),
        .I2(\s1_los_dir[0]_i_9__0_n_0 ),
        .I3(\s1_los_dir[0]_i_10__0_n_0 ),
        .I4(\s1_los_dir[0]_i_11__0_n_0 ),
        .I5(\s1_los_dir[0]_i_12__0_n_0 ),
        .O(\s1_los_dir[0]_i_3__0_n_0 ));
  LUT6 #(
    .INIT(64'hFF04FF04FFFFFF04)) 
    \s1_los_dir[0]_i_4__0 
       (.I0(\s1_los_dir[0]_i_13__0_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_34__0_n_0 ),
        .I3(\s1_los_dir[1]_i_71__0_n_0 ),
        .I4(\s1_los_dir[0]_i_14__0_n_0 ),
        .I5(\s1_los_dir[1]_i_66__0_n_0 ),
        .O(\s1_los_dir[0]_i_4__0_n_0 ));
  LUT6 #(
    .INIT(64'h44F444F4FFFF44F4)) 
    \s1_los_dir[0]_i_5__0 
       (.I0(\s1_los_dir[0]_i_15__0_n_0 ),
        .I1(\s1_los_dir[0]_i_16__0_n_0 ),
        .I2(\s1_los_dir[0]_i_17__0_n_0 ),
        .I3(\s1_los_dir[1]_i_46__0_n_0 ),
        .I4(\s1_los_dir[1]_i_11__0_n_0 ),
        .I5(\s1_los_dir[1]_i_10__0_n_0 ),
        .O(\s1_los_dir[0]_i_5__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT4 #(
    .INIT(16'h0008)) 
    \s1_los_dir[0]_i_6__0 
       (.I0(\s1_los_dir[1]_i_9__0_n_0 ),
        .I1(\s1_los_dir[1]_i_6__0_0 ),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[3]),
        .O(\s1_los_dir[0]_i_6__0_n_0 ));
  LUT6 #(
    .INIT(64'h0100000001010101)) 
    \s1_los_dir[0]_i_7__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2__0_0 ),
        .O(\s1_los_dir[0]_i_7__0_n_0 ));
  LUT6 #(
    .INIT(64'h38AAAE3C08AAA200)) 
    \s1_los_dir[0]_i_8__0 
       (.I0(\s1_los_dir[1]_i_61_n_0 ),
        .I1(\s1_los_dir[0]_i_18__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_40__0_n_0 ),
        .I4(\s1_los_dir[1]_i_37__0_n_0 ),
        .I5(\s1_los_dir[1]_i_44__0_n_0 ),
        .O(\s1_los_dir[0]_i_8__0_n_0 ));
  LUT6 #(
    .INIT(64'h7D3C3CDD41000011)) 
    \s1_los_dir[0]_i_9__0 
       (.I0(\s1_los_dir[0]_i_19__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_40__0_n_0 ),
        .I3(\s1_los_dir[1]_i_38__0_n_0 ),
        .I4(\s1_los_dir[0]_i_20__0_n_0 ),
        .I5(\s1_los_dir[1]_i_55_n_0 ),
        .O(\s1_los_dir[0]_i_9__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair39" *) 
  LUT4 #(
    .INIT(16'h6FF6)) 
    \s1_los_dir[1]_i_105__0 
       (.I0(rover_row[3]),
        .I1(ghost2_row[3]),
        .I2(rover_row[2]),
        .I3(ghost2_row[2]),
        .O(\s1_los_dir[1]_i_105__0_n_0 ));
  LUT6 #(
    .INIT(64'hF111FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_10__0 
       (.I0(rover_col[0]),
        .I1(rover_col[1]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_10__0_n_0 ));
  LUT6 #(
    .INIT(64'hB2B88B8B82888888)) 
    \s1_los_dir[1]_i_11__0 
       (.I0(\s1_los_dir[1]_i_42__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_43_n_0 ),
        .I3(\s1_los_dir[1]_i_40__0_n_0 ),
        .I4(\s1_los_dir[1]_i_38__0_n_0 ),
        .I5(\s1_los_dir[1]_i_41_n_0 ),
        .O(\s1_los_dir[1]_i_11__0_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_12__0 
       (.I0(\s1_los_dir[1]_i_44__0_n_0 ),
        .I1(\s1_los_dir[1]_i_40__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_37__0_n_0 ),
        .I4(\s1_los_dir[1]_i_45__0_n_0 ),
        .I5(\s1_los_dir[1]_i_46__0_n_0 ),
        .O(\s1_los_dir[1]_i_12__0_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_13__0 
       (.I0(\s1_los_dir[1]_i_47__0_n_0 ),
        .I1(\s1_los_dir[1]_i_48__0_n_0 ),
        .I2(\s1_los_dir[1]_i_49__0_n_0 ),
        .I3(\s1_los_dir[1]_i_50__0_n_0 ),
        .I4(\s1_los_dir[1]_i_51__0_n_0 ),
        .I5(\s1_los_dir[1]_i_2__0_0 ),
        .O(\s1_los_dir[1]_i_13__0_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_14__0 
       (.I0(\s1_los_dir[1]_i_52__0_n_0 ),
        .I1(\s1_los_dir[1]_i_53__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_54__0_n_0 ),
        .I4(\s1_los_dir[1]_i_35__0_n_0 ),
        .I5(\s1_los_dir[1]_i_27__0_0 ),
        .O(\s1_los_dir[1]_i_14__0_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_15__0 
       (.I0(\s1_los_dir[1]_i_55_n_0 ),
        .I1(\s1_los_dir[1]_i_56__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_57__0_n_0 ),
        .I4(\s1_los_dir_reg[1]_1 ),
        .I5(\s1_los_dir[1]_i_58__0_n_0 ),
        .O(\s1_los_dir[1]_i_15__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFF417DFFFFFFFF)) 
    \s1_los_dir[1]_i_16__0 
       (.I0(\s1_los_dir[1]_i_59_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_60__0_n_0 ),
        .I3(\s1_los_dir[1]_i_61_n_0 ),
        .I4(\s1_los_dir[1]_i_5__0_0 ),
        .I5(\s1_los_dir[1]_i_62_n_0 ),
        .O(\s1_los_dir[1]_i_16__0_n_0 ));
  LUT6 #(
    .INIT(64'h0400000404444404)) 
    \s1_los_dir[1]_i_17__0 
       (.I0(\s1_los_dir[1]_i_34__0_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_63__0_n_0 ),
        .I3(\s1_los_dir[1]_i_64__0_n_0 ),
        .I4(\s1_los_dir[1]_i_37__0_n_0 ),
        .I5(\s1_los_dir[1]_i_65__0_n_0 ),
        .O(\s1_los_dir[1]_i_17__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_18__0 
       (.I0(\s1_los_dir[1]_i_66__0_n_0 ),
        .I1(\s1_los_dir[1]_i_67_n_0 ),
        .I2(\s1_los_dir[1]_i_68__0_n_0 ),
        .I3(\s1_los_dir[1]_i_69__0_n_0 ),
        .I4(\s1_los_dir[1]_i_70__0_n_0 ),
        .I5(\s1_los_dir[1]_i_71__0_n_0 ),
        .O(\s1_los_dir[1]_i_18__0_n_0 ));
  LUT5 #(
    .INIT(32'h0000BE82)) 
    \s1_los_dir[1]_i_19__0 
       (.I0(\s1_los_dir[1]_i_72__0_n_0 ),
        .I1(\s1_los_dir[1]_i_73__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_74__0_n_0 ),
        .I4(\s1_los_dir[1]_i_75__0_n_0 ),
        .O(\s1_los_dir[1]_i_19__0_n_0 ));
  LUT6 #(
    .INIT(64'h0404040404FF0404)) 
    \s1_los_dir[1]_i_1__0 
       (.I0(\s1_los_dir[1]_i_2__0_n_0 ),
        .I1(\s1_los_dir[1]_i_3__0_n_0 ),
        .I2(\s1_los_dir[1]_i_4__0_n_0 ),
        .I3(\s1_los_dir[1]_i_5__0_n_0 ),
        .I4(\s1_los_dir[1]_i_6__0_n_0 ),
        .I5(\s1_los_dir[1]_i_7__0_n_0 ),
        .O(los_dir_comb[1]));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_20 
       (.I0(\s1_los_dir[1]_i_76__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_77__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[1]_i_41_n_0 ),
        .O(\s1_los_dir[1]_i_20_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT3 #(
    .INIT(8'h15)) 
    \s1_los_dir[1]_i_21__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .O(\s1_los_dir[1]_i_21__0_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_22 
       (.I0(\s1_los_dir[1]_i_78_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_79__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[1]_i_44__0_n_0 ),
        .O(\s1_los_dir[1]_i_22_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_23 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[0]),
        .I5(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_23_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFF01FFFFFFFF)) 
    \s1_los_dir[1]_i_24__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2__0_0 ),
        .O(\s1_los_dir[1]_i_24__0_n_0 ));
  LUT6 #(
    .INIT(64'hEEBEBBBB22828888)) 
    \s1_los_dir[1]_i_25__0 
       (.I0(\s1_los_dir[1]_i_74__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_80__0_n_0 ),
        .I3(\s1_los_dir[1]_i_81__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[1]_i_72__0_n_0 ),
        .O(\s1_los_dir[1]_i_25__0_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_26__0 
       (.I0(\s1_los_dir[1]_i_47__0_n_0 ),
        .I1(\s1_los_dir[1]_i_48__0_n_0 ),
        .I2(\s1_los_dir[1]_i_49__0_n_0 ),
        .I3(\s1_los_dir[1]_i_50__0_n_0 ),
        .I4(\s1_los_dir[1]_i_5__0_0 ),
        .I5(\s1_los_dir[1]_i_82__0_n_0 ),
        .O(\s1_los_dir[1]_i_26__0_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_27__0 
       (.I0(\s1_los_dir[1]_i_44__0_n_0 ),
        .I1(\s1_los_dir[1]_i_40__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_37__0_n_0 ),
        .I4(\s1_los_dir[1]_i_45__0_n_0 ),
        .I5(\s1_los_dir[1]_i_83_n_0 ),
        .O(\s1_los_dir[1]_i_27__0_n_0 ));
  LUT6 #(
    .INIT(64'hBE82000000000000)) 
    \s1_los_dir[1]_i_28__0 
       (.I0(\s1_los_dir[1]_i_52__0_n_0 ),
        .I1(\s1_los_dir[1]_i_53__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_54__0_n_0 ),
        .I4(\s1_los_dir_reg[1]_0 ),
        .I5(\s1_los_dir[1]_i_84__0_n_0 ),
        .O(\s1_los_dir[1]_i_28__0_n_0 ));
  LUT6 #(
    .INIT(64'h000000000000BE82)) 
    \s1_los_dir[1]_i_29__0 
       (.I0(\s1_los_dir[1]_i_55_n_0 ),
        .I1(\s1_los_dir[1]_i_56__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_57__0_n_0 ),
        .I4(\s1_los_dir[1]_i_6__0_0 ),
        .I5(\s1_los_dir[1]_i_21__0_n_0 ),
        .O(\s1_los_dir[1]_i_29__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_2__0 
       (.I0(\s1_los_dir[1]_i_8__0_n_0 ),
        .I1(\s1_los_dir[1]_i_9__0_n_0 ),
        .I2(\s1_los_dir[1]_i_10__0_n_0 ),
        .I3(\s1_los_dir[1]_i_11__0_n_0 ),
        .I4(\s1_los_dir[1]_i_12__0_n_0 ),
        .I5(\s1_los_dir[1]_i_13__0_n_0 ),
        .O(\s1_los_dir[1]_i_2__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFBE82FFFF)) 
    \s1_los_dir[1]_i_30__0 
       (.I0(\s1_los_dir[1]_i_63__0_n_0 ),
        .I1(\s1_los_dir[1]_i_64__0_n_0 ),
        .I2(\s1_los_dir[1]_i_37__0_n_0 ),
        .I3(\s1_los_dir[1]_i_65__0_n_0 ),
        .I4(ghost2_col[3]),
        .I5(\s1_los_dir_reg[1]_2 ),
        .O(\s1_los_dir[1]_i_30__0_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_31__0 
       (.I0(\s1_los_dir[1]_i_59_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_60__0_n_0 ),
        .I3(\s1_los_dir[1]_i_61_n_0 ),
        .I4(\s1_los_dir[1]_i_6__0_1 ),
        .I5(\s1_los_dir[1]_i_51__0_n_0 ),
        .O(\s1_los_dir[1]_i_31__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_32__0 
       (.I0(\s1_los_dir[1]_i_85__0_n_0 ),
        .I1(\s1_los_dir[1]_i_67_n_0 ),
        .I2(\s1_los_dir[1]_i_68__0_n_0 ),
        .I3(\s1_los_dir[1]_i_69__0_n_0 ),
        .I4(\s1_los_dir[1]_i_70__0_n_0 ),
        .I5(\s1_los_dir[1]_i_86__0_n_0 ),
        .O(\s1_los_dir[1]_i_32__0_n_0 ));
  LUT6 #(
    .INIT(64'h000000004FF44004)) 
    \s1_los_dir[1]_i_33__0 
       (.I0(\s1_los_dir[1]_i_87_n_0 ),
        .I1(\s1_los_dir[1]_i_41_n_0 ),
        .I2(\s1_los_dir[1]_i_88__0_n_0 ),
        .I3(\s1_los_dir[1]_i_37__0_n_0 ),
        .I4(\s1_los_dir[1]_i_42__0_n_0 ),
        .I5(\s1_los_dir[1]_i_89__0_n_0 ),
        .O(\s1_los_dir[1]_i_33__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT4 #(
    .INIT(16'hFF80)) 
    \s1_los_dir[1]_i_34__0 
       (.I0(ghost2_col[0]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_34__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT4 #(
    .INIT(16'h01FF)) 
    \s1_los_dir[1]_i_35__0 
       (.I0(ghost2_col[0]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_35__0_n_0 ));
  LUT6 #(
    .INIT(64'h27270F0D04A40082)) 
    \s1_los_dir[1]_i_36 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_36_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555655)) 
    \s1_los_dir[1]_i_37__0 
       (.I0(\s1_los_dir[0]_i_4__0_0 ),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(\s1_los_dir[1]_i_33__0_0 [3]),
        .I3(\s1_los_dir[1]_i_44__0_n_0 ),
        .I4(\s1_los_dir[1]_i_33__0_0 [1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[1]_i_37__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT5 #(
    .INIT(32'h55555556)) 
    \s1_los_dir[1]_i_38__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [2]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[0]),
        .I4(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_38__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT4 #(
    .INIT(16'h1554)) 
    \s1_los_dir[1]_i_39__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[1]_i_39__0_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_3__0 
       (.I0(\s1_los_dir[1]_i_14__0_n_0 ),
        .I1(\s1_los_dir[1]_i_15__0_n_0 ),
        .I2(\s1_los_dir[1]_i_16__0_n_0 ),
        .I3(\s1_los_dir[1]_i_17__0_n_0 ),
        .I4(\s1_los_dir[1]_i_18__0_n_0 ),
        .I5(\s1_los_dir[1]_i_19__0_n_0 ),
        .O(\s1_los_dir[1]_i_3__0_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555556)) 
    \s1_los_dir[1]_i_40__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[0]),
        .I4(ghost2_row[1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[1]_i_40__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair55" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_41 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_41_n_0 ));
  LUT6 #(
    .INIT(64'h0013401780DCA2D4)) 
    \s1_los_dir[1]_i_42__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(ghost2_row[0]),
        .I4(ghost2_row[1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_42__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair44" *) 
  LUT4 #(
    .INIT(16'h8001)) 
    \s1_los_dir[1]_i_43 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_43_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_44__0 
       (.I0(ghost2_row[0]),
        .I1(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_44__0_n_0 ));
  LUT6 #(
    .INIT(64'h6022355C000835CC)) 
    \s1_los_dir[1]_i_45__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(ghost2_row[0]),
        .I5(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_45__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair42" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    \s1_los_dir[1]_i_46__0 
       (.I0(ghost2_col[1]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[3]),
        .I3(\s1_los_dir[0]_i_5__0_0 ),
        .O(\s1_los_dir[1]_i_46__0_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_47__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_47__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \s1_los_dir[1]_i_48__0 
       (.I0(ghost2_row[0]),
        .I1(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_48__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT4 #(
    .INIT(16'h5666)) 
    \s1_los_dir[1]_i_49__0 
       (.I0(\s1_los_dir[0]_i_4__0_0 ),
        .I1(\s1_los_dir[1]_i_33__0_0 [3]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_49__0_n_0 ));
  LUT6 #(
    .INIT(64'hFF10101010101010)) 
    \s1_los_dir[1]_i_4__0 
       (.I0(ghost2_col[3]),
        .I1(\s1_los_dir_reg[1]_0 ),
        .I2(\s1_los_dir[1]_i_20_n_0 ),
        .I3(\s1_los_dir[1]_i_21__0_n_0 ),
        .I4(\s1_los_dir_reg[1]_2 ),
        .I5(\s1_los_dir[1]_i_22_n_0 ),
        .O(\s1_los_dir[1]_i_4__0_n_0 ));
  LUT6 #(
    .INIT(64'h5CCC22A05CC60800)) 
    \s1_los_dir[1]_i_50__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(ghost2_row[0]),
        .I5(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_50__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    \s1_los_dir[1]_i_51__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .I3(ghost2_col[0]),
        .O(\s1_los_dir[1]_i_51__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair35" *) 
  LUT5 #(
    .INIT(32'h44400004)) 
    \s1_los_dir[1]_i_52__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_52__0_n_0 ));
  LUT6 #(
    .INIT(64'h0000001155555554)) 
    \s1_los_dir[1]_i_53__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(ghost2_row[1]),
        .I2(ghost2_row[0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_53__0_n_0 ));
  LUT6 #(
    .INIT(64'h083009B52AA82AA0)) 
    \s1_los_dir[1]_i_54__0 
       (.I0(ghost2_row[0]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [2]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(ghost2_row[1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [3]),
        .O(\s1_los_dir[1]_i_54__0_n_0 ));
  LUT6 #(
    .INIT(64'h1F0C0054FF00E000)) 
    \s1_los_dir[1]_i_55 
       (.I0(ghost2_row[1]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .I5(\s1_los_dir[1]_i_33__0_0 [3]),
        .O(\s1_los_dir[1]_i_55_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF880001)) 
    \s1_los_dir[1]_i_56__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [0]),
        .I1(ghost2_row[1]),
        .I2(ghost2_row[0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .I5(\s1_los_dir[1]_i_33__0_0 [3]),
        .O(\s1_los_dir[1]_i_56__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT4 #(
    .INIT(16'h0802)) 
    \s1_los_dir[1]_i_57__0 
       (.I0(ghost2_row[0]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(ghost2_row[1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_57__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair46" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    \s1_los_dir[1]_i_58__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[0]),
        .I2(ghost2_col[1]),
        .I3(ghost2_col[2]),
        .O(\s1_los_dir[1]_i_58__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT5 #(
    .INIT(32'h00000095)) 
    \s1_los_dir[1]_i_59 
       (.I0(\s1_los_dir[1]_i_33__0_0 [2]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[0]),
        .I4(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_59_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_5__0 
       (.I0(\s1_los_dir[1]_i_23_n_0 ),
        .I1(\s1_los_dir[1]_i_9__0_n_0 ),
        .I2(\s1_los_dir[1]_i_24__0_n_0 ),
        .I3(\s1_los_dir[1]_i_25__0_n_0 ),
        .I4(\s1_los_dir[1]_i_26__0_n_0 ),
        .I5(\s1_los_dir[1]_i_27__0_n_0 ),
        .O(\s1_los_dir[1]_i_5__0_n_0 ));
  LUT6 #(
    .INIT(64'h1155115511551554)) 
    \s1_los_dir[1]_i_60__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(ghost2_row[0]),
        .I5(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_60__0_n_0 ));
  LUT6 #(
    .INIT(64'h078DA4822F0D0002)) 
    \s1_los_dir[1]_i_61 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(ghost2_row[0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .I5(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_61_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair47" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \s1_los_dir[1]_i_62 
       (.I0(ghost2_col[2]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_62_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT5 #(
    .INIT(32'h3F7FFFBF)) 
    \s1_los_dir[1]_i_63__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_63__0_n_0 ));
  LUT6 #(
    .INIT(64'h0000111155555554)) 
    \s1_los_dir[1]_i_64__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_64__0_n_0 ));
  LUT6 #(
    .INIT(64'hA5FBC5B3C5F7C5FF)) 
    \s1_los_dir[1]_i_65__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [2]),
        .I1(\s1_los_dir[1]_i_33__0_0 [3]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [0]),
        .I5(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_65__0_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_66__0 
       (.I0(ghost2_col[2]),
        .I1(ghost2_col[1]),
        .I2(ghost2_col[0]),
        .I3(ghost2_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_66__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair50" *) 
  LUT3 #(
    .INIT(8'hA9)) 
    \s1_los_dir[1]_i_67 
       (.I0(\s1_los_dir[0]_i_4__0_0 ),
        .I1(\s1_los_dir[1]_i_33__0_0 [3]),
        .I2(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_67_n_0 ));
  LUT6 #(
    .INIT(64'hCCC0CCC800033333)) 
    \s1_los_dir[1]_i_68__0 
       (.I0(ghost2_row[1]),
        .I1(\s1_los_dir[1]_i_33__0_0 [3]),
        .I2(\s1_los_dir[1]_i_33__0_0 [0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [1]),
        .I4(ghost2_row[0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_68__0_n_0 ));
  LUT6 #(
    .INIT(64'hF6BFF48FF49FFC0F)) 
    \s1_los_dir[1]_i_69__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [3]),
        .I3(\s1_los_dir[1]_i_33__0_0 [2]),
        .I4(ghost2_row[1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[1]_i_69__0_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_6__0 
       (.I0(\s1_los_dir[1]_i_28__0_n_0 ),
        .I1(\s1_los_dir[1]_i_29__0_n_0 ),
        .I2(\s1_los_dir[1]_i_30__0_n_0 ),
        .I3(\s1_los_dir[1]_i_31__0_n_0 ),
        .I4(\s1_los_dir[1]_i_32__0_n_0 ),
        .I5(\s1_los_dir[1]_i_33__0_n_0 ),
        .O(\s1_los_dir[1]_i_6__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair48" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \s1_los_dir[1]_i_70__0 
       (.I0(\s1_los_dir[0]_i_4__0_0 ),
        .I1(\s1_los_dir[1]_i_33__0_0 [2]),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_70__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hFE)) 
    \s1_los_dir[1]_i_71__0 
       (.I0(\s1_los_dir[1]_i_92_n_0 ),
        .I1(\s1_los_dir[1]_i_93_n_0 ),
        .I2(\s1_los_dir[1]_i_94__0_n_0 ),
        .O(\s1_los_dir[1]_i_71__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair33" *) 
  LUT5 #(
    .INIT(32'h20001030)) 
    \s1_los_dir[1]_i_72__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[1]),
        .I2(ghost2_row[0]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_72__0_n_0 ));
  LUT6 #(
    .INIT(64'h0011555555555554)) 
    \s1_los_dir[1]_i_73__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [1]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_73__0_n_0 ));
  LUT6 #(
    .INIT(64'h74F0D2D2202A0020)) 
    \s1_los_dir[1]_i_74__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [2]),
        .I3(ghost2_row[1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [1]),
        .I5(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_74__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFF4)) 
    \s1_los_dir[1]_i_75__0 
       (.I0(rover_col[1]),
        .I1(\s1_los_dir[1]_i_2__0_0 ),
        .I2(ghost2_col[0]),
        .I3(ghost2_col[3]),
        .I4(ghost2_col[1]),
        .I5(ghost2_col[2]),
        .O(\s1_los_dir[1]_i_75__0_n_0 ));
  LUT6 #(
    .INIT(64'h02021F5F002AD050)) 
    \s1_los_dir[1]_i_76__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(ghost2_row[1]),
        .I4(ghost2_row[0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_76__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair49" *) 
  LUT4 #(
    .INIT(16'h0110)) 
    \s1_los_dir[1]_i_77__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [0]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[0]),
        .O(\s1_los_dir[1]_i_77__0_n_0 ));
  LUT6 #(
    .INIT(64'h0727270F2404A400)) 
    \s1_los_dir[1]_i_78 
       (.I0(\s1_los_dir[1]_i_33__0_0 [3]),
        .I1(\s1_los_dir[1]_i_33__0_0 [1]),
        .I2(ghost2_row[0]),
        .I3(ghost2_row[1]),
        .I4(\s1_los_dir[1]_i_33__0_0 [0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_78_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair51" *) 
  LUT4 #(
    .INIT(16'h0154)) 
    \s1_los_dir[1]_i_79__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [1]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .O(\s1_los_dir[1]_i_79__0_n_0 ));
  LUT6 #(
    .INIT(64'h404040FF40404040)) 
    \s1_los_dir[1]_i_7__0 
       (.I0(\s1_los_dir_reg[1]_1 ),
        .I1(\s1_los_dir[1]_i_34__0_n_0 ),
        .I2(\s1_los_dir[1]_i_22_n_0 ),
        .I3(rover_col[3]),
        .I4(\s1_los_dir[1]_i_35__0_n_0 ),
        .I5(\s1_los_dir[1]_i_20_n_0 ),
        .O(\s1_los_dir[1]_i_7__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair32" *) 
  LUT5 #(
    .INIT(32'hF0E00001)) 
    \s1_los_dir[1]_i_80__0 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_80__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair53" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \s1_los_dir[1]_i_81__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [0]),
        .I1(ghost2_row[0]),
        .I2(ghost2_row[1]),
        .O(\s1_los_dir[1]_i_81__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair54" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_82__0 
       (.I0(ghost2_col[2]),
        .I1(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_82__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair30" *) 
  LUT5 #(
    .INIT(32'h5777FFFF)) 
    \s1_los_dir[1]_i_83 
       (.I0(\s1_los_dir[1]_i_27__0_0 ),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .I3(ghost2_col[0]),
        .I4(ghost2_col[3]),
        .O(\s1_los_dir[1]_i_83_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair38" *) 
  LUT3 #(
    .INIT(8'hA8)) 
    \s1_los_dir[1]_i_84__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[2]),
        .I2(ghost2_col[1]),
        .O(\s1_los_dir[1]_i_84__0_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_85__0 
       (.I0(rover_col[2]),
        .I1(rover_col[1]),
        .I2(rover_col[0]),
        .I3(rover_col[3]),
        .I4(ghost2_col[3]),
        .I5(ghost2_col[2]),
        .O(\s1_los_dir[1]_i_85__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair52" *) 
  LUT3 #(
    .INIT(8'hBF)) 
    \s1_los_dir[1]_i_86__0 
       (.I0(\s1_los_dir[1]_i_92_n_0 ),
        .I1(\s1_los_dir[1]_i_95__0_n_0 ),
        .I2(\s1_los_dir[1]_i_96__0_n_0 ),
        .O(\s1_los_dir[1]_i_86__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair31" *) 
  LUT5 #(
    .INIT(32'h80007FFF)) 
    \s1_los_dir[1]_i_87 
       (.I0(ghost2_row[1]),
        .I1(ghost2_row[0]),
        .I2(\s1_los_dir[1]_i_33__0_0 [1]),
        .I3(\s1_los_dir[1]_i_33__0_0 [0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [2]),
        .O(\s1_los_dir[1]_i_87_n_0 ));
  LUT6 #(
    .INIT(64'h0111111111111110)) 
    \s1_los_dir[1]_i_88__0 
       (.I0(\s1_los_dir[1]_i_33__0_0 [2]),
        .I1(\s1_los_dir[1]_i_33__0_0 [3]),
        .I2(ghost2_row[1]),
        .I3(ghost2_row[0]),
        .I4(\s1_los_dir[1]_i_33__0_0 [0]),
        .I5(\s1_los_dir[1]_i_33__0_0 [1]),
        .O(\s1_los_dir[1]_i_88__0_n_0 ));
  LUT6 #(
    .INIT(64'h8FFF8FFF8FFFFFFF)) 
    \s1_los_dir[1]_i_89__0 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost2_col[2]),
        .I3(ghost2_col[3]),
        .I4(ghost2_col[0]),
        .I5(ghost2_col[1]),
        .O(\s1_los_dir[1]_i_89__0_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_8__0 
       (.I0(ghost2_col[3]),
        .I1(ghost2_col[2]),
        .I2(rover_col[2]),
        .I3(rover_col[1]),
        .I4(rover_col[0]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_8__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair29" *) 
  LUT5 #(
    .INIT(32'hFFFF6FF6)) 
    \s1_los_dir[1]_i_92 
       (.I0(ghost2_row[1]),
        .I1(rover_row[1]),
        .I2(ghost2_row[0]),
        .I3(rover_row[0]),
        .I4(\s1_los_dir[1]_i_105__0_n_0 ),
        .O(\s1_los_dir[1]_i_92_n_0 ));
  LUT6 #(
    .INIT(64'h20F220F2B0FB20F2)) 
    \s1_los_dir[1]_i_93 
       (.I0(ghost2_col[2]),
        .I1(rover_col[2]),
        .I2(ghost2_col[3]),
        .I3(rover_col[3]),
        .I4(ghost2_col[1]),
        .I5(rover_col[1]),
        .O(\s1_los_dir[1]_i_93_n_0 ));
  LUT5 #(
    .INIT(32'hA2A200A2)) 
    \s1_los_dir[1]_i_94__0 
       (.I0(s1_los_detected_i_26__0_n_0),
        .I1(rover_col[3]),
        .I2(ghost2_col[3]),
        .I3(rover_col[0]),
        .I4(ghost2_col[0]),
        .O(\s1_los_dir[1]_i_94__0_n_0 ));
  LUT6 #(
    .INIT(64'hDD4D0000FFFFDD4D)) 
    \s1_los_dir[1]_i_95__0 
       (.I0(rover_col[2]),
        .I1(ghost2_col[2]),
        .I2(rover_col[1]),
        .I3(ghost2_col[1]),
        .I4(ghost2_col[3]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_95__0_n_0 ));
  LUT5 #(
    .INIT(32'hAEAEFFAE)) 
    \s1_los_dir[1]_i_96__0 
       (.I0(s1_los_detected_i_25_n_0),
        .I1(ghost2_col[0]),
        .I2(rover_col[0]),
        .I3(ghost2_col[3]),
        .I4(rover_col[3]),
        .O(\s1_los_dir[1]_i_96__0_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_9__0 
       (.I0(\s1_los_dir[1]_i_36_n_0 ),
        .I1(\s1_los_dir[1]_i_37__0_n_0 ),
        .I2(\s1_los_dir[1]_i_38__0_n_0 ),
        .I3(\s1_los_dir[1]_i_39__0_n_0 ),
        .I4(\s1_los_dir[1]_i_40__0_n_0 ),
        .I5(\s1_los_dir[1]_i_41_n_0 ),
        .O(\s1_los_dir[1]_i_9__0_n_0 ));
  FDCE \s1_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_dir_comb[0]),
        .Q(s1_los_dir[0]));
  FDCE \s1_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_dir_comb[1]),
        .Q(s1_los_dir[1]));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_10__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__0_n_6),
        .O(s2_can_down_i_10__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_11__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_11__0_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_12__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__0_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_down_i_12__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_13__0
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_down_reg_i_16__0_n_7),
        .O(s2_can_down_i_13__0_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_14__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .O(s2_can_down_i_14__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_15__0
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_15__0_n_0));
  LUT4 #(
    .INIT(16'h542B)) 
    s2_can_down_i_17__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_down_i_17__0_n_0));
  LUT4 #(
    .INIT(16'h8505)) 
    s2_can_down_i_18__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_18__0_n_0));
  LUT4 #(
    .INIT(16'h1A9A)) 
    s2_can_down_i_19__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_19__0_n_0));
  LUT6 #(
    .INIT(64'h0000000707070007)) 
    s2_can_down_i_1__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[3]),
        .I3(s2_can_down_i_2__0_n_0),
        .I4(s2_can_down_reg_i_3__0_n_5),
        .I5(s2_can_down_i_4__0_n_0),
        .O(wc_down));
  LUT2 #(
    .INIT(4'hE)) 
    s2_can_down_i_20__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_20__0_n_0));
  LUT4 #(
    .INIT(16'h651A)) 
    s2_can_down_i_21__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_21__0_n_0));
  LUT4 #(
    .INIT(16'h4B52)) 
    s2_can_down_i_22__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_22__0_n_0));
  LUT4 #(
    .INIT(16'h1CE3)) 
    s2_can_down_i_23__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_23__0_n_0));
  LUT3 #(
    .INIT(8'h65)) 
    s2_can_down_i_24__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_down_i_24__0_n_0));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_down_i_2__0
       (.I0(s2_can_down_reg_i_3__0_n_6),
        .I1(s2_can_down_reg_i_5__0_n_6),
        .I2(s2_can_down_reg_i_3__0_n_7),
        .I3(s2_can_down_reg_i_5__0_n_5),
        .I4(s2_can_down_reg_i_5__0_n_4),
        .I5(s2_can_down_reg_i_5__0_n_7),
        .O(s2_can_down_i_2__0_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    s2_can_down_i_4__0
       (.I0(s2_can_down_reg_i_3__0_n_7),
        .I1(s2_can_down_reg_i_5__0_n_7),
        .I2(s2_can_down_reg_i_5__0_n_6),
        .O(s2_can_down_i_4__0_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_down_i_6__0
       (.I0(s2_can_down_reg_i_16__0_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_down_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_down_i_9__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__0_n_6),
        .I2(s2_can_down_reg_i_16__0_n_5),
        .O(s2_can_down_i_9__0_n_0));
  FDCE s2_can_down_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_down),
        .Q(s2_can_down));
  CARRY4 s2_can_down_reg_i_16__0
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_16__0_n_0,s2_can_down_reg_i_16__0_n_1,s2_can_down_reg_i_16__0_n_2,s2_can_down_reg_i_16__0_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_18__0_n_0,s2_can_down_i_19__0_n_0,s2_can_down_i_20__0_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_0 ,s2_can_down_reg_i_16__0_n_5,s2_can_down_reg_i_16__0_n_6,s2_can_down_reg_i_16__0_n_7}),
        .S({s2_can_down_i_21__0_n_0,s2_can_down_i_22__0_n_0,s2_can_down_i_23__0_n_0,s2_can_down_i_24__0_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_3__0
       (.CI(s2_can_down_reg_i_5__0_n_0),
        .CO({NLW_s2_can_down_reg_i_3__0_CO_UNCONNECTED[3:2],s2_can_down_reg_i_3__0_n_2,s2_can_down_reg_i_3__0_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_down_i_6__0_n_0}),
        .O({NLW_s2_can_down_reg_i_3__0_O_UNCONNECTED[3],s2_can_down_reg_i_3__0_n_5,s2_can_down_reg_i_3__0_n_6,s2_can_down_reg_i_3__0_n_7}),
        .S({1'b0,s2_can_down_reg_i_7__0_n_7,s2_can_down_reg_0,s2_can_down_i_9__0_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_5__0
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_5__0_n_0,s2_can_down_reg_i_5__0_n_1,s2_can_down_reg_i_5__0_n_2,s2_can_down_reg_i_5__0_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_10__0_n_0,s1_ghost_col[2],s2_can_down_i_11__0_n_0,s1_ghost_row[0]}),
        .O({s2_can_down_reg_i_5__0_n_4,s2_can_down_reg_i_5__0_n_5,s2_can_down_reg_i_5__0_n_6,s2_can_down_reg_i_5__0_n_7}),
        .S({s2_can_down_i_12__0_n_0,s2_can_down_i_13__0_n_0,s2_can_down_i_14__0_n_0,s2_can_down_i_15__0_n_0}));
  CARRY4 s2_can_down_reg_i_7__0
       (.CI(s2_can_down_reg_i_16__0_n_0),
        .CO(NLW_s2_can_down_reg_i_7__0_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_down_reg_i_7__0_O_UNCONNECTED[3:1],s2_can_down_reg_i_7__0_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_down_i_17__0_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_10__0
       (.I0(s1_ghost_row[1]),
        .O(s2_can_left_i_10__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_11__0
       (.I0(s1_ghost_row[0]),
        .O(s2_can_left_i_11__0_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_left_i_12__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__0_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_left_i_12__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_13__0
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__0_n_7),
        .O(s2_can_left_i_13__0_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_14__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .O(s2_can_left_i_14__0_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_15__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_left_i_15__0_n_0));
  LUT6 #(
    .INIT(64'hA2A2A202A2A2A2A2)) 
    s2_can_left_i_1__0
       (.I0(wc_left01_in),
        .I1(s2_can_left_i_3__0_n_0),
        .I2(s2_can_left_reg_i_4__0_n_5),
        .I3(s2_can_left_reg_i_5__0_n_6),
        .I4(s2_can_left_reg_i_5__0_n_7),
        .I5(s2_can_left_reg_i_4__0_n_7),
        .O(wc_left));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    s2_can_left_i_2__0
       (.I0(s1_ghost_col[2]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_col[3]),
        .O(wc_left01_in));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_left_i_3__0
       (.I0(s2_can_left_reg_i_4__0_n_6),
        .I1(s2_can_left_reg_i_5__0_n_6),
        .I2(s2_can_left_reg_i_4__0_n_7),
        .I3(s2_can_left_reg_i_5__0_n_5),
        .I4(s2_can_left_reg_i_5__0_n_4),
        .I5(s2_can_left_reg_i_5__0_n_7),
        .O(s2_can_left_i_3__0_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_left_i_6__0
       (.I0(s2_can_right_reg_i_7__0_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_left_i_6__0_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_7__0
       (.I0(s2_can_right_reg_i_7__0_n_4),
        .O(p_1_in));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_left_i_8__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__0_n_6),
        .I2(s2_can_right_reg_i_7__0_n_5),
        .O(s2_can_left_i_8__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_9__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__0_n_6),
        .O(s2_can_left_i_9__0_n_0));
  FDCE s2_can_left_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_left),
        .Q(s2_can_left));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_4__0
       (.CI(s2_can_left_reg_i_5__0_n_0),
        .CO({NLW_s2_can_left_reg_i_4__0_CO_UNCONNECTED[3:2],s2_can_left_reg_i_4__0_n_2,s2_can_left_reg_i_4__0_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_left_i_6__0_n_0}),
        .O({NLW_s2_can_left_reg_i_4__0_O_UNCONNECTED[3],s2_can_left_reg_i_4__0_n_5,s2_can_left_reg_i_4__0_n_6,s2_can_left_reg_i_4__0_n_7}),
        .S({1'b0,s2_can_right_reg_i_9__0_n_7,p_1_in,s2_can_left_i_8__0_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_5__0
       (.CI(1'b0),
        .CO({s2_can_left_reg_i_5__0_n_0,s2_can_left_reg_i_5__0_n_1,s2_can_left_reg_i_5__0_n_2,s2_can_left_reg_i_5__0_n_3}),
        .CYINIT(1'b1),
        .DI({s2_can_left_i_9__0_n_0,s1_ghost_col[2],s2_can_left_i_10__0_n_0,s2_can_left_i_11__0_n_0}),
        .O({s2_can_left_reg_i_5__0_n_4,s2_can_left_reg_i_5__0_n_5,s2_can_left_reg_i_5__0_n_6,s2_can_left_reg_i_5__0_n_7}),
        .S({s2_can_left_i_12__0_n_0,s2_can_left_i_13__0_n_0,s2_can_left_i_14__0_n_0,s2_can_left_i_15__0_n_0}));
  LUT5 #(
    .INIT(32'h2ABFD540)) 
    s2_can_right_i_10__0
       (.I0(s2_can_right_i_8__0_n_0),
        .I1(s2_can_right_reg_i_7__0_n_6),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__0_n_5),
        .I4(s2_can_right_reg_i_7__0_n_4),
        .O(s2_can_right_i_10__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT4 #(
    .INIT(16'h7887)) 
    s2_can_right_i_11__0
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_11__0_n_0));
  LUT6 #(
    .INIT(64'h7887F00FF00F8778)) 
    s2_can_right_i_12__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .I2(s2_can_right_reg_i_7__0_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s1_ghost_col[1]),
        .I5(s1_ghost_row[1]),
        .O(s2_can_right_i_12__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT5 #(
    .INIT(32'h56A9A956)) 
    s2_can_right_i_13__0
       (.I0(s2_can_right_i_6__0_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__0_n_7),
        .I3(s2_can_right_reg_i_7__0_n_6),
        .I4(s1_ghost_col[3]),
        .O(s2_can_right_i_13__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair37" *) 
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_14__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_right_i_14__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_15__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .O(s2_can_right_i_15__0_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_16__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .O(s2_can_right_i_16__0_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    s2_can_right_i_17__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_17__0_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_18__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[3]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_18__0_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_19__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[3]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_19__0_n_0));
  LUT6 #(
    .INIT(64'h0000077777770777)) 
    s2_can_right_i_1__0
       (.I0(s1_ghost_col[3]),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_i_2__0_n_0),
        .I3(s2_can_right_i_3__0_n_0),
        .I4(s2_can_right_i_4__0_n_0),
        .I5(s2_can_right_i_5__0_n_0),
        .O(wc_right));
  LUT4 #(
    .INIT(16'h2DD2)) 
    s2_can_right_i_20__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_right_i_20__0_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_21__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_21__0_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    s2_can_right_i_22__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .O(s2_can_right_i_22__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair36" *) 
  LUT4 #(
    .INIT(16'h0990)) 
    s2_can_right_i_2__0
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_2__0_n_0));
  LUT6 #(
    .INIT(64'hAB54FD02FD0254AB)) 
    s2_can_right_i_3__0
       (.I0(s2_can_right_i_6__0_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__0_n_7),
        .I3(s2_can_right_reg_i_7__0_n_5),
        .I4(s2_can_right_reg_i_7__0_n_6),
        .I5(s1_ghost_col[3]),
        .O(s2_can_right_i_3__0_n_0));
  LUT6 #(
    .INIT(64'h15550111EAAAFEEE)) 
    s2_can_right_i_4__0
       (.I0(s2_can_right_reg_i_7__0_n_4),
        .I1(s2_can_right_reg_i_7__0_n_5),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__0_n_6),
        .I4(s2_can_right_i_8__0_n_0),
        .I5(s2_can_right_reg_i_9__0_n_7),
        .O(s2_can_right_i_4__0_n_0));
  LUT6 #(
    .INIT(64'hF0A52D0F18080088)) 
    s2_can_right_i_5__0
       (.I0(s2_can_right_i_10__0_n_0),
        .I1(s2_can_right_i_11__0_n_0),
        .I2(s2_can_right_i_3__0_n_0),
        .I3(s2_can_right_i_12__0_n_0),
        .I4(s2_can_right_i_13__0_n_0),
        .I5(s2_can_right_i_14__0_n_0),
        .O(s2_can_right_i_5__0_n_0));
  LUT6 #(
    .INIT(64'h0666666F666F666F)) 
    s2_can_right_i_6__0
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__0_n_7),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_col[1]),
        .I4(s1_ghost_row[0]),
        .I5(s1_ghost_col[0]),
        .O(s2_can_right_i_6__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair28" *) 
  LUT5 #(
    .INIT(32'h999F0009)) 
    s2_can_right_i_8__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__0_n_6),
        .I2(s2_can_right_reg_i_7__0_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s2_can_right_i_6__0_n_0),
        .O(s2_can_right_i_8__0_n_0));
  FDCE s2_can_right_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_right),
        .Q(s2_can_right));
  CARRY4 s2_can_right_reg_i_7__0
       (.CI(1'b0),
        .CO({s2_can_right_reg_i_7__0_n_0,s2_can_right_reg_i_7__0_n_1,s2_can_right_reg_i_7__0_n_2,s2_can_right_reg_i_7__0_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_right_i_15__0_n_0,s2_can_right_i_16__0_n_0,s2_can_right_i_17__0_n_0,1'b0}),
        .O({s2_can_right_reg_i_7__0_n_4,s2_can_right_reg_i_7__0_n_5,s2_can_right_reg_i_7__0_n_6,s2_can_right_reg_i_7__0_n_7}),
        .S({s2_can_right_i_18__0_n_0,s2_can_right_i_19__0_n_0,s2_can_right_i_20__0_n_0,s2_can_right_i_21__0_n_0}));
  CARRY4 s2_can_right_reg_i_9__0
       (.CI(s2_can_right_reg_i_7__0_n_0),
        .CO(NLW_s2_can_right_reg_i_9__0_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_right_reg_i_9__0_O_UNCONNECTED[3:1],s2_can_right_reg_i_9__0_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_right_i_22__0_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_10__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__0_n_6),
        .O(s2_can_up_i_10__0_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_up_i_11__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .O(wc_down5));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_up_i_12__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__0_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_up_i_12__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_13__0
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_up_reg_i_16__0_n_7),
        .O(s2_can_up_i_13__0_n_0));
  LUT3 #(
    .INIT(8'h69)) 
    s2_can_up_i_14__0
       (.I0(s1_ghost_col[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_14__0_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_15__0
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_up_i_15__0_n_0));
  LUT4 #(
    .INIT(16'h42BF)) 
    s2_can_up_i_17__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_17__0_n_0));
  LUT4 #(
    .INIT(16'h1213)) 
    s2_can_up_i_18__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_18__0_n_0));
  LUT4 #(
    .INIT(16'h6564)) 
    s2_can_up_i_19__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_19__0_n_0));
  LUT5 #(
    .INIT(32'h0000FFFE)) 
    s2_can_up_i_1__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[2]),
        .I4(s2_can_up_i_2__0_n_0),
        .O(wc_up));
  LUT3 #(
    .INIT(8'hED)) 
    s2_can_up_i_20__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_20__0_n_0));
  LUT4 #(
    .INIT(16'h9599)) 
    s2_can_up_i_21__0
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_21__0_n_0));
  LUT4 #(
    .INIT(16'h5964)) 
    s2_can_up_i_22__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_22__0_n_0));
  LUT4 #(
    .INIT(16'h738C)) 
    s2_can_up_i_23__0
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_23__0_n_0));
  LUT3 #(
    .INIT(8'hA6)) 
    s2_can_up_i_24__0
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_up_i_24__0_n_0));
  LUT6 #(
    .INIT(64'h0028FFFF00280000)) 
    s2_can_up_i_2__0
       (.I0(s2_can_up_reg_i_3__0_n_7),
        .I1(s1_ghost_col[0]),
        .I2(s1_ghost_row[0]),
        .I3(s2_can_up_reg_i_4__0_n_6),
        .I4(s2_can_up_reg_i_3__0_n_5),
        .I5(s2_can_up_i_5__0_n_0),
        .O(s2_can_up_i_2__0_n_0));
  LUT6 #(
    .INIT(64'hF0A5870F42020022)) 
    s2_can_up_i_5__0
       (.I0(s2_can_up_reg_i_3__0_n_6),
        .I1(s2_can_up_reg_i_4__0_n_6),
        .I2(s2_can_up_reg_i_3__0_n_7),
        .I3(s2_can_up_reg_i_4__0_n_5),
        .I4(s2_can_up_reg_i_4__0_n_4),
        .I5(s2_can_right_i_14__0_n_0),
        .O(s2_can_up_i_5__0_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_up_i_6__0
       (.I0(s2_can_up_reg_i_16__0_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_up_i_6__0_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_up_i_9__0
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__0_n_6),
        .I2(s2_can_up_reg_i_16__0_n_5),
        .O(s2_can_up_i_9__0_n_0));
  FDCE s2_can_up_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_up),
        .Q(s2_can_up));
  CARRY4 s2_can_up_reg_i_16__0
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_16__0_n_0,s2_can_up_reg_i_16__0_n_1,s2_can_up_reg_i_16__0_n_2,s2_can_up_reg_i_16__0_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_18__0_n_0,s2_can_up_i_19__0_n_0,s2_can_up_i_20__0_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_1 ,s2_can_up_reg_i_16__0_n_5,s2_can_up_reg_i_16__0_n_6,s2_can_up_reg_i_16__0_n_7}),
        .S({s2_can_up_i_21__0_n_0,s2_can_up_i_22__0_n_0,s2_can_up_i_23__0_n_0,s2_can_up_i_24__0_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_3__0
       (.CI(s2_can_up_reg_i_4__0_n_0),
        .CO({NLW_s2_can_up_reg_i_3__0_CO_UNCONNECTED[3:2],s2_can_up_reg_i_3__0_n_2,s2_can_up_reg_i_3__0_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_up_i_6__0_n_0}),
        .O({NLW_s2_can_up_reg_i_3__0_O_UNCONNECTED[3],s2_can_up_reg_i_3__0_n_5,s2_can_up_reg_i_3__0_n_6,s2_can_up_reg_i_3__0_n_7}),
        .S({1'b0,s2_can_up_reg_i_7__0_n_7,s2_can_up_i_2__0_0,s2_can_up_i_9__0_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_4__0
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_4__0_n_0,s2_can_up_reg_i_4__0_n_1,s2_can_up_reg_i_4__0_n_2,s2_can_up_reg_i_4__0_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_10__0_n_0,s1_ghost_col[2],wc_down5,s1_ghost_row[0]}),
        .O({s2_can_up_reg_i_4__0_n_4,s2_can_up_reg_i_4__0_n_5,s2_can_up_reg_i_4__0_n_6,NLW_s2_can_up_reg_i_4__0_O_UNCONNECTED[0]}),
        .S({s2_can_up_i_12__0_n_0,s2_can_up_i_13__0_n_0,s2_can_up_i_14__0_n_0,s2_can_up_i_15__0_n_0}));
  CARRY4 s2_can_up_reg_i_7__0
       (.CI(s2_can_up_reg_i_16__0_n_0),
        .CO(NLW_s2_can_up_reg_i_7__0_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_up_reg_i_7__0_O_UNCONNECTED[3:1],s2_can_up_reg_i_7__0_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_up_i_17__0_n_0}));
  FDCE \s2_facing_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[0]),
        .Q(s2_facing[0]));
  FDCE \s2_facing_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[1]),
        .Q(s2_facing[1]));
  FDCE s2_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_detected),
        .Q(s2_los_detected));
  FDCE \s2_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[0]),
        .Q(s2_los_dir[0]));
  FDCE \s2_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[1]),
        .Q(s2_los_dir[1]));
endmodule

(* ORIG_REF_NAME = "ghost_top" *) 
module ghost_bd_ghost_multi_0_0_ghost_top_1
   (\s1_ghost_row_reg[2]_0 ,
    \s1_ghost_row_reg[2]_1 ,
    D,
    E,
    S_AXI_ACLK,
    AR,
    s1_los_detected_reg_0,
    s2_can_down_reg_0,
    s2_can_up_i_2__1_0,
    s1_los_detected_reg_1,
    \s1_los_dir[1]_i_33__1_0 ,
    ghost3_row,
    \s1_los_dir[1]_i_6__1_0 ,
    ghost3_col,
    rover_col,
    rover_row,
    s1_los_detected_reg_2,
    s1_los_detected_i_2__1_0,
    s1_los_detected_i_4__0_0,
    \s1_los_dir[1]_i_2__1_0 ,
    \s1_los_dir[0]_i_5__1_0 ,
    \s1_los_dir_reg[1]_0 ,
    \s1_los_dir[1]_i_27__1_0 ,
    \s1_los_dir_reg[1]_1 ,
    \s1_los_dir[1]_i_5__1_0 ,
    \s1_los_dir_reg[1]_2 ,
    \s1_los_dir[1]_i_6__1_1 ,
    \s1_los_dir[0]_i_4__1_0 ,
    p_0_in__0);
  output [0:0]\s1_ghost_row_reg[2]_0 ;
  output [0:0]\s1_ghost_row_reg[2]_1 ;
  output [1:0]D;
  input [0:0]E;
  input S_AXI_ACLK;
  input [0:0]AR;
  input [0:0]s1_los_detected_reg_0;
  input [0:0]s2_can_down_reg_0;
  input [0:0]s2_can_up_i_2__1_0;
  input s1_los_detected_reg_1;
  input [3:0]\s1_los_dir[1]_i_33__1_0 ;
  input [3:0]ghost3_row;
  input \s1_los_dir[1]_i_6__1_0 ;
  input [3:0]ghost3_col;
  input [3:0]rover_col;
  input [3:0]rover_row;
  input s1_los_detected_reg_2;
  input s1_los_detected_i_2__1_0;
  input s1_los_detected_i_4__0_0;
  input \s1_los_dir[1]_i_2__1_0 ;
  input \s1_los_dir[0]_i_5__1_0 ;
  input \s1_los_dir_reg[1]_0 ;
  input \s1_los_dir[1]_i_27__1_0 ;
  input \s1_los_dir_reg[1]_1 ;
  input \s1_los_dir[1]_i_5__1_0 ;
  input \s1_los_dir_reg[1]_2 ;
  input \s1_los_dir[1]_i_6__1_1 ;
  input [0:0]\s1_los_dir[0]_i_4__1_0 ;
  input p_0_in__0;

  wire [0:0]AR;
  wire [1:0]D;
  wire [0:0]E;
  wire S_AXI_ACLK;
  wire \direction[0]_i_1__1_n_0 ;
  wire \direction[1]_i_1__1_n_0 ;
  wire [3:0]ghost3_col;
  wire [3:0]ghost3_row;
  wire los_detected_comb;
  wire [1:0]los_dir_comb;
  wire p_0_in__0;
  wire [5:5]p_1_in;
  wire [3:0]rover_col;
  wire [3:0]rover_row;
  wire [3:0]s1_ghost_col;
  wire [3:0]s1_ghost_row;
  wire [0:0]\s1_ghost_row_reg[2]_0 ;
  wire [0:0]\s1_ghost_row_reg[2]_1 ;
  wire s1_los_detected;
  wire s1_los_detected_i_10__1_n_0;
  wire s1_los_detected_i_11__1_n_0;
  wire s1_los_detected_i_12__1_n_0;
  wire s1_los_detected_i_13__1_n_0;
  wire s1_los_detected_i_14__1_n_0;
  wire s1_los_detected_i_15__1_n_0;
  wire s1_los_detected_i_16__1_n_0;
  wire s1_los_detected_i_17__0_n_0;
  wire s1_los_detected_i_18__1_n_0;
  wire s1_los_detected_i_19__1_n_0;
  wire s1_los_detected_i_20__0_n_0;
  wire s1_los_detected_i_21__1_n_0;
  wire s1_los_detected_i_22__1_n_0;
  wire s1_los_detected_i_23__1_n_0;
  wire s1_los_detected_i_24__1_n_0;
  wire s1_los_detected_i_25__0_n_0;
  wire s1_los_detected_i_26__1_n_0;
  wire s1_los_detected_i_2__1_0;
  wire s1_los_detected_i_2__1_n_0;
  wire s1_los_detected_i_3__1_n_0;
  wire s1_los_detected_i_4__0_0;
  wire s1_los_detected_i_4__0_n_0;
  wire s1_los_detected_i_5__1_n_0;
  wire s1_los_detected_i_6__1_n_0;
  wire s1_los_detected_i_7__1_n_0;
  wire s1_los_detected_i_8__1_n_0;
  wire s1_los_detected_i_9__1_n_0;
  wire [0:0]s1_los_detected_reg_0;
  wire s1_los_detected_reg_1;
  wire s1_los_detected_reg_2;
  wire [1:0]s1_los_dir;
  wire \s1_los_dir[0]_i_10__1_n_0 ;
  wire \s1_los_dir[0]_i_11__1_n_0 ;
  wire \s1_los_dir[0]_i_12__1_n_0 ;
  wire \s1_los_dir[0]_i_13__1_n_0 ;
  wire \s1_los_dir[0]_i_14__1_n_0 ;
  wire \s1_los_dir[0]_i_15__1_n_0 ;
  wire \s1_los_dir[0]_i_16__1_n_0 ;
  wire \s1_los_dir[0]_i_17__1_n_0 ;
  wire \s1_los_dir[0]_i_18__1_n_0 ;
  wire \s1_los_dir[0]_i_19__1_n_0 ;
  wire \s1_los_dir[0]_i_20__1_n_0 ;
  wire \s1_los_dir[0]_i_21__1_n_0 ;
  wire \s1_los_dir[0]_i_22__1_n_0 ;
  wire \s1_los_dir[0]_i_23__1_n_0 ;
  wire \s1_los_dir[0]_i_2__1_n_0 ;
  wire \s1_los_dir[0]_i_3__1_n_0 ;
  wire [0:0]\s1_los_dir[0]_i_4__1_0 ;
  wire \s1_los_dir[0]_i_4__1_n_0 ;
  wire \s1_los_dir[0]_i_5__1_0 ;
  wire \s1_los_dir[0]_i_5__1_n_0 ;
  wire \s1_los_dir[0]_i_6__1_n_0 ;
  wire \s1_los_dir[0]_i_7__1_n_0 ;
  wire \s1_los_dir[0]_i_8__1_n_0 ;
  wire \s1_los_dir[0]_i_9__1_n_0 ;
  wire \s1_los_dir[1]_i_105__1_n_0 ;
  wire \s1_los_dir[1]_i_10__1_n_0 ;
  wire \s1_los_dir[1]_i_11__1_n_0 ;
  wire \s1_los_dir[1]_i_12__1_n_0 ;
  wire \s1_los_dir[1]_i_13__1_n_0 ;
  wire \s1_los_dir[1]_i_14__1_n_0 ;
  wire \s1_los_dir[1]_i_15__1_n_0 ;
  wire \s1_los_dir[1]_i_16__1_n_0 ;
  wire \s1_los_dir[1]_i_17__1_n_0 ;
  wire \s1_los_dir[1]_i_18__1_n_0 ;
  wire \s1_los_dir[1]_i_19__1_n_0 ;
  wire \s1_los_dir[1]_i_20__0_n_0 ;
  wire \s1_los_dir[1]_i_21__1_n_0 ;
  wire \s1_los_dir[1]_i_22__0_n_0 ;
  wire \s1_los_dir[1]_i_23__0_n_0 ;
  wire \s1_los_dir[1]_i_24__1_n_0 ;
  wire \s1_los_dir[1]_i_25__1_n_0 ;
  wire \s1_los_dir[1]_i_26__1_n_0 ;
  wire \s1_los_dir[1]_i_27__1_0 ;
  wire \s1_los_dir[1]_i_27__1_n_0 ;
  wire \s1_los_dir[1]_i_28__1_n_0 ;
  wire \s1_los_dir[1]_i_29__1_n_0 ;
  wire \s1_los_dir[1]_i_2__1_0 ;
  wire \s1_los_dir[1]_i_2__1_n_0 ;
  wire \s1_los_dir[1]_i_30__1_n_0 ;
  wire \s1_los_dir[1]_i_31__1_n_0 ;
  wire \s1_los_dir[1]_i_32__1_n_0 ;
  wire [3:0]\s1_los_dir[1]_i_33__1_0 ;
  wire \s1_los_dir[1]_i_33__1_n_0 ;
  wire \s1_los_dir[1]_i_34__1_n_0 ;
  wire \s1_los_dir[1]_i_35__1_n_0 ;
  wire \s1_los_dir[1]_i_36__0_n_0 ;
  wire \s1_los_dir[1]_i_37__1_n_0 ;
  wire \s1_los_dir[1]_i_38__1_n_0 ;
  wire \s1_los_dir[1]_i_39__1_n_0 ;
  wire \s1_los_dir[1]_i_3__1_n_0 ;
  wire \s1_los_dir[1]_i_40__1_n_0 ;
  wire \s1_los_dir[1]_i_41__0_n_0 ;
  wire \s1_los_dir[1]_i_42__1_n_0 ;
  wire \s1_los_dir[1]_i_43__0_n_0 ;
  wire \s1_los_dir[1]_i_44__1_n_0 ;
  wire \s1_los_dir[1]_i_45__1_n_0 ;
  wire \s1_los_dir[1]_i_46__1_n_0 ;
  wire \s1_los_dir[1]_i_47__1_n_0 ;
  wire \s1_los_dir[1]_i_48__1_n_0 ;
  wire \s1_los_dir[1]_i_49__1_n_0 ;
  wire \s1_los_dir[1]_i_4__1_n_0 ;
  wire \s1_los_dir[1]_i_50__1_n_0 ;
  wire \s1_los_dir[1]_i_51__1_n_0 ;
  wire \s1_los_dir[1]_i_52__1_n_0 ;
  wire \s1_los_dir[1]_i_53__1_n_0 ;
  wire \s1_los_dir[1]_i_54__1_n_0 ;
  wire \s1_los_dir[1]_i_55__0_n_0 ;
  wire \s1_los_dir[1]_i_56__1_n_0 ;
  wire \s1_los_dir[1]_i_57__1_n_0 ;
  wire \s1_los_dir[1]_i_58__1_n_0 ;
  wire \s1_los_dir[1]_i_59__0_n_0 ;
  wire \s1_los_dir[1]_i_5__1_0 ;
  wire \s1_los_dir[1]_i_5__1_n_0 ;
  wire \s1_los_dir[1]_i_60__1_n_0 ;
  wire \s1_los_dir[1]_i_61__0_n_0 ;
  wire \s1_los_dir[1]_i_62__0_n_0 ;
  wire \s1_los_dir[1]_i_63__1_n_0 ;
  wire \s1_los_dir[1]_i_64__1_n_0 ;
  wire \s1_los_dir[1]_i_65__1_n_0 ;
  wire \s1_los_dir[1]_i_66__1_n_0 ;
  wire \s1_los_dir[1]_i_67__0_n_0 ;
  wire \s1_los_dir[1]_i_68__1_n_0 ;
  wire \s1_los_dir[1]_i_69__1_n_0 ;
  wire \s1_los_dir[1]_i_6__1_0 ;
  wire \s1_los_dir[1]_i_6__1_1 ;
  wire \s1_los_dir[1]_i_6__1_n_0 ;
  wire \s1_los_dir[1]_i_70__1_n_0 ;
  wire \s1_los_dir[1]_i_71__1_n_0 ;
  wire \s1_los_dir[1]_i_72__1_n_0 ;
  wire \s1_los_dir[1]_i_73__1_n_0 ;
  wire \s1_los_dir[1]_i_74__1_n_0 ;
  wire \s1_los_dir[1]_i_75__1_n_0 ;
  wire \s1_los_dir[1]_i_76__1_n_0 ;
  wire \s1_los_dir[1]_i_77__1_n_0 ;
  wire \s1_los_dir[1]_i_78__0_n_0 ;
  wire \s1_los_dir[1]_i_79__1_n_0 ;
  wire \s1_los_dir[1]_i_7__1_n_0 ;
  wire \s1_los_dir[1]_i_80__1_n_0 ;
  wire \s1_los_dir[1]_i_81__1_n_0 ;
  wire \s1_los_dir[1]_i_82__1_n_0 ;
  wire \s1_los_dir[1]_i_83__0_n_0 ;
  wire \s1_los_dir[1]_i_84__1_n_0 ;
  wire \s1_los_dir[1]_i_85__1_n_0 ;
  wire \s1_los_dir[1]_i_86__1_n_0 ;
  wire \s1_los_dir[1]_i_87__0_n_0 ;
  wire \s1_los_dir[1]_i_88__1_n_0 ;
  wire \s1_los_dir[1]_i_89__1_n_0 ;
  wire \s1_los_dir[1]_i_8__1_n_0 ;
  wire \s1_los_dir[1]_i_92__0_n_0 ;
  wire \s1_los_dir[1]_i_93__0_n_0 ;
  wire \s1_los_dir[1]_i_94__1_n_0 ;
  wire \s1_los_dir[1]_i_95__1_n_0 ;
  wire \s1_los_dir[1]_i_96__1_n_0 ;
  wire \s1_los_dir[1]_i_9__1_n_0 ;
  wire \s1_los_dir_reg[1]_0 ;
  wire \s1_los_dir_reg[1]_1 ;
  wire \s1_los_dir_reg[1]_2 ;
  wire s2_can_down;
  wire s2_can_down_i_10__1_n_0;
  wire s2_can_down_i_11__1_n_0;
  wire s2_can_down_i_12__1_n_0;
  wire s2_can_down_i_13__1_n_0;
  wire s2_can_down_i_14__1_n_0;
  wire s2_can_down_i_15__1_n_0;
  wire s2_can_down_i_17__1_n_0;
  wire s2_can_down_i_18__1_n_0;
  wire s2_can_down_i_19__1_n_0;
  wire s2_can_down_i_20__1_n_0;
  wire s2_can_down_i_21__1_n_0;
  wire s2_can_down_i_22__1_n_0;
  wire s2_can_down_i_23__1_n_0;
  wire s2_can_down_i_24__1_n_0;
  wire s2_can_down_i_2__1_n_0;
  wire s2_can_down_i_4__1_n_0;
  wire s2_can_down_i_6__1_n_0;
  wire s2_can_down_i_9__1_n_0;
  wire [0:0]s2_can_down_reg_0;
  wire s2_can_down_reg_i_16__1_n_0;
  wire s2_can_down_reg_i_16__1_n_1;
  wire s2_can_down_reg_i_16__1_n_2;
  wire s2_can_down_reg_i_16__1_n_3;
  wire s2_can_down_reg_i_16__1_n_5;
  wire s2_can_down_reg_i_16__1_n_6;
  wire s2_can_down_reg_i_16__1_n_7;
  wire s2_can_down_reg_i_3__1_n_2;
  wire s2_can_down_reg_i_3__1_n_3;
  wire s2_can_down_reg_i_3__1_n_5;
  wire s2_can_down_reg_i_3__1_n_6;
  wire s2_can_down_reg_i_3__1_n_7;
  wire s2_can_down_reg_i_5__1_n_0;
  wire s2_can_down_reg_i_5__1_n_1;
  wire s2_can_down_reg_i_5__1_n_2;
  wire s2_can_down_reg_i_5__1_n_3;
  wire s2_can_down_reg_i_5__1_n_4;
  wire s2_can_down_reg_i_5__1_n_5;
  wire s2_can_down_reg_i_5__1_n_6;
  wire s2_can_down_reg_i_5__1_n_7;
  wire s2_can_down_reg_i_7__1_n_7;
  wire s2_can_left;
  wire s2_can_left_i_10__1_n_0;
  wire s2_can_left_i_11__1_n_0;
  wire s2_can_left_i_12__1_n_0;
  wire s2_can_left_i_13__1_n_0;
  wire s2_can_left_i_14__1_n_0;
  wire s2_can_left_i_15__1_n_0;
  wire s2_can_left_i_3__1_n_0;
  wire s2_can_left_i_6__1_n_0;
  wire s2_can_left_i_8__1_n_0;
  wire s2_can_left_i_9__1_n_0;
  wire s2_can_left_reg_i_4__1_n_2;
  wire s2_can_left_reg_i_4__1_n_3;
  wire s2_can_left_reg_i_4__1_n_5;
  wire s2_can_left_reg_i_4__1_n_6;
  wire s2_can_left_reg_i_4__1_n_7;
  wire s2_can_left_reg_i_5__1_n_0;
  wire s2_can_left_reg_i_5__1_n_1;
  wire s2_can_left_reg_i_5__1_n_2;
  wire s2_can_left_reg_i_5__1_n_3;
  wire s2_can_left_reg_i_5__1_n_4;
  wire s2_can_left_reg_i_5__1_n_5;
  wire s2_can_left_reg_i_5__1_n_6;
  wire s2_can_left_reg_i_5__1_n_7;
  wire s2_can_right;
  wire s2_can_right_i_10__1_n_0;
  wire s2_can_right_i_11__1_n_0;
  wire s2_can_right_i_12__1_n_0;
  wire s2_can_right_i_13__1_n_0;
  wire s2_can_right_i_14__1_n_0;
  wire s2_can_right_i_15__1_n_0;
  wire s2_can_right_i_16__1_n_0;
  wire s2_can_right_i_17__1_n_0;
  wire s2_can_right_i_18__1_n_0;
  wire s2_can_right_i_19__1_n_0;
  wire s2_can_right_i_20__1_n_0;
  wire s2_can_right_i_21__1_n_0;
  wire s2_can_right_i_22__1_n_0;
  wire s2_can_right_i_2__1_n_0;
  wire s2_can_right_i_3__1_n_0;
  wire s2_can_right_i_4__1_n_0;
  wire s2_can_right_i_5__1_n_0;
  wire s2_can_right_i_6__1_n_0;
  wire s2_can_right_i_8__1_n_0;
  wire s2_can_right_reg_i_7__1_n_0;
  wire s2_can_right_reg_i_7__1_n_1;
  wire s2_can_right_reg_i_7__1_n_2;
  wire s2_can_right_reg_i_7__1_n_3;
  wire s2_can_right_reg_i_7__1_n_4;
  wire s2_can_right_reg_i_7__1_n_5;
  wire s2_can_right_reg_i_7__1_n_6;
  wire s2_can_right_reg_i_7__1_n_7;
  wire s2_can_right_reg_i_9__1_n_7;
  wire s2_can_up;
  wire s2_can_up_i_10__1_n_0;
  wire s2_can_up_i_12__1_n_0;
  wire s2_can_up_i_13__1_n_0;
  wire s2_can_up_i_14__1_n_0;
  wire s2_can_up_i_15__1_n_0;
  wire s2_can_up_i_17__1_n_0;
  wire s2_can_up_i_18__1_n_0;
  wire s2_can_up_i_19__1_n_0;
  wire s2_can_up_i_20__1_n_0;
  wire s2_can_up_i_21__1_n_0;
  wire s2_can_up_i_22__1_n_0;
  wire s2_can_up_i_23__1_n_0;
  wire s2_can_up_i_24__1_n_0;
  wire [0:0]s2_can_up_i_2__1_0;
  wire s2_can_up_i_2__1_n_0;
  wire s2_can_up_i_5__1_n_0;
  wire s2_can_up_i_6__1_n_0;
  wire s2_can_up_i_9__1_n_0;
  wire s2_can_up_reg_i_16__1_n_0;
  wire s2_can_up_reg_i_16__1_n_1;
  wire s2_can_up_reg_i_16__1_n_2;
  wire s2_can_up_reg_i_16__1_n_3;
  wire s2_can_up_reg_i_16__1_n_5;
  wire s2_can_up_reg_i_16__1_n_6;
  wire s2_can_up_reg_i_16__1_n_7;
  wire s2_can_up_reg_i_3__1_n_2;
  wire s2_can_up_reg_i_3__1_n_3;
  wire s2_can_up_reg_i_3__1_n_5;
  wire s2_can_up_reg_i_3__1_n_6;
  wire s2_can_up_reg_i_3__1_n_7;
  wire s2_can_up_reg_i_4__1_n_0;
  wire s2_can_up_reg_i_4__1_n_1;
  wire s2_can_up_reg_i_4__1_n_2;
  wire s2_can_up_reg_i_4__1_n_3;
  wire s2_can_up_reg_i_4__1_n_4;
  wire s2_can_up_reg_i_4__1_n_5;
  wire s2_can_up_reg_i_4__1_n_6;
  wire s2_can_up_reg_i_7__1_n_7;
  wire [1:0]s2_facing;
  wire s2_los_detected;
  wire [1:0]s2_los_dir;
  wire wc_down;
  wire [1:1]wc_down5;
  wire wc_left;
  wire wc_left01_in;
  wire wc_right;
  wire wc_up;
  wire [1:0]wf_dir__1;
  wire [3:2]NLW_s2_can_down_reg_i_3__1_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_down_reg_i_3__1_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_down_reg_i_7__1_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_down_reg_i_7__1_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_left_reg_i_4__1_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_left_reg_i_4__1_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_right_reg_i_9__1_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_right_reg_i_9__1_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_up_reg_i_3__1_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_up_reg_i_3__1_O_UNCONNECTED;
  wire [0:0]NLW_s2_can_up_reg_i_4__1_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_up_reg_i_7__1_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_up_reg_i_7__1_O_UNCONNECTED;

  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[0]_i_1__1 
       (.I0(s2_los_dir[0]),
        .I1(s2_los_detected),
        .I2(wf_dir__1[0]),
        .I3(p_0_in__0),
        .I4(D[0]),
        .O(\direction[0]_i_1__1_n_0 ));
  LUT6 #(
    .INIT(64'hFAAA0032FABB3332)) 
    \direction[0]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__1[0]));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[1]_i_1__1 
       (.I0(s2_los_dir[1]),
        .I1(s2_los_detected),
        .I2(wf_dir__1[1]),
        .I3(p_0_in__0),
        .I4(D[1]),
        .O(\direction[1]_i_1__1_n_0 ));
  LUT6 #(
    .INIT(64'hF555FF31F0113031)) 
    \direction[1]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__1[1]));
  FDCE \direction_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[0]_i_1__1_n_0 ),
        .Q(D[0]));
  FDCE \direction_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[1]_i_1__1_n_0 ),
        .Q(D[1]));
  FDCE \s1_ghost_col_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_col[0]),
        .Q(s1_ghost_col[0]));
  FDCE \s1_ghost_col_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_col[1]),
        .Q(s1_ghost_col[1]));
  FDCE \s1_ghost_col_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_col[2]),
        .Q(s1_ghost_col[2]));
  FDCE \s1_ghost_col_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_col[3]),
        .Q(s1_ghost_col[3]));
  FDCE \s1_ghost_row_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_row[0]),
        .Q(s1_ghost_row[0]));
  FDCE \s1_ghost_row_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_row[1]),
        .Q(s1_ghost_row[1]));
  FDCE \s1_ghost_row_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_row[2]),
        .Q(s1_ghost_row[2]));
  FDCE \s1_ghost_row_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(ghost3_row[3]),
        .Q(s1_ghost_row[3]));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    s1_los_detected_i_10__1
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .I3(ghost3_col[0]),
        .O(s1_los_detected_i_10__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT2 #(
    .INIT(4'h1)) 
    s1_los_detected_i_11__1
       (.I0(ghost3_row[3]),
        .I1(ghost3_row[2]),
        .O(s1_los_detected_i_11__1_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_12__1
       (.I0(s1_los_detected_i_4__0_0),
        .I1(s1_los_detected_i_22__1_n_0),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[3]),
        .I5(ghost3_col[0]),
        .O(s1_los_detected_i_12__1_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFF0F00DF0D)) 
    s1_los_detected_i_13__1
       (.I0(ghost3_row[2]),
        .I1(rover_row[2]),
        .I2(ghost3_row[3]),
        .I3(rover_row[3]),
        .I4(s1_los_detected_i_23__1_n_0),
        .I5(s1_los_detected_i_24__1_n_0),
        .O(s1_los_detected_i_13__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT4 #(
    .INIT(16'h303E)) 
    s1_los_detected_i_14__1
       (.I0(ghost3_col[1]),
        .I1(ghost3_col[3]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[0]),
        .O(s1_los_detected_i_14__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    s1_los_detected_i_15__1
       (.I0(ghost3_row[3]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[2]),
        .O(s1_los_detected_i_15__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair69" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    s1_los_detected_i_16__1
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[3]),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[0]),
        .O(s1_los_detected_i_16__1_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF070707)) 
    s1_los_detected_i_17__0
       (.I0(rover_row[1]),
        .I1(rover_row[0]),
        .I2(rover_row[3]),
        .I3(ghost3_row[1]),
        .I4(ghost3_row[2]),
        .I5(ghost3_row[3]),
        .O(s1_los_detected_i_17__0_n_0));
  LUT6 #(
    .INIT(64'hBEFFFFBEFFFFFFFF)) 
    s1_los_detected_i_18__1
       (.I0(s1_los_detected_i_25__0_n_0),
        .I1(ghost3_col[0]),
        .I2(rover_col[0]),
        .I3(ghost3_col[3]),
        .I4(rover_col[3]),
        .I5(s1_los_detected_i_26__1_n_0),
        .O(s1_los_detected_i_18__1_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_19__1
       (.I0(rover_row[0]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[2]),
        .I3(rover_row[2]),
        .I4(ghost3_row[1]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_19__1_n_0));
  LUT5 #(
    .INIT(32'hEEEEFFFE)) 
    s1_los_detected_i_1__1
       (.I0(los_dir_comb[1]),
        .I1(s1_los_detected_i_2__1_n_0),
        .I2(s1_los_detected_i_3__1_n_0),
        .I3(s1_los_detected_reg_1),
        .I4(s1_los_detected_i_4__0_n_0),
        .O(los_detected_comb));
  LUT6 #(
    .INIT(64'hFEFFFFFFFEFEFEFE)) 
    s1_los_detected_i_20__0
       (.I0(ghost3_row[3]),
        .I1(ghost3_row[2]),
        .I2(ghost3_row[1]),
        .I3(rover_row[1]),
        .I4(rover_row[0]),
        .I5(s1_los_detected_reg_2),
        .O(s1_los_detected_i_20__0_n_0));
  LUT6 #(
    .INIT(64'hCECECEEFCECEEFFF)) 
    s1_los_detected_i_21__1
       (.I0(ghost3_row[2]),
        .I1(ghost3_row[3]),
        .I2(\s1_los_dir[1]_i_44__1_n_0 ),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_21__1_n_0));
  LUT6 #(
    .INIT(64'hFFFFFF15FFFF1515)) 
    s1_los_detected_i_22__1
       (.I0(ghost3_row[3]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_22__1_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_23__1
       (.I0(ghost3_row[0]),
        .I1(rover_row[0]),
        .I2(rover_row[2]),
        .I3(ghost3_row[2]),
        .I4(rover_row[1]),
        .I5(ghost3_row[1]),
        .O(s1_los_detected_i_23__1_n_0));
  LUT6 #(
    .INIT(64'hEEEEEAAAAAAAAAAA)) 
    s1_los_detected_i_24__1
       (.I0(s1_los_detected_i_18__1_n_0),
        .I1(s1_los_detected_i_10__1_n_0),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[2]),
        .I4(ghost3_row[3]),
        .I5(s1_los_detected_i_2__1_0),
        .O(s1_los_detected_i_24__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT4 #(
    .INIT(16'h44F4)) 
    s1_los_detected_i_25__0
       (.I0(rover_col[2]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .I3(rover_col[1]),
        .O(s1_los_detected_i_25__0_n_0));
  (* SOFT_HLUTNM = "soft_lutpair68" *) 
  LUT4 #(
    .INIT(16'hD0DD)) 
    s1_los_detected_i_26__1
       (.I0(rover_col[1]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(rover_col[2]),
        .O(s1_los_detected_i_26__1_n_0));
  LUT6 #(
    .INIT(64'h00000000000000AB)) 
    s1_los_detected_i_2__1
       (.I0(s1_los_detected_i_5__1_n_0),
        .I1(rover_row[2]),
        .I2(rover_row[3]),
        .I3(s1_los_detected_i_6__1_n_0),
        .I4(s1_los_detected_i_7__1_n_0),
        .I5(s1_los_detected_i_8__1_n_0),
        .O(s1_los_detected_i_2__1_n_0));
  LUT6 #(
    .INIT(64'h7077FFFF50555055)) 
    s1_los_detected_i_3__1
       (.I0(s1_los_detected_i_9__1_n_0),
        .I1(ghost3_row[0]),
        .I2(rover_row[0]),
        .I3(s1_los_detected_i_10__1_n_0),
        .I4(ghost3_row[1]),
        .I5(s1_los_detected_i_11__1_n_0),
        .O(s1_los_detected_i_3__1_n_0));
  LUT6 #(
    .INIT(64'hFFF1F1F1F1F1F1F1)) 
    s1_los_detected_i_4__0
       (.I0(s1_los_detected_i_12__1_n_0),
        .I1(s1_los_detected_i_11__1_n_0),
        .I2(s1_los_detected_i_13__1_n_0),
        .I3(s1_los_detected_i_14__1_n_0),
        .I4(s1_los_detected_i_15__1_n_0),
        .I5(s1_los_detected_reg_2),
        .O(s1_los_detected_i_4__0_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_5__1
       (.I0(s1_los_detected_i_16__1_n_0),
        .I1(s1_los_detected_i_17__0_n_0),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[3]),
        .I5(ghost3_col[0]),
        .O(s1_los_detected_i_5__1_n_0));
  LUT6 #(
    .INIT(64'h000000001D1C0000)) 
    s1_los_detected_i_6__1
       (.I0(ghost3_col[0]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[3]),
        .I3(ghost3_col[1]),
        .I4(s1_los_detected_i_11__1_n_0),
        .I5(s1_los_detected_i_2__1_0),
        .O(s1_los_detected_i_6__1_n_0));
  LUT6 #(
    .INIT(64'hBABABABAFBFBBAFB)) 
    s1_los_detected_i_7__1
       (.I0(s1_los_detected_i_18__1_n_0),
        .I1(rover_row[3]),
        .I2(ghost3_row[3]),
        .I3(rover_row[2]),
        .I4(ghost3_row[2]),
        .I5(s1_los_detected_i_19__1_n_0),
        .O(s1_los_detected_i_7__1_n_0));
  LUT6 #(
    .INIT(64'h7000000005550550)) 
    s1_los_detected_i_8__1
       (.I0(s1_los_detected_i_20__0_n_0),
        .I1(s1_los_detected_i_21__1_n_0),
        .I2(ghost3_col[3]),
        .I3(ghost3_col[2]),
        .I4(ghost3_col[1]),
        .I5(ghost3_col[0]),
        .O(s1_los_detected_i_8__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair71" *) 
  LUT4 #(
    .INIT(16'h805E)) 
    s1_los_detected_i_9__1
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[0]),
        .O(s1_los_detected_i_9__1_n_0));
  FDCE s1_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_detected_comb),
        .Q(s1_los_detected));
  (* SOFT_HLUTNM = "soft_lutpair62" *) 
  LUT5 #(
    .INIT(32'hFFA8FFFF)) 
    \s1_los_dir[0]_i_10__1 
       (.I0(ghost3_col[2]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[0]),
        .I3(ghost3_col[3]),
        .I4(\s1_los_dir_reg[1]_1 ),
        .O(\s1_los_dir[0]_i_10__1_n_0 ));
  LUT6 #(
    .INIT(64'h22288888E22BB88B)) 
    \s1_los_dir[0]_i_11__1 
       (.I0(\s1_los_dir[1]_i_54__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[0]_i_21__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[0]_i_19__1_n_0 ),
        .O(\s1_los_dir[0]_i_11__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT5 #(
    .INIT(32'hEEEEEEEA)) 
    \s1_los_dir[0]_i_12__1 
       (.I0(\s1_los_dir[1]_i_27__1_0 ),
        .I1(ghost3_col[3]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[0]),
        .O(\s1_los_dir[0]_i_12__1_n_0 ));
  LUT6 #(
    .INIT(64'hEEEBBBBB2EE88BB8)) 
    \s1_los_dir[0]_i_13__1 
       (.I0(\s1_los_dir[1]_i_65__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[0]_i_22__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[1]_i_48__1_n_0 ),
        .O(\s1_los_dir[0]_i_13__1_n_0 ));
  LUT6 #(
    .INIT(64'h00FF101030302020)) 
    \s1_los_dir[0]_i_14__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_68__1_n_0 ),
        .I2(\s1_los_dir[1]_i_69__1_n_0 ),
        .I3(\s1_los_dir[1]_i_48__1_n_0 ),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .I5(\s1_los_dir[0]_i_4__1_0 ),
        .O(\s1_los_dir[0]_i_14__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFF111)) 
    \s1_los_dir[0]_i_15__1 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost3_col[0]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[2]),
        .I5(ghost3_col[3]),
        .O(\s1_los_dir[0]_i_15__1_n_0 ));
  LUT6 #(
    .INIT(64'h828882888288BEBB)) 
    \s1_los_dir[0]_i_16__1 
       (.I0(\s1_los_dir[1]_i_50__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_33__1_0 [3]),
        .I3(\s1_los_dir[0]_i_23__1_n_0 ),
        .I4(\s1_los_dir[1]_i_48__1_n_0 ),
        .I5(\s1_los_dir[1]_i_47__1_n_0 ),
        .O(\s1_los_dir[0]_i_16__1_n_0 ));
  LUT6 #(
    .INIT(64'h2888288828882B8B)) 
    \s1_los_dir[0]_i_17__1 
       (.I0(\s1_los_dir[1]_i_45__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_40__1_n_0 ),
        .I4(ghost3_row[1]),
        .I5(ghost3_row[0]),
        .O(\s1_los_dir[0]_i_17__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT4 #(
    .INIT(16'hAAA9)) 
    \s1_los_dir[0]_i_18__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .O(\s1_los_dir[0]_i_18__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[0]_i_19__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .O(\s1_los_dir[0]_i_19__1_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \s1_los_dir[0]_i_1__1 
       (.I0(\s1_los_dir[0]_i_2__1_n_0 ),
        .I1(s1_los_detected_i_2__1_n_0),
        .O(los_dir_comb[0]));
  (* SOFT_HLUTNM = "soft_lutpair73" *) 
  LUT4 #(
    .INIT(16'h0332)) 
    \s1_los_dir[0]_i_20__1 
       (.I0(ghost3_row[0]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(ghost3_row[1]),
        .O(\s1_los_dir[0]_i_20__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT4 #(
    .INIT(16'h0004)) 
    \s1_los_dir[0]_i_21__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .O(\s1_los_dir[0]_i_21__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT4 #(
    .INIT(16'h0054)) 
    \s1_los_dir[0]_i_22__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[0]_i_22__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT5 #(
    .INIT(32'h0F0FFFFE)) 
    \s1_los_dir[0]_i_23__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[0]_i_23__1_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \s1_los_dir[0]_i_2__1 
       (.I0(\s1_los_dir[1]_i_4__1_n_0 ),
        .I1(\s1_los_dir[0]_i_3__1_n_0 ),
        .I2(\s1_los_dir[0]_i_4__1_n_0 ),
        .I3(\s1_los_dir[1]_i_19__1_n_0 ),
        .I4(\s1_los_dir[0]_i_5__1_n_0 ),
        .I5(\s1_los_dir[0]_i_6__1_n_0 ),
        .O(\s1_los_dir[0]_i_2__1_n_0 ));
  LUT6 #(
    .INIT(64'h7707770700007707)) 
    \s1_los_dir[0]_i_3__1 
       (.I0(\s1_los_dir[0]_i_7__1_n_0 ),
        .I1(\s1_los_dir[0]_i_8__1_n_0 ),
        .I2(\s1_los_dir[0]_i_9__1_n_0 ),
        .I3(\s1_los_dir[0]_i_10__1_n_0 ),
        .I4(\s1_los_dir[0]_i_11__1_n_0 ),
        .I5(\s1_los_dir[0]_i_12__1_n_0 ),
        .O(\s1_los_dir[0]_i_3__1_n_0 ));
  LUT6 #(
    .INIT(64'hFF04FF04FFFFFF04)) 
    \s1_los_dir[0]_i_4__1 
       (.I0(\s1_los_dir[0]_i_13__1_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_34__1_n_0 ),
        .I3(\s1_los_dir[1]_i_71__1_n_0 ),
        .I4(\s1_los_dir[0]_i_14__1_n_0 ),
        .I5(\s1_los_dir[1]_i_66__1_n_0 ),
        .O(\s1_los_dir[0]_i_4__1_n_0 ));
  LUT6 #(
    .INIT(64'h44F444F4FFFF44F4)) 
    \s1_los_dir[0]_i_5__1 
       (.I0(\s1_los_dir[0]_i_15__1_n_0 ),
        .I1(\s1_los_dir[0]_i_16__1_n_0 ),
        .I2(\s1_los_dir[0]_i_17__1_n_0 ),
        .I3(\s1_los_dir[1]_i_46__1_n_0 ),
        .I4(\s1_los_dir[1]_i_11__1_n_0 ),
        .I5(\s1_los_dir[1]_i_10__1_n_0 ),
        .O(\s1_los_dir[0]_i_5__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT4 #(
    .INIT(16'h0008)) 
    \s1_los_dir[0]_i_6__1 
       (.I0(\s1_los_dir[1]_i_9__1_n_0 ),
        .I1(\s1_los_dir[1]_i_6__1_0 ),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[3]),
        .O(\s1_los_dir[0]_i_6__1_n_0 ));
  LUT6 #(
    .INIT(64'h0100000001010101)) 
    \s1_los_dir[0]_i_7__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2__1_0 ),
        .O(\s1_los_dir[0]_i_7__1_n_0 ));
  LUT6 #(
    .INIT(64'h38AAAE3C08AAA200)) 
    \s1_los_dir[0]_i_8__1 
       (.I0(\s1_los_dir[1]_i_61__0_n_0 ),
        .I1(\s1_los_dir[0]_i_18__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_40__1_n_0 ),
        .I4(\s1_los_dir[1]_i_37__1_n_0 ),
        .I5(\s1_los_dir[1]_i_44__1_n_0 ),
        .O(\s1_los_dir[0]_i_8__1_n_0 ));
  LUT6 #(
    .INIT(64'h7D3C3CDD41000011)) 
    \s1_los_dir[0]_i_9__1 
       (.I0(\s1_los_dir[0]_i_19__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_40__1_n_0 ),
        .I3(\s1_los_dir[1]_i_38__1_n_0 ),
        .I4(\s1_los_dir[0]_i_20__1_n_0 ),
        .I5(\s1_los_dir[1]_i_55__0_n_0 ),
        .O(\s1_los_dir[0]_i_9__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair67" *) 
  LUT4 #(
    .INIT(16'h6FF6)) 
    \s1_los_dir[1]_i_105__1 
       (.I0(rover_row[3]),
        .I1(ghost3_row[3]),
        .I2(rover_row[2]),
        .I3(ghost3_row[2]),
        .O(\s1_los_dir[1]_i_105__1_n_0 ));
  LUT6 #(
    .INIT(64'hF111FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_10__1 
       (.I0(rover_col[0]),
        .I1(rover_col[1]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_10__1_n_0 ));
  LUT6 #(
    .INIT(64'hB2B88B8B82888888)) 
    \s1_los_dir[1]_i_11__1 
       (.I0(\s1_los_dir[1]_i_42__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_43__0_n_0 ),
        .I3(\s1_los_dir[1]_i_40__1_n_0 ),
        .I4(\s1_los_dir[1]_i_38__1_n_0 ),
        .I5(\s1_los_dir[1]_i_41__0_n_0 ),
        .O(\s1_los_dir[1]_i_11__1_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_12__1 
       (.I0(\s1_los_dir[1]_i_44__1_n_0 ),
        .I1(\s1_los_dir[1]_i_40__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_37__1_n_0 ),
        .I4(\s1_los_dir[1]_i_45__1_n_0 ),
        .I5(\s1_los_dir[1]_i_46__1_n_0 ),
        .O(\s1_los_dir[1]_i_12__1_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_13__1 
       (.I0(\s1_los_dir[1]_i_47__1_n_0 ),
        .I1(\s1_los_dir[1]_i_48__1_n_0 ),
        .I2(\s1_los_dir[1]_i_49__1_n_0 ),
        .I3(\s1_los_dir[1]_i_50__1_n_0 ),
        .I4(\s1_los_dir[1]_i_51__1_n_0 ),
        .I5(\s1_los_dir[1]_i_2__1_0 ),
        .O(\s1_los_dir[1]_i_13__1_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_14__1 
       (.I0(\s1_los_dir[1]_i_52__1_n_0 ),
        .I1(\s1_los_dir[1]_i_53__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_54__1_n_0 ),
        .I4(\s1_los_dir[1]_i_35__1_n_0 ),
        .I5(\s1_los_dir[1]_i_27__1_0 ),
        .O(\s1_los_dir[1]_i_14__1_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_15__1 
       (.I0(\s1_los_dir[1]_i_55__0_n_0 ),
        .I1(\s1_los_dir[1]_i_56__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_57__1_n_0 ),
        .I4(\s1_los_dir_reg[1]_1 ),
        .I5(\s1_los_dir[1]_i_58__1_n_0 ),
        .O(\s1_los_dir[1]_i_15__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFF417DFFFFFFFF)) 
    \s1_los_dir[1]_i_16__1 
       (.I0(\s1_los_dir[1]_i_59__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_60__1_n_0 ),
        .I3(\s1_los_dir[1]_i_61__0_n_0 ),
        .I4(\s1_los_dir[1]_i_5__1_0 ),
        .I5(\s1_los_dir[1]_i_62__0_n_0 ),
        .O(\s1_los_dir[1]_i_16__1_n_0 ));
  LUT6 #(
    .INIT(64'h0400000404444404)) 
    \s1_los_dir[1]_i_17__1 
       (.I0(\s1_los_dir[1]_i_34__1_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_63__1_n_0 ),
        .I3(\s1_los_dir[1]_i_64__1_n_0 ),
        .I4(\s1_los_dir[1]_i_37__1_n_0 ),
        .I5(\s1_los_dir[1]_i_65__1_n_0 ),
        .O(\s1_los_dir[1]_i_17__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_18__1 
       (.I0(\s1_los_dir[1]_i_66__1_n_0 ),
        .I1(\s1_los_dir[1]_i_67__0_n_0 ),
        .I2(\s1_los_dir[1]_i_68__1_n_0 ),
        .I3(\s1_los_dir[1]_i_69__1_n_0 ),
        .I4(\s1_los_dir[1]_i_70__1_n_0 ),
        .I5(\s1_los_dir[1]_i_71__1_n_0 ),
        .O(\s1_los_dir[1]_i_18__1_n_0 ));
  LUT5 #(
    .INIT(32'h0000BE82)) 
    \s1_los_dir[1]_i_19__1 
       (.I0(\s1_los_dir[1]_i_72__1_n_0 ),
        .I1(\s1_los_dir[1]_i_73__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_74__1_n_0 ),
        .I4(\s1_los_dir[1]_i_75__1_n_0 ),
        .O(\s1_los_dir[1]_i_19__1_n_0 ));
  LUT6 #(
    .INIT(64'h0404040404FF0404)) 
    \s1_los_dir[1]_i_1__1 
       (.I0(\s1_los_dir[1]_i_2__1_n_0 ),
        .I1(\s1_los_dir[1]_i_3__1_n_0 ),
        .I2(\s1_los_dir[1]_i_4__1_n_0 ),
        .I3(\s1_los_dir[1]_i_5__1_n_0 ),
        .I4(\s1_los_dir[1]_i_6__1_n_0 ),
        .I5(\s1_los_dir[1]_i_7__1_n_0 ),
        .O(los_dir_comb[1]));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_20__0 
       (.I0(\s1_los_dir[1]_i_76__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_77__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[1]_i_41__0_n_0 ),
        .O(\s1_los_dir[1]_i_20__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT3 #(
    .INIT(8'h15)) 
    \s1_los_dir[1]_i_21__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .O(\s1_los_dir[1]_i_21__1_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_22__0 
       (.I0(\s1_los_dir[1]_i_78__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_79__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[1]_i_44__1_n_0 ),
        .O(\s1_los_dir[1]_i_22__0_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_23__0 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[0]),
        .I5(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_23__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFF01FFFFFFFF)) 
    \s1_los_dir[1]_i_24__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(\s1_los_dir[1]_i_2__1_0 ),
        .O(\s1_los_dir[1]_i_24__1_n_0 ));
  LUT6 #(
    .INIT(64'hEEBEBBBB22828888)) 
    \s1_los_dir[1]_i_25__1 
       (.I0(\s1_los_dir[1]_i_74__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_80__1_n_0 ),
        .I3(\s1_los_dir[1]_i_81__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[1]_i_72__1_n_0 ),
        .O(\s1_los_dir[1]_i_25__1_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_26__1 
       (.I0(\s1_los_dir[1]_i_47__1_n_0 ),
        .I1(\s1_los_dir[1]_i_48__1_n_0 ),
        .I2(\s1_los_dir[1]_i_49__1_n_0 ),
        .I3(\s1_los_dir[1]_i_50__1_n_0 ),
        .I4(\s1_los_dir[1]_i_5__1_0 ),
        .I5(\s1_los_dir[1]_i_82__1_n_0 ),
        .O(\s1_los_dir[1]_i_26__1_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_27__1 
       (.I0(\s1_los_dir[1]_i_44__1_n_0 ),
        .I1(\s1_los_dir[1]_i_40__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_37__1_n_0 ),
        .I4(\s1_los_dir[1]_i_45__1_n_0 ),
        .I5(\s1_los_dir[1]_i_83__0_n_0 ),
        .O(\s1_los_dir[1]_i_27__1_n_0 ));
  LUT6 #(
    .INIT(64'hBE82000000000000)) 
    \s1_los_dir[1]_i_28__1 
       (.I0(\s1_los_dir[1]_i_52__1_n_0 ),
        .I1(\s1_los_dir[1]_i_53__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_54__1_n_0 ),
        .I4(\s1_los_dir_reg[1]_0 ),
        .I5(\s1_los_dir[1]_i_84__1_n_0 ),
        .O(\s1_los_dir[1]_i_28__1_n_0 ));
  LUT6 #(
    .INIT(64'h000000000000BE82)) 
    \s1_los_dir[1]_i_29__1 
       (.I0(\s1_los_dir[1]_i_55__0_n_0 ),
        .I1(\s1_los_dir[1]_i_56__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_57__1_n_0 ),
        .I4(\s1_los_dir[1]_i_6__1_0 ),
        .I5(\s1_los_dir[1]_i_21__1_n_0 ),
        .O(\s1_los_dir[1]_i_29__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_2__1 
       (.I0(\s1_los_dir[1]_i_8__1_n_0 ),
        .I1(\s1_los_dir[1]_i_9__1_n_0 ),
        .I2(\s1_los_dir[1]_i_10__1_n_0 ),
        .I3(\s1_los_dir[1]_i_11__1_n_0 ),
        .I4(\s1_los_dir[1]_i_12__1_n_0 ),
        .I5(\s1_los_dir[1]_i_13__1_n_0 ),
        .O(\s1_los_dir[1]_i_2__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFBE82FFFF)) 
    \s1_los_dir[1]_i_30__1 
       (.I0(\s1_los_dir[1]_i_63__1_n_0 ),
        .I1(\s1_los_dir[1]_i_64__1_n_0 ),
        .I2(\s1_los_dir[1]_i_37__1_n_0 ),
        .I3(\s1_los_dir[1]_i_65__1_n_0 ),
        .I4(ghost3_col[3]),
        .I5(\s1_los_dir_reg[1]_2 ),
        .O(\s1_los_dir[1]_i_30__1_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_31__1 
       (.I0(\s1_los_dir[1]_i_59__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_60__1_n_0 ),
        .I3(\s1_los_dir[1]_i_61__0_n_0 ),
        .I4(\s1_los_dir[1]_i_6__1_1 ),
        .I5(\s1_los_dir[1]_i_51__1_n_0 ),
        .O(\s1_los_dir[1]_i_31__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_32__1 
       (.I0(\s1_los_dir[1]_i_85__1_n_0 ),
        .I1(\s1_los_dir[1]_i_67__0_n_0 ),
        .I2(\s1_los_dir[1]_i_68__1_n_0 ),
        .I3(\s1_los_dir[1]_i_69__1_n_0 ),
        .I4(\s1_los_dir[1]_i_70__1_n_0 ),
        .I5(\s1_los_dir[1]_i_86__1_n_0 ),
        .O(\s1_los_dir[1]_i_32__1_n_0 ));
  LUT6 #(
    .INIT(64'h000000004FF44004)) 
    \s1_los_dir[1]_i_33__1 
       (.I0(\s1_los_dir[1]_i_87__0_n_0 ),
        .I1(\s1_los_dir[1]_i_41__0_n_0 ),
        .I2(\s1_los_dir[1]_i_88__1_n_0 ),
        .I3(\s1_los_dir[1]_i_37__1_n_0 ),
        .I4(\s1_los_dir[1]_i_42__1_n_0 ),
        .I5(\s1_los_dir[1]_i_89__1_n_0 ),
        .O(\s1_los_dir[1]_i_33__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT4 #(
    .INIT(16'hFF80)) 
    \s1_los_dir[1]_i_34__1 
       (.I0(ghost3_col[0]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_34__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT4 #(
    .INIT(16'h01FF)) 
    \s1_los_dir[1]_i_35__1 
       (.I0(ghost3_col[0]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_35__1_n_0 ));
  LUT6 #(
    .INIT(64'h27270F0D04A40082)) 
    \s1_los_dir[1]_i_36__0 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_36__0_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555655)) 
    \s1_los_dir[1]_i_37__1 
       (.I0(\s1_los_dir[0]_i_4__1_0 ),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(\s1_los_dir[1]_i_33__1_0 [3]),
        .I3(\s1_los_dir[1]_i_44__1_n_0 ),
        .I4(\s1_los_dir[1]_i_33__1_0 [1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[1]_i_37__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT5 #(
    .INIT(32'h55555556)) 
    \s1_los_dir[1]_i_38__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [2]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[0]),
        .I4(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_38__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT4 #(
    .INIT(16'h1554)) 
    \s1_los_dir[1]_i_39__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[1]_i_39__1_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_3__1 
       (.I0(\s1_los_dir[1]_i_14__1_n_0 ),
        .I1(\s1_los_dir[1]_i_15__1_n_0 ),
        .I2(\s1_los_dir[1]_i_16__1_n_0 ),
        .I3(\s1_los_dir[1]_i_17__1_n_0 ),
        .I4(\s1_los_dir[1]_i_18__1_n_0 ),
        .I5(\s1_los_dir[1]_i_19__1_n_0 ),
        .O(\s1_los_dir[1]_i_3__1_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555556)) 
    \s1_los_dir[1]_i_40__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[0]),
        .I4(ghost3_row[1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[1]_i_40__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair83" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_41__0 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_41__0_n_0 ));
  LUT6 #(
    .INIT(64'h0013401780DCA2D4)) 
    \s1_los_dir[1]_i_42__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(ghost3_row[0]),
        .I4(ghost3_row[1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_42__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair72" *) 
  LUT4 #(
    .INIT(16'h8001)) 
    \s1_los_dir[1]_i_43__0 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_43__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_44__1 
       (.I0(ghost3_row[0]),
        .I1(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_44__1_n_0 ));
  LUT6 #(
    .INIT(64'h6022355C000835CC)) 
    \s1_los_dir[1]_i_45__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(ghost3_row[0]),
        .I5(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_45__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair70" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    \s1_los_dir[1]_i_46__1 
       (.I0(ghost3_col[1]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[3]),
        .I3(\s1_los_dir[0]_i_5__1_0 ),
        .O(\s1_los_dir[1]_i_46__1_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_47__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_47__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \s1_los_dir[1]_i_48__1 
       (.I0(ghost3_row[0]),
        .I1(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_48__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT4 #(
    .INIT(16'h5666)) 
    \s1_los_dir[1]_i_49__1 
       (.I0(\s1_los_dir[0]_i_4__1_0 ),
        .I1(\s1_los_dir[1]_i_33__1_0 [3]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_49__1_n_0 ));
  LUT6 #(
    .INIT(64'hFF10101010101010)) 
    \s1_los_dir[1]_i_4__1 
       (.I0(ghost3_col[3]),
        .I1(\s1_los_dir_reg[1]_0 ),
        .I2(\s1_los_dir[1]_i_20__0_n_0 ),
        .I3(\s1_los_dir[1]_i_21__1_n_0 ),
        .I4(\s1_los_dir_reg[1]_2 ),
        .I5(\s1_los_dir[1]_i_22__0_n_0 ),
        .O(\s1_los_dir[1]_i_4__1_n_0 ));
  LUT6 #(
    .INIT(64'h5CCC22A05CC60800)) 
    \s1_los_dir[1]_i_50__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(ghost3_row[0]),
        .I5(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_50__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    \s1_los_dir[1]_i_51__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .I3(ghost3_col[0]),
        .O(\s1_los_dir[1]_i_51__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair63" *) 
  LUT5 #(
    .INIT(32'h44400004)) 
    \s1_los_dir[1]_i_52__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_52__1_n_0 ));
  LUT6 #(
    .INIT(64'h0000001155555554)) 
    \s1_los_dir[1]_i_53__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(ghost3_row[1]),
        .I2(ghost3_row[0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_53__1_n_0 ));
  LUT6 #(
    .INIT(64'h083009B52AA82AA0)) 
    \s1_los_dir[1]_i_54__1 
       (.I0(ghost3_row[0]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [2]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(ghost3_row[1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [3]),
        .O(\s1_los_dir[1]_i_54__1_n_0 ));
  LUT6 #(
    .INIT(64'h1F0C0054FF00E000)) 
    \s1_los_dir[1]_i_55__0 
       (.I0(ghost3_row[1]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .I5(\s1_los_dir[1]_i_33__1_0 [3]),
        .O(\s1_los_dir[1]_i_55__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF880001)) 
    \s1_los_dir[1]_i_56__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [0]),
        .I1(ghost3_row[1]),
        .I2(ghost3_row[0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .I5(\s1_los_dir[1]_i_33__1_0 [3]),
        .O(\s1_los_dir[1]_i_56__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT4 #(
    .INIT(16'h0802)) 
    \s1_los_dir[1]_i_57__1 
       (.I0(ghost3_row[0]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(ghost3_row[1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_57__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair74" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    \s1_los_dir[1]_i_58__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[0]),
        .I2(ghost3_col[1]),
        .I3(ghost3_col[2]),
        .O(\s1_los_dir[1]_i_58__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT5 #(
    .INIT(32'h00000095)) 
    \s1_los_dir[1]_i_59__0 
       (.I0(\s1_los_dir[1]_i_33__1_0 [2]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[0]),
        .I4(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_59__0_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_5__1 
       (.I0(\s1_los_dir[1]_i_23__0_n_0 ),
        .I1(\s1_los_dir[1]_i_9__1_n_0 ),
        .I2(\s1_los_dir[1]_i_24__1_n_0 ),
        .I3(\s1_los_dir[1]_i_25__1_n_0 ),
        .I4(\s1_los_dir[1]_i_26__1_n_0 ),
        .I5(\s1_los_dir[1]_i_27__1_n_0 ),
        .O(\s1_los_dir[1]_i_5__1_n_0 ));
  LUT6 #(
    .INIT(64'h1155115511551554)) 
    \s1_los_dir[1]_i_60__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(ghost3_row[0]),
        .I5(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_60__1_n_0 ));
  LUT6 #(
    .INIT(64'h078DA4822F0D0002)) 
    \s1_los_dir[1]_i_61__0 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(ghost3_row[0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .I5(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_61__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair75" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \s1_los_dir[1]_i_62__0 
       (.I0(ghost3_col[2]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_62__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT5 #(
    .INIT(32'h3F7FFFBF)) 
    \s1_los_dir[1]_i_63__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_63__1_n_0 ));
  LUT6 #(
    .INIT(64'h0000111155555554)) 
    \s1_los_dir[1]_i_64__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_64__1_n_0 ));
  LUT6 #(
    .INIT(64'hA5FBC5B3C5F7C5FF)) 
    \s1_los_dir[1]_i_65__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [2]),
        .I1(\s1_los_dir[1]_i_33__1_0 [3]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [0]),
        .I5(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_65__1_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_66__1 
       (.I0(ghost3_col[2]),
        .I1(ghost3_col[1]),
        .I2(ghost3_col[0]),
        .I3(ghost3_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_66__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair78" *) 
  LUT3 #(
    .INIT(8'hA9)) 
    \s1_los_dir[1]_i_67__0 
       (.I0(\s1_los_dir[0]_i_4__1_0 ),
        .I1(\s1_los_dir[1]_i_33__1_0 [3]),
        .I2(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_67__0_n_0 ));
  LUT6 #(
    .INIT(64'hCCC0CCC800033333)) 
    \s1_los_dir[1]_i_68__1 
       (.I0(ghost3_row[1]),
        .I1(\s1_los_dir[1]_i_33__1_0 [3]),
        .I2(\s1_los_dir[1]_i_33__1_0 [0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [1]),
        .I4(ghost3_row[0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_68__1_n_0 ));
  LUT6 #(
    .INIT(64'hF6BFF48FF49FFC0F)) 
    \s1_los_dir[1]_i_69__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [3]),
        .I3(\s1_los_dir[1]_i_33__1_0 [2]),
        .I4(ghost3_row[1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[1]_i_69__1_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_6__1 
       (.I0(\s1_los_dir[1]_i_28__1_n_0 ),
        .I1(\s1_los_dir[1]_i_29__1_n_0 ),
        .I2(\s1_los_dir[1]_i_30__1_n_0 ),
        .I3(\s1_los_dir[1]_i_31__1_n_0 ),
        .I4(\s1_los_dir[1]_i_32__1_n_0 ),
        .I5(\s1_los_dir[1]_i_33__1_n_0 ),
        .O(\s1_los_dir[1]_i_6__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair76" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \s1_los_dir[1]_i_70__1 
       (.I0(\s1_los_dir[0]_i_4__1_0 ),
        .I1(\s1_los_dir[1]_i_33__1_0 [2]),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_70__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT3 #(
    .INIT(8'hFE)) 
    \s1_los_dir[1]_i_71__1 
       (.I0(\s1_los_dir[1]_i_92__0_n_0 ),
        .I1(\s1_los_dir[1]_i_93__0_n_0 ),
        .I2(\s1_los_dir[1]_i_94__1_n_0 ),
        .O(\s1_los_dir[1]_i_71__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair61" *) 
  LUT5 #(
    .INIT(32'h20001030)) 
    \s1_los_dir[1]_i_72__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[1]),
        .I2(ghost3_row[0]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_72__1_n_0 ));
  LUT6 #(
    .INIT(64'h0011555555555554)) 
    \s1_los_dir[1]_i_73__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [1]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_73__1_n_0 ));
  LUT6 #(
    .INIT(64'h74F0D2D2202A0020)) 
    \s1_los_dir[1]_i_74__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [2]),
        .I3(ghost3_row[1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [1]),
        .I5(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_74__1_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFF4)) 
    \s1_los_dir[1]_i_75__1 
       (.I0(rover_col[1]),
        .I1(\s1_los_dir[1]_i_2__1_0 ),
        .I2(ghost3_col[0]),
        .I3(ghost3_col[3]),
        .I4(ghost3_col[1]),
        .I5(ghost3_col[2]),
        .O(\s1_los_dir[1]_i_75__1_n_0 ));
  LUT6 #(
    .INIT(64'h02021F5F002AD050)) 
    \s1_los_dir[1]_i_76__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(ghost3_row[1]),
        .I4(ghost3_row[0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_76__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair77" *) 
  LUT4 #(
    .INIT(16'h0110)) 
    \s1_los_dir[1]_i_77__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [0]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[0]),
        .O(\s1_los_dir[1]_i_77__1_n_0 ));
  LUT6 #(
    .INIT(64'h0727270F2404A400)) 
    \s1_los_dir[1]_i_78__0 
       (.I0(\s1_los_dir[1]_i_33__1_0 [3]),
        .I1(\s1_los_dir[1]_i_33__1_0 [1]),
        .I2(ghost3_row[0]),
        .I3(ghost3_row[1]),
        .I4(\s1_los_dir[1]_i_33__1_0 [0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_78__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair79" *) 
  LUT4 #(
    .INIT(16'h0154)) 
    \s1_los_dir[1]_i_79__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [1]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .O(\s1_los_dir[1]_i_79__1_n_0 ));
  LUT6 #(
    .INIT(64'h404040FF40404040)) 
    \s1_los_dir[1]_i_7__1 
       (.I0(\s1_los_dir_reg[1]_1 ),
        .I1(\s1_los_dir[1]_i_34__1_n_0 ),
        .I2(\s1_los_dir[1]_i_22__0_n_0 ),
        .I3(rover_col[3]),
        .I4(\s1_los_dir[1]_i_35__1_n_0 ),
        .I5(\s1_los_dir[1]_i_20__0_n_0 ),
        .O(\s1_los_dir[1]_i_7__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair60" *) 
  LUT5 #(
    .INIT(32'hF0E00001)) 
    \s1_los_dir[1]_i_80__1 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_80__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair81" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \s1_los_dir[1]_i_81__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [0]),
        .I1(ghost3_row[0]),
        .I2(ghost3_row[1]),
        .O(\s1_los_dir[1]_i_81__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair82" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_82__1 
       (.I0(ghost3_col[2]),
        .I1(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_82__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair58" *) 
  LUT5 #(
    .INIT(32'h5777FFFF)) 
    \s1_los_dir[1]_i_83__0 
       (.I0(\s1_los_dir[1]_i_27__1_0 ),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .I3(ghost3_col[0]),
        .I4(ghost3_col[3]),
        .O(\s1_los_dir[1]_i_83__0_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair66" *) 
  LUT3 #(
    .INIT(8'hA8)) 
    \s1_los_dir[1]_i_84__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[2]),
        .I2(ghost3_col[1]),
        .O(\s1_los_dir[1]_i_84__1_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_85__1 
       (.I0(rover_col[2]),
        .I1(rover_col[1]),
        .I2(rover_col[0]),
        .I3(rover_col[3]),
        .I4(ghost3_col[3]),
        .I5(ghost3_col[2]),
        .O(\s1_los_dir[1]_i_85__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair80" *) 
  LUT3 #(
    .INIT(8'hBF)) 
    \s1_los_dir[1]_i_86__1 
       (.I0(\s1_los_dir[1]_i_92__0_n_0 ),
        .I1(\s1_los_dir[1]_i_95__1_n_0 ),
        .I2(\s1_los_dir[1]_i_96__1_n_0 ),
        .O(\s1_los_dir[1]_i_86__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair59" *) 
  LUT5 #(
    .INIT(32'h80007FFF)) 
    \s1_los_dir[1]_i_87__0 
       (.I0(ghost3_row[1]),
        .I1(ghost3_row[0]),
        .I2(\s1_los_dir[1]_i_33__1_0 [1]),
        .I3(\s1_los_dir[1]_i_33__1_0 [0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [2]),
        .O(\s1_los_dir[1]_i_87__0_n_0 ));
  LUT6 #(
    .INIT(64'h0111111111111110)) 
    \s1_los_dir[1]_i_88__1 
       (.I0(\s1_los_dir[1]_i_33__1_0 [2]),
        .I1(\s1_los_dir[1]_i_33__1_0 [3]),
        .I2(ghost3_row[1]),
        .I3(ghost3_row[0]),
        .I4(\s1_los_dir[1]_i_33__1_0 [0]),
        .I5(\s1_los_dir[1]_i_33__1_0 [1]),
        .O(\s1_los_dir[1]_i_88__1_n_0 ));
  LUT6 #(
    .INIT(64'h8FFF8FFF8FFFFFFF)) 
    \s1_los_dir[1]_i_89__1 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost3_col[2]),
        .I3(ghost3_col[3]),
        .I4(ghost3_col[0]),
        .I5(ghost3_col[1]),
        .O(\s1_los_dir[1]_i_89__1_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_8__1 
       (.I0(ghost3_col[3]),
        .I1(ghost3_col[2]),
        .I2(rover_col[2]),
        .I3(rover_col[1]),
        .I4(rover_col[0]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_8__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair57" *) 
  LUT5 #(
    .INIT(32'hFFFF6FF6)) 
    \s1_los_dir[1]_i_92__0 
       (.I0(ghost3_row[1]),
        .I1(rover_row[1]),
        .I2(ghost3_row[0]),
        .I3(rover_row[0]),
        .I4(\s1_los_dir[1]_i_105__1_n_0 ),
        .O(\s1_los_dir[1]_i_92__0_n_0 ));
  LUT6 #(
    .INIT(64'h20F220F2B0FB20F2)) 
    \s1_los_dir[1]_i_93__0 
       (.I0(ghost3_col[2]),
        .I1(rover_col[2]),
        .I2(ghost3_col[3]),
        .I3(rover_col[3]),
        .I4(ghost3_col[1]),
        .I5(rover_col[1]),
        .O(\s1_los_dir[1]_i_93__0_n_0 ));
  LUT5 #(
    .INIT(32'hA2A200A2)) 
    \s1_los_dir[1]_i_94__1 
       (.I0(s1_los_detected_i_26__1_n_0),
        .I1(rover_col[3]),
        .I2(ghost3_col[3]),
        .I3(rover_col[0]),
        .I4(ghost3_col[0]),
        .O(\s1_los_dir[1]_i_94__1_n_0 ));
  LUT6 #(
    .INIT(64'hDD4D0000FFFFDD4D)) 
    \s1_los_dir[1]_i_95__1 
       (.I0(rover_col[2]),
        .I1(ghost3_col[2]),
        .I2(rover_col[1]),
        .I3(ghost3_col[1]),
        .I4(ghost3_col[3]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_95__1_n_0 ));
  LUT5 #(
    .INIT(32'hAEAEFFAE)) 
    \s1_los_dir[1]_i_96__1 
       (.I0(s1_los_detected_i_25__0_n_0),
        .I1(ghost3_col[0]),
        .I2(rover_col[0]),
        .I3(ghost3_col[3]),
        .I4(rover_col[3]),
        .O(\s1_los_dir[1]_i_96__1_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_9__1 
       (.I0(\s1_los_dir[1]_i_36__0_n_0 ),
        .I1(\s1_los_dir[1]_i_37__1_n_0 ),
        .I2(\s1_los_dir[1]_i_38__1_n_0 ),
        .I3(\s1_los_dir[1]_i_39__1_n_0 ),
        .I4(\s1_los_dir[1]_i_40__1_n_0 ),
        .I5(\s1_los_dir[1]_i_41__0_n_0 ),
        .O(\s1_los_dir[1]_i_9__1_n_0 ));
  FDCE \s1_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_dir_comb[0]),
        .Q(s1_los_dir[0]));
  FDCE \s1_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(s1_los_detected_reg_0),
        .CLR(AR),
        .D(los_dir_comb[1]),
        .Q(s1_los_dir[1]));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_10__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__1_n_6),
        .O(s2_can_down_i_10__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_11__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_11__1_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_12__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__1_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_down_i_12__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_13__1
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_down_reg_i_16__1_n_7),
        .O(s2_can_down_i_13__1_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_14__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .O(s2_can_down_i_14__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_15__1
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_15__1_n_0));
  LUT4 #(
    .INIT(16'h542B)) 
    s2_can_down_i_17__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_down_i_17__1_n_0));
  LUT4 #(
    .INIT(16'h8505)) 
    s2_can_down_i_18__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_18__1_n_0));
  LUT4 #(
    .INIT(16'h1A9A)) 
    s2_can_down_i_19__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_19__1_n_0));
  LUT6 #(
    .INIT(64'h0000000707070007)) 
    s2_can_down_i_1__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[3]),
        .I3(s2_can_down_i_2__1_n_0),
        .I4(s2_can_down_reg_i_3__1_n_5),
        .I5(s2_can_down_i_4__1_n_0),
        .O(wc_down));
  LUT2 #(
    .INIT(4'hE)) 
    s2_can_down_i_20__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_20__1_n_0));
  LUT4 #(
    .INIT(16'h651A)) 
    s2_can_down_i_21__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_21__1_n_0));
  LUT4 #(
    .INIT(16'h4B52)) 
    s2_can_down_i_22__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_22__1_n_0));
  LUT4 #(
    .INIT(16'h1CE3)) 
    s2_can_down_i_23__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_23__1_n_0));
  LUT3 #(
    .INIT(8'h65)) 
    s2_can_down_i_24__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_down_i_24__1_n_0));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_down_i_2__1
       (.I0(s2_can_down_reg_i_3__1_n_6),
        .I1(s2_can_down_reg_i_5__1_n_6),
        .I2(s2_can_down_reg_i_3__1_n_7),
        .I3(s2_can_down_reg_i_5__1_n_5),
        .I4(s2_can_down_reg_i_5__1_n_4),
        .I5(s2_can_down_reg_i_5__1_n_7),
        .O(s2_can_down_i_2__1_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    s2_can_down_i_4__1
       (.I0(s2_can_down_reg_i_3__1_n_7),
        .I1(s2_can_down_reg_i_5__1_n_7),
        .I2(s2_can_down_reg_i_5__1_n_6),
        .O(s2_can_down_i_4__1_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_down_i_6__1
       (.I0(s2_can_down_reg_i_16__1_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_down_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_down_i_9__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__1_n_6),
        .I2(s2_can_down_reg_i_16__1_n_5),
        .O(s2_can_down_i_9__1_n_0));
  FDCE s2_can_down_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_down),
        .Q(s2_can_down));
  CARRY4 s2_can_down_reg_i_16__1
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_16__1_n_0,s2_can_down_reg_i_16__1_n_1,s2_can_down_reg_i_16__1_n_2,s2_can_down_reg_i_16__1_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_18__1_n_0,s2_can_down_i_19__1_n_0,s2_can_down_i_20__1_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_0 ,s2_can_down_reg_i_16__1_n_5,s2_can_down_reg_i_16__1_n_6,s2_can_down_reg_i_16__1_n_7}),
        .S({s2_can_down_i_21__1_n_0,s2_can_down_i_22__1_n_0,s2_can_down_i_23__1_n_0,s2_can_down_i_24__1_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_3__1
       (.CI(s2_can_down_reg_i_5__1_n_0),
        .CO({NLW_s2_can_down_reg_i_3__1_CO_UNCONNECTED[3:2],s2_can_down_reg_i_3__1_n_2,s2_can_down_reg_i_3__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_down_i_6__1_n_0}),
        .O({NLW_s2_can_down_reg_i_3__1_O_UNCONNECTED[3],s2_can_down_reg_i_3__1_n_5,s2_can_down_reg_i_3__1_n_6,s2_can_down_reg_i_3__1_n_7}),
        .S({1'b0,s2_can_down_reg_i_7__1_n_7,s2_can_down_reg_0,s2_can_down_i_9__1_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_5__1
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_5__1_n_0,s2_can_down_reg_i_5__1_n_1,s2_can_down_reg_i_5__1_n_2,s2_can_down_reg_i_5__1_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_10__1_n_0,s1_ghost_col[2],s2_can_down_i_11__1_n_0,s1_ghost_row[0]}),
        .O({s2_can_down_reg_i_5__1_n_4,s2_can_down_reg_i_5__1_n_5,s2_can_down_reg_i_5__1_n_6,s2_can_down_reg_i_5__1_n_7}),
        .S({s2_can_down_i_12__1_n_0,s2_can_down_i_13__1_n_0,s2_can_down_i_14__1_n_0,s2_can_down_i_15__1_n_0}));
  CARRY4 s2_can_down_reg_i_7__1
       (.CI(s2_can_down_reg_i_16__1_n_0),
        .CO(NLW_s2_can_down_reg_i_7__1_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_down_reg_i_7__1_O_UNCONNECTED[3:1],s2_can_down_reg_i_7__1_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_down_i_17__1_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_10__1
       (.I0(s1_ghost_row[1]),
        .O(s2_can_left_i_10__1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_11__1
       (.I0(s1_ghost_row[0]),
        .O(s2_can_left_i_11__1_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_left_i_12__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__1_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_left_i_12__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_13__1
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__1_n_7),
        .O(s2_can_left_i_13__1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_14__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .O(s2_can_left_i_14__1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_15__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_left_i_15__1_n_0));
  LUT6 #(
    .INIT(64'hA2A2A202A2A2A2A2)) 
    s2_can_left_i_1__1
       (.I0(wc_left01_in),
        .I1(s2_can_left_i_3__1_n_0),
        .I2(s2_can_left_reg_i_4__1_n_5),
        .I3(s2_can_left_reg_i_5__1_n_6),
        .I4(s2_can_left_reg_i_5__1_n_7),
        .I5(s2_can_left_reg_i_4__1_n_7),
        .O(wc_left));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    s2_can_left_i_2__1
       (.I0(s1_ghost_col[2]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_col[3]),
        .O(wc_left01_in));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_left_i_3__1
       (.I0(s2_can_left_reg_i_4__1_n_6),
        .I1(s2_can_left_reg_i_5__1_n_6),
        .I2(s2_can_left_reg_i_4__1_n_7),
        .I3(s2_can_left_reg_i_5__1_n_5),
        .I4(s2_can_left_reg_i_5__1_n_4),
        .I5(s2_can_left_reg_i_5__1_n_7),
        .O(s2_can_left_i_3__1_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_left_i_6__1
       (.I0(s2_can_right_reg_i_7__1_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_left_i_6__1_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_7__1
       (.I0(s2_can_right_reg_i_7__1_n_4),
        .O(p_1_in));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_left_i_8__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__1_n_6),
        .I2(s2_can_right_reg_i_7__1_n_5),
        .O(s2_can_left_i_8__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_9__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__1_n_6),
        .O(s2_can_left_i_9__1_n_0));
  FDCE s2_can_left_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_left),
        .Q(s2_can_left));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_4__1
       (.CI(s2_can_left_reg_i_5__1_n_0),
        .CO({NLW_s2_can_left_reg_i_4__1_CO_UNCONNECTED[3:2],s2_can_left_reg_i_4__1_n_2,s2_can_left_reg_i_4__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_left_i_6__1_n_0}),
        .O({NLW_s2_can_left_reg_i_4__1_O_UNCONNECTED[3],s2_can_left_reg_i_4__1_n_5,s2_can_left_reg_i_4__1_n_6,s2_can_left_reg_i_4__1_n_7}),
        .S({1'b0,s2_can_right_reg_i_9__1_n_7,p_1_in,s2_can_left_i_8__1_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_5__1
       (.CI(1'b0),
        .CO({s2_can_left_reg_i_5__1_n_0,s2_can_left_reg_i_5__1_n_1,s2_can_left_reg_i_5__1_n_2,s2_can_left_reg_i_5__1_n_3}),
        .CYINIT(1'b1),
        .DI({s2_can_left_i_9__1_n_0,s1_ghost_col[2],s2_can_left_i_10__1_n_0,s2_can_left_i_11__1_n_0}),
        .O({s2_can_left_reg_i_5__1_n_4,s2_can_left_reg_i_5__1_n_5,s2_can_left_reg_i_5__1_n_6,s2_can_left_reg_i_5__1_n_7}),
        .S({s2_can_left_i_12__1_n_0,s2_can_left_i_13__1_n_0,s2_can_left_i_14__1_n_0,s2_can_left_i_15__1_n_0}));
  LUT5 #(
    .INIT(32'h2ABFD540)) 
    s2_can_right_i_10__1
       (.I0(s2_can_right_i_8__1_n_0),
        .I1(s2_can_right_reg_i_7__1_n_6),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__1_n_5),
        .I4(s2_can_right_reg_i_7__1_n_4),
        .O(s2_can_right_i_10__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT4 #(
    .INIT(16'h7887)) 
    s2_can_right_i_11__1
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_11__1_n_0));
  LUT6 #(
    .INIT(64'h7887F00FF00F8778)) 
    s2_can_right_i_12__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .I2(s2_can_right_reg_i_7__1_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s1_ghost_col[1]),
        .I5(s1_ghost_row[1]),
        .O(s2_can_right_i_12__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT5 #(
    .INIT(32'h56A9A956)) 
    s2_can_right_i_13__1
       (.I0(s2_can_right_i_6__1_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__1_n_7),
        .I3(s2_can_right_reg_i_7__1_n_6),
        .I4(s1_ghost_col[3]),
        .O(s2_can_right_i_13__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair65" *) 
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_14__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_right_i_14__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_15__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .O(s2_can_right_i_15__1_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_16__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .O(s2_can_right_i_16__1_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    s2_can_right_i_17__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_17__1_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_18__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[3]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_18__1_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_19__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[3]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_19__1_n_0));
  LUT6 #(
    .INIT(64'h0000077777770777)) 
    s2_can_right_i_1__1
       (.I0(s1_ghost_col[3]),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_i_2__1_n_0),
        .I3(s2_can_right_i_3__1_n_0),
        .I4(s2_can_right_i_4__1_n_0),
        .I5(s2_can_right_i_5__1_n_0),
        .O(wc_right));
  LUT4 #(
    .INIT(16'h2DD2)) 
    s2_can_right_i_20__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_right_i_20__1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_21__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_21__1_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    s2_can_right_i_22__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .O(s2_can_right_i_22__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair64" *) 
  LUT4 #(
    .INIT(16'h0990)) 
    s2_can_right_i_2__1
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_2__1_n_0));
  LUT6 #(
    .INIT(64'hAB54FD02FD0254AB)) 
    s2_can_right_i_3__1
       (.I0(s2_can_right_i_6__1_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__1_n_7),
        .I3(s2_can_right_reg_i_7__1_n_5),
        .I4(s2_can_right_reg_i_7__1_n_6),
        .I5(s1_ghost_col[3]),
        .O(s2_can_right_i_3__1_n_0));
  LUT6 #(
    .INIT(64'h15550111EAAAFEEE)) 
    s2_can_right_i_4__1
       (.I0(s2_can_right_reg_i_7__1_n_4),
        .I1(s2_can_right_reg_i_7__1_n_5),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__1_n_6),
        .I4(s2_can_right_i_8__1_n_0),
        .I5(s2_can_right_reg_i_9__1_n_7),
        .O(s2_can_right_i_4__1_n_0));
  LUT6 #(
    .INIT(64'hF0A52D0F18080088)) 
    s2_can_right_i_5__1
       (.I0(s2_can_right_i_10__1_n_0),
        .I1(s2_can_right_i_11__1_n_0),
        .I2(s2_can_right_i_3__1_n_0),
        .I3(s2_can_right_i_12__1_n_0),
        .I4(s2_can_right_i_13__1_n_0),
        .I5(s2_can_right_i_14__1_n_0),
        .O(s2_can_right_i_5__1_n_0));
  LUT6 #(
    .INIT(64'h0666666F666F666F)) 
    s2_can_right_i_6__1
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__1_n_7),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_col[1]),
        .I4(s1_ghost_row[0]),
        .I5(s1_ghost_col[0]),
        .O(s2_can_right_i_6__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair56" *) 
  LUT5 #(
    .INIT(32'h999F0009)) 
    s2_can_right_i_8__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__1_n_6),
        .I2(s2_can_right_reg_i_7__1_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s2_can_right_i_6__1_n_0),
        .O(s2_can_right_i_8__1_n_0));
  FDCE s2_can_right_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_right),
        .Q(s2_can_right));
  CARRY4 s2_can_right_reg_i_7__1
       (.CI(1'b0),
        .CO({s2_can_right_reg_i_7__1_n_0,s2_can_right_reg_i_7__1_n_1,s2_can_right_reg_i_7__1_n_2,s2_can_right_reg_i_7__1_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_right_i_15__1_n_0,s2_can_right_i_16__1_n_0,s2_can_right_i_17__1_n_0,1'b0}),
        .O({s2_can_right_reg_i_7__1_n_4,s2_can_right_reg_i_7__1_n_5,s2_can_right_reg_i_7__1_n_6,s2_can_right_reg_i_7__1_n_7}),
        .S({s2_can_right_i_18__1_n_0,s2_can_right_i_19__1_n_0,s2_can_right_i_20__1_n_0,s2_can_right_i_21__1_n_0}));
  CARRY4 s2_can_right_reg_i_9__1
       (.CI(s2_can_right_reg_i_7__1_n_0),
        .CO(NLW_s2_can_right_reg_i_9__1_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_right_reg_i_9__1_O_UNCONNECTED[3:1],s2_can_right_reg_i_9__1_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_right_i_22__1_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_10__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__1_n_6),
        .O(s2_can_up_i_10__1_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_up_i_11__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .O(wc_down5));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_up_i_12__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__1_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_up_i_12__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_13__1
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_up_reg_i_16__1_n_7),
        .O(s2_can_up_i_13__1_n_0));
  LUT3 #(
    .INIT(8'h69)) 
    s2_can_up_i_14__1
       (.I0(s1_ghost_col[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_14__1_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_15__1
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_up_i_15__1_n_0));
  LUT4 #(
    .INIT(16'h42BF)) 
    s2_can_up_i_17__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_17__1_n_0));
  LUT4 #(
    .INIT(16'h1213)) 
    s2_can_up_i_18__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_18__1_n_0));
  LUT4 #(
    .INIT(16'h6564)) 
    s2_can_up_i_19__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_19__1_n_0));
  LUT5 #(
    .INIT(32'h0000FFFE)) 
    s2_can_up_i_1__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[2]),
        .I4(s2_can_up_i_2__1_n_0),
        .O(wc_up));
  LUT3 #(
    .INIT(8'hED)) 
    s2_can_up_i_20__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_20__1_n_0));
  LUT4 #(
    .INIT(16'h9599)) 
    s2_can_up_i_21__1
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_21__1_n_0));
  LUT4 #(
    .INIT(16'h5964)) 
    s2_can_up_i_22__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_22__1_n_0));
  LUT4 #(
    .INIT(16'h738C)) 
    s2_can_up_i_23__1
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_23__1_n_0));
  LUT3 #(
    .INIT(8'hA6)) 
    s2_can_up_i_24__1
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_up_i_24__1_n_0));
  LUT6 #(
    .INIT(64'h0028FFFF00280000)) 
    s2_can_up_i_2__1
       (.I0(s2_can_up_reg_i_3__1_n_7),
        .I1(s1_ghost_col[0]),
        .I2(s1_ghost_row[0]),
        .I3(s2_can_up_reg_i_4__1_n_6),
        .I4(s2_can_up_reg_i_3__1_n_5),
        .I5(s2_can_up_i_5__1_n_0),
        .O(s2_can_up_i_2__1_n_0));
  LUT6 #(
    .INIT(64'hF0A5870F42020022)) 
    s2_can_up_i_5__1
       (.I0(s2_can_up_reg_i_3__1_n_6),
        .I1(s2_can_up_reg_i_4__1_n_6),
        .I2(s2_can_up_reg_i_3__1_n_7),
        .I3(s2_can_up_reg_i_4__1_n_5),
        .I4(s2_can_up_reg_i_4__1_n_4),
        .I5(s2_can_right_i_14__1_n_0),
        .O(s2_can_up_i_5__1_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_up_i_6__1
       (.I0(s2_can_up_reg_i_16__1_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_up_i_6__1_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_up_i_9__1
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__1_n_6),
        .I2(s2_can_up_reg_i_16__1_n_5),
        .O(s2_can_up_i_9__1_n_0));
  FDCE s2_can_up_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_up),
        .Q(s2_can_up));
  CARRY4 s2_can_up_reg_i_16__1
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_16__1_n_0,s2_can_up_reg_i_16__1_n_1,s2_can_up_reg_i_16__1_n_2,s2_can_up_reg_i_16__1_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_18__1_n_0,s2_can_up_i_19__1_n_0,s2_can_up_i_20__1_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_1 ,s2_can_up_reg_i_16__1_n_5,s2_can_up_reg_i_16__1_n_6,s2_can_up_reg_i_16__1_n_7}),
        .S({s2_can_up_i_21__1_n_0,s2_can_up_i_22__1_n_0,s2_can_up_i_23__1_n_0,s2_can_up_i_24__1_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_3__1
       (.CI(s2_can_up_reg_i_4__1_n_0),
        .CO({NLW_s2_can_up_reg_i_3__1_CO_UNCONNECTED[3:2],s2_can_up_reg_i_3__1_n_2,s2_can_up_reg_i_3__1_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_up_i_6__1_n_0}),
        .O({NLW_s2_can_up_reg_i_3__1_O_UNCONNECTED[3],s2_can_up_reg_i_3__1_n_5,s2_can_up_reg_i_3__1_n_6,s2_can_up_reg_i_3__1_n_7}),
        .S({1'b0,s2_can_up_reg_i_7__1_n_7,s2_can_up_i_2__1_0,s2_can_up_i_9__1_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_4__1
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_4__1_n_0,s2_can_up_reg_i_4__1_n_1,s2_can_up_reg_i_4__1_n_2,s2_can_up_reg_i_4__1_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_10__1_n_0,s1_ghost_col[2],wc_down5,s1_ghost_row[0]}),
        .O({s2_can_up_reg_i_4__1_n_4,s2_can_up_reg_i_4__1_n_5,s2_can_up_reg_i_4__1_n_6,NLW_s2_can_up_reg_i_4__1_O_UNCONNECTED[0]}),
        .S({s2_can_up_i_12__1_n_0,s2_can_up_i_13__1_n_0,s2_can_up_i_14__1_n_0,s2_can_up_i_15__1_n_0}));
  CARRY4 s2_can_up_reg_i_7__1
       (.CI(s2_can_up_reg_i_16__1_n_0),
        .CO(NLW_s2_can_up_reg_i_7__1_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_up_reg_i_7__1_O_UNCONNECTED[3:1],s2_can_up_reg_i_7__1_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_up_i_17__1_n_0}));
  FDCE \s2_facing_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[0]),
        .Q(s2_facing[0]));
  FDCE \s2_facing_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[1]),
        .Q(s2_facing[1]));
  FDCE s2_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_detected),
        .Q(s2_los_detected));
  FDCE \s2_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[0]),
        .Q(s2_los_dir[0]));
  FDCE \s2_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[1]),
        .Q(s2_los_dir[1]));
endmodule

(* ORIG_REF_NAME = "ghost_top" *) 
module ghost_bd_ghost_multi_0_0_ghost_top_2
   (\s1_ghost_row_reg[2]_0 ,
    \s1_ghost_row_reg[2]_1 ,
    rover_row_2_sp_1,
    rover_col_3_sp_1,
    \rover_row[2]_0 ,
    rover_row_0_sp_1,
    rover_row_3_sp_1,
    rover_col_2_sp_1,
    \rover_col[3]_0 ,
    \rover_col[2]_0 ,
    \rover_col[2]_1 ,
    \rover_col[2]_2 ,
    \rover_col[3]_1 ,
    \rover_col[2]_3 ,
    \rover_col[3]_2 ,
    D,
    E,
    S_AXI_ACLK,
    AR,
    \s1_los_dir_reg[0]_0 ,
    s2_can_down_reg_0,
    s2_can_up_i_2__2_0,
    \s1_los_dir[1]_i_33__2_0 ,
    ghost4_row,
    ghost4_col,
    rover_col,
    rover_row,
    \s1_los_dir[0]_i_4__2_0 ,
    p_0_in__0);
  output [0:0]\s1_ghost_row_reg[2]_0 ;
  output [0:0]\s1_ghost_row_reg[2]_1 ;
  output rover_row_2_sp_1;
  output rover_col_3_sp_1;
  output \rover_row[2]_0 ;
  output rover_row_0_sp_1;
  output rover_row_3_sp_1;
  output rover_col_2_sp_1;
  output \rover_col[3]_0 ;
  output \rover_col[2]_0 ;
  output \rover_col[2]_1 ;
  output \rover_col[2]_2 ;
  output \rover_col[3]_1 ;
  output \rover_col[2]_3 ;
  output \rover_col[3]_2 ;
  output [1:0]D;
  input [0:0]E;
  input S_AXI_ACLK;
  input [0:0]AR;
  input [0:0]\s1_los_dir_reg[0]_0 ;
  input [0:0]s2_can_down_reg_0;
  input [0:0]s2_can_up_i_2__2_0;
  input [3:0]\s1_los_dir[1]_i_33__2_0 ;
  input [3:0]ghost4_row;
  input [3:0]ghost4_col;
  input [3:0]rover_col;
  input [3:0]rover_row;
  input [0:0]\s1_los_dir[0]_i_4__2_0 ;
  input p_0_in__0;

  wire [0:0]AR;
  wire [1:0]D;
  wire [0:0]E;
  wire S_AXI_ACLK;
  wire \direction[0]_i_1__2_n_0 ;
  wire \direction[1]_i_1__2_n_0 ;
  wire [3:0]ghost4_col;
  wire [3:0]ghost4_row;
  wire los_detected_comb;
  wire [1:0]los_dir_comb;
  wire p_0_in__0;
  wire [5:5]p_1_in;
  wire [3:0]rover_col;
  wire \rover_col[2]_0 ;
  wire \rover_col[2]_1 ;
  wire \rover_col[2]_2 ;
  wire \rover_col[2]_3 ;
  wire \rover_col[3]_0 ;
  wire \rover_col[3]_1 ;
  wire \rover_col[3]_2 ;
  wire rover_col_2_sn_1;
  wire rover_col_3_sn_1;
  wire [3:0]rover_row;
  wire \rover_row[2]_0 ;
  wire rover_row_0_sn_1;
  wire rover_row_2_sn_1;
  wire rover_row_3_sn_1;
  wire [3:0]s1_ghost_col;
  wire [3:0]s1_ghost_row;
  wire [0:0]\s1_ghost_row_reg[2]_0 ;
  wire [0:0]\s1_ghost_row_reg[2]_1 ;
  wire s1_los_detected;
  wire s1_los_detected_i_10__2_n_0;
  wire s1_los_detected_i_11__2_n_0;
  wire s1_los_detected_i_12__2_n_0;
  wire s1_los_detected_i_13__2_n_0;
  wire s1_los_detected_i_14__2_n_0;
  wire s1_los_detected_i_15__2_n_0;
  wire s1_los_detected_i_16__2_n_0;
  wire s1_los_detected_i_17__1_n_0;
  wire s1_los_detected_i_18__2_n_0;
  wire s1_los_detected_i_19__2_n_0;
  wire s1_los_detected_i_20__1_n_0;
  wire s1_los_detected_i_21__2_n_0;
  wire s1_los_detected_i_22__2_n_0;
  wire s1_los_detected_i_23__2_n_0;
  wire s1_los_detected_i_24__2_n_0;
  wire s1_los_detected_i_25__1_n_0;
  wire s1_los_detected_i_26__2_n_0;
  wire s1_los_detected_i_2__2_n_0;
  wire s1_los_detected_i_3__2_n_0;
  wire s1_los_detected_i_4__1_n_0;
  wire s1_los_detected_i_5__2_n_0;
  wire s1_los_detected_i_6__2_n_0;
  wire s1_los_detected_i_7__2_n_0;
  wire s1_los_detected_i_8__2_n_0;
  wire s1_los_detected_i_9__2_n_0;
  wire [1:0]s1_los_dir;
  wire \s1_los_dir[0]_i_10__2_n_0 ;
  wire \s1_los_dir[0]_i_11__2_n_0 ;
  wire \s1_los_dir[0]_i_12__2_n_0 ;
  wire \s1_los_dir[0]_i_13__2_n_0 ;
  wire \s1_los_dir[0]_i_14__2_n_0 ;
  wire \s1_los_dir[0]_i_15__2_n_0 ;
  wire \s1_los_dir[0]_i_16__2_n_0 ;
  wire \s1_los_dir[0]_i_17__2_n_0 ;
  wire \s1_los_dir[0]_i_18__2_n_0 ;
  wire \s1_los_dir[0]_i_19__2_n_0 ;
  wire \s1_los_dir[0]_i_20__2_n_0 ;
  wire \s1_los_dir[0]_i_21__2_n_0 ;
  wire \s1_los_dir[0]_i_22__2_n_0 ;
  wire \s1_los_dir[0]_i_23__2_n_0 ;
  wire \s1_los_dir[0]_i_2__2_n_0 ;
  wire \s1_los_dir[0]_i_3__2_n_0 ;
  wire [0:0]\s1_los_dir[0]_i_4__2_0 ;
  wire \s1_los_dir[0]_i_4__2_n_0 ;
  wire \s1_los_dir[0]_i_5__2_n_0 ;
  wire \s1_los_dir[0]_i_6__2_n_0 ;
  wire \s1_los_dir[0]_i_7__2_n_0 ;
  wire \s1_los_dir[0]_i_8__2_n_0 ;
  wire \s1_los_dir[0]_i_9__2_n_0 ;
  wire \s1_los_dir[1]_i_105__2_n_0 ;
  wire \s1_los_dir[1]_i_10__2_n_0 ;
  wire \s1_los_dir[1]_i_11__2_n_0 ;
  wire \s1_los_dir[1]_i_12__2_n_0 ;
  wire \s1_los_dir[1]_i_13__2_n_0 ;
  wire \s1_los_dir[1]_i_14__2_n_0 ;
  wire \s1_los_dir[1]_i_15__2_n_0 ;
  wire \s1_los_dir[1]_i_16__2_n_0 ;
  wire \s1_los_dir[1]_i_17__2_n_0 ;
  wire \s1_los_dir[1]_i_18__2_n_0 ;
  wire \s1_los_dir[1]_i_19__2_n_0 ;
  wire \s1_los_dir[1]_i_20__1_n_0 ;
  wire \s1_los_dir[1]_i_21__2_n_0 ;
  wire \s1_los_dir[1]_i_22__1_n_0 ;
  wire \s1_los_dir[1]_i_23__1_n_0 ;
  wire \s1_los_dir[1]_i_24__2_n_0 ;
  wire \s1_los_dir[1]_i_25__2_n_0 ;
  wire \s1_los_dir[1]_i_26__2_n_0 ;
  wire \s1_los_dir[1]_i_27__2_n_0 ;
  wire \s1_los_dir[1]_i_28__2_n_0 ;
  wire \s1_los_dir[1]_i_29__2_n_0 ;
  wire \s1_los_dir[1]_i_2__2_n_0 ;
  wire \s1_los_dir[1]_i_30__2_n_0 ;
  wire \s1_los_dir[1]_i_31__2_n_0 ;
  wire \s1_los_dir[1]_i_32__2_n_0 ;
  wire [3:0]\s1_los_dir[1]_i_33__2_0 ;
  wire \s1_los_dir[1]_i_33__2_n_0 ;
  wire \s1_los_dir[1]_i_34__2_n_0 ;
  wire \s1_los_dir[1]_i_35__2_n_0 ;
  wire \s1_los_dir[1]_i_36__1_n_0 ;
  wire \s1_los_dir[1]_i_37__2_n_0 ;
  wire \s1_los_dir[1]_i_38__2_n_0 ;
  wire \s1_los_dir[1]_i_39__2_n_0 ;
  wire \s1_los_dir[1]_i_3__2_n_0 ;
  wire \s1_los_dir[1]_i_40__2_n_0 ;
  wire \s1_los_dir[1]_i_41__1_n_0 ;
  wire \s1_los_dir[1]_i_42__2_n_0 ;
  wire \s1_los_dir[1]_i_43__1_n_0 ;
  wire \s1_los_dir[1]_i_44__2_n_0 ;
  wire \s1_los_dir[1]_i_45__2_n_0 ;
  wire \s1_los_dir[1]_i_46__2_n_0 ;
  wire \s1_los_dir[1]_i_47__2_n_0 ;
  wire \s1_los_dir[1]_i_48__2_n_0 ;
  wire \s1_los_dir[1]_i_49__2_n_0 ;
  wire \s1_los_dir[1]_i_4__2_n_0 ;
  wire \s1_los_dir[1]_i_50__2_n_0 ;
  wire \s1_los_dir[1]_i_51__2_n_0 ;
  wire \s1_los_dir[1]_i_52__2_n_0 ;
  wire \s1_los_dir[1]_i_53__2_n_0 ;
  wire \s1_los_dir[1]_i_54__2_n_0 ;
  wire \s1_los_dir[1]_i_55__1_n_0 ;
  wire \s1_los_dir[1]_i_56__2_n_0 ;
  wire \s1_los_dir[1]_i_57__2_n_0 ;
  wire \s1_los_dir[1]_i_58__2_n_0 ;
  wire \s1_los_dir[1]_i_59__1_n_0 ;
  wire \s1_los_dir[1]_i_5__2_n_0 ;
  wire \s1_los_dir[1]_i_60__2_n_0 ;
  wire \s1_los_dir[1]_i_61__1_n_0 ;
  wire \s1_los_dir[1]_i_62__1_n_0 ;
  wire \s1_los_dir[1]_i_63__2_n_0 ;
  wire \s1_los_dir[1]_i_64__2_n_0 ;
  wire \s1_los_dir[1]_i_65__2_n_0 ;
  wire \s1_los_dir[1]_i_66__2_n_0 ;
  wire \s1_los_dir[1]_i_67__1_n_0 ;
  wire \s1_los_dir[1]_i_68__2_n_0 ;
  wire \s1_los_dir[1]_i_69__2_n_0 ;
  wire \s1_los_dir[1]_i_6__2_n_0 ;
  wire \s1_los_dir[1]_i_70__2_n_0 ;
  wire \s1_los_dir[1]_i_71__2_n_0 ;
  wire \s1_los_dir[1]_i_72__2_n_0 ;
  wire \s1_los_dir[1]_i_73__2_n_0 ;
  wire \s1_los_dir[1]_i_74__2_n_0 ;
  wire \s1_los_dir[1]_i_75__2_n_0 ;
  wire \s1_los_dir[1]_i_76__2_n_0 ;
  wire \s1_los_dir[1]_i_77__2_n_0 ;
  wire \s1_los_dir[1]_i_78__1_n_0 ;
  wire \s1_los_dir[1]_i_79__2_n_0 ;
  wire \s1_los_dir[1]_i_7__2_n_0 ;
  wire \s1_los_dir[1]_i_80__2_n_0 ;
  wire \s1_los_dir[1]_i_81__2_n_0 ;
  wire \s1_los_dir[1]_i_82__2_n_0 ;
  wire \s1_los_dir[1]_i_83__1_n_0 ;
  wire \s1_los_dir[1]_i_84__2_n_0 ;
  wire \s1_los_dir[1]_i_85__2_n_0 ;
  wire \s1_los_dir[1]_i_86__2_n_0 ;
  wire \s1_los_dir[1]_i_87__1_n_0 ;
  wire \s1_los_dir[1]_i_88__2_n_0 ;
  wire \s1_los_dir[1]_i_89__2_n_0 ;
  wire \s1_los_dir[1]_i_8__2_n_0 ;
  wire \s1_los_dir[1]_i_92__1_n_0 ;
  wire \s1_los_dir[1]_i_93__1_n_0 ;
  wire \s1_los_dir[1]_i_94__2_n_0 ;
  wire \s1_los_dir[1]_i_95__2_n_0 ;
  wire \s1_los_dir[1]_i_96__2_n_0 ;
  wire \s1_los_dir[1]_i_9__2_n_0 ;
  wire [0:0]\s1_los_dir_reg[0]_0 ;
  wire s2_can_down;
  wire s2_can_down_i_10__2_n_0;
  wire s2_can_down_i_11__2_n_0;
  wire s2_can_down_i_12__2_n_0;
  wire s2_can_down_i_13__2_n_0;
  wire s2_can_down_i_14__2_n_0;
  wire s2_can_down_i_15__2_n_0;
  wire s2_can_down_i_17__2_n_0;
  wire s2_can_down_i_18__2_n_0;
  wire s2_can_down_i_19__2_n_0;
  wire s2_can_down_i_20__2_n_0;
  wire s2_can_down_i_21__2_n_0;
  wire s2_can_down_i_22__2_n_0;
  wire s2_can_down_i_23__2_n_0;
  wire s2_can_down_i_24__2_n_0;
  wire s2_can_down_i_2__2_n_0;
  wire s2_can_down_i_4__2_n_0;
  wire s2_can_down_i_6__2_n_0;
  wire s2_can_down_i_9__2_n_0;
  wire [0:0]s2_can_down_reg_0;
  wire s2_can_down_reg_i_16__2_n_0;
  wire s2_can_down_reg_i_16__2_n_1;
  wire s2_can_down_reg_i_16__2_n_2;
  wire s2_can_down_reg_i_16__2_n_3;
  wire s2_can_down_reg_i_16__2_n_5;
  wire s2_can_down_reg_i_16__2_n_6;
  wire s2_can_down_reg_i_16__2_n_7;
  wire s2_can_down_reg_i_3__2_n_2;
  wire s2_can_down_reg_i_3__2_n_3;
  wire s2_can_down_reg_i_3__2_n_5;
  wire s2_can_down_reg_i_3__2_n_6;
  wire s2_can_down_reg_i_3__2_n_7;
  wire s2_can_down_reg_i_5__2_n_0;
  wire s2_can_down_reg_i_5__2_n_1;
  wire s2_can_down_reg_i_5__2_n_2;
  wire s2_can_down_reg_i_5__2_n_3;
  wire s2_can_down_reg_i_5__2_n_4;
  wire s2_can_down_reg_i_5__2_n_5;
  wire s2_can_down_reg_i_5__2_n_6;
  wire s2_can_down_reg_i_5__2_n_7;
  wire s2_can_down_reg_i_7__2_n_7;
  wire s2_can_left;
  wire s2_can_left_i_10__2_n_0;
  wire s2_can_left_i_11__2_n_0;
  wire s2_can_left_i_12__2_n_0;
  wire s2_can_left_i_13__2_n_0;
  wire s2_can_left_i_14__2_n_0;
  wire s2_can_left_i_15__2_n_0;
  wire s2_can_left_i_3__2_n_0;
  wire s2_can_left_i_6__2_n_0;
  wire s2_can_left_i_8__2_n_0;
  wire s2_can_left_i_9__2_n_0;
  wire s2_can_left_reg_i_4__2_n_2;
  wire s2_can_left_reg_i_4__2_n_3;
  wire s2_can_left_reg_i_4__2_n_5;
  wire s2_can_left_reg_i_4__2_n_6;
  wire s2_can_left_reg_i_4__2_n_7;
  wire s2_can_left_reg_i_5__2_n_0;
  wire s2_can_left_reg_i_5__2_n_1;
  wire s2_can_left_reg_i_5__2_n_2;
  wire s2_can_left_reg_i_5__2_n_3;
  wire s2_can_left_reg_i_5__2_n_4;
  wire s2_can_left_reg_i_5__2_n_5;
  wire s2_can_left_reg_i_5__2_n_6;
  wire s2_can_left_reg_i_5__2_n_7;
  wire s2_can_right;
  wire s2_can_right_i_10__2_n_0;
  wire s2_can_right_i_11__2_n_0;
  wire s2_can_right_i_12__2_n_0;
  wire s2_can_right_i_13__2_n_0;
  wire s2_can_right_i_14__2_n_0;
  wire s2_can_right_i_15__2_n_0;
  wire s2_can_right_i_16__2_n_0;
  wire s2_can_right_i_17__2_n_0;
  wire s2_can_right_i_18__2_n_0;
  wire s2_can_right_i_19__2_n_0;
  wire s2_can_right_i_20__2_n_0;
  wire s2_can_right_i_21__2_n_0;
  wire s2_can_right_i_22__2_n_0;
  wire s2_can_right_i_2__2_n_0;
  wire s2_can_right_i_3__2_n_0;
  wire s2_can_right_i_4__2_n_0;
  wire s2_can_right_i_5__2_n_0;
  wire s2_can_right_i_6__2_n_0;
  wire s2_can_right_i_8__2_n_0;
  wire s2_can_right_reg_i_7__2_n_0;
  wire s2_can_right_reg_i_7__2_n_1;
  wire s2_can_right_reg_i_7__2_n_2;
  wire s2_can_right_reg_i_7__2_n_3;
  wire s2_can_right_reg_i_7__2_n_4;
  wire s2_can_right_reg_i_7__2_n_5;
  wire s2_can_right_reg_i_7__2_n_6;
  wire s2_can_right_reg_i_7__2_n_7;
  wire s2_can_right_reg_i_9__2_n_7;
  wire s2_can_up;
  wire s2_can_up_i_10__2_n_0;
  wire s2_can_up_i_12__2_n_0;
  wire s2_can_up_i_13__2_n_0;
  wire s2_can_up_i_14__2_n_0;
  wire s2_can_up_i_15__2_n_0;
  wire s2_can_up_i_17__2_n_0;
  wire s2_can_up_i_18__2_n_0;
  wire s2_can_up_i_19__2_n_0;
  wire s2_can_up_i_20__2_n_0;
  wire s2_can_up_i_21__2_n_0;
  wire s2_can_up_i_22__2_n_0;
  wire s2_can_up_i_23__2_n_0;
  wire s2_can_up_i_24__2_n_0;
  wire [0:0]s2_can_up_i_2__2_0;
  wire s2_can_up_i_2__2_n_0;
  wire s2_can_up_i_5__2_n_0;
  wire s2_can_up_i_6__2_n_0;
  wire s2_can_up_i_9__2_n_0;
  wire s2_can_up_reg_i_16__2_n_0;
  wire s2_can_up_reg_i_16__2_n_1;
  wire s2_can_up_reg_i_16__2_n_2;
  wire s2_can_up_reg_i_16__2_n_3;
  wire s2_can_up_reg_i_16__2_n_5;
  wire s2_can_up_reg_i_16__2_n_6;
  wire s2_can_up_reg_i_16__2_n_7;
  wire s2_can_up_reg_i_3__2_n_2;
  wire s2_can_up_reg_i_3__2_n_3;
  wire s2_can_up_reg_i_3__2_n_5;
  wire s2_can_up_reg_i_3__2_n_6;
  wire s2_can_up_reg_i_3__2_n_7;
  wire s2_can_up_reg_i_4__2_n_0;
  wire s2_can_up_reg_i_4__2_n_1;
  wire s2_can_up_reg_i_4__2_n_2;
  wire s2_can_up_reg_i_4__2_n_3;
  wire s2_can_up_reg_i_4__2_n_4;
  wire s2_can_up_reg_i_4__2_n_5;
  wire s2_can_up_reg_i_4__2_n_6;
  wire s2_can_up_reg_i_7__2_n_7;
  wire [1:0]s2_facing;
  wire s2_los_detected;
  wire [1:0]s2_los_dir;
  wire wc_down;
  wire [1:1]wc_down5;
  wire wc_left;
  wire wc_left01_in;
  wire wc_right;
  wire wc_up;
  wire [1:0]wf_dir__2;
  wire [3:2]NLW_s2_can_down_reg_i_3__2_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_down_reg_i_3__2_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_down_reg_i_7__2_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_down_reg_i_7__2_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_left_reg_i_4__2_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_left_reg_i_4__2_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_right_reg_i_9__2_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_right_reg_i_9__2_O_UNCONNECTED;
  wire [3:2]NLW_s2_can_up_reg_i_3__2_CO_UNCONNECTED;
  wire [3:3]NLW_s2_can_up_reg_i_3__2_O_UNCONNECTED;
  wire [0:0]NLW_s2_can_up_reg_i_4__2_O_UNCONNECTED;
  wire [3:0]NLW_s2_can_up_reg_i_7__2_CO_UNCONNECTED;
  wire [3:1]NLW_s2_can_up_reg_i_7__2_O_UNCONNECTED;

  assign rover_col_2_sp_1 = rover_col_2_sn_1;
  assign rover_col_3_sp_1 = rover_col_3_sn_1;
  assign rover_row_0_sp_1 = rover_row_0_sn_1;
  assign rover_row_2_sp_1 = rover_row_2_sn_1;
  assign rover_row_3_sp_1 = rover_row_3_sn_1;
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[0]_i_1__2 
       (.I0(s2_los_dir[0]),
        .I1(s2_los_detected),
        .I2(wf_dir__2[0]),
        .I3(p_0_in__0),
        .I4(D[0]),
        .O(\direction[0]_i_1__2_n_0 ));
  LUT6 #(
    .INIT(64'hFAAA0032FABB3332)) 
    \direction[0]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__2[0]));
  LUT5 #(
    .INIT(32'hB8FFB800)) 
    \direction[1]_i_1__2 
       (.I0(s2_los_dir[1]),
        .I1(s2_los_detected),
        .I2(wf_dir__2[1]),
        .I3(p_0_in__0),
        .I4(D[1]),
        .O(\direction[1]_i_1__2_n_0 ));
  LUT6 #(
    .INIT(64'hF555FF31F0113031)) 
    \direction[1]_i_2 
       (.I0(s2_can_down),
        .I1(s2_can_up),
        .I2(s2_can_right),
        .I3(s2_facing[1]),
        .I4(s2_facing[0]),
        .I5(s2_can_left),
        .O(wf_dir__2[1]));
  FDCE \direction_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[0]_i_1__2_n_0 ),
        .Q(D[0]));
  FDCE \direction_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(1'b1),
        .CLR(AR),
        .D(\direction[1]_i_1__2_n_0 ),
        .Q(D[1]));
  FDCE \s1_ghost_col_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_col[0]),
        .Q(s1_ghost_col[0]));
  FDCE \s1_ghost_col_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_col[1]),
        .Q(s1_ghost_col[1]));
  FDCE \s1_ghost_col_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_col[2]),
        .Q(s1_ghost_col[2]));
  FDCE \s1_ghost_col_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_col[3]),
        .Q(s1_ghost_col[3]));
  FDCE \s1_ghost_row_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_row[0]),
        .Q(s1_ghost_row[0]));
  FDCE \s1_ghost_row_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_row[1]),
        .Q(s1_ghost_row[1]));
  FDCE \s1_ghost_row_reg[2] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_row[2]),
        .Q(s1_ghost_row[2]));
  FDCE \s1_ghost_row_reg[3] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(ghost4_row[3]),
        .Q(s1_ghost_row[3]));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    s1_los_detected_i_10__2
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .I3(ghost4_col[0]),
        .O(s1_los_detected_i_10__2_n_0));
  LUT2 #(
    .INIT(4'h1)) 
    s1_los_detected_i_11__2
       (.I0(ghost4_row[3]),
        .I1(ghost4_row[2]),
        .O(s1_los_detected_i_11__2_n_0));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_12__2
       (.I0(rover_row_3_sn_1),
        .I1(s1_los_detected_i_22__2_n_0),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[3]),
        .I5(ghost4_col[0]),
        .O(s1_los_detected_i_12__2_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFF0F00DF0D)) 
    s1_los_detected_i_13__2
       (.I0(ghost4_row[2]),
        .I1(rover_row[2]),
        .I2(ghost4_row[3]),
        .I3(rover_row[3]),
        .I4(s1_los_detected_i_23__2_n_0),
        .I5(s1_los_detected_i_24__2_n_0),
        .O(s1_los_detected_i_13__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT4 #(
    .INIT(16'h303E)) 
    s1_los_detected_i_14__2
       (.I0(ghost4_col[1]),
        .I1(ghost4_col[3]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[0]),
        .O(s1_los_detected_i_14__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    s1_los_detected_i_15__2
       (.I0(ghost4_row[3]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[2]),
        .O(s1_los_detected_i_15__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair97" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    s1_los_detected_i_16__2
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[3]),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[0]),
        .O(s1_los_detected_i_16__2_n_0));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF070707)) 
    s1_los_detected_i_17__1
       (.I0(rover_row[1]),
        .I1(rover_row[0]),
        .I2(rover_row[3]),
        .I3(ghost4_row[1]),
        .I4(ghost4_row[2]),
        .I5(ghost4_row[3]),
        .O(s1_los_detected_i_17__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT2 #(
    .INIT(4'h1)) 
    s1_los_detected_i_17__2
       (.I0(rover_row[2]),
        .I1(rover_row[3]),
        .O(\rover_row[2]_0 ));
  LUT6 #(
    .INIT(64'hBEFFFFBEFFFFFFFF)) 
    s1_los_detected_i_18__2
       (.I0(s1_los_detected_i_25__1_n_0),
        .I1(ghost4_col[0]),
        .I2(rover_col[0]),
        .I3(ghost4_col[3]),
        .I4(rover_col[3]),
        .I5(s1_los_detected_i_26__2_n_0),
        .O(s1_los_detected_i_18__2_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_19__2
       (.I0(rover_row[0]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[2]),
        .I3(rover_row[2]),
        .I4(ghost4_row[1]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_19__2_n_0));
  LUT5 #(
    .INIT(32'hEEEEFFFE)) 
    s1_los_detected_i_1__2
       (.I0(los_dir_comb[1]),
        .I1(s1_los_detected_i_2__2_n_0),
        .I2(s1_los_detected_i_3__2_n_0),
        .I3(rover_row_2_sn_1),
        .I4(s1_los_detected_i_4__1_n_0),
        .O(los_detected_comb));
  LUT6 #(
    .INIT(64'hFEFFFFFFFEFEFEFE)) 
    s1_los_detected_i_20__1
       (.I0(ghost4_row[3]),
        .I1(ghost4_row[2]),
        .I2(ghost4_row[1]),
        .I3(rover_row[1]),
        .I4(rover_row[0]),
        .I5(\rover_row[2]_0 ),
        .O(s1_los_detected_i_20__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT4 #(
    .INIT(16'h0307)) 
    s1_los_detected_i_20__2
       (.I0(rover_row[0]),
        .I1(rover_row[2]),
        .I2(rover_row[3]),
        .I3(rover_row[1]),
        .O(rover_row_0_sn_1));
  LUT6 #(
    .INIT(64'hCECECEEFCECEEFFF)) 
    s1_los_detected_i_21__2
       (.I0(ghost4_row[2]),
        .I1(ghost4_row[3]),
        .I2(\s1_los_dir[1]_i_44__2_n_0 ),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_21__2_n_0));
  LUT6 #(
    .INIT(64'hFFFFFF15FFFF1515)) 
    s1_los_detected_i_22__2
       (.I0(ghost4_row[3]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(rover_row[2]),
        .I4(rover_row[3]),
        .I5(rover_row[1]),
        .O(s1_los_detected_i_22__2_n_0));
  LUT6 #(
    .INIT(64'h2202FF0F00002202)) 
    s1_los_detected_i_23__2
       (.I0(ghost4_row[0]),
        .I1(rover_row[0]),
        .I2(rover_row[2]),
        .I3(ghost4_row[2]),
        .I4(rover_row[1]),
        .I5(ghost4_row[1]),
        .O(s1_los_detected_i_23__2_n_0));
  LUT6 #(
    .INIT(64'hEEEEEAAAAAAAAAAA)) 
    s1_los_detected_i_24__2
       (.I0(s1_los_detected_i_18__2_n_0),
        .I1(s1_los_detected_i_10__2_n_0),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[2]),
        .I4(ghost4_row[3]),
        .I5(rover_row_0_sn_1),
        .O(s1_los_detected_i_24__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT4 #(
    .INIT(16'h44F4)) 
    s1_los_detected_i_25__1
       (.I0(rover_col[2]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .I3(rover_col[1]),
        .O(s1_los_detected_i_25__1_n_0));
  (* SOFT_HLUTNM = "soft_lutpair107" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    s1_los_detected_i_25__2
       (.I0(rover_row[3]),
        .I1(rover_row[2]),
        .I2(rover_row[0]),
        .I3(rover_row[1]),
        .O(rover_row_3_sn_1));
  (* SOFT_HLUTNM = "soft_lutpair96" *) 
  LUT4 #(
    .INIT(16'hD0DD)) 
    s1_los_detected_i_26__2
       (.I0(rover_col[1]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(rover_col[2]),
        .O(s1_los_detected_i_26__2_n_0));
  LUT6 #(
    .INIT(64'h00000000000000AB)) 
    s1_los_detected_i_2__2
       (.I0(s1_los_detected_i_5__2_n_0),
        .I1(rover_row[2]),
        .I2(rover_row[3]),
        .I3(s1_los_detected_i_6__2_n_0),
        .I4(s1_los_detected_i_7__2_n_0),
        .I5(s1_los_detected_i_8__2_n_0),
        .O(s1_los_detected_i_2__2_n_0));
  LUT6 #(
    .INIT(64'h7077FFFF50555055)) 
    s1_los_detected_i_3__2
       (.I0(s1_los_detected_i_9__2_n_0),
        .I1(ghost4_row[0]),
        .I2(rover_row[0]),
        .I3(s1_los_detected_i_10__2_n_0),
        .I4(ghost4_row[1]),
        .I5(s1_los_detected_i_11__2_n_0),
        .O(s1_los_detected_i_3__2_n_0));
  LUT6 #(
    .INIT(64'hFFF1F1F1F1F1F1F1)) 
    s1_los_detected_i_4__1
       (.I0(s1_los_detected_i_12__2_n_0),
        .I1(s1_los_detected_i_11__2_n_0),
        .I2(s1_los_detected_i_13__2_n_0),
        .I3(s1_los_detected_i_14__2_n_0),
        .I4(s1_los_detected_i_15__2_n_0),
        .I5(\rover_row[2]_0 ),
        .O(s1_los_detected_i_4__1_n_0));
  LUT3 #(
    .INIT(8'hFE)) 
    s1_los_detected_i_4__2
       (.I0(rover_row[2]),
        .I1(rover_row[3]),
        .I2(rover_row[1]),
        .O(rover_row_2_sn_1));
  LUT6 #(
    .INIT(64'h5FFFFFFFF4CC44CF)) 
    s1_los_detected_i_5__2
       (.I0(s1_los_detected_i_16__2_n_0),
        .I1(s1_los_detected_i_17__1_n_0),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[3]),
        .I5(ghost4_col[0]),
        .O(s1_los_detected_i_5__2_n_0));
  LUT6 #(
    .INIT(64'h000000001D1C0000)) 
    s1_los_detected_i_6__2
       (.I0(ghost4_col[0]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[3]),
        .I3(ghost4_col[1]),
        .I4(s1_los_detected_i_11__2_n_0),
        .I5(rover_row_0_sn_1),
        .O(s1_los_detected_i_6__2_n_0));
  LUT6 #(
    .INIT(64'hBABABABAFBFBBAFB)) 
    s1_los_detected_i_7__2
       (.I0(s1_los_detected_i_18__2_n_0),
        .I1(rover_row[3]),
        .I2(ghost4_row[3]),
        .I3(rover_row[2]),
        .I4(ghost4_row[2]),
        .I5(s1_los_detected_i_19__2_n_0),
        .O(s1_los_detected_i_7__2_n_0));
  LUT6 #(
    .INIT(64'h7000000005550550)) 
    s1_los_detected_i_8__2
       (.I0(s1_los_detected_i_20__1_n_0),
        .I1(s1_los_detected_i_21__2_n_0),
        .I2(ghost4_col[3]),
        .I3(ghost4_col[2]),
        .I4(ghost4_col[1]),
        .I5(ghost4_col[0]),
        .O(s1_los_detected_i_8__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair99" *) 
  LUT4 #(
    .INIT(16'h805E)) 
    s1_los_detected_i_9__2
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[0]),
        .O(s1_los_detected_i_9__2_n_0));
  FDCE s1_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(los_detected_comb),
        .Q(s1_los_detected));
  (* SOFT_HLUTNM = "soft_lutpair90" *) 
  LUT5 #(
    .INIT(32'hFFA8FFFF)) 
    \s1_los_dir[0]_i_10__2 
       (.I0(ghost4_col[2]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[0]),
        .I3(ghost4_col[3]),
        .I4(\rover_col[2]_2 ),
        .O(\s1_los_dir[0]_i_10__2_n_0 ));
  LUT6 #(
    .INIT(64'h22288888E22BB88B)) 
    \s1_los_dir[0]_i_11__2 
       (.I0(\s1_los_dir[1]_i_54__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[0]_i_21__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[0]_i_19__2_n_0 ),
        .O(\s1_los_dir[0]_i_11__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT5 #(
    .INIT(32'hEEEEEEEA)) 
    \s1_los_dir[0]_i_12__2 
       (.I0(\rover_col[2]_1 ),
        .I1(ghost4_col[3]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[0]),
        .O(\s1_los_dir[0]_i_12__2_n_0 ));
  LUT6 #(
    .INIT(64'hEEEBBBBB2EE88BB8)) 
    \s1_los_dir[0]_i_13__2 
       (.I0(\s1_los_dir[1]_i_65__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[0]_i_22__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[1]_i_48__2_n_0 ),
        .O(\s1_los_dir[0]_i_13__2_n_0 ));
  LUT6 #(
    .INIT(64'h00FF101030302020)) 
    \s1_los_dir[0]_i_14__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_68__2_n_0 ),
        .I2(\s1_los_dir[1]_i_69__2_n_0 ),
        .I3(\s1_los_dir[1]_i_48__2_n_0 ),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .I5(\s1_los_dir[0]_i_4__2_0 ),
        .O(\s1_los_dir[0]_i_14__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFF111)) 
    \s1_los_dir[0]_i_15__2 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost4_col[0]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[2]),
        .I5(ghost4_col[3]),
        .O(\s1_los_dir[0]_i_15__2_n_0 ));
  LUT6 #(
    .INIT(64'h828882888288BEBB)) 
    \s1_los_dir[0]_i_16__2 
       (.I0(\s1_los_dir[1]_i_50__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_33__2_0 [3]),
        .I3(\s1_los_dir[0]_i_23__2_n_0 ),
        .I4(\s1_los_dir[1]_i_48__2_n_0 ),
        .I5(\s1_los_dir[1]_i_47__2_n_0 ),
        .O(\s1_los_dir[0]_i_16__2_n_0 ));
  LUT6 #(
    .INIT(64'h2888288828882B8B)) 
    \s1_los_dir[0]_i_17__2 
       (.I0(\s1_los_dir[1]_i_45__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_40__2_n_0 ),
        .I4(ghost4_row[1]),
        .I5(ghost4_row[0]),
        .O(\s1_los_dir[0]_i_17__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT4 #(
    .INIT(16'hAAA9)) 
    \s1_los_dir[0]_i_18__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .O(\s1_los_dir[0]_i_18__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT2 #(
    .INIT(4'hB)) 
    \s1_los_dir[0]_i_19__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .O(\s1_los_dir[0]_i_19__2_n_0 ));
  LUT2 #(
    .INIT(4'hE)) 
    \s1_los_dir[0]_i_1__2 
       (.I0(\s1_los_dir[0]_i_2__2_n_0 ),
        .I1(s1_los_detected_i_2__2_n_0),
        .O(los_dir_comb[0]));
  (* SOFT_HLUTNM = "soft_lutpair101" *) 
  LUT4 #(
    .INIT(16'h0332)) 
    \s1_los_dir[0]_i_20__2 
       (.I0(ghost4_row[0]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(ghost4_row[1]),
        .O(\s1_los_dir[0]_i_20__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT4 #(
    .INIT(16'h0004)) 
    \s1_los_dir[0]_i_21__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .O(\s1_los_dir[0]_i_21__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT4 #(
    .INIT(16'h0054)) 
    \s1_los_dir[0]_i_22__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[0]_i_22__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT5 #(
    .INIT(32'h0F0FFFFE)) 
    \s1_los_dir[0]_i_23__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[0]_i_23__2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000004)) 
    \s1_los_dir[0]_i_2__2 
       (.I0(\s1_los_dir[1]_i_4__2_n_0 ),
        .I1(\s1_los_dir[0]_i_3__2_n_0 ),
        .I2(\s1_los_dir[0]_i_4__2_n_0 ),
        .I3(\s1_los_dir[1]_i_19__2_n_0 ),
        .I4(\s1_los_dir[0]_i_5__2_n_0 ),
        .I5(\s1_los_dir[0]_i_6__2_n_0 ),
        .O(\s1_los_dir[0]_i_2__2_n_0 ));
  LUT6 #(
    .INIT(64'h7707770700007707)) 
    \s1_los_dir[0]_i_3__2 
       (.I0(\s1_los_dir[0]_i_7__2_n_0 ),
        .I1(\s1_los_dir[0]_i_8__2_n_0 ),
        .I2(\s1_los_dir[0]_i_9__2_n_0 ),
        .I3(\s1_los_dir[0]_i_10__2_n_0 ),
        .I4(\s1_los_dir[0]_i_11__2_n_0 ),
        .I5(\s1_los_dir[0]_i_12__2_n_0 ),
        .O(\s1_los_dir[0]_i_3__2_n_0 ));
  LUT6 #(
    .INIT(64'hFF04FF04FFFFFF04)) 
    \s1_los_dir[0]_i_4__2 
       (.I0(\s1_los_dir[0]_i_13__2_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_34__2_n_0 ),
        .I3(\s1_los_dir[1]_i_71__2_n_0 ),
        .I4(\s1_los_dir[0]_i_14__2_n_0 ),
        .I5(\s1_los_dir[1]_i_66__2_n_0 ),
        .O(\s1_los_dir[0]_i_4__2_n_0 ));
  LUT6 #(
    .INIT(64'h44F444F4FFFF44F4)) 
    \s1_los_dir[0]_i_5__2 
       (.I0(\s1_los_dir[0]_i_15__2_n_0 ),
        .I1(\s1_los_dir[0]_i_16__2_n_0 ),
        .I2(\s1_los_dir[0]_i_17__2_n_0 ),
        .I3(\s1_los_dir[1]_i_46__2_n_0 ),
        .I4(\s1_los_dir[1]_i_11__2_n_0 ),
        .I5(\s1_los_dir[1]_i_10__2_n_0 ),
        .O(\s1_los_dir[0]_i_5__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT4 #(
    .INIT(16'h0008)) 
    \s1_los_dir[0]_i_6__2 
       (.I0(\s1_los_dir[1]_i_9__2_n_0 ),
        .I1(rover_col_3_sn_1),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[3]),
        .O(\s1_los_dir[0]_i_6__2_n_0 ));
  LUT6 #(
    .INIT(64'h0100000001010101)) 
    \s1_los_dir[0]_i_7__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(rover_col_2_sn_1),
        .O(\s1_los_dir[0]_i_7__2_n_0 ));
  LUT6 #(
    .INIT(64'h38AAAE3C08AAA200)) 
    \s1_los_dir[0]_i_8__2 
       (.I0(\s1_los_dir[1]_i_61__1_n_0 ),
        .I1(\s1_los_dir[0]_i_18__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_40__2_n_0 ),
        .I4(\s1_los_dir[1]_i_37__2_n_0 ),
        .I5(\s1_los_dir[1]_i_44__2_n_0 ),
        .O(\s1_los_dir[0]_i_8__2_n_0 ));
  LUT6 #(
    .INIT(64'h7D3C3CDD41000011)) 
    \s1_los_dir[0]_i_9__2 
       (.I0(\s1_los_dir[0]_i_19__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_40__2_n_0 ),
        .I3(\s1_los_dir[1]_i_38__2_n_0 ),
        .I4(\s1_los_dir[0]_i_20__2_n_0 ),
        .I5(\s1_los_dir[1]_i_55__1_n_0 ),
        .O(\s1_los_dir[0]_i_9__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT4 #(
    .INIT(16'hAA80)) 
    \s1_los_dir[1]_i_100__2 
       (.I0(rover_col[3]),
        .I1(rover_col[0]),
        .I2(rover_col[1]),
        .I3(rover_col[2]),
        .O(\rover_col[3]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair95" *) 
  LUT4 #(
    .INIT(16'h6FF6)) 
    \s1_los_dir[1]_i_105__2 
       (.I0(rover_row[3]),
        .I1(ghost4_row[3]),
        .I2(rover_row[2]),
        .I3(ghost4_row[2]),
        .O(\s1_los_dir[1]_i_105__2_n_0 ));
  LUT6 #(
    .INIT(64'hF111FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_10__2 
       (.I0(rover_col[0]),
        .I1(rover_col[1]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_10__2_n_0 ));
  LUT6 #(
    .INIT(64'hB2B88B8B82888888)) 
    \s1_los_dir[1]_i_11__2 
       (.I0(\s1_los_dir[1]_i_42__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_43__1_n_0 ),
        .I3(\s1_los_dir[1]_i_40__2_n_0 ),
        .I4(\s1_los_dir[1]_i_38__2_n_0 ),
        .I5(\s1_los_dir[1]_i_41__1_n_0 ),
        .O(\s1_los_dir[1]_i_11__2_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_12__2 
       (.I0(\s1_los_dir[1]_i_44__2_n_0 ),
        .I1(\s1_los_dir[1]_i_40__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_37__2_n_0 ),
        .I4(\s1_los_dir[1]_i_45__2_n_0 ),
        .I5(\s1_los_dir[1]_i_46__2_n_0 ),
        .O(\s1_los_dir[1]_i_12__2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_13__2 
       (.I0(\s1_los_dir[1]_i_47__2_n_0 ),
        .I1(\s1_los_dir[1]_i_48__2_n_0 ),
        .I2(\s1_los_dir[1]_i_49__2_n_0 ),
        .I3(\s1_los_dir[1]_i_50__2_n_0 ),
        .I4(\s1_los_dir[1]_i_51__2_n_0 ),
        .I5(rover_col_2_sn_1),
        .O(\s1_los_dir[1]_i_13__2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_14__2 
       (.I0(\s1_los_dir[1]_i_52__2_n_0 ),
        .I1(\s1_los_dir[1]_i_53__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_54__2_n_0 ),
        .I4(\s1_los_dir[1]_i_35__2_n_0 ),
        .I5(\rover_col[2]_1 ),
        .O(\s1_los_dir[1]_i_14__2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_15__2 
       (.I0(\s1_los_dir[1]_i_55__1_n_0 ),
        .I1(\s1_los_dir[1]_i_56__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_57__2_n_0 ),
        .I4(\rover_col[2]_2 ),
        .I5(\s1_los_dir[1]_i_58__2_n_0 ),
        .O(\s1_los_dir[1]_i_15__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFF417DFFFFFFFF)) 
    \s1_los_dir[1]_i_16__2 
       (.I0(\s1_los_dir[1]_i_59__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_60__2_n_0 ),
        .I3(\s1_los_dir[1]_i_61__1_n_0 ),
        .I4(\rover_col[3]_1 ),
        .I5(\s1_los_dir[1]_i_62__1_n_0 ),
        .O(\s1_los_dir[1]_i_16__2_n_0 ));
  LUT6 #(
    .INIT(64'h0400000404444404)) 
    \s1_los_dir[1]_i_17__2 
       (.I0(\s1_los_dir[1]_i_34__2_n_0 ),
        .I1(rover_col[3]),
        .I2(\s1_los_dir[1]_i_63__2_n_0 ),
        .I3(\s1_los_dir[1]_i_64__2_n_0 ),
        .I4(\s1_los_dir[1]_i_37__2_n_0 ),
        .I5(\s1_los_dir[1]_i_65__2_n_0 ),
        .O(\s1_los_dir[1]_i_17__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_18__2 
       (.I0(\s1_los_dir[1]_i_66__2_n_0 ),
        .I1(\s1_los_dir[1]_i_67__1_n_0 ),
        .I2(\s1_los_dir[1]_i_68__2_n_0 ),
        .I3(\s1_los_dir[1]_i_69__2_n_0 ),
        .I4(\s1_los_dir[1]_i_70__2_n_0 ),
        .I5(\s1_los_dir[1]_i_71__2_n_0 ),
        .O(\s1_los_dir[1]_i_18__2_n_0 ));
  LUT5 #(
    .INIT(32'h0000BE82)) 
    \s1_los_dir[1]_i_19__2 
       (.I0(\s1_los_dir[1]_i_72__2_n_0 ),
        .I1(\s1_los_dir[1]_i_73__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_74__2_n_0 ),
        .I4(\s1_los_dir[1]_i_75__2_n_0 ),
        .O(\s1_los_dir[1]_i_19__2_n_0 ));
  LUT6 #(
    .INIT(64'h0404040404FF0404)) 
    \s1_los_dir[1]_i_1__2 
       (.I0(\s1_los_dir[1]_i_2__2_n_0 ),
        .I1(\s1_los_dir[1]_i_3__2_n_0 ),
        .I2(\s1_los_dir[1]_i_4__2_n_0 ),
        .I3(\s1_los_dir[1]_i_5__2_n_0 ),
        .I4(\s1_los_dir[1]_i_6__2_n_0 ),
        .I5(\s1_los_dir[1]_i_7__2_n_0 ),
        .O(los_dir_comb[1]));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_20__1 
       (.I0(\s1_los_dir[1]_i_76__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_77__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[1]_i_41__1_n_0 ),
        .O(\s1_los_dir[1]_i_20__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT4 #(
    .INIT(16'h01FF)) 
    \s1_los_dir[1]_i_20__2 
       (.I0(rover_col[2]),
        .I1(rover_col[0]),
        .I2(rover_col[1]),
        .I3(rover_col[3]),
        .O(\rover_col[2]_0 ));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT3 #(
    .INIT(8'h15)) 
    \s1_los_dir[1]_i_21__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .O(\s1_los_dir[1]_i_21__2_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_22__1 
       (.I0(\s1_los_dir[1]_i_78__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_79__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[1]_i_44__2_n_0 ),
        .O(\s1_los_dir[1]_i_22__1_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_23__1 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[0]),
        .I5(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_23__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT4 #(
    .INIT(16'hFF80)) 
    \s1_los_dir[1]_i_23__2 
       (.I0(rover_col[2]),
        .I1(rover_col[0]),
        .I2(rover_col[1]),
        .I3(rover_col[3]),
        .O(\rover_col[2]_3 ));
  LUT6 #(
    .INIT(64'hFFFFFF01FFFFFFFF)) 
    \s1_los_dir[1]_i_24__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(rover_col[0]),
        .I4(rover_col[1]),
        .I5(rover_col_2_sn_1),
        .O(\s1_los_dir[1]_i_24__2_n_0 ));
  LUT6 #(
    .INIT(64'hEEBEBBBB22828888)) 
    \s1_los_dir[1]_i_25__2 
       (.I0(\s1_los_dir[1]_i_74__2_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_80__2_n_0 ),
        .I3(\s1_los_dir[1]_i_81__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[1]_i_72__2_n_0 ),
        .O(\s1_los_dir[1]_i_25__2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000F1010000)) 
    \s1_los_dir[1]_i_26__2 
       (.I0(\s1_los_dir[1]_i_47__2_n_0 ),
        .I1(\s1_los_dir[1]_i_48__2_n_0 ),
        .I2(\s1_los_dir[1]_i_49__2_n_0 ),
        .I3(\s1_los_dir[1]_i_50__2_n_0 ),
        .I4(\rover_col[3]_1 ),
        .I5(\s1_los_dir[1]_i_82__2_n_0 ),
        .O(\s1_los_dir[1]_i_26__2_n_0 ));
  LUT6 #(
    .INIT(64'h000000003FCA000A)) 
    \s1_los_dir[1]_i_27__2 
       (.I0(\s1_los_dir[1]_i_44__2_n_0 ),
        .I1(\s1_los_dir[1]_i_40__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_37__2_n_0 ),
        .I4(\s1_los_dir[1]_i_45__2_n_0 ),
        .I5(\s1_los_dir[1]_i_83__1_n_0 ),
        .O(\s1_los_dir[1]_i_27__2_n_0 ));
  LUT6 #(
    .INIT(64'hBE82000000000000)) 
    \s1_los_dir[1]_i_28__2 
       (.I0(\s1_los_dir[1]_i_52__2_n_0 ),
        .I1(\s1_los_dir[1]_i_53__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_54__2_n_0 ),
        .I4(\rover_col[2]_0 ),
        .I5(\s1_los_dir[1]_i_84__2_n_0 ),
        .O(\s1_los_dir[1]_i_28__2_n_0 ));
  LUT6 #(
    .INIT(64'h000000000000BE82)) 
    \s1_los_dir[1]_i_29__2 
       (.I0(\s1_los_dir[1]_i_55__1_n_0 ),
        .I1(\s1_los_dir[1]_i_56__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_57__2_n_0 ),
        .I4(rover_col_3_sn_1),
        .I5(\s1_los_dir[1]_i_21__2_n_0 ),
        .O(\s1_los_dir[1]_i_29__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_2__2 
       (.I0(\s1_los_dir[1]_i_8__2_n_0 ),
        .I1(\s1_los_dir[1]_i_9__2_n_0 ),
        .I2(\s1_los_dir[1]_i_10__2_n_0 ),
        .I3(\s1_los_dir[1]_i_11__2_n_0 ),
        .I4(\s1_los_dir[1]_i_12__2_n_0 ),
        .I5(\s1_los_dir[1]_i_13__2_n_0 ),
        .O(\s1_los_dir[1]_i_2__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFBE82FFFF)) 
    \s1_los_dir[1]_i_30__2 
       (.I0(\s1_los_dir[1]_i_63__2_n_0 ),
        .I1(\s1_los_dir[1]_i_64__2_n_0 ),
        .I2(\s1_los_dir[1]_i_37__2_n_0 ),
        .I3(\s1_los_dir[1]_i_65__2_n_0 ),
        .I4(ghost4_col[3]),
        .I5(\rover_col[2]_3 ),
        .O(\s1_los_dir[1]_i_30__2_n_0 ));
  LUT6 #(
    .INIT(64'h00000000BE820000)) 
    \s1_los_dir[1]_i_31__2 
       (.I0(\s1_los_dir[1]_i_59__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_60__2_n_0 ),
        .I3(\s1_los_dir[1]_i_61__1_n_0 ),
        .I4(\rover_col[3]_2 ),
        .I5(\s1_los_dir[1]_i_51__2_n_0 ),
        .O(\s1_los_dir[1]_i_31__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFF55550100)) 
    \s1_los_dir[1]_i_32__2 
       (.I0(\s1_los_dir[1]_i_85__2_n_0 ),
        .I1(\s1_los_dir[1]_i_67__1_n_0 ),
        .I2(\s1_los_dir[1]_i_68__2_n_0 ),
        .I3(\s1_los_dir[1]_i_69__2_n_0 ),
        .I4(\s1_los_dir[1]_i_70__2_n_0 ),
        .I5(\s1_los_dir[1]_i_86__2_n_0 ),
        .O(\s1_los_dir[1]_i_32__2_n_0 ));
  LUT6 #(
    .INIT(64'h000000004FF44004)) 
    \s1_los_dir[1]_i_33__2 
       (.I0(\s1_los_dir[1]_i_87__1_n_0 ),
        .I1(\s1_los_dir[1]_i_41__1_n_0 ),
        .I2(\s1_los_dir[1]_i_88__2_n_0 ),
        .I3(\s1_los_dir[1]_i_37__2_n_0 ),
        .I4(\s1_los_dir[1]_i_42__2_n_0 ),
        .I5(\s1_los_dir[1]_i_89__2_n_0 ),
        .O(\s1_los_dir[1]_i_33__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT4 #(
    .INIT(16'hFF80)) 
    \s1_los_dir[1]_i_34__2 
       (.I0(ghost4_col[0]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_34__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT4 #(
    .INIT(16'h01FF)) 
    \s1_los_dir[1]_i_35__2 
       (.I0(ghost4_col[0]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_35__2_n_0 ));
  LUT6 #(
    .INIT(64'h27270F0D04A40082)) 
    \s1_los_dir[1]_i_36__1 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_36__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT3 #(
    .INIT(8'hEC)) 
    \s1_los_dir[1]_i_36__2 
       (.I0(rover_col[2]),
        .I1(rover_col[3]),
        .I2(rover_col[1]),
        .O(\rover_col[2]_2 ));
  LUT6 #(
    .INIT(64'h5555555555555655)) 
    \s1_los_dir[1]_i_37__2 
       (.I0(\s1_los_dir[0]_i_4__2_0 ),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(\s1_los_dir[1]_i_33__2_0 [3]),
        .I3(\s1_los_dir[1]_i_44__2_n_0 ),
        .I4(\s1_los_dir[1]_i_33__2_0 [1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[1]_i_37__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT5 #(
    .INIT(32'h55555556)) 
    \s1_los_dir[1]_i_38__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [2]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[0]),
        .I4(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_38__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT4 #(
    .INIT(16'h1554)) 
    \s1_los_dir[1]_i_39__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[1]_i_39__2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_3__2 
       (.I0(\s1_los_dir[1]_i_14__2_n_0 ),
        .I1(\s1_los_dir[1]_i_15__2_n_0 ),
        .I2(\s1_los_dir[1]_i_16__2_n_0 ),
        .I3(\s1_los_dir[1]_i_17__2_n_0 ),
        .I4(\s1_los_dir[1]_i_18__2_n_0 ),
        .I5(\s1_los_dir[1]_i_19__2_n_0 ),
        .O(\s1_los_dir[1]_i_3__2_n_0 ));
  LUT6 #(
    .INIT(64'h5555555555555556)) 
    \s1_los_dir[1]_i_40__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[0]),
        .I4(ghost4_row[1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[1]_i_40__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair116" *) 
  LUT2 #(
    .INIT(4'h2)) 
    \s1_los_dir[1]_i_41__1 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_41__1_n_0 ));
  LUT6 #(
    .INIT(64'h0013401780DCA2D4)) 
    \s1_los_dir[1]_i_42__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(ghost4_row[0]),
        .I4(ghost4_row[1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_42__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair100" *) 
  LUT4 #(
    .INIT(16'h8001)) 
    \s1_los_dir[1]_i_43__1 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_43__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_44__2 
       (.I0(ghost4_row[0]),
        .I1(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_44__2_n_0 ));
  LUT6 #(
    .INIT(64'h6022355C000835CC)) 
    \s1_los_dir[1]_i_45__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(ghost4_row[0]),
        .I5(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_45__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair98" *) 
  LUT4 #(
    .INIT(16'hE0FF)) 
    \s1_los_dir[1]_i_46__2 
       (.I0(ghost4_col[1]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[3]),
        .I3(\rover_col[3]_0 ),
        .O(\s1_los_dir[1]_i_46__2_n_0 ));
  LUT2 #(
    .INIT(4'h6)) 
    \s1_los_dir[1]_i_47__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_47__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT2 #(
    .INIT(4'h7)) 
    \s1_los_dir[1]_i_48__2 
       (.I0(ghost4_row[0]),
        .I1(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_48__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT4 #(
    .INIT(16'h5666)) 
    \s1_los_dir[1]_i_49__2 
       (.I0(\s1_los_dir[0]_i_4__2_0 ),
        .I1(\s1_los_dir[1]_i_33__2_0 [3]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_49__2_n_0 ));
  LUT6 #(
    .INIT(64'hFF10101010101010)) 
    \s1_los_dir[1]_i_4__2 
       (.I0(ghost4_col[3]),
        .I1(\rover_col[2]_0 ),
        .I2(\s1_los_dir[1]_i_20__1_n_0 ),
        .I3(\s1_los_dir[1]_i_21__2_n_0 ),
        .I4(\rover_col[2]_3 ),
        .I5(\s1_los_dir[1]_i_22__1_n_0 ),
        .O(\s1_los_dir[1]_i_4__2_n_0 ));
  LUT6 #(
    .INIT(64'h5CCC22A05CC60800)) 
    \s1_los_dir[1]_i_50__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(ghost4_row[0]),
        .I5(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_50__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    \s1_los_dir[1]_i_51__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .I3(ghost4_col[0]),
        .O(\s1_los_dir[1]_i_51__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair91" *) 
  LUT5 #(
    .INIT(32'h44400004)) 
    \s1_los_dir[1]_i_52__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_52__2_n_0 ));
  LUT6 #(
    .INIT(64'h0000001155555554)) 
    \s1_los_dir[1]_i_53__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(ghost4_row[1]),
        .I2(ghost4_row[0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_53__2_n_0 ));
  LUT6 #(
    .INIT(64'h083009B52AA82AA0)) 
    \s1_los_dir[1]_i_54__2 
       (.I0(ghost4_row[0]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [2]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(ghost4_row[1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [3]),
        .O(\s1_los_dir[1]_i_54__2_n_0 ));
  LUT6 #(
    .INIT(64'h1F0C0054FF00E000)) 
    \s1_los_dir[1]_i_55__1 
       (.I0(ghost4_row[1]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .I5(\s1_los_dir[1]_i_33__2_0 [3]),
        .O(\s1_los_dir[1]_i_55__1_n_0 ));
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_55__2 
       (.I0(rover_col[2]),
        .I1(rover_col[3]),
        .O(rover_col_2_sn_1));
  LUT6 #(
    .INIT(64'hFFFFFFFFFF880001)) 
    \s1_los_dir[1]_i_56__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [0]),
        .I1(ghost4_row[1]),
        .I2(ghost4_row[0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .I5(\s1_los_dir[1]_i_33__2_0 [3]),
        .O(\s1_los_dir[1]_i_56__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT4 #(
    .INIT(16'h0802)) 
    \s1_los_dir[1]_i_57__2 
       (.I0(ghost4_row[0]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(ghost4_row[1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_57__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair102" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    \s1_los_dir[1]_i_58__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[0]),
        .I2(ghost4_col[1]),
        .I3(ghost4_col[2]),
        .O(\s1_los_dir[1]_i_58__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT5 #(
    .INIT(32'h00000095)) 
    \s1_los_dir[1]_i_59__1 
       (.I0(\s1_los_dir[1]_i_33__2_0 [2]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[0]),
        .I4(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_59__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair113" *) 
  LUT3 #(
    .INIT(8'h1F)) 
    \s1_los_dir[1]_i_59__2 
       (.I0(rover_col[2]),
        .I1(rover_col[1]),
        .I2(rover_col[3]),
        .O(\rover_col[2]_1 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFF4F44)) 
    \s1_los_dir[1]_i_5__2 
       (.I0(\s1_los_dir[1]_i_23__1_n_0 ),
        .I1(\s1_los_dir[1]_i_9__2_n_0 ),
        .I2(\s1_los_dir[1]_i_24__2_n_0 ),
        .I3(\s1_los_dir[1]_i_25__2_n_0 ),
        .I4(\s1_los_dir[1]_i_26__2_n_0 ),
        .I5(\s1_los_dir[1]_i_27__2_n_0 ),
        .O(\s1_los_dir[1]_i_5__2_n_0 ));
  LUT6 #(
    .INIT(64'h1155115511551554)) 
    \s1_los_dir[1]_i_60__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(ghost4_row[0]),
        .I5(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_60__2_n_0 ));
  LUT6 #(
    .INIT(64'h078DA4822F0D0002)) 
    \s1_los_dir[1]_i_61__1 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(ghost4_row[0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .I5(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_61__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair103" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \s1_los_dir[1]_i_62__1 
       (.I0(ghost4_col[2]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_62__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT5 #(
    .INIT(32'h3F7FFFBF)) 
    \s1_los_dir[1]_i_63__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_63__2_n_0 ));
  LUT6 #(
    .INIT(64'h0000111155555554)) 
    \s1_los_dir[1]_i_64__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_64__2_n_0 ));
  LUT6 #(
    .INIT(64'hA5FBC5B3C5F7C5FF)) 
    \s1_los_dir[1]_i_65__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [2]),
        .I1(\s1_los_dir[1]_i_33__2_0 [3]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [0]),
        .I5(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_65__2_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_66__2 
       (.I0(ghost4_col[2]),
        .I1(ghost4_col[1]),
        .I2(ghost4_col[0]),
        .I3(ghost4_col[3]),
        .I4(rover_col[3]),
        .I5(rover_col[2]),
        .O(\s1_los_dir[1]_i_66__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair106" *) 
  LUT3 #(
    .INIT(8'hA9)) 
    \s1_los_dir[1]_i_67__1 
       (.I0(\s1_los_dir[0]_i_4__2_0 ),
        .I1(\s1_los_dir[1]_i_33__2_0 [3]),
        .I2(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_67__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair108" *) 
  LUT4 #(
    .INIT(16'h0111)) 
    \s1_los_dir[1]_i_67__2 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(rover_col[1]),
        .I3(rover_col[0]),
        .O(\rover_col[3]_1 ));
  LUT6 #(
    .INIT(64'hCCC0CCC800033333)) 
    \s1_los_dir[1]_i_68__2 
       (.I0(ghost4_row[1]),
        .I1(\s1_los_dir[1]_i_33__2_0 [3]),
        .I2(\s1_los_dir[1]_i_33__2_0 [0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [1]),
        .I4(ghost4_row[0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_68__2_n_0 ));
  LUT6 #(
    .INIT(64'hF6BFF48FF49FFC0F)) 
    \s1_los_dir[1]_i_69__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [3]),
        .I3(\s1_los_dir[1]_i_33__2_0 [2]),
        .I4(ghost4_row[1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[1]_i_69__2_n_0 ));
  LUT6 #(
    .INIT(64'h0000000000000010)) 
    \s1_los_dir[1]_i_6__2 
       (.I0(\s1_los_dir[1]_i_28__2_n_0 ),
        .I1(\s1_los_dir[1]_i_29__2_n_0 ),
        .I2(\s1_los_dir[1]_i_30__2_n_0 ),
        .I3(\s1_los_dir[1]_i_31__2_n_0 ),
        .I4(\s1_los_dir[1]_i_32__2_n_0 ),
        .I5(\s1_los_dir[1]_i_33__2_n_0 ),
        .O(\s1_los_dir[1]_i_6__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair104" *) 
  LUT4 #(
    .INIT(16'h8000)) 
    \s1_los_dir[1]_i_70__2 
       (.I0(\s1_los_dir[0]_i_4__2_0 ),
        .I1(\s1_los_dir[1]_i_33__2_0 [2]),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_70__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT3 #(
    .INIT(8'hFE)) 
    \s1_los_dir[1]_i_71__2 
       (.I0(\s1_los_dir[1]_i_92__1_n_0 ),
        .I1(\s1_los_dir[1]_i_93__1_n_0 ),
        .I2(\s1_los_dir[1]_i_94__2_n_0 ),
        .O(\s1_los_dir[1]_i_71__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair89" *) 
  LUT5 #(
    .INIT(32'h20001030)) 
    \s1_los_dir[1]_i_72__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[1]),
        .I2(ghost4_row[0]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_72__2_n_0 ));
  LUT6 #(
    .INIT(64'h0011555555555554)) 
    \s1_los_dir[1]_i_73__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [1]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_73__2_n_0 ));
  LUT6 #(
    .INIT(64'h74F0D2D2202A0020)) 
    \s1_los_dir[1]_i_74__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [2]),
        .I3(ghost4_row[1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [1]),
        .I5(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_74__2_n_0 ));
  LUT6 #(
    .INIT(64'hFFFFFFFFFFFFFFF4)) 
    \s1_los_dir[1]_i_75__2 
       (.I0(rover_col[1]),
        .I1(rover_col_2_sn_1),
        .I2(ghost4_col[0]),
        .I3(ghost4_col[3]),
        .I4(ghost4_col[1]),
        .I5(ghost4_col[2]),
        .O(\s1_los_dir[1]_i_75__2_n_0 ));
  LUT6 #(
    .INIT(64'h02021F5F002AD050)) 
    \s1_los_dir[1]_i_76__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(ghost4_row[1]),
        .I4(ghost4_row[0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_76__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair105" *) 
  LUT4 #(
    .INIT(16'h0110)) 
    \s1_los_dir[1]_i_77__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [0]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[0]),
        .O(\s1_los_dir[1]_i_77__2_n_0 ));
  LUT6 #(
    .INIT(64'h0727270F2404A400)) 
    \s1_los_dir[1]_i_78__1 
       (.I0(\s1_los_dir[1]_i_33__2_0 [3]),
        .I1(\s1_los_dir[1]_i_33__2_0 [1]),
        .I2(ghost4_row[0]),
        .I3(ghost4_row[1]),
        .I4(\s1_los_dir[1]_i_33__2_0 [0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_78__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair110" *) 
  LUT4 #(
    .INIT(16'h0154)) 
    \s1_los_dir[1]_i_79__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [1]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .O(\s1_los_dir[1]_i_79__2_n_0 ));
  LUT6 #(
    .INIT(64'h404040FF40404040)) 
    \s1_los_dir[1]_i_7__2 
       (.I0(\rover_col[2]_2 ),
        .I1(\s1_los_dir[1]_i_34__2_n_0 ),
        .I2(\s1_los_dir[1]_i_22__1_n_0 ),
        .I3(rover_col[3]),
        .I4(\s1_los_dir[1]_i_35__2_n_0 ),
        .I5(\s1_los_dir[1]_i_20__1_n_0 ),
        .O(\s1_los_dir[1]_i_7__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair88" *) 
  LUT5 #(
    .INIT(32'hF0E00001)) 
    \s1_los_dir[1]_i_80__2 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_80__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair114" *) 
  LUT3 #(
    .INIT(8'h04)) 
    \s1_los_dir[1]_i_81__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [0]),
        .I1(ghost4_row[0]),
        .I2(ghost4_row[1]),
        .O(\s1_los_dir[1]_i_81__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair115" *) 
  LUT2 #(
    .INIT(4'h1)) 
    \s1_los_dir[1]_i_82__2 
       (.I0(ghost4_col[2]),
        .I1(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_82__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair86" *) 
  LUT5 #(
    .INIT(32'h5777FFFF)) 
    \s1_los_dir[1]_i_83__1 
       (.I0(\rover_col[2]_1 ),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .I3(ghost4_col[0]),
        .I4(ghost4_col[3]),
        .O(\s1_los_dir[1]_i_83__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair94" *) 
  LUT3 #(
    .INIT(8'hA8)) 
    \s1_los_dir[1]_i_84__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[2]),
        .I2(ghost4_col[1]),
        .O(\s1_los_dir[1]_i_84__2_n_0 ));
  LUT6 #(
    .INIT(64'hEA00FFFFFFFFFFFF)) 
    \s1_los_dir[1]_i_85__2 
       (.I0(rover_col[2]),
        .I1(rover_col[1]),
        .I2(rover_col[0]),
        .I3(rover_col[3]),
        .I4(ghost4_col[3]),
        .I5(ghost4_col[2]),
        .O(\s1_los_dir[1]_i_85__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair112" *) 
  LUT3 #(
    .INIT(8'hBF)) 
    \s1_los_dir[1]_i_86__2 
       (.I0(\s1_los_dir[1]_i_92__1_n_0 ),
        .I1(\s1_los_dir[1]_i_95__2_n_0 ),
        .I2(\s1_los_dir[1]_i_96__2_n_0 ),
        .O(\s1_los_dir[1]_i_86__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair87" *) 
  LUT5 #(
    .INIT(32'h80007FFF)) 
    \s1_los_dir[1]_i_87__1 
       (.I0(ghost4_row[1]),
        .I1(ghost4_row[0]),
        .I2(\s1_los_dir[1]_i_33__2_0 [1]),
        .I3(\s1_los_dir[1]_i_33__2_0 [0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [2]),
        .O(\s1_los_dir[1]_i_87__1_n_0 ));
  LUT6 #(
    .INIT(64'h0111111111111110)) 
    \s1_los_dir[1]_i_88__2 
       (.I0(\s1_los_dir[1]_i_33__2_0 [2]),
        .I1(\s1_los_dir[1]_i_33__2_0 [3]),
        .I2(ghost4_row[1]),
        .I3(ghost4_row[0]),
        .I4(\s1_los_dir[1]_i_33__2_0 [0]),
        .I5(\s1_los_dir[1]_i_33__2_0 [1]),
        .O(\s1_los_dir[1]_i_88__2_n_0 ));
  LUT6 #(
    .INIT(64'h8FFF8FFF8FFFFFFF)) 
    \s1_los_dir[1]_i_89__2 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(ghost4_col[2]),
        .I3(ghost4_col[3]),
        .I4(ghost4_col[0]),
        .I5(ghost4_col[1]),
        .O(\s1_los_dir[1]_i_89__2_n_0 ));
  LUT6 #(
    .INIT(64'hEEEEEEEEEFEFEFFF)) 
    \s1_los_dir[1]_i_8__2 
       (.I0(ghost4_col[3]),
        .I1(ghost4_col[2]),
        .I2(rover_col[2]),
        .I3(rover_col[1]),
        .I4(rover_col[0]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_8__2_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair109" *) 
  LUT4 #(
    .INIT(16'hFEAA)) 
    \s1_los_dir[1]_i_91 
       (.I0(rover_col[3]),
        .I1(rover_col[0]),
        .I2(rover_col[1]),
        .I3(rover_col[2]),
        .O(rover_col_3_sn_1));
  (* SOFT_HLUTNM = "soft_lutpair85" *) 
  LUT5 #(
    .INIT(32'hFFFF6FF6)) 
    \s1_los_dir[1]_i_92__1 
       (.I0(ghost4_row[1]),
        .I1(rover_row[1]),
        .I2(ghost4_row[0]),
        .I3(rover_row[0]),
        .I4(\s1_los_dir[1]_i_105__2_n_0 ),
        .O(\s1_los_dir[1]_i_92__1_n_0 ));
  (* SOFT_HLUTNM = "soft_lutpair111" *) 
  LUT3 #(
    .INIT(8'h01)) 
    \s1_los_dir[1]_i_92__2 
       (.I0(rover_col[3]),
        .I1(rover_col[2]),
        .I2(rover_col[1]),
        .O(\rover_col[3]_2 ));
  LUT6 #(
    .INIT(64'h20F220F2B0FB20F2)) 
    \s1_los_dir[1]_i_93__1 
       (.I0(ghost4_col[2]),
        .I1(rover_col[2]),
        .I2(ghost4_col[3]),
        .I3(rover_col[3]),
        .I4(ghost4_col[1]),
        .I5(rover_col[1]),
        .O(\s1_los_dir[1]_i_93__1_n_0 ));
  LUT5 #(
    .INIT(32'hA2A200A2)) 
    \s1_los_dir[1]_i_94__2 
       (.I0(s1_los_detected_i_26__2_n_0),
        .I1(rover_col[3]),
        .I2(ghost4_col[3]),
        .I3(rover_col[0]),
        .I4(ghost4_col[0]),
        .O(\s1_los_dir[1]_i_94__2_n_0 ));
  LUT6 #(
    .INIT(64'hDD4D0000FFFFDD4D)) 
    \s1_los_dir[1]_i_95__2 
       (.I0(rover_col[2]),
        .I1(ghost4_col[2]),
        .I2(rover_col[1]),
        .I3(ghost4_col[1]),
        .I4(ghost4_col[3]),
        .I5(rover_col[3]),
        .O(\s1_los_dir[1]_i_95__2_n_0 ));
  LUT5 #(
    .INIT(32'hAEAEFFAE)) 
    \s1_los_dir[1]_i_96__2 
       (.I0(s1_los_detected_i_25__1_n_0),
        .I1(ghost4_col[0]),
        .I2(rover_col[0]),
        .I3(ghost4_col[3]),
        .I4(rover_col[3]),
        .O(\s1_los_dir[1]_i_96__2_n_0 ));
  LUT6 #(
    .INIT(64'hE22BB88B22288888)) 
    \s1_los_dir[1]_i_9__2 
       (.I0(\s1_los_dir[1]_i_36__1_n_0 ),
        .I1(\s1_los_dir[1]_i_37__2_n_0 ),
        .I2(\s1_los_dir[1]_i_38__2_n_0 ),
        .I3(\s1_los_dir[1]_i_39__2_n_0 ),
        .I4(\s1_los_dir[1]_i_40__2_n_0 ),
        .I5(\s1_los_dir[1]_i_41__1_n_0 ),
        .O(\s1_los_dir[1]_i_9__2_n_0 ));
  FDCE \s1_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(los_dir_comb[0]),
        .Q(s1_los_dir[0]));
  FDCE \s1_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(\s1_los_dir_reg[0]_0 ),
        .CLR(AR),
        .D(los_dir_comb[1]),
        .Q(s1_los_dir[1]));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_10__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__2_n_6),
        .O(s2_can_down_i_10__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_11__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_11__2_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_12__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__2_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_down_i_12__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_13__2
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_down_reg_i_16__2_n_7),
        .O(s2_can_down_i_13__2_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_down_i_14__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .O(s2_can_down_i_14__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_down_i_15__2
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_15__2_n_0));
  LUT4 #(
    .INIT(16'h542B)) 
    s2_can_down_i_17__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_down_i_17__2_n_0));
  LUT4 #(
    .INIT(16'h8505)) 
    s2_can_down_i_18__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_18__2_n_0));
  LUT4 #(
    .INIT(16'h1A9A)) 
    s2_can_down_i_19__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_19__2_n_0));
  LUT6 #(
    .INIT(64'h0000000707070007)) 
    s2_can_down_i_1__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[3]),
        .I3(s2_can_down_i_2__2_n_0),
        .I4(s2_can_down_reg_i_3__2_n_5),
        .I5(s2_can_down_i_4__2_n_0),
        .O(wc_down));
  LUT2 #(
    .INIT(4'hE)) 
    s2_can_down_i_20__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_down_i_20__2_n_0));
  LUT4 #(
    .INIT(16'h651A)) 
    s2_can_down_i_21__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_21__2_n_0));
  LUT4 #(
    .INIT(16'h4B52)) 
    s2_can_down_i_22__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_22__2_n_0));
  LUT4 #(
    .INIT(16'h1CE3)) 
    s2_can_down_i_23__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_down_i_23__2_n_0));
  LUT3 #(
    .INIT(8'h65)) 
    s2_can_down_i_24__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_down_i_24__2_n_0));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_down_i_2__2
       (.I0(s2_can_down_reg_i_3__2_n_6),
        .I1(s2_can_down_reg_i_5__2_n_6),
        .I2(s2_can_down_reg_i_3__2_n_7),
        .I3(s2_can_down_reg_i_5__2_n_5),
        .I4(s2_can_down_reg_i_5__2_n_4),
        .I5(s2_can_down_reg_i_5__2_n_7),
        .O(s2_can_down_i_2__2_n_0));
  LUT3 #(
    .INIT(8'h02)) 
    s2_can_down_i_4__2
       (.I0(s2_can_down_reg_i_3__2_n_7),
        .I1(s2_can_down_reg_i_5__2_n_7),
        .I2(s2_can_down_reg_i_5__2_n_6),
        .O(s2_can_down_i_4__2_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_down_i_6__2
       (.I0(s2_can_down_reg_i_16__2_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_down_i_6__2_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_down_i_9__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_down_reg_i_16__2_n_6),
        .I2(s2_can_down_reg_i_16__2_n_5),
        .O(s2_can_down_i_9__2_n_0));
  FDCE s2_can_down_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_down),
        .Q(s2_can_down));
  CARRY4 s2_can_down_reg_i_16__2
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_16__2_n_0,s2_can_down_reg_i_16__2_n_1,s2_can_down_reg_i_16__2_n_2,s2_can_down_reg_i_16__2_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_18__2_n_0,s2_can_down_i_19__2_n_0,s2_can_down_i_20__2_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_0 ,s2_can_down_reg_i_16__2_n_5,s2_can_down_reg_i_16__2_n_6,s2_can_down_reg_i_16__2_n_7}),
        .S({s2_can_down_i_21__2_n_0,s2_can_down_i_22__2_n_0,s2_can_down_i_23__2_n_0,s2_can_down_i_24__2_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_3__2
       (.CI(s2_can_down_reg_i_5__2_n_0),
        .CO({NLW_s2_can_down_reg_i_3__2_CO_UNCONNECTED[3:2],s2_can_down_reg_i_3__2_n_2,s2_can_down_reg_i_3__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_down_i_6__2_n_0}),
        .O({NLW_s2_can_down_reg_i_3__2_O_UNCONNECTED[3],s2_can_down_reg_i_3__2_n_5,s2_can_down_reg_i_3__2_n_6,s2_can_down_reg_i_3__2_n_7}),
        .S({1'b0,s2_can_down_reg_i_7__2_n_7,s2_can_down_reg_0,s2_can_down_i_9__2_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_down_reg_i_5__2
       (.CI(1'b0),
        .CO({s2_can_down_reg_i_5__2_n_0,s2_can_down_reg_i_5__2_n_1,s2_can_down_reg_i_5__2_n_2,s2_can_down_reg_i_5__2_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_down_i_10__2_n_0,s1_ghost_col[2],s2_can_down_i_11__2_n_0,s1_ghost_row[0]}),
        .O({s2_can_down_reg_i_5__2_n_4,s2_can_down_reg_i_5__2_n_5,s2_can_down_reg_i_5__2_n_6,s2_can_down_reg_i_5__2_n_7}),
        .S({s2_can_down_i_12__2_n_0,s2_can_down_i_13__2_n_0,s2_can_down_i_14__2_n_0,s2_can_down_i_15__2_n_0}));
  CARRY4 s2_can_down_reg_i_7__2
       (.CI(s2_can_down_reg_i_16__2_n_0),
        .CO(NLW_s2_can_down_reg_i_7__2_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_down_reg_i_7__2_O_UNCONNECTED[3:1],s2_can_down_reg_i_7__2_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_down_i_17__2_n_0}));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_10__2
       (.I0(s1_ghost_row[1]),
        .O(s2_can_left_i_10__2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_11__2
       (.I0(s1_ghost_row[0]),
        .O(s2_can_left_i_11__2_n_0));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_left_i_12__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__2_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_left_i_12__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_13__2
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__2_n_7),
        .O(s2_can_left_i_13__2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_14__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .O(s2_can_left_i_14__2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_left_i_15__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_left_i_15__2_n_0));
  LUT6 #(
    .INIT(64'hA2A2A202A2A2A2A2)) 
    s2_can_left_i_1__2
       (.I0(wc_left01_in),
        .I1(s2_can_left_i_3__2_n_0),
        .I2(s2_can_left_reg_i_4__2_n_5),
        .I3(s2_can_left_reg_i_5__2_n_6),
        .I4(s2_can_left_reg_i_5__2_n_7),
        .I5(s2_can_left_reg_i_4__2_n_7),
        .O(wc_left));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT4 #(
    .INIT(16'hFFFE)) 
    s2_can_left_i_2__2
       (.I0(s1_ghost_col[2]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_col[3]),
        .O(wc_left01_in));
  LUT6 #(
    .INIT(64'h42020022F0A5870F)) 
    s2_can_left_i_3__2
       (.I0(s2_can_left_reg_i_4__2_n_6),
        .I1(s2_can_left_reg_i_5__2_n_6),
        .I2(s2_can_left_reg_i_4__2_n_7),
        .I3(s2_can_left_reg_i_5__2_n_5),
        .I4(s2_can_left_reg_i_5__2_n_4),
        .I5(s2_can_left_reg_i_5__2_n_7),
        .O(s2_can_left_i_3__2_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_left_i_6__2
       (.I0(s2_can_right_reg_i_7__2_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_left_i_6__2_n_0));
  LUT1 #(
    .INIT(2'h1)) 
    s2_can_left_i_7__2
       (.I0(s2_can_right_reg_i_7__2_n_4),
        .O(p_1_in));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_left_i_8__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__2_n_6),
        .I2(s2_can_right_reg_i_7__2_n_5),
        .O(s2_can_left_i_8__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_left_i_9__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__2_n_6),
        .O(s2_can_left_i_9__2_n_0));
  FDCE s2_can_left_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_left),
        .Q(s2_can_left));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_4__2
       (.CI(s2_can_left_reg_i_5__2_n_0),
        .CO({NLW_s2_can_left_reg_i_4__2_CO_UNCONNECTED[3:2],s2_can_left_reg_i_4__2_n_2,s2_can_left_reg_i_4__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_left_i_6__2_n_0}),
        .O({NLW_s2_can_left_reg_i_4__2_O_UNCONNECTED[3],s2_can_left_reg_i_4__2_n_5,s2_can_left_reg_i_4__2_n_6,s2_can_left_reg_i_4__2_n_7}),
        .S({1'b0,s2_can_right_reg_i_9__2_n_7,p_1_in,s2_can_left_i_8__2_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_left_reg_i_5__2
       (.CI(1'b0),
        .CO({s2_can_left_reg_i_5__2_n_0,s2_can_left_reg_i_5__2_n_1,s2_can_left_reg_i_5__2_n_2,s2_can_left_reg_i_5__2_n_3}),
        .CYINIT(1'b1),
        .DI({s2_can_left_i_9__2_n_0,s1_ghost_col[2],s2_can_left_i_10__2_n_0,s2_can_left_i_11__2_n_0}),
        .O({s2_can_left_reg_i_5__2_n_4,s2_can_left_reg_i_5__2_n_5,s2_can_left_reg_i_5__2_n_6,s2_can_left_reg_i_5__2_n_7}),
        .S({s2_can_left_i_12__2_n_0,s2_can_left_i_13__2_n_0,s2_can_left_i_14__2_n_0,s2_can_left_i_15__2_n_0}));
  LUT5 #(
    .INIT(32'h2ABFD540)) 
    s2_can_right_i_10__2
       (.I0(s2_can_right_i_8__2_n_0),
        .I1(s2_can_right_reg_i_7__2_n_6),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__2_n_5),
        .I4(s2_can_right_reg_i_7__2_n_4),
        .O(s2_can_right_i_10__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT4 #(
    .INIT(16'h7887)) 
    s2_can_right_i_11__2
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_col[1]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_11__2_n_0));
  LUT6 #(
    .INIT(64'h7887F00FF00F8778)) 
    s2_can_right_i_12__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .I2(s2_can_right_reg_i_7__2_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s1_ghost_col[1]),
        .I5(s1_ghost_row[1]),
        .O(s2_can_right_i_12__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'h56A9A956)) 
    s2_can_right_i_13__2
       (.I0(s2_can_right_i_6__2_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__2_n_7),
        .I3(s2_can_right_reg_i_7__2_n_6),
        .I4(s1_ghost_col[3]),
        .O(s2_can_right_i_13__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair93" *) 
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_14__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_col[0]),
        .O(s2_can_right_i_14__2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_15__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .O(s2_can_right_i_15__2_n_0));
  LUT2 #(
    .INIT(4'h2)) 
    s2_can_right_i_16__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .O(s2_can_right_i_16__2_n_0));
  LUT2 #(
    .INIT(4'hB)) 
    s2_can_right_i_17__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_17__2_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_18__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[3]),
        .I3(s1_ghost_row[1]),
        .O(s2_can_right_i_18__2_n_0));
  LUT4 #(
    .INIT(16'hB44B)) 
    s2_can_right_i_19__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_row[3]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_19__2_n_0));
  LUT6 #(
    .INIT(64'h0000077777770777)) 
    s2_can_right_i_1__2
       (.I0(s1_ghost_col[3]),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_i_2__2_n_0),
        .I3(s2_can_right_i_3__2_n_0),
        .I4(s2_can_right_i_4__2_n_0),
        .I5(s2_can_right_i_5__2_n_0),
        .O(wc_right));
  LUT4 #(
    .INIT(16'h2DD2)) 
    s2_can_right_i_20__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[2]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_right_i_20__2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_right_i_21__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_right_i_21__2_n_0));
  LUT3 #(
    .INIT(8'h4B)) 
    s2_can_right_i_22__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .O(s2_can_right_i_22__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair92" *) 
  LUT4 #(
    .INIT(16'h0990)) 
    s2_can_right_i_2__2
       (.I0(s1_ghost_row[1]),
        .I1(s1_ghost_col[1]),
        .I2(s1_ghost_col[0]),
        .I3(s1_ghost_row[0]),
        .O(s2_can_right_i_2__2_n_0));
  LUT6 #(
    .INIT(64'hAB54FD02FD0254AB)) 
    s2_can_right_i_3__2
       (.I0(s2_can_right_i_6__2_n_0),
        .I1(s1_ghost_col[2]),
        .I2(s2_can_right_reg_i_7__2_n_7),
        .I3(s2_can_right_reg_i_7__2_n_5),
        .I4(s2_can_right_reg_i_7__2_n_6),
        .I5(s1_ghost_col[3]),
        .O(s2_can_right_i_3__2_n_0));
  LUT6 #(
    .INIT(64'h15550111EAAAFEEE)) 
    s2_can_right_i_4__2
       (.I0(s2_can_right_reg_i_7__2_n_4),
        .I1(s2_can_right_reg_i_7__2_n_5),
        .I2(s1_ghost_col[3]),
        .I3(s2_can_right_reg_i_7__2_n_6),
        .I4(s2_can_right_i_8__2_n_0),
        .I5(s2_can_right_reg_i_9__2_n_7),
        .O(s2_can_right_i_4__2_n_0));
  LUT6 #(
    .INIT(64'hF0A52D0F18080088)) 
    s2_can_right_i_5__2
       (.I0(s2_can_right_i_10__2_n_0),
        .I1(s2_can_right_i_11__2_n_0),
        .I2(s2_can_right_i_3__2_n_0),
        .I3(s2_can_right_i_12__2_n_0),
        .I4(s2_can_right_i_13__2_n_0),
        .I5(s2_can_right_i_14__2_n_0),
        .O(s2_can_right_i_5__2_n_0));
  LUT6 #(
    .INIT(64'h0666666F666F666F)) 
    s2_can_right_i_6__2
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_right_reg_i_7__2_n_7),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_col[1]),
        .I4(s1_ghost_row[0]),
        .I5(s1_ghost_col[0]),
        .O(s2_can_right_i_6__2_n_0));
  (* SOFT_HLUTNM = "soft_lutpair84" *) 
  LUT5 #(
    .INIT(32'h999F0009)) 
    s2_can_right_i_8__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_right_reg_i_7__2_n_6),
        .I2(s2_can_right_reg_i_7__2_n_7),
        .I3(s1_ghost_col[2]),
        .I4(s2_can_right_i_6__2_n_0),
        .O(s2_can_right_i_8__2_n_0));
  FDCE s2_can_right_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_right),
        .Q(s2_can_right));
  CARRY4 s2_can_right_reg_i_7__2
       (.CI(1'b0),
        .CO({s2_can_right_reg_i_7__2_n_0,s2_can_right_reg_i_7__2_n_1,s2_can_right_reg_i_7__2_n_2,s2_can_right_reg_i_7__2_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_right_i_15__2_n_0,s2_can_right_i_16__2_n_0,s2_can_right_i_17__2_n_0,1'b0}),
        .O({s2_can_right_reg_i_7__2_n_4,s2_can_right_reg_i_7__2_n_5,s2_can_right_reg_i_7__2_n_6,s2_can_right_reg_i_7__2_n_7}),
        .S({s2_can_right_i_18__2_n_0,s2_can_right_i_19__2_n_0,s2_can_right_i_20__2_n_0,s2_can_right_i_21__2_n_0}));
  CARRY4 s2_can_right_reg_i_9__2
       (.CI(s2_can_right_reg_i_7__2_n_0),
        .CO(NLW_s2_can_right_reg_i_9__2_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_right_reg_i_9__2_O_UNCONNECTED[3:1],s2_can_right_reg_i_9__2_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_right_i_22__2_n_0}));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_10__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__2_n_6),
        .O(s2_can_up_i_10__2_n_0));
  LUT2 #(
    .INIT(4'h6)) 
    s2_can_up_i_11__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .O(wc_down5));
  LUT3 #(
    .INIT(8'h96)) 
    s2_can_up_i_12__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__2_n_6),
        .I2(s1_ghost_col[2]),
        .O(s2_can_up_i_12__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_13__2
       (.I0(s1_ghost_col[2]),
        .I1(s2_can_up_reg_i_16__2_n_7),
        .O(s2_can_up_i_13__2_n_0));
  LUT3 #(
    .INIT(8'h69)) 
    s2_can_up_i_14__2
       (.I0(s1_ghost_col[1]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_14__2_n_0));
  LUT2 #(
    .INIT(4'h9)) 
    s2_can_up_i_15__2
       (.I0(s1_ghost_col[0]),
        .I1(s1_ghost_row[0]),
        .O(s2_can_up_i_15__2_n_0));
  LUT4 #(
    .INIT(16'h42BF)) 
    s2_can_up_i_17__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_17__2_n_0));
  LUT4 #(
    .INIT(16'h1213)) 
    s2_can_up_i_18__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_18__2_n_0));
  LUT4 #(
    .INIT(16'h6564)) 
    s2_can_up_i_19__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_19__2_n_0));
  LUT5 #(
    .INIT(32'h0000FFFE)) 
    s2_can_up_i_1__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[2]),
        .I4(s2_can_up_i_2__2_n_0),
        .O(wc_up));
  LUT3 #(
    .INIT(8'hED)) 
    s2_can_up_i_20__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .O(s2_can_up_i_20__2_n_0));
  LUT4 #(
    .INIT(16'h9599)) 
    s2_can_up_i_21__2
       (.I0(s1_ghost_row[3]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .I3(s1_ghost_row[2]),
        .O(s2_can_up_i_21__2_n_0));
  LUT4 #(
    .INIT(16'h5964)) 
    s2_can_up_i_22__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[0]),
        .I2(s1_ghost_row[1]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_22__2_n_0));
  LUT4 #(
    .INIT(16'h738C)) 
    s2_can_up_i_23__2
       (.I0(s1_ghost_row[0]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[2]),
        .I3(s1_ghost_row[3]),
        .O(s2_can_up_i_23__2_n_0));
  LUT3 #(
    .INIT(8'hA6)) 
    s2_can_up_i_24__2
       (.I0(s1_ghost_row[2]),
        .I1(s1_ghost_row[1]),
        .I2(s1_ghost_row[0]),
        .O(s2_can_up_i_24__2_n_0));
  LUT6 #(
    .INIT(64'h0028FFFF00280000)) 
    s2_can_up_i_2__2
       (.I0(s2_can_up_reg_i_3__2_n_7),
        .I1(s1_ghost_col[0]),
        .I2(s1_ghost_row[0]),
        .I3(s2_can_up_reg_i_4__2_n_6),
        .I4(s2_can_up_reg_i_3__2_n_5),
        .I5(s2_can_up_i_5__2_n_0),
        .O(s2_can_up_i_2__2_n_0));
  LUT6 #(
    .INIT(64'hF0A5870F42020022)) 
    s2_can_up_i_5__2
       (.I0(s2_can_up_reg_i_3__2_n_6),
        .I1(s2_can_up_reg_i_4__2_n_6),
        .I2(s2_can_up_reg_i_3__2_n_7),
        .I3(s2_can_up_reg_i_4__2_n_5),
        .I4(s2_can_up_reg_i_4__2_n_4),
        .I5(s2_can_right_i_14__2_n_0),
        .O(s2_can_up_i_5__2_n_0));
  LUT2 #(
    .INIT(4'h7)) 
    s2_can_up_i_6__2
       (.I0(s2_can_up_reg_i_16__2_n_6),
        .I1(s1_ghost_col[3]),
        .O(s2_can_up_i_6__2_n_0));
  LUT3 #(
    .INIT(8'h78)) 
    s2_can_up_i_9__2
       (.I0(s1_ghost_col[3]),
        .I1(s2_can_up_reg_i_16__2_n_6),
        .I2(s2_can_up_reg_i_16__2_n_5),
        .O(s2_can_up_i_9__2_n_0));
  FDCE s2_can_up_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(wc_up),
        .Q(s2_can_up));
  CARRY4 s2_can_up_reg_i_16__2
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_16__2_n_0,s2_can_up_reg_i_16__2_n_1,s2_can_up_reg_i_16__2_n_2,s2_can_up_reg_i_16__2_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_18__2_n_0,s2_can_up_i_19__2_n_0,s2_can_up_i_20__2_n_0,1'b0}),
        .O({\s1_ghost_row_reg[2]_1 ,s2_can_up_reg_i_16__2_n_5,s2_can_up_reg_i_16__2_n_6,s2_can_up_reg_i_16__2_n_7}),
        .S({s2_can_up_i_21__2_n_0,s2_can_up_i_22__2_n_0,s2_can_up_i_23__2_n_0,s2_can_up_i_24__2_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_3__2
       (.CI(s2_can_up_reg_i_4__2_n_0),
        .CO({NLW_s2_can_up_reg_i_3__2_CO_UNCONNECTED[3:2],s2_can_up_reg_i_3__2_n_2,s2_can_up_reg_i_3__2_n_3}),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,s2_can_up_i_6__2_n_0}),
        .O({NLW_s2_can_up_reg_i_3__2_O_UNCONNECTED[3],s2_can_up_reg_i_3__2_n_5,s2_can_up_reg_i_3__2_n_6,s2_can_up_reg_i_3__2_n_7}),
        .S({1'b0,s2_can_up_reg_i_7__2_n_7,s2_can_up_i_2__2_0,s2_can_up_i_9__2_n_0}));
  (* ADDER_THRESHOLD = "35" *) 
  CARRY4 s2_can_up_reg_i_4__2
       (.CI(1'b0),
        .CO({s2_can_up_reg_i_4__2_n_0,s2_can_up_reg_i_4__2_n_1,s2_can_up_reg_i_4__2_n_2,s2_can_up_reg_i_4__2_n_3}),
        .CYINIT(1'b0),
        .DI({s2_can_up_i_10__2_n_0,s1_ghost_col[2],wc_down5,s1_ghost_row[0]}),
        .O({s2_can_up_reg_i_4__2_n_4,s2_can_up_reg_i_4__2_n_5,s2_can_up_reg_i_4__2_n_6,NLW_s2_can_up_reg_i_4__2_O_UNCONNECTED[0]}),
        .S({s2_can_up_i_12__2_n_0,s2_can_up_i_13__2_n_0,s2_can_up_i_14__2_n_0,s2_can_up_i_15__2_n_0}));
  CARRY4 s2_can_up_reg_i_7__2
       (.CI(s2_can_up_reg_i_16__2_n_0),
        .CO(NLW_s2_can_up_reg_i_7__2_CO_UNCONNECTED[3:0]),
        .CYINIT(1'b0),
        .DI({1'b0,1'b0,1'b0,1'b0}),
        .O({NLW_s2_can_up_reg_i_7__2_O_UNCONNECTED[3:1],s2_can_up_reg_i_7__2_n_7}),
        .S({1'b0,1'b0,1'b0,s2_can_up_i_17__2_n_0}));
  FDCE \s2_facing_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[0]),
        .Q(s2_facing[0]));
  FDCE \s2_facing_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(D[1]),
        .Q(s2_facing[1]));
  FDCE s2_los_detected_reg
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_detected),
        .Q(s2_los_detected));
  FDCE \s2_los_dir_reg[0] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[0]),
        .Q(s2_los_dir[0]));
  FDCE \s2_los_dir_reg[1] 
       (.C(S_AXI_ACLK),
        .CE(E),
        .CLR(AR),
        .D(s1_los_dir[1]),
        .Q(s2_los_dir[1]));
endmodule
`ifndef GLBL
`define GLBL
`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;
    parameter GRES_WIDTH = 10000;
    parameter GRES_START = 10000;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    wire GRESTORE;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;
    wire FCSBO_GLBL;
    wire [3:0] DO_GLBL;
    wire [3:0] DI_GLBL;
   
    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;
    reg GRESTORE_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (strong1, weak0) GSR = GSR_int;
    assign (strong1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;
    assign (strong1, weak0) GRESTORE = GRESTORE_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

    initial begin 
	GRESTORE_int = 1'b0;
	#(GRES_START);
	GRESTORE_int = 1'b1;
	#(GRES_WIDTH);
	GRESTORE_int = 1'b0;
    end

endmodule
`endif
