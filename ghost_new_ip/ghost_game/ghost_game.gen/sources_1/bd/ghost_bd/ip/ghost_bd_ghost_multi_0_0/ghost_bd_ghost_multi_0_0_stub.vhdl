-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
-- Date        : Sun Mar 15 22:37:24 2026
-- Host        : DZULDINIY-SWIFT running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode synth_stub
--               c:/Users/shold/Desktop/EIE-Y2/ghost_new_ip/ghost_game/ghost_game.gen/sources_1/bd/ghost_bd/ip/ghost_bd_ghost_multi_0_0/ghost_bd_ghost_multi_0_0_stub.vhdl
-- Design      : ghost_bd_ghost_multi_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ghost_bd_ghost_multi_0_0 is
  Port ( 
    S_AXI_ACLK : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_WDATA : in STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_WSTRB : in STD_LOGIC_VECTOR ( 3 downto 0 );
    S_AXI_WVALID : in STD_LOGIC;
    S_AXI_WREADY : out STD_LOGIC;
    S_AXI_BRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_BVALID : out STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 3 downto 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 31 downto 0 );
    S_AXI_RRESP : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_RVALID : out STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    ghost1_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost1_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost2_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost2_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost3_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost3_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 )
  );

end ghost_bd_ghost_multi_0_0;

architecture stub of ghost_bd_ghost_multi_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "S_AXI_ACLK,S_AXI_ARESETN,S_AXI_AWADDR[3:0],S_AXI_AWVALID,S_AXI_AWREADY,S_AXI_WDATA[31:0],S_AXI_WSTRB[3:0],S_AXI_WVALID,S_AXI_WREADY,S_AXI_BRESP[1:0],S_AXI_BVALID,S_AXI_BREADY,S_AXI_ARADDR[3:0],S_AXI_ARVALID,S_AXI_ARREADY,S_AXI_RDATA[31:0],S_AXI_RRESP[1:0],S_AXI_RVALID,S_AXI_RREADY,ghost1_row[3:0],ghost1_col[3:0],ghost2_row[3:0],ghost2_col[3:0],ghost3_row[3:0],ghost3_col[3:0],ghost4_row[3:0],ghost4_col[3:0],rover_row[3:0],rover_col[3:0]";
attribute X_CORE_INFO : string;
attribute X_CORE_INFO of stub : architecture is "ghost_multi_axi_lite,Vivado 2020.2";
begin
end;
