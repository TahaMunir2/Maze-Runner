-- Copyright 1986-2020 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2020.2 (win64) Build 3064766 Wed Nov 18 09:12:45 MST 2020
-- Date        : Sun Mar 15 22:37:23 2026
-- Host        : DZULDINIY-SWIFT running 64-bit major release  (build 9200)
-- Command     : write_vhdl -force -mode funcsim -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ ghost_bd_ghost_multi_0_0_sim_netlist.vhdl
-- Design      : ghost_bd_ghost_multi_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7z020clg400-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top is
  port (
    E : out STD_LOGIC_VECTOR ( 0 to 0 );
    AR : out STD_LOGIC_VECTOR ( 0 to 0 );
    \pipe_en_reg[0]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \p_0_in__0\ : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 0 to 0 );
    O : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \direction_reg[1]_0\ : out STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    \pipe_en_reg[0]_1\ : in STD_LOGIC;
    S : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_up_i_2_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    s1_los_detected_reg_0 : in STD_LOGIC;
    \s1_los_dir[1]_i_35_0\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost1_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[1]_i_6_0\ : in STD_LOGIC;
    ghost1_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s1_los_detected_reg_1 : in STD_LOGIC;
    s1_los_detected_i_2_0 : in STD_LOGIC;
    s1_los_detected_i_5_0 : in STD_LOGIC;
    \s1_los_dir[1]_i_2_0\ : in STD_LOGIC;
    \s1_los_dir[0]_i_5_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_0\ : in STD_LOGIC;
    \s1_los_dir[1]_i_29_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_1\ : in STD_LOGIC;
    \s1_los_dir[1]_i_5_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_2\ : in STD_LOGIC;
    \s1_los_dir[1]_i_6_1\ : in STD_LOGIC;
    \s1_los_dir[0]_i_4_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ARESETN : in STD_LOGIC
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top is
  signal \^ar\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \^e\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \direction[0]_i_1_n_0\ : STD_LOGIC;
  signal \direction[1]_i_1_n_0\ : STD_LOGIC;
  signal \^direction_reg[1]_0\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal los_detected_comb : STD_LOGIC;
  signal los_dir_comb : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \^p_0_in__0\ : STD_LOGIC;
  signal p_1_in : STD_LOGIC_VECTOR ( 5 to 5 );
  signal \^pipe_en_reg[0]_0\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal s1_ghost_col : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_ghost_row : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_los_detected : STD_LOGIC;
  signal s1_los_detected_i_10_n_0 : STD_LOGIC;
  signal s1_los_detected_i_11_n_0 : STD_LOGIC;
  signal s1_los_detected_i_12_n_0 : STD_LOGIC;
  signal s1_los_detected_i_13_n_0 : STD_LOGIC;
  signal s1_los_detected_i_14_n_0 : STD_LOGIC;
  signal s1_los_detected_i_15_n_0 : STD_LOGIC;
  signal s1_los_detected_i_16_n_0 : STD_LOGIC;
  signal s1_los_detected_i_18_n_0 : STD_LOGIC;
  signal s1_los_detected_i_19_n_0 : STD_LOGIC;
  signal s1_los_detected_i_21_n_0 : STD_LOGIC;
  signal s1_los_detected_i_22_n_0 : STD_LOGIC;
  signal s1_los_detected_i_23_n_0 : STD_LOGIC;
  signal s1_los_detected_i_24_n_0 : STD_LOGIC;
  signal s1_los_detected_i_26_n_0 : STD_LOGIC;
  signal s1_los_detected_i_27_n_0 : STD_LOGIC;
  signal s1_los_detected_i_28_n_0 : STD_LOGIC;
  signal s1_los_detected_i_29_n_0 : STD_LOGIC;
  signal s1_los_detected_i_2_n_0 : STD_LOGIC;
  signal s1_los_detected_i_30_n_0 : STD_LOGIC;
  signal s1_los_detected_i_3_n_0 : STD_LOGIC;
  signal s1_los_detected_i_5_n_0 : STD_LOGIC;
  signal s1_los_detected_i_6_n_0 : STD_LOGIC;
  signal s1_los_detected_i_7_n_0 : STD_LOGIC;
  signal s1_los_detected_i_8_n_0 : STD_LOGIC;
  signal s1_los_detected_i_9_n_0 : STD_LOGIC;
  signal s1_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \s1_los_dir[0]_i_10_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_11_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_12_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_13_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_14_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_15_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_16_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_17_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_18_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_19_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_20_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_21_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_22_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_23_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_3_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_4_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_5_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_6_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_7_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_8_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_9_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_101_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_102_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_103_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_104_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_105_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_10_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_114_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_11_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_12_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_13_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_14_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_15_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_16_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_17_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_18_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_19_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_21_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_22__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_24_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_25_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_26_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_27_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_28_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_29_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_30_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_31_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_32_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_33_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_34_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_35_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_37_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_38_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_39_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_3_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_40_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_41__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_42_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_43__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_44_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_45_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_46_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_47_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_48_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_49_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_4_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_50_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_51_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_52_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_53_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_54_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_56_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_57_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_58_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_5_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_60_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_61__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_62__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_63_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_64_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_65_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_66_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_68_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_69_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_6_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_70_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_71_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_72_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_73_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_74_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_75_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_76_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_77_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_78__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_79_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_7_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_80_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_81_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_82_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_83__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_84_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_85_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_86_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_87__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_88_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_89_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_8_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_90_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_93__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_94_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_95_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_96_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_97_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_9_n_0\ : STD_LOGIC;
  signal s2_can_down : STD_LOGIC;
  signal s2_can_down_i_10_n_0 : STD_LOGIC;
  signal s2_can_down_i_11_n_0 : STD_LOGIC;
  signal s2_can_down_i_12_n_0 : STD_LOGIC;
  signal s2_can_down_i_13_n_0 : STD_LOGIC;
  signal s2_can_down_i_14_n_0 : STD_LOGIC;
  signal s2_can_down_i_15_n_0 : STD_LOGIC;
  signal s2_can_down_i_17_n_0 : STD_LOGIC;
  signal s2_can_down_i_18_n_0 : STD_LOGIC;
  signal s2_can_down_i_19_n_0 : STD_LOGIC;
  signal s2_can_down_i_20_n_0 : STD_LOGIC;
  signal s2_can_down_i_21_n_0 : STD_LOGIC;
  signal s2_can_down_i_22_n_0 : STD_LOGIC;
  signal s2_can_down_i_23_n_0 : STD_LOGIC;
  signal s2_can_down_i_24_n_0 : STD_LOGIC;
  signal s2_can_down_i_2_n_0 : STD_LOGIC;
  signal s2_can_down_i_4_n_0 : STD_LOGIC;
  signal s2_can_down_i_6_n_0 : STD_LOGIC;
  signal s2_can_down_i_9_n_0 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_0 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_1 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_2 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_3 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_5 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_6 : STD_LOGIC;
  signal s2_can_down_reg_i_16_n_7 : STD_LOGIC;
  signal s2_can_down_reg_i_3_n_2 : STD_LOGIC;
  signal s2_can_down_reg_i_3_n_3 : STD_LOGIC;
  signal s2_can_down_reg_i_3_n_5 : STD_LOGIC;
  signal s2_can_down_reg_i_3_n_6 : STD_LOGIC;
  signal s2_can_down_reg_i_3_n_7 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_0 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_1 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_2 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_3 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_4 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_5 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_6 : STD_LOGIC;
  signal s2_can_down_reg_i_5_n_7 : STD_LOGIC;
  signal s2_can_down_reg_i_7_n_7 : STD_LOGIC;
  signal s2_can_left : STD_LOGIC;
  signal s2_can_left_i_10_n_0 : STD_LOGIC;
  signal s2_can_left_i_11_n_0 : STD_LOGIC;
  signal s2_can_left_i_12_n_0 : STD_LOGIC;
  signal s2_can_left_i_13_n_0 : STD_LOGIC;
  signal s2_can_left_i_14_n_0 : STD_LOGIC;
  signal s2_can_left_i_15_n_0 : STD_LOGIC;
  signal s2_can_left_i_3_n_0 : STD_LOGIC;
  signal s2_can_left_i_6_n_0 : STD_LOGIC;
  signal s2_can_left_i_8_n_0 : STD_LOGIC;
  signal s2_can_left_i_9_n_0 : STD_LOGIC;
  signal s2_can_left_reg_i_4_n_2 : STD_LOGIC;
  signal s2_can_left_reg_i_4_n_3 : STD_LOGIC;
  signal s2_can_left_reg_i_4_n_5 : STD_LOGIC;
  signal s2_can_left_reg_i_4_n_6 : STD_LOGIC;
  signal s2_can_left_reg_i_4_n_7 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_0 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_1 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_2 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_3 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_4 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_5 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_6 : STD_LOGIC;
  signal s2_can_left_reg_i_5_n_7 : STD_LOGIC;
  signal s2_can_right : STD_LOGIC;
  signal s2_can_right_i_10_n_0 : STD_LOGIC;
  signal s2_can_right_i_11_n_0 : STD_LOGIC;
  signal s2_can_right_i_12_n_0 : STD_LOGIC;
  signal s2_can_right_i_13_n_0 : STD_LOGIC;
  signal s2_can_right_i_14_n_0 : STD_LOGIC;
  signal s2_can_right_i_15_n_0 : STD_LOGIC;
  signal s2_can_right_i_16_n_0 : STD_LOGIC;
  signal s2_can_right_i_17_n_0 : STD_LOGIC;
  signal s2_can_right_i_18_n_0 : STD_LOGIC;
  signal s2_can_right_i_19_n_0 : STD_LOGIC;
  signal s2_can_right_i_20_n_0 : STD_LOGIC;
  signal s2_can_right_i_21_n_0 : STD_LOGIC;
  signal s2_can_right_i_22_n_0 : STD_LOGIC;
  signal s2_can_right_i_2_n_0 : STD_LOGIC;
  signal s2_can_right_i_3_n_0 : STD_LOGIC;
  signal s2_can_right_i_4_n_0 : STD_LOGIC;
  signal s2_can_right_i_5_n_0 : STD_LOGIC;
  signal s2_can_right_i_6_n_0 : STD_LOGIC;
  signal s2_can_right_i_8_n_0 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_0 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_1 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_2 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_3 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_4 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_5 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_6 : STD_LOGIC;
  signal s2_can_right_reg_i_7_n_7 : STD_LOGIC;
  signal s2_can_right_reg_i_9_n_7 : STD_LOGIC;
  signal s2_can_up : STD_LOGIC;
  signal s2_can_up_i_10_n_0 : STD_LOGIC;
  signal s2_can_up_i_12_n_0 : STD_LOGIC;
  signal s2_can_up_i_13_n_0 : STD_LOGIC;
  signal s2_can_up_i_14_n_0 : STD_LOGIC;
  signal s2_can_up_i_15_n_0 : STD_LOGIC;
  signal s2_can_up_i_17_n_0 : STD_LOGIC;
  signal s2_can_up_i_18_n_0 : STD_LOGIC;
  signal s2_can_up_i_19_n_0 : STD_LOGIC;
  signal s2_can_up_i_20_n_0 : STD_LOGIC;
  signal s2_can_up_i_21_n_0 : STD_LOGIC;
  signal s2_can_up_i_22_n_0 : STD_LOGIC;
  signal s2_can_up_i_23_n_0 : STD_LOGIC;
  signal s2_can_up_i_24_n_0 : STD_LOGIC;
  signal s2_can_up_i_2_n_0 : STD_LOGIC;
  signal s2_can_up_i_5_n_0 : STD_LOGIC;
  signal s2_can_up_i_6_n_0 : STD_LOGIC;
  signal s2_can_up_i_9_n_0 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_0 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_1 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_2 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_3 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_5 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_6 : STD_LOGIC;
  signal s2_can_up_reg_i_16_n_7 : STD_LOGIC;
  signal s2_can_up_reg_i_3_n_2 : STD_LOGIC;
  signal s2_can_up_reg_i_3_n_3 : STD_LOGIC;
  signal s2_can_up_reg_i_3_n_5 : STD_LOGIC;
  signal s2_can_up_reg_i_3_n_6 : STD_LOGIC;
  signal s2_can_up_reg_i_3_n_7 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_0 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_1 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_2 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_3 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_4 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_5 : STD_LOGIC;
  signal s2_can_up_reg_i_4_n_6 : STD_LOGIC;
  signal s2_can_up_reg_i_7_n_7 : STD_LOGIC;
  signal s2_facing : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal s2_los_detected : STD_LOGIC;
  signal s2_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal wc_down : STD_LOGIC;
  signal wc_down5 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal wc_left : STD_LOGIC;
  signal wc_left01_in : STD_LOGIC;
  signal wc_right : STD_LOGIC;
  signal wc_up : STD_LOGIC;
  signal wf_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal NLW_s2_can_down_reg_i_3_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal NLW_s2_can_down_reg_i_3_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 to 3 );
  signal NLW_s2_can_down_reg_i_7_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_s2_can_down_reg_i_7_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal NLW_s2_can_left_reg_i_4_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal NLW_s2_can_left_reg_i_4_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 to 3 );
  signal NLW_s2_can_right_reg_i_9_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_s2_can_right_reg_i_9_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal NLW_s2_can_up_reg_i_3_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal NLW_s2_can_up_reg_i_3_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 to 3 );
  signal NLW_s2_can_up_reg_i_4_O_UNCONNECTED : STD_LOGIC_VECTOR ( 0 to 0 );
  signal NLW_s2_can_up_reg_i_7_CO_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal NLW_s2_can_up_reg_i_7_O_UNCONNECTED : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of s1_los_detected_i_10 : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of s1_los_detected_i_11 : label is "soft_lutpair15";
  attribute SOFT_HLUTNM of s1_los_detected_i_12 : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of s1_los_detected_i_15 : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of s1_los_detected_i_16 : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of s1_los_detected_i_18 : label is "soft_lutpair13";
  attribute SOFT_HLUTNM of s1_los_detected_i_29 : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of s1_los_detected_i_30 : label is "soft_lutpair12";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_10\ : label is "soft_lutpair6";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_12\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_18\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_19\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_20\ : label is "soft_lutpair17";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_21\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_22\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_23\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_6\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_101\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_114\ : label is "soft_lutpair11";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_22__2\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_37\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_38\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_41__2\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_42\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_44\ : label is "soft_lutpair27";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_46\ : label is "soft_lutpair16";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_47\ : label is "soft_lutpair1";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_49\ : label is "soft_lutpair14";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_51\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_52\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_54\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_56\ : label is "soft_lutpair7";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_62__2\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_63\ : label is "soft_lutpair18";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_64\ : label is "soft_lutpair3";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_68\ : label is "soft_lutpair19";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_69\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_73\ : label is "soft_lutpair22";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_76\ : label is "soft_lutpair20";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_77\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_78__2\ : label is "soft_lutpair5";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_83__2\ : label is "soft_lutpair21";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_85\ : label is "soft_lutpair23";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_86\ : label is "soft_lutpair4";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_87__2\ : label is "soft_lutpair25";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_88\ : label is "soft_lutpair26";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_89\ : label is "soft_lutpair2";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_90\ : label is "soft_lutpair10";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_94\ : label is "soft_lutpair24";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_95\ : label is "soft_lutpair3";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of s2_can_down_reg_i_3 : label is 35;
  attribute ADDER_THRESHOLD of s2_can_down_reg_i_5 : label is 35;
  attribute SOFT_HLUTNM of s2_can_left_i_2 : label is "soft_lutpair9";
  attribute ADDER_THRESHOLD of s2_can_left_reg_i_4 : label is 35;
  attribute ADDER_THRESHOLD of s2_can_left_reg_i_5 : label is 35;
  attribute SOFT_HLUTNM of s2_can_right_i_11 : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of s2_can_right_i_13 : label is "soft_lutpair0";
  attribute SOFT_HLUTNM of s2_can_right_i_14 : label is "soft_lutpair9";
  attribute SOFT_HLUTNM of s2_can_right_i_2 : label is "soft_lutpair8";
  attribute SOFT_HLUTNM of s2_can_right_i_8 : label is "soft_lutpair0";
  attribute ADDER_THRESHOLD of s2_can_up_reg_i_3 : label is 35;
  attribute ADDER_THRESHOLD of s2_can_up_reg_i_4 : label is 35;
begin
  AR(0) <= \^ar\(0);
  E(0) <= \^e\(0);
  \direction_reg[1]_0\(1 downto 0) <= \^direction_reg[1]_0\(1 downto 0);
  \p_0_in__0\ <= \^p_0_in__0\;
  \pipe_en_reg[0]_0\(0) <= \^pipe_en_reg[0]_0\(0);
S_AXI_AWREADY_i_2: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => S_AXI_ARESETN,
      O => \^ar\(0)
    );
\direction[0]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(0),
      I1 => s2_los_detected,
      I2 => wf_dir(0),
      I3 => \^p_0_in__0\,
      I4 => \^direction_reg[1]_0\(0),
      O => \direction[0]_i_1_n_0\
    );
\direction[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FAAA0032FABB3332"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => wf_dir(0)
    );
\direction[1]_i_1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(1),
      I1 => s2_los_detected,
      I2 => wf_dir(1),
      I3 => \^p_0_in__0\,
      I4 => \^direction_reg[1]_0\(1),
      O => \direction[1]_i_1_n_0\
    );
\direction[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F555FF31F0113031"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => wf_dir(1)
    );
\direction_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \direction[0]_i_1_n_0\,
      Q => \^direction_reg[1]_0\(0)
    );
\direction_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \direction[1]_i_1_n_0\,
      Q => \^direction_reg[1]_0\(1)
    );
\pipe_en_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \pipe_en_reg[0]_1\,
      Q => \^pipe_en_reg[0]_0\(0)
    );
\pipe_en_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \^pipe_en_reg[0]_0\(0),
      Q => \^e\(0)
    );
\pipe_en_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \^e\(0),
      Q => \^p_0_in__0\
    );
\s1_ghost_col_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_col(0),
      Q => s1_ghost_col(0)
    );
\s1_ghost_col_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_col(1),
      Q => s1_ghost_col(1)
    );
\s1_ghost_col_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_col(2),
      Q => s1_ghost_col(2)
    );
\s1_ghost_col_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_col(3),
      Q => s1_ghost_col(3)
    );
\s1_ghost_row_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_row(0),
      Q => s1_ghost_row(0)
    );
\s1_ghost_row_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_row(1),
      Q => s1_ghost_row(1)
    );
\s1_ghost_row_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_row(2),
      Q => s1_ghost_row(2)
    );
\s1_ghost_row_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => ghost1_row(3),
      Q => s1_ghost_row(3)
    );
s1_los_detected_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEFFFE"
    )
        port map (
      I0 => los_dir_comb(1),
      I1 => s1_los_detected_i_2_n_0,
      I2 => s1_los_detected_i_3_n_0,
      I3 => s1_los_detected_reg_0,
      I4 => s1_los_detected_i_5_n_0,
      O => los_detected_comb
    );
s1_los_detected_i_10: unisim.vcomponents.LUT4
    generic map(
      INIT => X"805E"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => ghost1_col(0),
      O => s1_los_detected_i_10_n_0
    );
s1_los_detected_i_11: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      I3 => ghost1_col(0),
      O => s1_los_detected_i_11_n_0
    );
s1_los_detected_i_12: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost1_row(3),
      I1 => ghost1_row(2),
      O => s1_los_detected_i_12_n_0
    );
s1_los_detected_i_13: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => s1_los_detected_i_5_0,
      I1 => s1_los_detected_i_26_n_0,
      I2 => ghost1_col(2),
      I3 => ghost1_col(1),
      I4 => ghost1_col(3),
      I5 => ghost1_col(0),
      O => s1_los_detected_i_13_n_0
    );
s1_los_detected_i_14: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF0F00DF0D"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => rover_row(2),
      I2 => ghost1_row(3),
      I3 => rover_row(3),
      I4 => s1_los_detected_i_27_n_0,
      I5 => s1_los_detected_i_28_n_0,
      O => s1_los_detected_i_14_n_0
    );
s1_los_detected_i_15: unisim.vcomponents.LUT4
    generic map(
      INIT => X"303E"
    )
        port map (
      I0 => ghost1_col(1),
      I1 => ghost1_col(3),
      I2 => ghost1_col(2),
      I3 => ghost1_col(0),
      O => s1_los_detected_i_15_n_0
    );
s1_los_detected_i_16: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost1_row(3),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => ghost1_row(2),
      O => s1_los_detected_i_16_n_0
    );
s1_los_detected_i_18: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(3),
      I2 => ghost1_row(1),
      I3 => ghost1_row(0),
      O => s1_los_detected_i_18_n_0
    );
s1_los_detected_i_19: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF070707"
    )
        port map (
      I0 => rover_row(1),
      I1 => rover_row(0),
      I2 => rover_row(3),
      I3 => ghost1_row(1),
      I4 => ghost1_row(2),
      I5 => ghost1_row(3),
      O => s1_los_detected_i_19_n_0
    );
s1_los_detected_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000000000AB"
    )
        port map (
      I0 => s1_los_detected_i_6_n_0,
      I1 => rover_row(2),
      I2 => rover_row(3),
      I3 => s1_los_detected_i_7_n_0,
      I4 => s1_los_detected_i_8_n_0,
      I5 => s1_los_detected_i_9_n_0,
      O => s1_los_detected_i_2_n_0
    );
s1_los_detected_i_21: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BEFFFFBEFFFFFFFF"
    )
        port map (
      I0 => s1_los_detected_i_29_n_0,
      I1 => ghost1_col(0),
      I2 => rover_col(0),
      I3 => ghost1_col(3),
      I4 => rover_col(3),
      I5 => s1_los_detected_i_30_n_0,
      O => s1_los_detected_i_21_n_0
    );
s1_los_detected_i_22: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => rover_row(0),
      I1 => ghost1_row(0),
      I2 => ghost1_row(2),
      I3 => rover_row(2),
      I4 => ghost1_row(1),
      I5 => rover_row(1),
      O => s1_los_detected_i_22_n_0
    );
s1_los_detected_i_23: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FEFFFFFFFEFEFEFE"
    )
        port map (
      I0 => ghost1_row(3),
      I1 => ghost1_row(2),
      I2 => ghost1_row(1),
      I3 => rover_row(1),
      I4 => rover_row(0),
      I5 => s1_los_detected_reg_1,
      O => s1_los_detected_i_23_n_0
    );
s1_los_detected_i_24: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CECECEEFCECEEFFF"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(3),
      I2 => \s1_los_dir[1]_i_47_n_0\,
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => s1_los_detected_i_24_n_0
    );
s1_los_detected_i_26: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF15FFFF1515"
    )
        port map (
      I0 => ghost1_row(3),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => s1_los_detected_i_26_n_0
    );
s1_los_detected_i_27: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => rover_row(0),
      I2 => rover_row(2),
      I3 => ghost1_row(2),
      I4 => rover_row(1),
      I5 => ghost1_row(1),
      O => s1_los_detected_i_27_n_0
    );
s1_los_detected_i_28: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEAAAAAAAAAAA"
    )
        port map (
      I0 => s1_los_detected_i_21_n_0,
      I1 => s1_los_detected_i_11_n_0,
      I2 => ghost1_row(1),
      I3 => ghost1_row(2),
      I4 => ghost1_row(3),
      I5 => s1_los_detected_i_2_0,
      O => s1_los_detected_i_28_n_0
    );
s1_los_detected_i_29: unisim.vcomponents.LUT4
    generic map(
      INIT => X"44F4"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      I3 => rover_col(1),
      O => s1_los_detected_i_29_n_0
    );
s1_los_detected_i_3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7077FFFF50555055"
    )
        port map (
      I0 => s1_los_detected_i_10_n_0,
      I1 => ghost1_row(0),
      I2 => rover_row(0),
      I3 => s1_los_detected_i_11_n_0,
      I4 => ghost1_row(1),
      I5 => s1_los_detected_i_12_n_0,
      O => s1_los_detected_i_3_n_0
    );
s1_los_detected_i_30: unisim.vcomponents.LUT4
    generic map(
      INIT => X"D0DD"
    )
        port map (
      I0 => rover_col(1),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => rover_col(2),
      O => s1_los_detected_i_30_n_0
    );
s1_los_detected_i_5: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFF1F1F1F1F1F1F1"
    )
        port map (
      I0 => s1_los_detected_i_13_n_0,
      I1 => s1_los_detected_i_12_n_0,
      I2 => s1_los_detected_i_14_n_0,
      I3 => s1_los_detected_i_15_n_0,
      I4 => s1_los_detected_i_16_n_0,
      I5 => s1_los_detected_reg_1,
      O => s1_los_detected_i_5_n_0
    );
s1_los_detected_i_6: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => s1_los_detected_i_18_n_0,
      I1 => s1_los_detected_i_19_n_0,
      I2 => ghost1_col(2),
      I3 => ghost1_col(1),
      I4 => ghost1_col(3),
      I5 => ghost1_col(0),
      O => s1_los_detected_i_6_n_0
    );
s1_los_detected_i_7: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000001D1C0000"
    )
        port map (
      I0 => ghost1_col(0),
      I1 => ghost1_col(2),
      I2 => ghost1_col(3),
      I3 => ghost1_col(1),
      I4 => s1_los_detected_i_12_n_0,
      I5 => s1_los_detected_i_2_0,
      O => s1_los_detected_i_7_n_0
    );
s1_los_detected_i_8: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BABABABAFBFBBAFB"
    )
        port map (
      I0 => s1_los_detected_i_21_n_0,
      I1 => rover_row(3),
      I2 => ghost1_row(3),
      I3 => rover_row(2),
      I4 => ghost1_row(2),
      I5 => s1_los_detected_i_22_n_0,
      O => s1_los_detected_i_8_n_0
    );
s1_los_detected_i_9: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7000000005550550"
    )
        port map (
      I0 => s1_los_detected_i_23_n_0,
      I1 => s1_los_detected_i_24_n_0,
      I2 => ghost1_col(3),
      I3 => ghost1_col(2),
      I4 => ghost1_col(1),
      I5 => ghost1_col(0),
      O => s1_los_detected_i_9_n_0
    );
s1_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => los_detected_comb,
      Q => s1_los_detected
    );
\s1_los_dir[0]_i_1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \s1_los_dir[0]_i_2_n_0\,
      I1 => s1_los_detected_i_2_n_0,
      O => los_dir_comb(0)
    );
\s1_los_dir[0]_i_10\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFA8FFFF"
    )
        port map (
      I0 => ghost1_col(2),
      I1 => ghost1_col(1),
      I2 => ghost1_col(0),
      I3 => ghost1_col(3),
      I4 => \s1_los_dir_reg[1]_1\,
      O => \s1_los_dir[0]_i_10_n_0\
    );
\s1_los_dir[0]_i_11\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22288888E22BB88B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_58_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[0]_i_21_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[0]_i_19_n_0\,
      O => \s1_los_dir[0]_i_11_n_0\
    );
\s1_los_dir[0]_i_12\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEEEEA"
    )
        port map (
      I0 => \s1_los_dir[1]_i_29_0\,
      I1 => ghost1_col(3),
      I2 => ghost1_col(2),
      I3 => ghost1_col(1),
      I4 => ghost1_col(0),
      O => \s1_los_dir[0]_i_12_n_0\
    );
\s1_los_dir[0]_i_13\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEBBBBB2EE88BB8"
    )
        port map (
      I0 => \s1_los_dir[1]_i_71_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[0]_i_22_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[1]_i_51_n_0\,
      O => \s1_los_dir[0]_i_13_n_0\
    );
\s1_los_dir[0]_i_14\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00FF101030302020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_74_n_0\,
      I2 => \s1_los_dir[1]_i_75_n_0\,
      I3 => \s1_los_dir[1]_i_51_n_0\,
      I4 => \s1_los_dir[1]_i_35_0\(2),
      I5 => \s1_los_dir[0]_i_4_0\(0),
      O => \s1_los_dir[0]_i_14_n_0\
    );
\s1_los_dir[0]_i_15\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFF111"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost1_col(0),
      I3 => ghost1_col(1),
      I4 => ghost1_col(2),
      I5 => ghost1_col(3),
      O => \s1_los_dir[0]_i_15_n_0\
    );
\s1_los_dir[0]_i_16\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"828882888288BEBB"
    )
        port map (
      I0 => \s1_los_dir[1]_i_53_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_35_0\(3),
      I3 => \s1_los_dir[0]_i_23_n_0\,
      I4 => \s1_los_dir[1]_i_51_n_0\,
      I5 => \s1_los_dir[1]_i_50_n_0\,
      O => \s1_los_dir[0]_i_16_n_0\
    );
\s1_los_dir[0]_i_17\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2888288828882B8B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_48_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_43__2_n_0\,
      I4 => ghost1_row(1),
      I5 => ghost1_row(0),
      O => \s1_los_dir[0]_i_17_n_0\
    );
\s1_los_dir[0]_i_18\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"AAA9"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      O => \s1_los_dir[0]_i_18_n_0\
    );
\s1_los_dir[0]_i_19\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      O => \s1_los_dir[0]_i_19_n_0\
    );
\s1_los_dir[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_4_n_0\,
      I1 => \s1_los_dir[0]_i_3_n_0\,
      I2 => \s1_los_dir[0]_i_4_n_0\,
      I3 => \s1_los_dir[1]_i_19_n_0\,
      I4 => \s1_los_dir[0]_i_5_n_0\,
      I5 => \s1_los_dir[0]_i_6_n_0\,
      O => \s1_los_dir[0]_i_2_n_0\
    );
\s1_los_dir[0]_i_20\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0332"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => ghost1_row(1),
      O => \s1_los_dir[0]_i_20_n_0\
    );
\s1_los_dir[0]_i_21\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      O => \s1_los_dir[0]_i_21_n_0\
    );
\s1_los_dir[0]_i_22\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0054"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[0]_i_22_n_0\
    );
\s1_los_dir[0]_i_23\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0F0FFFFE"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[0]_i_23_n_0\
    );
\s1_los_dir[0]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7707770700007707"
    )
        port map (
      I0 => \s1_los_dir[0]_i_7_n_0\,
      I1 => \s1_los_dir[0]_i_8_n_0\,
      I2 => \s1_los_dir[0]_i_9_n_0\,
      I3 => \s1_los_dir[0]_i_10_n_0\,
      I4 => \s1_los_dir[0]_i_11_n_0\,
      I5 => \s1_los_dir[0]_i_12_n_0\,
      O => \s1_los_dir[0]_i_3_n_0\
    );
\s1_los_dir[0]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF04FF04FFFFFF04"
    )
        port map (
      I0 => \s1_los_dir[0]_i_13_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_37_n_0\,
      I3 => \s1_los_dir[1]_i_77_n_0\,
      I4 => \s1_los_dir[0]_i_14_n_0\,
      I5 => \s1_los_dir[1]_i_72_n_0\,
      O => \s1_los_dir[0]_i_4_n_0\
    );
\s1_los_dir[0]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"44F444F4FFFF44F4"
    )
        port map (
      I0 => \s1_los_dir[0]_i_15_n_0\,
      I1 => \s1_los_dir[0]_i_16_n_0\,
      I2 => \s1_los_dir[0]_i_17_n_0\,
      I3 => \s1_los_dir[1]_i_49_n_0\,
      I4 => \s1_los_dir[1]_i_11_n_0\,
      I5 => \s1_los_dir[1]_i_10_n_0\,
      O => \s1_los_dir[0]_i_5_n_0\
    );
\s1_los_dir[0]_i_6\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0008"
    )
        port map (
      I0 => \s1_los_dir[1]_i_9_n_0\,
      I1 => \s1_los_dir[1]_i_6_0\,
      I2 => ghost1_col(2),
      I3 => ghost1_col(3),
      O => \s1_los_dir[0]_i_6_n_0\
    );
\s1_los_dir[0]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0100000001010101"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2_0\,
      O => \s1_los_dir[0]_i_7_n_0\
    );
\s1_los_dir[0]_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"38AAAE3C08AAA200"
    )
        port map (
      I0 => \s1_los_dir[1]_i_66_n_0\,
      I1 => \s1_los_dir[0]_i_18_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_43__2_n_0\,
      I4 => \s1_los_dir[1]_i_40_n_0\,
      I5 => \s1_los_dir[1]_i_47_n_0\,
      O => \s1_los_dir[0]_i_8_n_0\
    );
\s1_los_dir[0]_i_9\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7D3C3CDD41000011"
    )
        port map (
      I0 => \s1_los_dir[0]_i_19_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_43__2_n_0\,
      I3 => \s1_los_dir[1]_i_41__2_n_0\,
      I4 => \s1_los_dir[0]_i_20_n_0\,
      I5 => \s1_los_dir[1]_i_60_n_0\,
      O => \s1_los_dir[0]_i_9_n_0\
    );
\s1_los_dir[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0404040404FF0404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_2_n_0\,
      I1 => \s1_los_dir[1]_i_3_n_0\,
      I2 => \s1_los_dir[1]_i_4_n_0\,
      I3 => \s1_los_dir[1]_i_5_n_0\,
      I4 => \s1_los_dir[1]_i_6_n_0\,
      I5 => \s1_los_dir[1]_i_7_n_0\,
      O => los_dir_comb(1)
    );
\s1_los_dir[1]_i_10\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F111FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(0),
      I1 => rover_col(1),
      I2 => ghost1_col(2),
      I3 => ghost1_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_10_n_0\
    );
\s1_los_dir[1]_i_101\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFF6FF6"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => rover_row(1),
      I2 => ghost1_row(0),
      I3 => rover_row(0),
      I4 => \s1_los_dir[1]_i_114_n_0\,
      O => \s1_los_dir[1]_i_101_n_0\
    );
\s1_los_dir[1]_i_102\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"20F220F2B0FB20F2"
    )
        port map (
      I0 => ghost1_col(2),
      I1 => rover_col(2),
      I2 => ghost1_col(3),
      I3 => rover_col(3),
      I4 => ghost1_col(1),
      I5 => rover_col(1),
      O => \s1_los_dir[1]_i_102_n_0\
    );
\s1_los_dir[1]_i_103\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A2A200A2"
    )
        port map (
      I0 => s1_los_detected_i_30_n_0,
      I1 => rover_col(3),
      I2 => ghost1_col(3),
      I3 => rover_col(0),
      I4 => ghost1_col(0),
      O => \s1_los_dir[1]_i_103_n_0\
    );
\s1_los_dir[1]_i_104\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DD4D0000FFFFDD4D"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost1_col(2),
      I2 => rover_col(1),
      I3 => ghost1_col(1),
      I4 => ghost1_col(3),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_104_n_0\
    );
\s1_los_dir[1]_i_105\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAEFFAE"
    )
        port map (
      I0 => s1_los_detected_i_29_n_0,
      I1 => ghost1_col(0),
      I2 => rover_col(0),
      I3 => ghost1_col(3),
      I4 => rover_col(3),
      O => \s1_los_dir[1]_i_105_n_0\
    );
\s1_los_dir[1]_i_11\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"B2B88B8B82888888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_45_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_46_n_0\,
      I3 => \s1_los_dir[1]_i_43__2_n_0\,
      I4 => \s1_los_dir[1]_i_41__2_n_0\,
      I5 => \s1_los_dir[1]_i_44_n_0\,
      O => \s1_los_dir[1]_i_11_n_0\
    );
\s1_los_dir[1]_i_114\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6FF6"
    )
        port map (
      I0 => rover_row(3),
      I1 => ghost1_row(3),
      I2 => rover_row(2),
      I3 => ghost1_row(2),
      O => \s1_los_dir[1]_i_114_n_0\
    );
\s1_los_dir[1]_i_12\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47_n_0\,
      I1 => \s1_los_dir[1]_i_43__2_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_40_n_0\,
      I4 => \s1_los_dir[1]_i_48_n_0\,
      I5 => \s1_los_dir[1]_i_49_n_0\,
      O => \s1_los_dir[1]_i_12_n_0\
    );
\s1_los_dir[1]_i_13\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_50_n_0\,
      I1 => \s1_los_dir[1]_i_51_n_0\,
      I2 => \s1_los_dir[1]_i_52_n_0\,
      I3 => \s1_los_dir[1]_i_53_n_0\,
      I4 => \s1_los_dir[1]_i_54_n_0\,
      I5 => \s1_los_dir[1]_i_2_0\,
      O => \s1_los_dir[1]_i_13_n_0\
    );
\s1_los_dir[1]_i_14\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_56_n_0\,
      I1 => \s1_los_dir[1]_i_57_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_58_n_0\,
      I4 => \s1_los_dir[1]_i_38_n_0\,
      I5 => \s1_los_dir[1]_i_29_0\,
      O => \s1_los_dir[1]_i_14_n_0\
    );
\s1_los_dir[1]_i_15\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_60_n_0\,
      I1 => \s1_los_dir[1]_i_61__2_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_62__2_n_0\,
      I4 => \s1_los_dir_reg[1]_1\,
      I5 => \s1_los_dir[1]_i_63_n_0\,
      O => \s1_los_dir[1]_i_15_n_0\
    );
\s1_los_dir[1]_i_16\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF417DFFFFFFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_64_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_65_n_0\,
      I3 => \s1_los_dir[1]_i_66_n_0\,
      I4 => \s1_los_dir[1]_i_5_0\,
      I5 => \s1_los_dir[1]_i_68_n_0\,
      O => \s1_los_dir[1]_i_16_n_0\
    );
\s1_los_dir[1]_i_17\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0400000404444404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_37_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_69_n_0\,
      I3 => \s1_los_dir[1]_i_70_n_0\,
      I4 => \s1_los_dir[1]_i_40_n_0\,
      I5 => \s1_los_dir[1]_i_71_n_0\,
      O => \s1_los_dir[1]_i_17_n_0\
    );
\s1_los_dir[1]_i_18\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_72_n_0\,
      I1 => \s1_los_dir[1]_i_73_n_0\,
      I2 => \s1_los_dir[1]_i_74_n_0\,
      I3 => \s1_los_dir[1]_i_75_n_0\,
      I4 => \s1_los_dir[1]_i_76_n_0\,
      I5 => \s1_los_dir[1]_i_77_n_0\,
      O => \s1_los_dir[1]_i_18_n_0\
    );
\s1_los_dir[1]_i_19\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_78__2_n_0\,
      I1 => \s1_los_dir[1]_i_79_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_80_n_0\,
      I4 => \s1_los_dir[1]_i_81_n_0\,
      O => \s1_los_dir[1]_i_19_n_0\
    );
\s1_los_dir[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_8_n_0\,
      I1 => \s1_los_dir[1]_i_9_n_0\,
      I2 => \s1_los_dir[1]_i_10_n_0\,
      I3 => \s1_los_dir[1]_i_11_n_0\,
      I4 => \s1_los_dir[1]_i_12_n_0\,
      I5 => \s1_los_dir[1]_i_13_n_0\,
      O => \s1_los_dir[1]_i_2_n_0\
    );
\s1_los_dir[1]_i_21\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_82_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_83__2_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[1]_i_44_n_0\,
      O => \s1_los_dir[1]_i_21_n_0\
    );
\s1_los_dir[1]_i_22__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"15"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      O => \s1_los_dir[1]_i_22__2_n_0\
    );
\s1_los_dir[1]_i_24\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_84_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_85_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[1]_i_47_n_0\,
      O => \s1_los_dir[1]_i_24_n_0\
    );
\s1_los_dir[1]_i_25\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost1_col(2),
      I3 => ghost1_col(1),
      I4 => ghost1_col(0),
      I5 => ghost1_col(3),
      O => \s1_los_dir[1]_i_25_n_0\
    );
\s1_los_dir[1]_i_26\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF01FFFFFFFF"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2_0\,
      O => \s1_los_dir[1]_i_26_n_0\
    );
\s1_los_dir[1]_i_27\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEBEBBBB22828888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_80_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_86_n_0\,
      I3 => \s1_los_dir[1]_i_87__2_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[1]_i_78__2_n_0\,
      O => \s1_los_dir[1]_i_27_n_0\
    );
\s1_los_dir[1]_i_28\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_50_n_0\,
      I1 => \s1_los_dir[1]_i_51_n_0\,
      I2 => \s1_los_dir[1]_i_52_n_0\,
      I3 => \s1_los_dir[1]_i_53_n_0\,
      I4 => \s1_los_dir[1]_i_5_0\,
      I5 => \s1_los_dir[1]_i_88_n_0\,
      O => \s1_los_dir[1]_i_28_n_0\
    );
\s1_los_dir[1]_i_29\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47_n_0\,
      I1 => \s1_los_dir[1]_i_43__2_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_40_n_0\,
      I4 => \s1_los_dir[1]_i_48_n_0\,
      I5 => \s1_los_dir[1]_i_89_n_0\,
      O => \s1_los_dir[1]_i_29_n_0\
    );
\s1_los_dir[1]_i_3\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_14_n_0\,
      I1 => \s1_los_dir[1]_i_15_n_0\,
      I2 => \s1_los_dir[1]_i_16_n_0\,
      I3 => \s1_los_dir[1]_i_17_n_0\,
      I4 => \s1_los_dir[1]_i_18_n_0\,
      I5 => \s1_los_dir[1]_i_19_n_0\,
      O => \s1_los_dir[1]_i_3_n_0\
    );
\s1_los_dir[1]_i_30\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BE82000000000000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_56_n_0\,
      I1 => \s1_los_dir[1]_i_57_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_58_n_0\,
      I4 => \s1_los_dir_reg[1]_0\,
      I5 => \s1_los_dir[1]_i_90_n_0\,
      O => \s1_los_dir[1]_i_30_n_0\
    );
\s1_los_dir[1]_i_31\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_60_n_0\,
      I1 => \s1_los_dir[1]_i_61__2_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_62__2_n_0\,
      I4 => \s1_los_dir[1]_i_6_0\,
      I5 => \s1_los_dir[1]_i_22__2_n_0\,
      O => \s1_los_dir[1]_i_31_n_0\
    );
\s1_los_dir[1]_i_32\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFBE82FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_69_n_0\,
      I1 => \s1_los_dir[1]_i_70_n_0\,
      I2 => \s1_los_dir[1]_i_40_n_0\,
      I3 => \s1_los_dir[1]_i_71_n_0\,
      I4 => ghost1_col(3),
      I5 => \s1_los_dir_reg[1]_2\,
      O => \s1_los_dir[1]_i_32_n_0\
    );
\s1_los_dir[1]_i_33\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_64_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_65_n_0\,
      I3 => \s1_los_dir[1]_i_66_n_0\,
      I4 => \s1_los_dir[1]_i_6_1\,
      I5 => \s1_los_dir[1]_i_54_n_0\,
      O => \s1_los_dir[1]_i_33_n_0\
    );
\s1_los_dir[1]_i_34\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_93__2_n_0\,
      I1 => \s1_los_dir[1]_i_73_n_0\,
      I2 => \s1_los_dir[1]_i_74_n_0\,
      I3 => \s1_los_dir[1]_i_75_n_0\,
      I4 => \s1_los_dir[1]_i_76_n_0\,
      I5 => \s1_los_dir[1]_i_94_n_0\,
      O => \s1_los_dir[1]_i_34_n_0\
    );
\s1_los_dir[1]_i_35\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000004FF44004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_95_n_0\,
      I1 => \s1_los_dir[1]_i_44_n_0\,
      I2 => \s1_los_dir[1]_i_96_n_0\,
      I3 => \s1_los_dir[1]_i_40_n_0\,
      I4 => \s1_los_dir[1]_i_45_n_0\,
      I5 => \s1_los_dir[1]_i_97_n_0\,
      O => \s1_los_dir[1]_i_35_n_0\
    );
\s1_los_dir[1]_i_37\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF80"
    )
        port map (
      I0 => ghost1_col(0),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => ghost1_col(3),
      O => \s1_los_dir[1]_i_37_n_0\
    );
\s1_los_dir[1]_i_38\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FF"
    )
        port map (
      I0 => ghost1_col(0),
      I1 => ghost1_col(1),
      I2 => ghost1_col(2),
      I3 => ghost1_col(3),
      O => \s1_los_dir[1]_i_38_n_0\
    );
\s1_los_dir[1]_i_39\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"27270F0D04A40082"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      I4 => \s1_los_dir[1]_i_35_0\(0),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_39_n_0\
    );
\s1_los_dir[1]_i_4\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF10101010101010"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => \s1_los_dir_reg[1]_0\,
      I2 => \s1_los_dir[1]_i_21_n_0\,
      I3 => \s1_los_dir[1]_i_22__2_n_0\,
      I4 => \s1_los_dir_reg[1]_2\,
      I5 => \s1_los_dir[1]_i_24_n_0\,
      O => \s1_los_dir[1]_i_4_n_0\
    );
\s1_los_dir[1]_i_40\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555655"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4_0\(0),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => \s1_los_dir[1]_i_35_0\(3),
      I3 => \s1_los_dir[1]_i_47_n_0\,
      I4 => \s1_los_dir[1]_i_35_0\(1),
      I5 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[1]_i_40_n_0\
    );
\s1_los_dir[1]_i_41__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"55555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(2),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(0),
      I4 => ghost1_row(1),
      O => \s1_los_dir[1]_i_41__2_n_0\
    );
\s1_los_dir[1]_i_42\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[1]_i_42_n_0\
    );
\s1_los_dir[1]_i_43__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(0),
      I4 => ghost1_row(1),
      I5 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[1]_i_43__2_n_0\
    );
\s1_los_dir[1]_i_44\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      O => \s1_los_dir[1]_i_44_n_0\
    );
\s1_los_dir[1]_i_45\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0013401780DCA2D4"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => ghost1_row(0),
      I4 => ghost1_row(1),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_45_n_0\
    );
\s1_los_dir[1]_i_46\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      O => \s1_los_dir[1]_i_46_n_0\
    );
\s1_los_dir[1]_i_47\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => ghost1_row(1),
      O => \s1_los_dir[1]_i_47_n_0\
    );
\s1_los_dir[1]_i_48\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6022355C000835CC"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => ghost1_row(0),
      I5 => ghost1_row(1),
      O => \s1_los_dir[1]_i_48_n_0\
    );
\s1_los_dir[1]_i_49\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E0FF"
    )
        port map (
      I0 => ghost1_col(1),
      I1 => ghost1_col(2),
      I2 => ghost1_col(3),
      I3 => \s1_los_dir[0]_i_5_0\,
      O => \s1_los_dir[1]_i_49_n_0\
    );
\s1_los_dir[1]_i_5\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_25_n_0\,
      I1 => \s1_los_dir[1]_i_9_n_0\,
      I2 => \s1_los_dir[1]_i_26_n_0\,
      I3 => \s1_los_dir[1]_i_27_n_0\,
      I4 => \s1_los_dir[1]_i_28_n_0\,
      I5 => \s1_los_dir[1]_i_29_n_0\,
      O => \s1_los_dir[1]_i_5_n_0\
    );
\s1_los_dir[1]_i_50\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_50_n_0\
    );
\s1_los_dir[1]_i_51\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => ghost1_row(1),
      O => \s1_los_dir[1]_i_51_n_0\
    );
\s1_los_dir[1]_i_52\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5666"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4_0\(0),
      I1 => \s1_los_dir[1]_i_35_0\(3),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_52_n_0\
    );
\s1_los_dir[1]_i_53\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5CCC22A05CC60800"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => ghost1_row(0),
      I5 => ghost1_row(1),
      O => \s1_los_dir[1]_i_53_n_0\
    );
\s1_los_dir[1]_i_54\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      I3 => ghost1_col(0),
      O => \s1_los_dir[1]_i_54_n_0\
    );
\s1_los_dir[1]_i_56\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"44400004"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_56_n_0\
    );
\s1_los_dir[1]_i_57\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => ghost1_row(1),
      I2 => ghost1_row(0),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(1),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_57_n_0\
    );
\s1_los_dir[1]_i_58\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"083009B52AA82AA0"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(2),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => ghost1_row(1),
      I5 => \s1_los_dir[1]_i_35_0\(3),
      O => \s1_los_dir[1]_i_58_n_0\
    );
\s1_los_dir[1]_i_6\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_30_n_0\,
      I1 => \s1_los_dir[1]_i_31_n_0\,
      I2 => \s1_los_dir[1]_i_32_n_0\,
      I3 => \s1_los_dir[1]_i_33_n_0\,
      I4 => \s1_los_dir[1]_i_34_n_0\,
      I5 => \s1_los_dir[1]_i_35_n_0\,
      O => \s1_los_dir[1]_i_6_n_0\
    );
\s1_los_dir[1]_i_60\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1F0C0054FF00E000"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      I5 => \s1_los_dir[1]_i_35_0\(3),
      O => \s1_los_dir[1]_i_60_n_0\
    );
\s1_los_dir[1]_i_61__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF880001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(0),
      I1 => ghost1_row(1),
      I2 => ghost1_row(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      I5 => \s1_los_dir[1]_i_35_0\(3),
      O => \s1_los_dir[1]_i_61__2_n_0\
    );
\s1_los_dir[1]_i_62__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0802"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => ghost1_row(1),
      I3 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_62__2_n_0\
    );
\s1_los_dir[1]_i_63\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(0),
      I2 => ghost1_col(1),
      I3 => ghost1_col(2),
      O => \s1_los_dir[1]_i_63_n_0\
    );
\s1_los_dir[1]_i_64\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000095"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(2),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(0),
      I4 => ghost1_row(1),
      O => \s1_los_dir[1]_i_64_n_0\
    );
\s1_los_dir[1]_i_65\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1155115511551554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => ghost1_row(0),
      I5 => ghost1_row(1),
      O => \s1_los_dir[1]_i_65_n_0\
    );
\s1_los_dir[1]_i_66\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"078DA4822F0D0002"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => ghost1_row(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      I5 => ghost1_row(1),
      O => \s1_los_dir[1]_i_66_n_0\
    );
\s1_los_dir[1]_i_68\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => ghost1_col(2),
      I1 => ghost1_col(1),
      I2 => ghost1_col(3),
      O => \s1_los_dir[1]_i_68_n_0\
    );
\s1_los_dir[1]_i_69\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3F7FFFBF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_69_n_0\
    );
\s1_los_dir[1]_i_7\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"404040FF40404040"
    )
        port map (
      I0 => \s1_los_dir_reg[1]_1\,
      I1 => \s1_los_dir[1]_i_37_n_0\,
      I2 => \s1_los_dir[1]_i_24_n_0\,
      I3 => rover_col(3),
      I4 => \s1_los_dir[1]_i_38_n_0\,
      I5 => \s1_los_dir[1]_i_21_n_0\,
      O => \s1_los_dir[1]_i_7_n_0\
    );
\s1_los_dir[1]_i_70\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000111155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      I4 => \s1_los_dir[1]_i_35_0\(0),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_70_n_0\
    );
\s1_los_dir[1]_i_71\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A5FBC5B3C5F7C5FF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(2),
      I1 => \s1_los_dir[1]_i_35_0\(3),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(0),
      I4 => \s1_los_dir[1]_i_35_0\(0),
      I5 => ghost1_row(1),
      O => \s1_los_dir[1]_i_71_n_0\
    );
\s1_los_dir[1]_i_72\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => ghost1_col(2),
      I1 => ghost1_col(1),
      I2 => ghost1_col(0),
      I3 => ghost1_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_72_n_0\
    );
\s1_los_dir[1]_i_73\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A9"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4_0\(0),
      I1 => \s1_los_dir[1]_i_35_0\(3),
      I2 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_73_n_0\
    );
\s1_los_dir[1]_i_74\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CCC0CCC800033333"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => \s1_los_dir[1]_i_35_0\(3),
      I2 => \s1_los_dir[1]_i_35_0\(0),
      I3 => \s1_los_dir[1]_i_35_0\(1),
      I4 => ghost1_row(0),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_74_n_0\
    );
\s1_los_dir[1]_i_75\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F6BFF48FF49FFC0F"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(3),
      I3 => \s1_los_dir[1]_i_35_0\(2),
      I4 => ghost1_row(1),
      I5 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[1]_i_75_n_0\
    );
\s1_los_dir[1]_i_76\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4_0\(0),
      I1 => \s1_los_dir[1]_i_35_0\(2),
      I2 => ghost1_row(1),
      I3 => ghost1_row(0),
      O => \s1_los_dir[1]_i_76_n_0\
    );
\s1_los_dir[1]_i_77\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \s1_los_dir[1]_i_101_n_0\,
      I1 => \s1_los_dir[1]_i_102_n_0\,
      I2 => \s1_los_dir[1]_i_103_n_0\,
      O => \s1_los_dir[1]_i_77_n_0\
    );
\s1_los_dir[1]_i_78__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"20001030"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(1),
      I2 => ghost1_row(0),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_78__2_n_0\
    );
\s1_los_dir[1]_i_79\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0011555555555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      I4 => \s1_los_dir[1]_i_35_0\(1),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_79_n_0\
    );
\s1_los_dir[1]_i_8\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(2),
      I2 => rover_col(2),
      I3 => rover_col(1),
      I4 => rover_col(0),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_8_n_0\
    );
\s1_los_dir[1]_i_80\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"74F0D2D2202A0020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(2),
      I3 => ghost1_row(1),
      I4 => \s1_los_dir[1]_i_35_0\(1),
      I5 => ghost1_row(0),
      O => \s1_los_dir[1]_i_80_n_0\
    );
\s1_los_dir[1]_i_81\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFF4"
    )
        port map (
      I0 => rover_col(1),
      I1 => \s1_los_dir[1]_i_2_0\,
      I2 => ghost1_col(0),
      I3 => ghost1_col(3),
      I4 => ghost1_col(1),
      I5 => ghost1_col(2),
      O => \s1_los_dir[1]_i_81_n_0\
    );
\s1_los_dir[1]_i_82\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"02021F5F002AD050"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => ghost1_row(1),
      I4 => ghost1_row(0),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_82_n_0\
    );
\s1_los_dir[1]_i_83__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(0),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => ghost1_row(1),
      I3 => ghost1_row(0),
      O => \s1_los_dir[1]_i_83__2_n_0\
    );
\s1_los_dir[1]_i_84\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0727270F2404A400"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(3),
      I1 => \s1_los_dir[1]_i_35_0\(1),
      I2 => ghost1_row(0),
      I3 => ghost1_row(1),
      I4 => \s1_los_dir[1]_i_35_0\(0),
      I5 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_84_n_0\
    );
\s1_los_dir[1]_i_85\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0154"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(1),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      O => \s1_los_dir[1]_i_85_n_0\
    );
\s1_los_dir[1]_i_86\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F0E00001"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_86_n_0\
    );
\s1_los_dir[1]_i_87__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(0),
      I1 => ghost1_row(0),
      I2 => ghost1_row(1),
      O => \s1_los_dir[1]_i_87__2_n_0\
    );
\s1_los_dir[1]_i_88\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost1_col(2),
      I1 => ghost1_col(3),
      O => \s1_los_dir[1]_i_88_n_0\
    );
\s1_los_dir[1]_i_89\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5777FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_29_0\,
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      I3 => ghost1_col(0),
      I4 => ghost1_col(3),
      O => \s1_los_dir[1]_i_89_n_0\
    );
\s1_los_dir[1]_i_9\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_39_n_0\,
      I1 => \s1_los_dir[1]_i_40_n_0\,
      I2 => \s1_los_dir[1]_i_41__2_n_0\,
      I3 => \s1_los_dir[1]_i_42_n_0\,
      I4 => \s1_los_dir[1]_i_43__2_n_0\,
      I5 => \s1_los_dir[1]_i_44_n_0\,
      O => \s1_los_dir[1]_i_9_n_0\
    );
\s1_los_dir[1]_i_90\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A8"
    )
        port map (
      I0 => ghost1_col(3),
      I1 => ghost1_col(2),
      I2 => ghost1_col(1),
      O => \s1_los_dir[1]_i_90_n_0\
    );
\s1_los_dir[1]_i_93__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(1),
      I2 => rover_col(0),
      I3 => rover_col(3),
      I4 => ghost1_col(3),
      I5 => ghost1_col(2),
      O => \s1_los_dir[1]_i_93__2_n_0\
    );
\s1_los_dir[1]_i_94\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_101_n_0\,
      I1 => \s1_los_dir[1]_i_104_n_0\,
      I2 => \s1_los_dir[1]_i_105_n_0\,
      O => \s1_los_dir[1]_i_94_n_0\
    );
\s1_los_dir[1]_i_95\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"80007FFF"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(0),
      I2 => \s1_los_dir[1]_i_35_0\(1),
      I3 => \s1_los_dir[1]_i_35_0\(0),
      I4 => \s1_los_dir[1]_i_35_0\(2),
      O => \s1_los_dir[1]_i_95_n_0\
    );
\s1_los_dir[1]_i_96\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0111111111111110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_35_0\(2),
      I1 => \s1_los_dir[1]_i_35_0\(3),
      I2 => ghost1_row(1),
      I3 => ghost1_row(0),
      I4 => \s1_los_dir[1]_i_35_0\(0),
      I5 => \s1_los_dir[1]_i_35_0\(1),
      O => \s1_los_dir[1]_i_96_n_0\
    );
\s1_los_dir[1]_i_97\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8FFF8FFF8FFFFFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost1_col(2),
      I3 => ghost1_col(3),
      I4 => ghost1_col(0),
      I5 => ghost1_col(1),
      O => \s1_los_dir[1]_i_97_n_0\
    );
\s1_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => los_dir_comb(0),
      Q => s1_los_dir(0)
    );
\s1_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^pipe_en_reg[0]_0\(0),
      CLR => \^ar\(0),
      D => los_dir_comb(1),
      Q => s1_los_dir(1)
    );
s2_can_down_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000707070007"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(3),
      I3 => s2_can_down_i_2_n_0,
      I4 => s2_can_down_reg_i_3_n_5,
      I5 => s2_can_down_i_4_n_0,
      O => wc_down
    );
s2_can_down_i_10: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_down_reg_i_16_n_6,
      O => s2_can_down_i_10_n_0
    );
s2_can_down_i_11: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      O => s2_can_down_i_11_n_0
    );
s2_can_down_i_12: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_down_reg_i_16_n_6,
      I2 => s1_ghost_col(2),
      O => s2_can_down_i_12_n_0
    );
s2_can_down_i_13: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s2_can_down_reg_i_16_n_7,
      O => s2_can_down_i_13_n_0
    );
s2_can_down_i_14: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      O => s2_can_down_i_14_n_0
    );
s2_can_down_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => s2_can_down_i_15_n_0
    );
s2_can_down_i_17: unisim.vcomponents.LUT4
    generic map(
      INIT => X"542B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => s2_can_down_i_17_n_0
    );
s2_can_down_i_18: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8505"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => s2_can_down_i_18_n_0
    );
s2_can_down_i_19: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1A9A"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => s2_can_down_i_19_n_0
    );
s2_can_down_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => s2_can_down_reg_i_3_n_6,
      I1 => s2_can_down_reg_i_5_n_6,
      I2 => s2_can_down_reg_i_3_n_7,
      I3 => s2_can_down_reg_i_5_n_5,
      I4 => s2_can_down_reg_i_5_n_4,
      I5 => s2_can_down_reg_i_5_n_7,
      O => s2_can_down_i_2_n_0
    );
s2_can_down_i_20: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => s2_can_down_i_20_n_0
    );
s2_can_down_i_21: unisim.vcomponents.LUT4
    generic map(
      INIT => X"651A"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => s2_can_down_i_21_n_0
    );
s2_can_down_i_22: unisim.vcomponents.LUT4
    generic map(
      INIT => X"4B52"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => s2_can_down_i_22_n_0
    );
s2_can_down_i_23: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1CE3"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => s2_can_down_i_23_n_0
    );
s2_can_down_i_24: unisim.vcomponents.LUT3
    generic map(
      INIT => X"65"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => s2_can_down_i_24_n_0
    );
s2_can_down_i_4: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => s2_can_down_reg_i_3_n_7,
      I1 => s2_can_down_reg_i_5_n_7,
      I2 => s2_can_down_reg_i_5_n_6,
      O => s2_can_down_i_4_n_0
    );
s2_can_down_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => s2_can_down_reg_i_16_n_6,
      I1 => s1_ghost_col(3),
      O => s2_can_down_i_6_n_0
    );
s2_can_down_i_9: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_down_reg_i_16_n_6,
      I2 => s2_can_down_reg_i_16_n_5,
      O => s2_can_down_i_9_n_0
    );
s2_can_down_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => wc_down,
      Q => s2_can_down
    );
s2_can_down_reg_i_16: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_down_reg_i_16_n_0,
      CO(2) => s2_can_down_reg_i_16_n_1,
      CO(1) => s2_can_down_reg_i_16_n_2,
      CO(0) => s2_can_down_reg_i_16_n_3,
      CYINIT => '0',
      DI(3) => s2_can_down_i_18_n_0,
      DI(2) => s2_can_down_i_19_n_0,
      DI(1) => s2_can_down_i_20_n_0,
      DI(0) => '0',
      O(3) => O(0),
      O(2) => s2_can_down_reg_i_16_n_5,
      O(1) => s2_can_down_reg_i_16_n_6,
      O(0) => s2_can_down_reg_i_16_n_7,
      S(3) => s2_can_down_i_21_n_0,
      S(2) => s2_can_down_i_22_n_0,
      S(1) => s2_can_down_i_23_n_0,
      S(0) => s2_can_down_i_24_n_0
    );
s2_can_down_reg_i_3: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_down_reg_i_5_n_0,
      CO(3 downto 2) => NLW_s2_can_down_reg_i_3_CO_UNCONNECTED(3 downto 2),
      CO(1) => s2_can_down_reg_i_3_n_2,
      CO(0) => s2_can_down_reg_i_3_n_3,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => s2_can_down_i_6_n_0,
      O(3) => NLW_s2_can_down_reg_i_3_O_UNCONNECTED(3),
      O(2) => s2_can_down_reg_i_3_n_5,
      O(1) => s2_can_down_reg_i_3_n_6,
      O(0) => s2_can_down_reg_i_3_n_7,
      S(3) => '0',
      S(2) => s2_can_down_reg_i_7_n_7,
      S(1) => S(0),
      S(0) => s2_can_down_i_9_n_0
    );
s2_can_down_reg_i_5: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_down_reg_i_5_n_0,
      CO(2) => s2_can_down_reg_i_5_n_1,
      CO(1) => s2_can_down_reg_i_5_n_2,
      CO(0) => s2_can_down_reg_i_5_n_3,
      CYINIT => '0',
      DI(3) => s2_can_down_i_10_n_0,
      DI(2) => s1_ghost_col(2),
      DI(1) => s2_can_down_i_11_n_0,
      DI(0) => s1_ghost_row(0),
      O(3) => s2_can_down_reg_i_5_n_4,
      O(2) => s2_can_down_reg_i_5_n_5,
      O(1) => s2_can_down_reg_i_5_n_6,
      O(0) => s2_can_down_reg_i_5_n_7,
      S(3) => s2_can_down_i_12_n_0,
      S(2) => s2_can_down_i_13_n_0,
      S(1) => s2_can_down_i_14_n_0,
      S(0) => s2_can_down_i_15_n_0
    );
s2_can_down_reg_i_7: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_down_reg_i_16_n_0,
      CO(3 downto 0) => NLW_s2_can_down_reg_i_7_CO_UNCONNECTED(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => NLW_s2_can_down_reg_i_7_O_UNCONNECTED(3 downto 1),
      O(0) => s2_can_down_reg_i_7_n_7,
      S(3 downto 1) => B"000",
      S(0) => s2_can_down_i_17_n_0
    );
s2_can_left_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A2A2A202A2A2A2A2"
    )
        port map (
      I0 => wc_left01_in,
      I1 => s2_can_left_i_3_n_0,
      I2 => s2_can_left_reg_i_4_n_5,
      I3 => s2_can_left_reg_i_5_n_6,
      I4 => s2_can_left_reg_i_5_n_7,
      I5 => s2_can_left_reg_i_4_n_7,
      O => wc_left
    );
s2_can_left_i_10: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(1),
      O => s2_can_left_i_10_n_0
    );
s2_can_left_i_11: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(0),
      O => s2_can_left_i_11_n_0
    );
s2_can_left_i_12: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_right_reg_i_7_n_6,
      I2 => s1_ghost_col(2),
      O => s2_can_left_i_12_n_0
    );
s2_can_left_i_13: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s2_can_right_reg_i_7_n_7,
      O => s2_can_left_i_13_n_0
    );
s2_can_left_i_14: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      O => s2_can_left_i_14_n_0
    );
s2_can_left_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => s2_can_left_i_15_n_0
    );
s2_can_left_i_2: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_col(3),
      O => wc_left01_in
    );
s2_can_left_i_3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => s2_can_left_reg_i_4_n_6,
      I1 => s2_can_left_reg_i_5_n_6,
      I2 => s2_can_left_reg_i_4_n_7,
      I3 => s2_can_left_reg_i_5_n_5,
      I4 => s2_can_left_reg_i_5_n_4,
      I5 => s2_can_left_reg_i_5_n_7,
      O => s2_can_left_i_3_n_0
    );
s2_can_left_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => s2_can_right_reg_i_7_n_6,
      I1 => s1_ghost_col(3),
      O => s2_can_left_i_6_n_0
    );
s2_can_left_i_7: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s2_can_right_reg_i_7_n_4,
      O => p_1_in(5)
    );
s2_can_left_i_8: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_right_reg_i_7_n_6,
      I2 => s2_can_right_reg_i_7_n_5,
      O => s2_can_left_i_8_n_0
    );
s2_can_left_i_9: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_right_reg_i_7_n_6,
      O => s2_can_left_i_9_n_0
    );
s2_can_left_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => wc_left,
      Q => s2_can_left
    );
s2_can_left_reg_i_4: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_left_reg_i_5_n_0,
      CO(3 downto 2) => NLW_s2_can_left_reg_i_4_CO_UNCONNECTED(3 downto 2),
      CO(1) => s2_can_left_reg_i_4_n_2,
      CO(0) => s2_can_left_reg_i_4_n_3,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => s2_can_left_i_6_n_0,
      O(3) => NLW_s2_can_left_reg_i_4_O_UNCONNECTED(3),
      O(2) => s2_can_left_reg_i_4_n_5,
      O(1) => s2_can_left_reg_i_4_n_6,
      O(0) => s2_can_left_reg_i_4_n_7,
      S(3) => '0',
      S(2) => s2_can_right_reg_i_9_n_7,
      S(1) => p_1_in(5),
      S(0) => s2_can_left_i_8_n_0
    );
s2_can_left_reg_i_5: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_left_reg_i_5_n_0,
      CO(2) => s2_can_left_reg_i_5_n_1,
      CO(1) => s2_can_left_reg_i_5_n_2,
      CO(0) => s2_can_left_reg_i_5_n_3,
      CYINIT => '1',
      DI(3) => s2_can_left_i_9_n_0,
      DI(2) => s1_ghost_col(2),
      DI(1) => s2_can_left_i_10_n_0,
      DI(0) => s2_can_left_i_11_n_0,
      O(3) => s2_can_left_reg_i_5_n_4,
      O(2) => s2_can_left_reg_i_5_n_5,
      O(1) => s2_can_left_reg_i_5_n_6,
      O(0) => s2_can_left_reg_i_5_n_7,
      S(3) => s2_can_left_i_12_n_0,
      S(2) => s2_can_left_i_13_n_0,
      S(1) => s2_can_left_i_14_n_0,
      S(0) => s2_can_left_i_15_n_0
    );
s2_can_right_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000077777770777"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s1_ghost_col(2),
      I2 => s2_can_right_i_2_n_0,
      I3 => s2_can_right_i_3_n_0,
      I4 => s2_can_right_i_4_n_0,
      I5 => s2_can_right_i_5_n_0,
      O => wc_right
    );
s2_can_right_i_10: unisim.vcomponents.LUT5
    generic map(
      INIT => X"2ABFD540"
    )
        port map (
      I0 => s2_can_right_i_8_n_0,
      I1 => s2_can_right_reg_i_7_n_6,
      I2 => s1_ghost_col(3),
      I3 => s2_can_right_reg_i_7_n_5,
      I4 => s2_can_right_reg_i_7_n_4,
      O => s2_can_right_i_10_n_0
    );
s2_can_right_i_11: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7887"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      I3 => s1_ghost_row(1),
      O => s2_can_right_i_11_n_0
    );
s2_can_right_i_12: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7887F00FF00F8778"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      I2 => s2_can_right_reg_i_7_n_7,
      I3 => s1_ghost_col(2),
      I4 => s1_ghost_col(1),
      I5 => s1_ghost_row(1),
      O => s2_can_right_i_12_n_0
    );
s2_can_right_i_13: unisim.vcomponents.LUT5
    generic map(
      INIT => X"56A9A956"
    )
        port map (
      I0 => s2_can_right_i_6_n_0,
      I1 => s1_ghost_col(2),
      I2 => s2_can_right_reg_i_7_n_7,
      I3 => s2_can_right_reg_i_7_n_6,
      I4 => s1_ghost_col(3),
      O => s2_can_right_i_13_n_0
    );
s2_can_right_i_14: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => s2_can_right_i_14_n_0
    );
s2_can_right_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      O => s2_can_right_i_15_n_0
    );
s2_can_right_i_16: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      O => s2_can_right_i_16_n_0
    );
s2_can_right_i_17: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => s2_can_right_i_17_n_0
    );
s2_can_right_i_18: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(3),
      I3 => s1_ghost_row(1),
      O => s2_can_right_i_18_n_0
    );
s2_can_right_i_19: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(3),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(0),
      O => s2_can_right_i_19_n_0
    );
s2_can_right_i_2: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0990"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_row(0),
      O => s2_can_right_i_2_n_0
    );
s2_can_right_i_20: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2DD2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => s2_can_right_i_20_n_0
    );
s2_can_right_i_21: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => s2_can_right_i_21_n_0
    );
s2_can_right_i_22: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      O => s2_can_right_i_22_n_0
    );
s2_can_right_i_3: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AB54FD02FD0254AB"
    )
        port map (
      I0 => s2_can_right_i_6_n_0,
      I1 => s1_ghost_col(2),
      I2 => s2_can_right_reg_i_7_n_7,
      I3 => s2_can_right_reg_i_7_n_5,
      I4 => s2_can_right_reg_i_7_n_6,
      I5 => s1_ghost_col(3),
      O => s2_can_right_i_3_n_0
    );
s2_can_right_i_4: unisim.vcomponents.LUT6
    generic map(
      INIT => X"15550111EAAAFEEE"
    )
        port map (
      I0 => s2_can_right_reg_i_7_n_4,
      I1 => s2_can_right_reg_i_7_n_5,
      I2 => s1_ghost_col(3),
      I3 => s2_can_right_reg_i_7_n_6,
      I4 => s2_can_right_i_8_n_0,
      I5 => s2_can_right_reg_i_9_n_7,
      O => s2_can_right_i_4_n_0
    );
s2_can_right_i_5: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A52D0F18080088"
    )
        port map (
      I0 => s2_can_right_i_10_n_0,
      I1 => s2_can_right_i_11_n_0,
      I2 => s2_can_right_i_3_n_0,
      I3 => s2_can_right_i_12_n_0,
      I4 => s2_can_right_i_13_n_0,
      I5 => s2_can_right_i_14_n_0,
      O => s2_can_right_i_5_n_0
    );
s2_can_right_i_6: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0666666F666F666F"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s2_can_right_reg_i_7_n_7,
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_col(1),
      I4 => s1_ghost_row(0),
      I5 => s1_ghost_col(0),
      O => s2_can_right_i_6_n_0
    );
s2_can_right_i_8: unisim.vcomponents.LUT5
    generic map(
      INIT => X"999F0009"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_right_reg_i_7_n_6,
      I2 => s2_can_right_reg_i_7_n_7,
      I3 => s1_ghost_col(2),
      I4 => s2_can_right_i_6_n_0,
      O => s2_can_right_i_8_n_0
    );
s2_can_right_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => wc_right,
      Q => s2_can_right
    );
s2_can_right_reg_i_7: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_right_reg_i_7_n_0,
      CO(2) => s2_can_right_reg_i_7_n_1,
      CO(1) => s2_can_right_reg_i_7_n_2,
      CO(0) => s2_can_right_reg_i_7_n_3,
      CYINIT => '0',
      DI(3) => s2_can_right_i_15_n_0,
      DI(2) => s2_can_right_i_16_n_0,
      DI(1) => s2_can_right_i_17_n_0,
      DI(0) => '0',
      O(3) => s2_can_right_reg_i_7_n_4,
      O(2) => s2_can_right_reg_i_7_n_5,
      O(1) => s2_can_right_reg_i_7_n_6,
      O(0) => s2_can_right_reg_i_7_n_7,
      S(3) => s2_can_right_i_18_n_0,
      S(2) => s2_can_right_i_19_n_0,
      S(1) => s2_can_right_i_20_n_0,
      S(0) => s2_can_right_i_21_n_0
    );
s2_can_right_reg_i_9: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_right_reg_i_7_n_0,
      CO(3 downto 0) => NLW_s2_can_right_reg_i_9_CO_UNCONNECTED(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => NLW_s2_can_right_reg_i_9_O_UNCONNECTED(3 downto 1),
      O(0) => s2_can_right_reg_i_9_n_7,
      S(3 downto 1) => B"000",
      S(0) => s2_can_right_i_22_n_0
    );
s2_can_up_i_1: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000FFFE"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(2),
      I4 => s2_can_up_i_2_n_0,
      O => wc_up
    );
s2_can_up_i_10: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_up_reg_i_16_n_6,
      O => s2_can_up_i_10_n_0
    );
s2_can_up_i_11: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      O => wc_down5(1)
    );
s2_can_up_i_12: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_up_reg_i_16_n_6,
      I2 => s1_ghost_col(2),
      O => s2_can_up_i_12_n_0
    );
s2_can_up_i_13: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s2_can_up_reg_i_16_n_7,
      O => s2_can_up_i_13_n_0
    );
s2_can_up_i_14: unisim.vcomponents.LUT3
    generic map(
      INIT => X"69"
    )
        port map (
      I0 => s1_ghost_col(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => s2_can_up_i_14_n_0
    );
s2_can_up_i_15: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => s2_can_up_i_15_n_0
    );
s2_can_up_i_17: unisim.vcomponents.LUT4
    generic map(
      INIT => X"42BF"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => s2_can_up_i_17_n_0
    );
s2_can_up_i_18: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1213"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => s2_can_up_i_18_n_0
    );
s2_can_up_i_19: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6564"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => s2_can_up_i_19_n_0
    );
s2_can_up_i_2: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0028FFFF00280000"
    )
        port map (
      I0 => s2_can_up_reg_i_3_n_7,
      I1 => s1_ghost_col(0),
      I2 => s1_ghost_row(0),
      I3 => s2_can_up_reg_i_4_n_6,
      I4 => s2_can_up_reg_i_3_n_5,
      I5 => s2_can_up_i_5_n_0,
      O => s2_can_up_i_2_n_0
    );
s2_can_up_i_20: unisim.vcomponents.LUT3
    generic map(
      INIT => X"ED"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => s2_can_up_i_20_n_0
    );
s2_can_up_i_21: unisim.vcomponents.LUT4
    generic map(
      INIT => X"9599"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => s2_can_up_i_21_n_0
    );
s2_can_up_i_22: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5964"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => s2_can_up_i_22_n_0
    );
s2_can_up_i_23: unisim.vcomponents.LUT4
    generic map(
      INIT => X"738C"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => s2_can_up_i_23_n_0
    );
s2_can_up_i_24: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => s2_can_up_i_24_n_0
    );
s2_can_up_i_5: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A5870F42020022"
    )
        port map (
      I0 => s2_can_up_reg_i_3_n_6,
      I1 => s2_can_up_reg_i_4_n_6,
      I2 => s2_can_up_reg_i_3_n_7,
      I3 => s2_can_up_reg_i_4_n_5,
      I4 => s2_can_up_reg_i_4_n_4,
      I5 => s2_can_right_i_14_n_0,
      O => s2_can_up_i_5_n_0
    );
s2_can_up_i_6: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => s2_can_up_reg_i_16_n_6,
      I1 => s1_ghost_col(3),
      O => s2_can_up_i_6_n_0
    );
s2_can_up_i_9: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s2_can_up_reg_i_16_n_6,
      I2 => s2_can_up_reg_i_16_n_5,
      O => s2_can_up_i_9_n_0
    );
s2_can_up_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => wc_up,
      Q => s2_can_up
    );
s2_can_up_reg_i_16: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_up_reg_i_16_n_0,
      CO(2) => s2_can_up_reg_i_16_n_1,
      CO(1) => s2_can_up_reg_i_16_n_2,
      CO(0) => s2_can_up_reg_i_16_n_3,
      CYINIT => '0',
      DI(3) => s2_can_up_i_18_n_0,
      DI(2) => s2_can_up_i_19_n_0,
      DI(1) => s2_can_up_i_20_n_0,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_0\(0),
      O(2) => s2_can_up_reg_i_16_n_5,
      O(1) => s2_can_up_reg_i_16_n_6,
      O(0) => s2_can_up_reg_i_16_n_7,
      S(3) => s2_can_up_i_21_n_0,
      S(2) => s2_can_up_i_22_n_0,
      S(1) => s2_can_up_i_23_n_0,
      S(0) => s2_can_up_i_24_n_0
    );
s2_can_up_reg_i_3: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_up_reg_i_4_n_0,
      CO(3 downto 2) => NLW_s2_can_up_reg_i_3_CO_UNCONNECTED(3 downto 2),
      CO(1) => s2_can_up_reg_i_3_n_2,
      CO(0) => s2_can_up_reg_i_3_n_3,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => s2_can_up_i_6_n_0,
      O(3) => NLW_s2_can_up_reg_i_3_O_UNCONNECTED(3),
      O(2) => s2_can_up_reg_i_3_n_5,
      O(1) => s2_can_up_reg_i_3_n_6,
      O(0) => s2_can_up_reg_i_3_n_7,
      S(3) => '0',
      S(2) => s2_can_up_reg_i_7_n_7,
      S(1) => s2_can_up_i_2_0(0),
      S(0) => s2_can_up_i_9_n_0
    );
s2_can_up_reg_i_4: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => s2_can_up_reg_i_4_n_0,
      CO(2) => s2_can_up_reg_i_4_n_1,
      CO(1) => s2_can_up_reg_i_4_n_2,
      CO(0) => s2_can_up_reg_i_4_n_3,
      CYINIT => '0',
      DI(3) => s2_can_up_i_10_n_0,
      DI(2) => s1_ghost_col(2),
      DI(1) => wc_down5(1),
      DI(0) => s1_ghost_row(0),
      O(3) => s2_can_up_reg_i_4_n_4,
      O(2) => s2_can_up_reg_i_4_n_5,
      O(1) => s2_can_up_reg_i_4_n_6,
      O(0) => NLW_s2_can_up_reg_i_4_O_UNCONNECTED(0),
      S(3) => s2_can_up_i_12_n_0,
      S(2) => s2_can_up_i_13_n_0,
      S(1) => s2_can_up_i_14_n_0,
      S(0) => s2_can_up_i_15_n_0
    );
s2_can_up_reg_i_7: unisim.vcomponents.CARRY4
     port map (
      CI => s2_can_up_reg_i_16_n_0,
      CO(3 downto 0) => NLW_s2_can_up_reg_i_7_CO_UNCONNECTED(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => NLW_s2_can_up_reg_i_7_O_UNCONNECTED(3 downto 1),
      O(0) => s2_can_up_reg_i_7_n_7,
      S(3 downto 1) => B"000",
      S(0) => s2_can_up_i_17_n_0
    );
\s2_facing_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => \^direction_reg[1]_0\(0),
      Q => s2_facing(0)
    );
\s2_facing_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => \^direction_reg[1]_0\(1),
      Q => s2_facing(1)
    );
s2_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => s1_los_detected,
      Q => s2_los_detected
    );
\s2_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => s1_los_dir(0),
      Q => s2_los_dir(0)
    );
\s2_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \^e\(0),
      CLR => \^ar\(0),
      D => s1_los_dir(1),
      Q => s2_los_dir(1)
    );
valid_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => \^ar\(0),
      D => \^p_0_in__0\,
      Q => D(0)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_0 is
  port (
    \s1_ghost_row_reg[2]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_1\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ACLK : in STD_LOGIC;
    AR : in STD_LOGIC_VECTOR ( 0 to 0 );
    s1_los_detected_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__0_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s1_los_detected_reg_1 : in STD_LOGIC;
    \s1_los_dir[1]_i_33__0_0\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost2_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[1]_i_6__0_0\ : in STD_LOGIC;
    ghost2_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s1_los_detected_reg_2 : in STD_LOGIC;
    \s1_los_detected_i_2__0_0\ : in STD_LOGIC;
    s1_los_detected_i_4_0 : in STD_LOGIC;
    \s1_los_dir[1]_i_2__0_0\ : in STD_LOGIC;
    \s1_los_dir[0]_i_5__0_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_0\ : in STD_LOGIC;
    \s1_los_dir[1]_i_27__0_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_1\ : in STD_LOGIC;
    \s1_los_dir[1]_i_5__0_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_2\ : in STD_LOGIC;
    \s1_los_dir[1]_i_6__0_1\ : in STD_LOGIC;
    \s1_los_dir[0]_i_4__0_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \p_0_in__0\ : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_0 : entity is "ghost_top";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_0;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_0 is
  signal \^d\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[0]_i_1__0_n_0\ : STD_LOGIC;
  signal \direction[1]_i_1__0_n_0\ : STD_LOGIC;
  signal los_detected_comb : STD_LOGIC;
  signal los_dir_comb : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal p_1_in : STD_LOGIC_VECTOR ( 5 to 5 );
  signal s1_ghost_col : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_ghost_row : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_los_detected : STD_LOGIC;
  signal \s1_los_detected_i_10__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_11__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_12__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_13__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_14__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_15__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_16__0_n_0\ : STD_LOGIC;
  signal s1_los_detected_i_17_n_0 : STD_LOGIC;
  signal \s1_los_detected_i_18__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_19__0_n_0\ : STD_LOGIC;
  signal s1_los_detected_i_20_n_0 : STD_LOGIC;
  signal \s1_los_detected_i_21__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_22__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_23__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_24__0_n_0\ : STD_LOGIC;
  signal s1_los_detected_i_25_n_0 : STD_LOGIC;
  signal \s1_los_detected_i_26__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_2__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_3__0_n_0\ : STD_LOGIC;
  signal s1_los_detected_i_4_n_0 : STD_LOGIC;
  signal \s1_los_detected_i_5__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_6__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_7__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_8__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_9__0_n_0\ : STD_LOGIC;
  signal s1_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \s1_los_dir[0]_i_10__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_11__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_12__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_13__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_14__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_15__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_16__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_17__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_18__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_19__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_20__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_21__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_22__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_23__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_2__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_3__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_4__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_5__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_6__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_7__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_8__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_9__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_105__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_10__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_11__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_12__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_13__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_14__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_15__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_16__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_17__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_18__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_19__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_20_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_21__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_22_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_23_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_24__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_25__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_26__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_27__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_28__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_29__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_2__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_30__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_31__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_32__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_33__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_34__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_35__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_36_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_37__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_38__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_39__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_3__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_40__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_41_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_42__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_43_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_44__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_45__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_46__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_47__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_48__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_49__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_4__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_50__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_51__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_52__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_53__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_54__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_55_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_56__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_57__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_58__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_59_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_5__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_60__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_61_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_62_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_63__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_64__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_65__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_66__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_67_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_68__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_69__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_6__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_70__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_71__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_72__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_73__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_74__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_75__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_76__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_77__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_78_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_79__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_7__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_80__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_81__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_82__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_83_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_84__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_85__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_86__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_87_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_88__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_89__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_8__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_92_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_93_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_94__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_95__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_96__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_9__0_n_0\ : STD_LOGIC;
  signal s2_can_down : STD_LOGIC;
  signal \s2_can_down_i_10__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_11__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_12__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_13__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_14__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_15__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_17__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_18__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_19__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_20__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_21__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_22__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_23__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_24__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_2__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_4__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_6__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_9__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__0_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__0_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__0_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__0_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__0_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__0_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_4\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__0_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_7__0_n_7\ : STD_LOGIC;
  signal s2_can_left : STD_LOGIC;
  signal \s2_can_left_i_10__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_11__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_12__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_13__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_14__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_15__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_3__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_6__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_8__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_9__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__0_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__0_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__0_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__0_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__0_n_7\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_1\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_4\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__0_n_7\ : STD_LOGIC;
  signal s2_can_right : STD_LOGIC;
  signal \s2_can_right_i_10__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_11__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_12__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_13__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_14__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_15__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_16__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_17__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_18__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_19__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_20__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_21__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_22__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_2__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_3__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_4__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_5__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_6__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_8__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_1\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_2\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_3\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_4\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_5\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_6\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__0_n_7\ : STD_LOGIC;
  signal \s2_can_right_reg_i_9__0_n_7\ : STD_LOGIC;
  signal s2_can_up : STD_LOGIC;
  signal \s2_can_up_i_10__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_12__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_13__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_14__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_15__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_17__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_18__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_19__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_20__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_21__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_22__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_23__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_24__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_2__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_5__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_6__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_9__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__0_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__0_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__0_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__0_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__0_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__0_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_4\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__0_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_7__0_n_7\ : STD_LOGIC;
  signal s2_facing : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal s2_los_detected : STD_LOGIC;
  signal s2_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal wc_down : STD_LOGIC;
  signal wc_down5 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal wc_left : STD_LOGIC;
  signal wc_left01_in : STD_LOGIC;
  signal wc_right : STD_LOGIC;
  signal wc_up : STD_LOGIC;
  signal \wf_dir__0\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \NLW_s2_can_down_reg_i_3__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_down_reg_i_3__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_down_reg_i_7__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_down_reg_i_7__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_left_reg_i_4__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_left_reg_i_4__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_right_reg_i_9__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_right_reg_i_9__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_up_reg_i_3__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_up_reg_i_3__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_up_reg_i_4__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_s2_can_up_reg_i_7__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_up_reg_i_7__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \s1_los_detected_i_10__0\ : label is "soft_lutpair43";
  attribute SOFT_HLUTNM of \s1_los_detected_i_11__0\ : label is "soft_lutpair39";
  attribute SOFT_HLUTNM of \s1_los_detected_i_14__0\ : label is "soft_lutpair34";
  attribute SOFT_HLUTNM of \s1_los_detected_i_15__0\ : label is "soft_lutpair41";
  attribute SOFT_HLUTNM of \s1_los_detected_i_16__0\ : label is "soft_lutpair41";
  attribute SOFT_HLUTNM of s1_los_detected_i_25 : label is "soft_lutpair40";
  attribute SOFT_HLUTNM of \s1_los_detected_i_26__0\ : label is "soft_lutpair40";
  attribute SOFT_HLUTNM of \s1_los_detected_i_9__0\ : label is "soft_lutpair43";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_10__0\ : label is "soft_lutpair34";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_12__0\ : label is "soft_lutpair30";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_18__0\ : label is "soft_lutpair45";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_19__0\ : label is "soft_lutpair55";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_20__0\ : label is "soft_lutpair45";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_21__0\ : label is "soft_lutpair49";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_22__0\ : label is "soft_lutpair51";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_23__0\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_6__0\ : label is "soft_lutpair38";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_105__0\ : label is "soft_lutpair39";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_21__0\ : label is "soft_lutpair54";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_34__0\ : label is "soft_lutpair47";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_35__0\ : label is "soft_lutpair42";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_38__0\ : label is "soft_lutpair35";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_39__0\ : label is "soft_lutpair44";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_41\ : label is "soft_lutpair55";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_43\ : label is "soft_lutpair44";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_44__0\ : label is "soft_lutpair29";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_46__0\ : label is "soft_lutpair42";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_48__0\ : label is "soft_lutpair53";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_49__0\ : label is "soft_lutpair50";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_51__0\ : label is "soft_lutpair46";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_52__0\ : label is "soft_lutpair35";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_57__0\ : label is "soft_lutpair48";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_58__0\ : label is "soft_lutpair46";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_59\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_62\ : label is "soft_lutpair47";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_63__0\ : label is "soft_lutpair33";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_67\ : label is "soft_lutpair50";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_70__0\ : label is "soft_lutpair48";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_71__0\ : label is "soft_lutpair52";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_72__0\ : label is "soft_lutpair33";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_77__0\ : label is "soft_lutpair49";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_79__0\ : label is "soft_lutpair51";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_80__0\ : label is "soft_lutpair32";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_81__0\ : label is "soft_lutpair53";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_82__0\ : label is "soft_lutpair54";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_83\ : label is "soft_lutpair30";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_84__0\ : label is "soft_lutpair38";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_86__0\ : label is "soft_lutpair52";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_87\ : label is "soft_lutpair31";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_92\ : label is "soft_lutpair29";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_3__0\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_5__0\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_left_i_2__0\ : label is "soft_lutpair37";
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_4__0\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_5__0\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_right_i_11__0\ : label is "soft_lutpair36";
  attribute SOFT_HLUTNM of \s2_can_right_i_13__0\ : label is "soft_lutpair28";
  attribute SOFT_HLUTNM of \s2_can_right_i_14__0\ : label is "soft_lutpair37";
  attribute SOFT_HLUTNM of \s2_can_right_i_2__0\ : label is "soft_lutpair36";
  attribute SOFT_HLUTNM of \s2_can_right_i_8__0\ : label is "soft_lutpair28";
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_3__0\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_4__0\ : label is 35;
begin
  D(1 downto 0) <= \^d\(1 downto 0);
\direction[0]_i_1__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(0),
      I1 => s2_los_detected,
      I2 => \wf_dir__0\(0),
      I3 => \p_0_in__0\,
      I4 => \^d\(0),
      O => \direction[0]_i_1__0_n_0\
    );
\direction[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FAAA0032FABB3332"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__0\(0)
    );
\direction[1]_i_1__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(1),
      I1 => s2_los_detected,
      I2 => \wf_dir__0\(1),
      I3 => \p_0_in__0\,
      I4 => \^d\(1),
      O => \direction[1]_i_1__0_n_0\
    );
\direction[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F555FF31F0113031"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__0\(1)
    );
\direction_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[0]_i_1__0_n_0\,
      Q => \^d\(0)
    );
\direction_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[1]_i_1__0_n_0\,
      Q => \^d\(1)
    );
\s1_ghost_col_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_col(0),
      Q => s1_ghost_col(0)
    );
\s1_ghost_col_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_col(1),
      Q => s1_ghost_col(1)
    );
\s1_ghost_col_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_col(2),
      Q => s1_ghost_col(2)
    );
\s1_ghost_col_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_col(3),
      Q => s1_ghost_col(3)
    );
\s1_ghost_row_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_row(0),
      Q => s1_ghost_row(0)
    );
\s1_ghost_row_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_row(1),
      Q => s1_ghost_row(1)
    );
\s1_ghost_row_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_row(2),
      Q => s1_ghost_row(2)
    );
\s1_ghost_row_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost2_row(3),
      Q => s1_ghost_row(3)
    );
\s1_los_detected_i_10__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      I3 => ghost2_col(0),
      O => \s1_los_detected_i_10__0_n_0\
    );
\s1_los_detected_i_11__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost2_row(3),
      I1 => ghost2_row(2),
      O => \s1_los_detected_i_11__0_n_0\
    );
\s1_los_detected_i_12__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => s1_los_detected_i_4_0,
      I1 => \s1_los_detected_i_22__0_n_0\,
      I2 => ghost2_col(2),
      I3 => ghost2_col(1),
      I4 => ghost2_col(3),
      I5 => ghost2_col(0),
      O => \s1_los_detected_i_12__0_n_0\
    );
\s1_los_detected_i_13__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF0F00DF0D"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => rover_row(2),
      I2 => ghost2_row(3),
      I3 => rover_row(3),
      I4 => \s1_los_detected_i_23__0_n_0\,
      I5 => \s1_los_detected_i_24__0_n_0\,
      O => \s1_los_detected_i_13__0_n_0\
    );
\s1_los_detected_i_14__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"303E"
    )
        port map (
      I0 => ghost2_col(1),
      I1 => ghost2_col(3),
      I2 => ghost2_col(2),
      I3 => ghost2_col(0),
      O => \s1_los_detected_i_14__0_n_0\
    );
\s1_los_detected_i_15__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost2_row(3),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => ghost2_row(2),
      O => \s1_los_detected_i_15__0_n_0\
    );
\s1_los_detected_i_16__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(3),
      I2 => ghost2_row(1),
      I3 => ghost2_row(0),
      O => \s1_los_detected_i_16__0_n_0\
    );
s1_los_detected_i_17: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF070707"
    )
        port map (
      I0 => rover_row(1),
      I1 => rover_row(0),
      I2 => rover_row(3),
      I3 => ghost2_row(1),
      I4 => ghost2_row(2),
      I5 => ghost2_row(3),
      O => s1_los_detected_i_17_n_0
    );
\s1_los_detected_i_18__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BEFFFFBEFFFFFFFF"
    )
        port map (
      I0 => s1_los_detected_i_25_n_0,
      I1 => ghost2_col(0),
      I2 => rover_col(0),
      I3 => ghost2_col(3),
      I4 => rover_col(3),
      I5 => \s1_los_detected_i_26__0_n_0\,
      O => \s1_los_detected_i_18__0_n_0\
    );
\s1_los_detected_i_19__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => rover_row(0),
      I1 => ghost2_row(0),
      I2 => ghost2_row(2),
      I3 => rover_row(2),
      I4 => ghost2_row(1),
      I5 => rover_row(1),
      O => \s1_los_detected_i_19__0_n_0\
    );
\s1_los_detected_i_1__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEFFFE"
    )
        port map (
      I0 => los_dir_comb(1),
      I1 => \s1_los_detected_i_2__0_n_0\,
      I2 => \s1_los_detected_i_3__0_n_0\,
      I3 => s1_los_detected_reg_1,
      I4 => s1_los_detected_i_4_n_0,
      O => los_detected_comb
    );
s1_los_detected_i_20: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FEFFFFFFFEFEFEFE"
    )
        port map (
      I0 => ghost2_row(3),
      I1 => ghost2_row(2),
      I2 => ghost2_row(1),
      I3 => rover_row(1),
      I4 => rover_row(0),
      I5 => s1_los_detected_reg_2,
      O => s1_los_detected_i_20_n_0
    );
\s1_los_detected_i_21__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CECECEEFCECEEFFF"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(3),
      I2 => \s1_los_dir[1]_i_44__0_n_0\,
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_21__0_n_0\
    );
\s1_los_detected_i_22__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF15FFFF1515"
    )
        port map (
      I0 => ghost2_row(3),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_22__0_n_0\
    );
\s1_los_detected_i_23__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => rover_row(0),
      I2 => rover_row(2),
      I3 => ghost2_row(2),
      I4 => rover_row(1),
      I5 => ghost2_row(1),
      O => \s1_los_detected_i_23__0_n_0\
    );
\s1_los_detected_i_24__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEAAAAAAAAAAA"
    )
        port map (
      I0 => \s1_los_detected_i_18__0_n_0\,
      I1 => \s1_los_detected_i_10__0_n_0\,
      I2 => ghost2_row(1),
      I3 => ghost2_row(2),
      I4 => ghost2_row(3),
      I5 => \s1_los_detected_i_2__0_0\,
      O => \s1_los_detected_i_24__0_n_0\
    );
s1_los_detected_i_25: unisim.vcomponents.LUT4
    generic map(
      INIT => X"44F4"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      I3 => rover_col(1),
      O => s1_los_detected_i_25_n_0
    );
\s1_los_detected_i_26__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"D0DD"
    )
        port map (
      I0 => rover_col(1),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => rover_col(2),
      O => \s1_los_detected_i_26__0_n_0\
    );
\s1_los_detected_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000000000AB"
    )
        port map (
      I0 => \s1_los_detected_i_5__0_n_0\,
      I1 => rover_row(2),
      I2 => rover_row(3),
      I3 => \s1_los_detected_i_6__0_n_0\,
      I4 => \s1_los_detected_i_7__0_n_0\,
      I5 => \s1_los_detected_i_8__0_n_0\,
      O => \s1_los_detected_i_2__0_n_0\
    );
\s1_los_detected_i_3__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7077FFFF50555055"
    )
        port map (
      I0 => \s1_los_detected_i_9__0_n_0\,
      I1 => ghost2_row(0),
      I2 => rover_row(0),
      I3 => \s1_los_detected_i_10__0_n_0\,
      I4 => ghost2_row(1),
      I5 => \s1_los_detected_i_11__0_n_0\,
      O => \s1_los_detected_i_3__0_n_0\
    );
s1_los_detected_i_4: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFF1F1F1F1F1F1F1"
    )
        port map (
      I0 => \s1_los_detected_i_12__0_n_0\,
      I1 => \s1_los_detected_i_11__0_n_0\,
      I2 => \s1_los_detected_i_13__0_n_0\,
      I3 => \s1_los_detected_i_14__0_n_0\,
      I4 => \s1_los_detected_i_15__0_n_0\,
      I5 => s1_los_detected_reg_2,
      O => s1_los_detected_i_4_n_0
    );
\s1_los_detected_i_5__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => \s1_los_detected_i_16__0_n_0\,
      I1 => s1_los_detected_i_17_n_0,
      I2 => ghost2_col(2),
      I3 => ghost2_col(1),
      I4 => ghost2_col(3),
      I5 => ghost2_col(0),
      O => \s1_los_detected_i_5__0_n_0\
    );
\s1_los_detected_i_6__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000001D1C0000"
    )
        port map (
      I0 => ghost2_col(0),
      I1 => ghost2_col(2),
      I2 => ghost2_col(3),
      I3 => ghost2_col(1),
      I4 => \s1_los_detected_i_11__0_n_0\,
      I5 => \s1_los_detected_i_2__0_0\,
      O => \s1_los_detected_i_6__0_n_0\
    );
\s1_los_detected_i_7__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BABABABAFBFBBAFB"
    )
        port map (
      I0 => \s1_los_detected_i_18__0_n_0\,
      I1 => rover_row(3),
      I2 => ghost2_row(3),
      I3 => rover_row(2),
      I4 => ghost2_row(2),
      I5 => \s1_los_detected_i_19__0_n_0\,
      O => \s1_los_detected_i_7__0_n_0\
    );
\s1_los_detected_i_8__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7000000005550550"
    )
        port map (
      I0 => s1_los_detected_i_20_n_0,
      I1 => \s1_los_detected_i_21__0_n_0\,
      I2 => ghost2_col(3),
      I3 => ghost2_col(2),
      I4 => ghost2_col(1),
      I5 => ghost2_col(0),
      O => \s1_los_detected_i_8__0_n_0\
    );
\s1_los_detected_i_9__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"805E"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => ghost2_col(0),
      O => \s1_los_detected_i_9__0_n_0\
    );
s1_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_detected_comb,
      Q => s1_los_detected
    );
\s1_los_dir[0]_i_10__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFA8FFFF"
    )
        port map (
      I0 => ghost2_col(2),
      I1 => ghost2_col(1),
      I2 => ghost2_col(0),
      I3 => ghost2_col(3),
      I4 => \s1_los_dir_reg[1]_1\,
      O => \s1_los_dir[0]_i_10__0_n_0\
    );
\s1_los_dir[0]_i_11__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22288888E22BB88B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_54__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[0]_i_21__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[0]_i_19__0_n_0\,
      O => \s1_los_dir[0]_i_11__0_n_0\
    );
\s1_los_dir[0]_i_12__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEEEEA"
    )
        port map (
      I0 => \s1_los_dir[1]_i_27__0_0\,
      I1 => ghost2_col(3),
      I2 => ghost2_col(2),
      I3 => ghost2_col(1),
      I4 => ghost2_col(0),
      O => \s1_los_dir[0]_i_12__0_n_0\
    );
\s1_los_dir[0]_i_13__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEBBBBB2EE88BB8"
    )
        port map (
      I0 => \s1_los_dir[1]_i_65__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[0]_i_22__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[1]_i_48__0_n_0\,
      O => \s1_los_dir[0]_i_13__0_n_0\
    );
\s1_los_dir[0]_i_14__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00FF101030302020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_68__0_n_0\,
      I2 => \s1_los_dir[1]_i_69__0_n_0\,
      I3 => \s1_los_dir[1]_i_48__0_n_0\,
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      I5 => \s1_los_dir[0]_i_4__0_0\(0),
      O => \s1_los_dir[0]_i_14__0_n_0\
    );
\s1_los_dir[0]_i_15__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFF111"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost2_col(0),
      I3 => ghost2_col(1),
      I4 => ghost2_col(2),
      I5 => ghost2_col(3),
      O => \s1_los_dir[0]_i_15__0_n_0\
    );
\s1_los_dir[0]_i_16__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"828882888288BEBB"
    )
        port map (
      I0 => \s1_los_dir[1]_i_50__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_33__0_0\(3),
      I3 => \s1_los_dir[0]_i_23__0_n_0\,
      I4 => \s1_los_dir[1]_i_48__0_n_0\,
      I5 => \s1_los_dir[1]_i_47__0_n_0\,
      O => \s1_los_dir[0]_i_16__0_n_0\
    );
\s1_los_dir[0]_i_17__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2888288828882B8B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_45__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_40__0_n_0\,
      I4 => ghost2_row(1),
      I5 => ghost2_row(0),
      O => \s1_los_dir[0]_i_17__0_n_0\
    );
\s1_los_dir[0]_i_18__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"AAA9"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      O => \s1_los_dir[0]_i_18__0_n_0\
    );
\s1_los_dir[0]_i_19__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      O => \s1_los_dir[0]_i_19__0_n_0\
    );
\s1_los_dir[0]_i_1__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \s1_los_dir[0]_i_2__0_n_0\,
      I1 => \s1_los_detected_i_2__0_n_0\,
      O => los_dir_comb(0)
    );
\s1_los_dir[0]_i_20__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0332"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => ghost2_row(1),
      O => \s1_los_dir[0]_i_20__0_n_0\
    );
\s1_los_dir[0]_i_21__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      O => \s1_los_dir[0]_i_21__0_n_0\
    );
\s1_los_dir[0]_i_22__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0054"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[0]_i_22__0_n_0\
    );
\s1_los_dir[0]_i_23__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0F0FFFFE"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[0]_i_23__0_n_0\
    );
\s1_los_dir[0]_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_4__0_n_0\,
      I1 => \s1_los_dir[0]_i_3__0_n_0\,
      I2 => \s1_los_dir[0]_i_4__0_n_0\,
      I3 => \s1_los_dir[1]_i_19__0_n_0\,
      I4 => \s1_los_dir[0]_i_5__0_n_0\,
      I5 => \s1_los_dir[0]_i_6__0_n_0\,
      O => \s1_los_dir[0]_i_2__0_n_0\
    );
\s1_los_dir[0]_i_3__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7707770700007707"
    )
        port map (
      I0 => \s1_los_dir[0]_i_7__0_n_0\,
      I1 => \s1_los_dir[0]_i_8__0_n_0\,
      I2 => \s1_los_dir[0]_i_9__0_n_0\,
      I3 => \s1_los_dir[0]_i_10__0_n_0\,
      I4 => \s1_los_dir[0]_i_11__0_n_0\,
      I5 => \s1_los_dir[0]_i_12__0_n_0\,
      O => \s1_los_dir[0]_i_3__0_n_0\
    );
\s1_los_dir[0]_i_4__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF04FF04FFFFFF04"
    )
        port map (
      I0 => \s1_los_dir[0]_i_13__0_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_34__0_n_0\,
      I3 => \s1_los_dir[1]_i_71__0_n_0\,
      I4 => \s1_los_dir[0]_i_14__0_n_0\,
      I5 => \s1_los_dir[1]_i_66__0_n_0\,
      O => \s1_los_dir[0]_i_4__0_n_0\
    );
\s1_los_dir[0]_i_5__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"44F444F4FFFF44F4"
    )
        port map (
      I0 => \s1_los_dir[0]_i_15__0_n_0\,
      I1 => \s1_los_dir[0]_i_16__0_n_0\,
      I2 => \s1_los_dir[0]_i_17__0_n_0\,
      I3 => \s1_los_dir[1]_i_46__0_n_0\,
      I4 => \s1_los_dir[1]_i_11__0_n_0\,
      I5 => \s1_los_dir[1]_i_10__0_n_0\,
      O => \s1_los_dir[0]_i_5__0_n_0\
    );
\s1_los_dir[0]_i_6__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0008"
    )
        port map (
      I0 => \s1_los_dir[1]_i_9__0_n_0\,
      I1 => \s1_los_dir[1]_i_6__0_0\,
      I2 => ghost2_col(2),
      I3 => ghost2_col(3),
      O => \s1_los_dir[0]_i_6__0_n_0\
    );
\s1_los_dir[0]_i_7__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0100000001010101"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2__0_0\,
      O => \s1_los_dir[0]_i_7__0_n_0\
    );
\s1_los_dir[0]_i_8__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"38AAAE3C08AAA200"
    )
        port map (
      I0 => \s1_los_dir[1]_i_61_n_0\,
      I1 => \s1_los_dir[0]_i_18__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_40__0_n_0\,
      I4 => \s1_los_dir[1]_i_37__0_n_0\,
      I5 => \s1_los_dir[1]_i_44__0_n_0\,
      O => \s1_los_dir[0]_i_8__0_n_0\
    );
\s1_los_dir[0]_i_9__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7D3C3CDD41000011"
    )
        port map (
      I0 => \s1_los_dir[0]_i_19__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_40__0_n_0\,
      I3 => \s1_los_dir[1]_i_38__0_n_0\,
      I4 => \s1_los_dir[0]_i_20__0_n_0\,
      I5 => \s1_los_dir[1]_i_55_n_0\,
      O => \s1_los_dir[0]_i_9__0_n_0\
    );
\s1_los_dir[1]_i_105__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6FF6"
    )
        port map (
      I0 => rover_row(3),
      I1 => ghost2_row(3),
      I2 => rover_row(2),
      I3 => ghost2_row(2),
      O => \s1_los_dir[1]_i_105__0_n_0\
    );
\s1_los_dir[1]_i_10__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F111FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(0),
      I1 => rover_col(1),
      I2 => ghost2_col(2),
      I3 => ghost2_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_10__0_n_0\
    );
\s1_los_dir[1]_i_11__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"B2B88B8B82888888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_42__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_43_n_0\,
      I3 => \s1_los_dir[1]_i_40__0_n_0\,
      I4 => \s1_los_dir[1]_i_38__0_n_0\,
      I5 => \s1_los_dir[1]_i_41_n_0\,
      O => \s1_los_dir[1]_i_11__0_n_0\
    );
\s1_los_dir[1]_i_12__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__0_n_0\,
      I1 => \s1_los_dir[1]_i_40__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_37__0_n_0\,
      I4 => \s1_los_dir[1]_i_45__0_n_0\,
      I5 => \s1_los_dir[1]_i_46__0_n_0\,
      O => \s1_los_dir[1]_i_12__0_n_0\
    );
\s1_los_dir[1]_i_13__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__0_n_0\,
      I1 => \s1_los_dir[1]_i_48__0_n_0\,
      I2 => \s1_los_dir[1]_i_49__0_n_0\,
      I3 => \s1_los_dir[1]_i_50__0_n_0\,
      I4 => \s1_los_dir[1]_i_51__0_n_0\,
      I5 => \s1_los_dir[1]_i_2__0_0\,
      O => \s1_los_dir[1]_i_13__0_n_0\
    );
\s1_los_dir[1]_i_14__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__0_n_0\,
      I1 => \s1_los_dir[1]_i_53__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_54__0_n_0\,
      I4 => \s1_los_dir[1]_i_35__0_n_0\,
      I5 => \s1_los_dir[1]_i_27__0_0\,
      O => \s1_los_dir[1]_i_14__0_n_0\
    );
\s1_los_dir[1]_i_15__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55_n_0\,
      I1 => \s1_los_dir[1]_i_56__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_57__0_n_0\,
      I4 => \s1_los_dir_reg[1]_1\,
      I5 => \s1_los_dir[1]_i_58__0_n_0\,
      O => \s1_los_dir[1]_i_15__0_n_0\
    );
\s1_los_dir[1]_i_16__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF417DFFFFFFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_60__0_n_0\,
      I3 => \s1_los_dir[1]_i_61_n_0\,
      I4 => \s1_los_dir[1]_i_5__0_0\,
      I5 => \s1_los_dir[1]_i_62_n_0\,
      O => \s1_los_dir[1]_i_16__0_n_0\
    );
\s1_los_dir[1]_i_17__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0400000404444404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_34__0_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_63__0_n_0\,
      I3 => \s1_los_dir[1]_i_64__0_n_0\,
      I4 => \s1_los_dir[1]_i_37__0_n_0\,
      I5 => \s1_los_dir[1]_i_65__0_n_0\,
      O => \s1_los_dir[1]_i_17__0_n_0\
    );
\s1_los_dir[1]_i_18__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_66__0_n_0\,
      I1 => \s1_los_dir[1]_i_67_n_0\,
      I2 => \s1_los_dir[1]_i_68__0_n_0\,
      I3 => \s1_los_dir[1]_i_69__0_n_0\,
      I4 => \s1_los_dir[1]_i_70__0_n_0\,
      I5 => \s1_los_dir[1]_i_71__0_n_0\,
      O => \s1_los_dir[1]_i_18__0_n_0\
    );
\s1_los_dir[1]_i_19__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_72__0_n_0\,
      I1 => \s1_los_dir[1]_i_73__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_74__0_n_0\,
      I4 => \s1_los_dir[1]_i_75__0_n_0\,
      O => \s1_los_dir[1]_i_19__0_n_0\
    );
\s1_los_dir[1]_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0404040404FF0404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_2__0_n_0\,
      I1 => \s1_los_dir[1]_i_3__0_n_0\,
      I2 => \s1_los_dir[1]_i_4__0_n_0\,
      I3 => \s1_los_dir[1]_i_5__0_n_0\,
      I4 => \s1_los_dir[1]_i_6__0_n_0\,
      I5 => \s1_los_dir[1]_i_7__0_n_0\,
      O => los_dir_comb(1)
    );
\s1_los_dir[1]_i_20\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_76__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_77__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[1]_i_41_n_0\,
      O => \s1_los_dir[1]_i_20_n_0\
    );
\s1_los_dir[1]_i_21__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"15"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      O => \s1_los_dir[1]_i_21__0_n_0\
    );
\s1_los_dir[1]_i_22\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_78_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_79__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[1]_i_44__0_n_0\,
      O => \s1_los_dir[1]_i_22_n_0\
    );
\s1_los_dir[1]_i_23\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost2_col(2),
      I3 => ghost2_col(1),
      I4 => ghost2_col(0),
      I5 => ghost2_col(3),
      O => \s1_los_dir[1]_i_23_n_0\
    );
\s1_los_dir[1]_i_24__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF01FFFFFFFF"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2__0_0\,
      O => \s1_los_dir[1]_i_24__0_n_0\
    );
\s1_los_dir[1]_i_25__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEBEBBBB22828888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_74__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_80__0_n_0\,
      I3 => \s1_los_dir[1]_i_81__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[1]_i_72__0_n_0\,
      O => \s1_los_dir[1]_i_25__0_n_0\
    );
\s1_los_dir[1]_i_26__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__0_n_0\,
      I1 => \s1_los_dir[1]_i_48__0_n_0\,
      I2 => \s1_los_dir[1]_i_49__0_n_0\,
      I3 => \s1_los_dir[1]_i_50__0_n_0\,
      I4 => \s1_los_dir[1]_i_5__0_0\,
      I5 => \s1_los_dir[1]_i_82__0_n_0\,
      O => \s1_los_dir[1]_i_26__0_n_0\
    );
\s1_los_dir[1]_i_27__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__0_n_0\,
      I1 => \s1_los_dir[1]_i_40__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_37__0_n_0\,
      I4 => \s1_los_dir[1]_i_45__0_n_0\,
      I5 => \s1_los_dir[1]_i_83_n_0\,
      O => \s1_los_dir[1]_i_27__0_n_0\
    );
\s1_los_dir[1]_i_28__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BE82000000000000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__0_n_0\,
      I1 => \s1_los_dir[1]_i_53__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_54__0_n_0\,
      I4 => \s1_los_dir_reg[1]_0\,
      I5 => \s1_los_dir[1]_i_84__0_n_0\,
      O => \s1_los_dir[1]_i_28__0_n_0\
    );
\s1_los_dir[1]_i_29__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55_n_0\,
      I1 => \s1_los_dir[1]_i_56__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_57__0_n_0\,
      I4 => \s1_los_dir[1]_i_6__0_0\,
      I5 => \s1_los_dir[1]_i_21__0_n_0\,
      O => \s1_los_dir[1]_i_29__0_n_0\
    );
\s1_los_dir[1]_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_8__0_n_0\,
      I1 => \s1_los_dir[1]_i_9__0_n_0\,
      I2 => \s1_los_dir[1]_i_10__0_n_0\,
      I3 => \s1_los_dir[1]_i_11__0_n_0\,
      I4 => \s1_los_dir[1]_i_12__0_n_0\,
      I5 => \s1_los_dir[1]_i_13__0_n_0\,
      O => \s1_los_dir[1]_i_2__0_n_0\
    );
\s1_los_dir[1]_i_30__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFBE82FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_63__0_n_0\,
      I1 => \s1_los_dir[1]_i_64__0_n_0\,
      I2 => \s1_los_dir[1]_i_37__0_n_0\,
      I3 => \s1_los_dir[1]_i_65__0_n_0\,
      I4 => ghost2_col(3),
      I5 => \s1_los_dir_reg[1]_2\,
      O => \s1_los_dir[1]_i_30__0_n_0\
    );
\s1_los_dir[1]_i_31__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_60__0_n_0\,
      I3 => \s1_los_dir[1]_i_61_n_0\,
      I4 => \s1_los_dir[1]_i_6__0_1\,
      I5 => \s1_los_dir[1]_i_51__0_n_0\,
      O => \s1_los_dir[1]_i_31__0_n_0\
    );
\s1_los_dir[1]_i_32__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_85__0_n_0\,
      I1 => \s1_los_dir[1]_i_67_n_0\,
      I2 => \s1_los_dir[1]_i_68__0_n_0\,
      I3 => \s1_los_dir[1]_i_69__0_n_0\,
      I4 => \s1_los_dir[1]_i_70__0_n_0\,
      I5 => \s1_los_dir[1]_i_86__0_n_0\,
      O => \s1_los_dir[1]_i_32__0_n_0\
    );
\s1_los_dir[1]_i_33__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000004FF44004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_87_n_0\,
      I1 => \s1_los_dir[1]_i_41_n_0\,
      I2 => \s1_los_dir[1]_i_88__0_n_0\,
      I3 => \s1_los_dir[1]_i_37__0_n_0\,
      I4 => \s1_los_dir[1]_i_42__0_n_0\,
      I5 => \s1_los_dir[1]_i_89__0_n_0\,
      O => \s1_los_dir[1]_i_33__0_n_0\
    );
\s1_los_dir[1]_i_34__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF80"
    )
        port map (
      I0 => ghost2_col(0),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => ghost2_col(3),
      O => \s1_los_dir[1]_i_34__0_n_0\
    );
\s1_los_dir[1]_i_35__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FF"
    )
        port map (
      I0 => ghost2_col(0),
      I1 => ghost2_col(1),
      I2 => ghost2_col(2),
      I3 => ghost2_col(3),
      O => \s1_los_dir[1]_i_35__0_n_0\
    );
\s1_los_dir[1]_i_36\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"27270F0D04A40082"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_36_n_0\
    );
\s1_los_dir[1]_i_37__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555655"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__0_0\(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => \s1_los_dir[1]_i_33__0_0\(3),
      I3 => \s1_los_dir[1]_i_44__0_n_0\,
      I4 => \s1_los_dir[1]_i_33__0_0\(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[1]_i_37__0_n_0\
    );
\s1_los_dir[1]_i_38__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"55555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(2),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(0),
      I4 => ghost2_row(1),
      O => \s1_los_dir[1]_i_38__0_n_0\
    );
\s1_los_dir[1]_i_39__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[1]_i_39__0_n_0\
    );
\s1_los_dir[1]_i_3__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_14__0_n_0\,
      I1 => \s1_los_dir[1]_i_15__0_n_0\,
      I2 => \s1_los_dir[1]_i_16__0_n_0\,
      I3 => \s1_los_dir[1]_i_17__0_n_0\,
      I4 => \s1_los_dir[1]_i_18__0_n_0\,
      I5 => \s1_los_dir[1]_i_19__0_n_0\,
      O => \s1_los_dir[1]_i_3__0_n_0\
    );
\s1_los_dir[1]_i_40__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(0),
      I4 => ghost2_row(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[1]_i_40__0_n_0\
    );
\s1_los_dir[1]_i_41\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      O => \s1_los_dir[1]_i_41_n_0\
    );
\s1_los_dir[1]_i_42__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0013401780DCA2D4"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => ghost2_row(0),
      I4 => ghost2_row(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_42__0_n_0\
    );
\s1_los_dir[1]_i_43\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      O => \s1_los_dir[1]_i_43_n_0\
    );
\s1_los_dir[1]_i_44__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => ghost2_row(1),
      O => \s1_los_dir[1]_i_44__0_n_0\
    );
\s1_los_dir[1]_i_45__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6022355C000835CC"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => ghost2_row(0),
      I5 => ghost2_row(1),
      O => \s1_los_dir[1]_i_45__0_n_0\
    );
\s1_los_dir[1]_i_46__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E0FF"
    )
        port map (
      I0 => ghost2_col(1),
      I1 => ghost2_col(2),
      I2 => ghost2_col(3),
      I3 => \s1_los_dir[0]_i_5__0_0\,
      O => \s1_los_dir[1]_i_46__0_n_0\
    );
\s1_los_dir[1]_i_47__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_47__0_n_0\
    );
\s1_los_dir[1]_i_48__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => ghost2_row(1),
      O => \s1_los_dir[1]_i_48__0_n_0\
    );
\s1_los_dir[1]_i_49__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5666"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__0_0\(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(3),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_49__0_n_0\
    );
\s1_los_dir[1]_i_4__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF10101010101010"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => \s1_los_dir_reg[1]_0\,
      I2 => \s1_los_dir[1]_i_20_n_0\,
      I3 => \s1_los_dir[1]_i_21__0_n_0\,
      I4 => \s1_los_dir_reg[1]_2\,
      I5 => \s1_los_dir[1]_i_22_n_0\,
      O => \s1_los_dir[1]_i_4__0_n_0\
    );
\s1_los_dir[1]_i_50__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5CCC22A05CC60800"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => ghost2_row(0),
      I5 => ghost2_row(1),
      O => \s1_los_dir[1]_i_50__0_n_0\
    );
\s1_los_dir[1]_i_51__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      I3 => ghost2_col(0),
      O => \s1_los_dir[1]_i_51__0_n_0\
    );
\s1_los_dir[1]_i_52__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"44400004"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_52__0_n_0\
    );
\s1_los_dir[1]_i_53__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => ghost2_row(1),
      I2 => ghost2_row(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_53__0_n_0\
    );
\s1_los_dir[1]_i_54__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"083009B52AA82AA0"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(2),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => ghost2_row(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(3),
      O => \s1_los_dir[1]_i_54__0_n_0\
    );
\s1_los_dir[1]_i_55\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1F0C0054FF00E000"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      I5 => \s1_los_dir[1]_i_33__0_0\(3),
      O => \s1_los_dir[1]_i_55_n_0\
    );
\s1_los_dir[1]_i_56__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF880001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(0),
      I1 => ghost2_row(1),
      I2 => ghost2_row(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      I5 => \s1_los_dir[1]_i_33__0_0\(3),
      O => \s1_los_dir[1]_i_56__0_n_0\
    );
\s1_los_dir[1]_i_57__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0802"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => ghost2_row(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_57__0_n_0\
    );
\s1_los_dir[1]_i_58__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(0),
      I2 => ghost2_col(1),
      I3 => ghost2_col(2),
      O => \s1_los_dir[1]_i_58__0_n_0\
    );
\s1_los_dir[1]_i_59\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000095"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(2),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(0),
      I4 => ghost2_row(1),
      O => \s1_los_dir[1]_i_59_n_0\
    );
\s1_los_dir[1]_i_5__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_23_n_0\,
      I1 => \s1_los_dir[1]_i_9__0_n_0\,
      I2 => \s1_los_dir[1]_i_24__0_n_0\,
      I3 => \s1_los_dir[1]_i_25__0_n_0\,
      I4 => \s1_los_dir[1]_i_26__0_n_0\,
      I5 => \s1_los_dir[1]_i_27__0_n_0\,
      O => \s1_los_dir[1]_i_5__0_n_0\
    );
\s1_los_dir[1]_i_60__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1155115511551554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => ghost2_row(0),
      I5 => ghost2_row(1),
      O => \s1_los_dir[1]_i_60__0_n_0\
    );
\s1_los_dir[1]_i_61\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"078DA4822F0D0002"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => ghost2_row(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      I5 => ghost2_row(1),
      O => \s1_los_dir[1]_i_61_n_0\
    );
\s1_los_dir[1]_i_62\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => ghost2_col(2),
      I1 => ghost2_col(1),
      I2 => ghost2_col(3),
      O => \s1_los_dir[1]_i_62_n_0\
    );
\s1_los_dir[1]_i_63__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3F7FFFBF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_63__0_n_0\
    );
\s1_los_dir[1]_i_64__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000111155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_64__0_n_0\
    );
\s1_los_dir[1]_i_65__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A5FBC5B3C5F7C5FF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(2),
      I1 => \s1_los_dir[1]_i_33__0_0\(3),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(0),
      I5 => ghost2_row(1),
      O => \s1_los_dir[1]_i_65__0_n_0\
    );
\s1_los_dir[1]_i_66__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => ghost2_col(2),
      I1 => ghost2_col(1),
      I2 => ghost2_col(0),
      I3 => ghost2_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_66__0_n_0\
    );
\s1_los_dir[1]_i_67\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A9"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__0_0\(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(3),
      I2 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_67_n_0\
    );
\s1_los_dir[1]_i_68__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CCC0CCC800033333"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => \s1_los_dir[1]_i_33__0_0\(3),
      I2 => \s1_los_dir[1]_i_33__0_0\(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(1),
      I4 => ghost2_row(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_68__0_n_0\
    );
\s1_los_dir[1]_i_69__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F6BFF48FF49FFC0F"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(3),
      I3 => \s1_los_dir[1]_i_33__0_0\(2),
      I4 => ghost2_row(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[1]_i_69__0_n_0\
    );
\s1_los_dir[1]_i_6__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_28__0_n_0\,
      I1 => \s1_los_dir[1]_i_29__0_n_0\,
      I2 => \s1_los_dir[1]_i_30__0_n_0\,
      I3 => \s1_los_dir[1]_i_31__0_n_0\,
      I4 => \s1_los_dir[1]_i_32__0_n_0\,
      I5 => \s1_los_dir[1]_i_33__0_n_0\,
      O => \s1_los_dir[1]_i_6__0_n_0\
    );
\s1_los_dir[1]_i_70__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__0_0\(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(2),
      I2 => ghost2_row(1),
      I3 => ghost2_row(0),
      O => \s1_los_dir[1]_i_70__0_n_0\
    );
\s1_los_dir[1]_i_71__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92_n_0\,
      I1 => \s1_los_dir[1]_i_93_n_0\,
      I2 => \s1_los_dir[1]_i_94__0_n_0\,
      O => \s1_los_dir[1]_i_71__0_n_0\
    );
\s1_los_dir[1]_i_72__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"20001030"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(1),
      I2 => ghost2_row(0),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_72__0_n_0\
    );
\s1_los_dir[1]_i_73__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0011555555555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(1),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_73__0_n_0\
    );
\s1_los_dir[1]_i_74__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"74F0D2D2202A0020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(2),
      I3 => ghost2_row(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(1),
      I5 => ghost2_row(0),
      O => \s1_los_dir[1]_i_74__0_n_0\
    );
\s1_los_dir[1]_i_75__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFF4"
    )
        port map (
      I0 => rover_col(1),
      I1 => \s1_los_dir[1]_i_2__0_0\,
      I2 => ghost2_col(0),
      I3 => ghost2_col(3),
      I4 => ghost2_col(1),
      I5 => ghost2_col(2),
      O => \s1_los_dir[1]_i_75__0_n_0\
    );
\s1_los_dir[1]_i_76__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"02021F5F002AD050"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => ghost2_row(1),
      I4 => ghost2_row(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_76__0_n_0\
    );
\s1_los_dir[1]_i_77__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(0),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => ghost2_row(1),
      I3 => ghost2_row(0),
      O => \s1_los_dir[1]_i_77__0_n_0\
    );
\s1_los_dir[1]_i_78\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0727270F2404A400"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(3),
      I1 => \s1_los_dir[1]_i_33__0_0\(1),
      I2 => ghost2_row(0),
      I3 => ghost2_row(1),
      I4 => \s1_los_dir[1]_i_33__0_0\(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_78_n_0\
    );
\s1_los_dir[1]_i_79__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0154"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(1),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      O => \s1_los_dir[1]_i_79__0_n_0\
    );
\s1_los_dir[1]_i_7__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"404040FF40404040"
    )
        port map (
      I0 => \s1_los_dir_reg[1]_1\,
      I1 => \s1_los_dir[1]_i_34__0_n_0\,
      I2 => \s1_los_dir[1]_i_22_n_0\,
      I3 => rover_col(3),
      I4 => \s1_los_dir[1]_i_35__0_n_0\,
      I5 => \s1_los_dir[1]_i_20_n_0\,
      O => \s1_los_dir[1]_i_7__0_n_0\
    );
\s1_los_dir[1]_i_80__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F0E00001"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_80__0_n_0\
    );
\s1_los_dir[1]_i_81__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(0),
      I1 => ghost2_row(0),
      I2 => ghost2_row(1),
      O => \s1_los_dir[1]_i_81__0_n_0\
    );
\s1_los_dir[1]_i_82__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost2_col(2),
      I1 => ghost2_col(3),
      O => \s1_los_dir[1]_i_82__0_n_0\
    );
\s1_los_dir[1]_i_83\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5777FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_27__0_0\,
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      I3 => ghost2_col(0),
      I4 => ghost2_col(3),
      O => \s1_los_dir[1]_i_83_n_0\
    );
\s1_los_dir[1]_i_84__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A8"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(2),
      I2 => ghost2_col(1),
      O => \s1_los_dir[1]_i_84__0_n_0\
    );
\s1_los_dir[1]_i_85__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(1),
      I2 => rover_col(0),
      I3 => rover_col(3),
      I4 => ghost2_col(3),
      I5 => ghost2_col(2),
      O => \s1_los_dir[1]_i_85__0_n_0\
    );
\s1_los_dir[1]_i_86__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92_n_0\,
      I1 => \s1_los_dir[1]_i_95__0_n_0\,
      I2 => \s1_los_dir[1]_i_96__0_n_0\,
      O => \s1_los_dir[1]_i_86__0_n_0\
    );
\s1_los_dir[1]_i_87\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"80007FFF"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(0),
      I2 => \s1_los_dir[1]_i_33__0_0\(1),
      I3 => \s1_los_dir[1]_i_33__0_0\(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(2),
      O => \s1_los_dir[1]_i_87_n_0\
    );
\s1_los_dir[1]_i_88__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0111111111111110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__0_0\(2),
      I1 => \s1_los_dir[1]_i_33__0_0\(3),
      I2 => ghost2_row(1),
      I3 => ghost2_row(0),
      I4 => \s1_los_dir[1]_i_33__0_0\(0),
      I5 => \s1_los_dir[1]_i_33__0_0\(1),
      O => \s1_los_dir[1]_i_88__0_n_0\
    );
\s1_los_dir[1]_i_89__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8FFF8FFF8FFFFFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost2_col(2),
      I3 => ghost2_col(3),
      I4 => ghost2_col(0),
      I5 => ghost2_col(1),
      O => \s1_los_dir[1]_i_89__0_n_0\
    );
\s1_los_dir[1]_i_8__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => ghost2_col(3),
      I1 => ghost2_col(2),
      I2 => rover_col(2),
      I3 => rover_col(1),
      I4 => rover_col(0),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_8__0_n_0\
    );
\s1_los_dir[1]_i_92\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFF6FF6"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => rover_row(1),
      I2 => ghost2_row(0),
      I3 => rover_row(0),
      I4 => \s1_los_dir[1]_i_105__0_n_0\,
      O => \s1_los_dir[1]_i_92_n_0\
    );
\s1_los_dir[1]_i_93\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"20F220F2B0FB20F2"
    )
        port map (
      I0 => ghost2_col(2),
      I1 => rover_col(2),
      I2 => ghost2_col(3),
      I3 => rover_col(3),
      I4 => ghost2_col(1),
      I5 => rover_col(1),
      O => \s1_los_dir[1]_i_93_n_0\
    );
\s1_los_dir[1]_i_94__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A2A200A2"
    )
        port map (
      I0 => \s1_los_detected_i_26__0_n_0\,
      I1 => rover_col(3),
      I2 => ghost2_col(3),
      I3 => rover_col(0),
      I4 => ghost2_col(0),
      O => \s1_los_dir[1]_i_94__0_n_0\
    );
\s1_los_dir[1]_i_95__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DD4D0000FFFFDD4D"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost2_col(2),
      I2 => rover_col(1),
      I3 => ghost2_col(1),
      I4 => ghost2_col(3),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_95__0_n_0\
    );
\s1_los_dir[1]_i_96__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAEFFAE"
    )
        port map (
      I0 => s1_los_detected_i_25_n_0,
      I1 => ghost2_col(0),
      I2 => rover_col(0),
      I3 => ghost2_col(3),
      I4 => rover_col(3),
      O => \s1_los_dir[1]_i_96__0_n_0\
    );
\s1_los_dir[1]_i_9__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_36_n_0\,
      I1 => \s1_los_dir[1]_i_37__0_n_0\,
      I2 => \s1_los_dir[1]_i_38__0_n_0\,
      I3 => \s1_los_dir[1]_i_39__0_n_0\,
      I4 => \s1_los_dir[1]_i_40__0_n_0\,
      I5 => \s1_los_dir[1]_i_41_n_0\,
      O => \s1_los_dir[1]_i_9__0_n_0\
    );
\s1_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_dir_comb(0),
      Q => s1_los_dir(0)
    );
\s1_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_dir_comb(1),
      Q => s1_los_dir(1)
    );
\s2_can_down_i_10__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__0_n_6\,
      O => \s2_can_down_i_10__0_n_0\
    );
\s2_can_down_i_11__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_11__0_n_0\
    );
\s2_can_down_i_12__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__0_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_down_i_12__0_n_0\
    );
\s2_can_down_i_13__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_down_reg_i_16__0_n_7\,
      O => \s2_can_down_i_13__0_n_0\
    );
\s2_can_down_i_14__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      O => \s2_can_down_i_14__0_n_0\
    );
\s2_can_down_i_15__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_15__0_n_0\
    );
\s2_can_down_i_17__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"542B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_down_i_17__0_n_0\
    );
\s2_can_down_i_18__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8505"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_18__0_n_0\
    );
\s2_can_down_i_19__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1A9A"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_19__0_n_0\
    );
\s2_can_down_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000707070007"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(3),
      I3 => \s2_can_down_i_2__0_n_0\,
      I4 => \s2_can_down_reg_i_3__0_n_5\,
      I5 => \s2_can_down_i_4__0_n_0\,
      O => wc_down
    );
\s2_can_down_i_20__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_20__0_n_0\
    );
\s2_can_down_i_21__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"651A"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_21__0_n_0\
    );
\s2_can_down_i_22__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"4B52"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_22__0_n_0\
    );
\s2_can_down_i_23__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1CE3"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_23__0_n_0\
    );
\s2_can_down_i_24__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"65"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_down_i_24__0_n_0\
    );
\s2_can_down_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__0_n_6\,
      I1 => \s2_can_down_reg_i_5__0_n_6\,
      I2 => \s2_can_down_reg_i_3__0_n_7\,
      I3 => \s2_can_down_reg_i_5__0_n_5\,
      I4 => \s2_can_down_reg_i_5__0_n_4\,
      I5 => \s2_can_down_reg_i_5__0_n_7\,
      O => \s2_can_down_i_2__0_n_0\
    );
\s2_can_down_i_4__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__0_n_7\,
      I1 => \s2_can_down_reg_i_5__0_n_7\,
      I2 => \s2_can_down_reg_i_5__0_n_6\,
      O => \s2_can_down_i_4__0_n_0\
    );
\s2_can_down_i_6__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_down_reg_i_16__0_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_down_i_6__0_n_0\
    );
\s2_can_down_i_9__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__0_n_6\,
      I2 => \s2_can_down_reg_i_16__0_n_5\,
      O => \s2_can_down_i_9__0_n_0\
    );
s2_can_down_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_down,
      Q => s2_can_down
    );
\s2_can_down_reg_i_16__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_16__0_n_0\,
      CO(2) => \s2_can_down_reg_i_16__0_n_1\,
      CO(1) => \s2_can_down_reg_i_16__0_n_2\,
      CO(0) => \s2_can_down_reg_i_16__0_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_18__0_n_0\,
      DI(2) => \s2_can_down_i_19__0_n_0\,
      DI(1) => \s2_can_down_i_20__0_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_0\(0),
      O(2) => \s2_can_down_reg_i_16__0_n_5\,
      O(1) => \s2_can_down_reg_i_16__0_n_6\,
      O(0) => \s2_can_down_reg_i_16__0_n_7\,
      S(3) => \s2_can_down_i_21__0_n_0\,
      S(2) => \s2_can_down_i_22__0_n_0\,
      S(1) => \s2_can_down_i_23__0_n_0\,
      S(0) => \s2_can_down_i_24__0_n_0\
    );
\s2_can_down_reg_i_3__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_5__0_n_0\,
      CO(3 downto 2) => \NLW_s2_can_down_reg_i_3__0_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_down_reg_i_3__0_n_2\,
      CO(0) => \s2_can_down_reg_i_3__0_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_down_i_6__0_n_0\,
      O(3) => \NLW_s2_can_down_reg_i_3__0_O_UNCONNECTED\(3),
      O(2) => \s2_can_down_reg_i_3__0_n_5\,
      O(1) => \s2_can_down_reg_i_3__0_n_6\,
      O(0) => \s2_can_down_reg_i_3__0_n_7\,
      S(3) => '0',
      S(2) => \s2_can_down_reg_i_7__0_n_7\,
      S(1) => s2_can_down_reg_0(0),
      S(0) => \s2_can_down_i_9__0_n_0\
    );
\s2_can_down_reg_i_5__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_5__0_n_0\,
      CO(2) => \s2_can_down_reg_i_5__0_n_1\,
      CO(1) => \s2_can_down_reg_i_5__0_n_2\,
      CO(0) => \s2_can_down_reg_i_5__0_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_10__0_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_down_i_11__0_n_0\,
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_down_reg_i_5__0_n_4\,
      O(2) => \s2_can_down_reg_i_5__0_n_5\,
      O(1) => \s2_can_down_reg_i_5__0_n_6\,
      O(0) => \s2_can_down_reg_i_5__0_n_7\,
      S(3) => \s2_can_down_i_12__0_n_0\,
      S(2) => \s2_can_down_i_13__0_n_0\,
      S(1) => \s2_can_down_i_14__0_n_0\,
      S(0) => \s2_can_down_i_15__0_n_0\
    );
\s2_can_down_reg_i_7__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_16__0_n_0\,
      CO(3 downto 0) => \NLW_s2_can_down_reg_i_7__0_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_down_reg_i_7__0_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_down_reg_i_7__0_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_down_i_17__0_n_0\
    );
\s2_can_left_i_10__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(1),
      O => \s2_can_left_i_10__0_n_0\
    );
\s2_can_left_i_11__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(0),
      O => \s2_can_left_i_11__0_n_0\
    );
\s2_can_left_i_12__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__0_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_left_i_12__0_n_0\
    );
\s2_can_left_i_13__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__0_n_7\,
      O => \s2_can_left_i_13__0_n_0\
    );
\s2_can_left_i_14__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      O => \s2_can_left_i_14__0_n_0\
    );
\s2_can_left_i_15__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_left_i_15__0_n_0\
    );
\s2_can_left_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A2A2A202A2A2A2A2"
    )
        port map (
      I0 => wc_left01_in,
      I1 => \s2_can_left_i_3__0_n_0\,
      I2 => \s2_can_left_reg_i_4__0_n_5\,
      I3 => \s2_can_left_reg_i_5__0_n_6\,
      I4 => \s2_can_left_reg_i_5__0_n_7\,
      I5 => \s2_can_left_reg_i_4__0_n_7\,
      O => wc_left
    );
\s2_can_left_i_2__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_col(3),
      O => wc_left01_in
    );
\s2_can_left_i_3__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_left_reg_i_4__0_n_6\,
      I1 => \s2_can_left_reg_i_5__0_n_6\,
      I2 => \s2_can_left_reg_i_4__0_n_7\,
      I3 => \s2_can_left_reg_i_5__0_n_5\,
      I4 => \s2_can_left_reg_i_5__0_n_4\,
      I5 => \s2_can_left_reg_i_5__0_n_7\,
      O => \s2_can_left_i_3__0_n_0\
    );
\s2_can_left_i_6__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__0_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_left_i_6__0_n_0\
    );
\s2_can_left_i_7__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__0_n_4\,
      O => p_1_in(5)
    );
\s2_can_left_i_8__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__0_n_6\,
      I2 => \s2_can_right_reg_i_7__0_n_5\,
      O => \s2_can_left_i_8__0_n_0\
    );
\s2_can_left_i_9__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__0_n_6\,
      O => \s2_can_left_i_9__0_n_0\
    );
s2_can_left_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_left,
      Q => s2_can_left
    );
\s2_can_left_reg_i_4__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_left_reg_i_5__0_n_0\,
      CO(3 downto 2) => \NLW_s2_can_left_reg_i_4__0_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_left_reg_i_4__0_n_2\,
      CO(0) => \s2_can_left_reg_i_4__0_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_left_i_6__0_n_0\,
      O(3) => \NLW_s2_can_left_reg_i_4__0_O_UNCONNECTED\(3),
      O(2) => \s2_can_left_reg_i_4__0_n_5\,
      O(1) => \s2_can_left_reg_i_4__0_n_6\,
      O(0) => \s2_can_left_reg_i_4__0_n_7\,
      S(3) => '0',
      S(2) => \s2_can_right_reg_i_9__0_n_7\,
      S(1) => p_1_in(5),
      S(0) => \s2_can_left_i_8__0_n_0\
    );
\s2_can_left_reg_i_5__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_left_reg_i_5__0_n_0\,
      CO(2) => \s2_can_left_reg_i_5__0_n_1\,
      CO(1) => \s2_can_left_reg_i_5__0_n_2\,
      CO(0) => \s2_can_left_reg_i_5__0_n_3\,
      CYINIT => '1',
      DI(3) => \s2_can_left_i_9__0_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_left_i_10__0_n_0\,
      DI(0) => \s2_can_left_i_11__0_n_0\,
      O(3) => \s2_can_left_reg_i_5__0_n_4\,
      O(2) => \s2_can_left_reg_i_5__0_n_5\,
      O(1) => \s2_can_left_reg_i_5__0_n_6\,
      O(0) => \s2_can_left_reg_i_5__0_n_7\,
      S(3) => \s2_can_left_i_12__0_n_0\,
      S(2) => \s2_can_left_i_13__0_n_0\,
      S(1) => \s2_can_left_i_14__0_n_0\,
      S(0) => \s2_can_left_i_15__0_n_0\
    );
\s2_can_right_i_10__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"2ABFD540"
    )
        port map (
      I0 => \s2_can_right_i_8__0_n_0\,
      I1 => \s2_can_right_reg_i_7__0_n_6\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__0_n_5\,
      I4 => \s2_can_right_reg_i_7__0_n_4\,
      O => \s2_can_right_i_10__0_n_0\
    );
\s2_can_right_i_11__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7887"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_11__0_n_0\
    );
\s2_can_right_i_12__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7887F00FF00F8778"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      I2 => \s2_can_right_reg_i_7__0_n_7\,
      I3 => s1_ghost_col(2),
      I4 => s1_ghost_col(1),
      I5 => s1_ghost_row(1),
      O => \s2_can_right_i_12__0_n_0\
    );
\s2_can_right_i_13__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"56A9A956"
    )
        port map (
      I0 => \s2_can_right_i_6__0_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__0_n_7\,
      I3 => \s2_can_right_reg_i_7__0_n_6\,
      I4 => s1_ghost_col(3),
      O => \s2_can_right_i_13__0_n_0\
    );
\s2_can_right_i_14__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_right_i_14__0_n_0\
    );
\s2_can_right_i_15__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      O => \s2_can_right_i_15__0_n_0\
    );
\s2_can_right_i_16__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      O => \s2_can_right_i_16__0_n_0\
    );
\s2_can_right_i_17__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_17__0_n_0\
    );
\s2_can_right_i_18__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(3),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_18__0_n_0\
    );
\s2_can_right_i_19__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(3),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_19__0_n_0\
    );
\s2_can_right_i_1__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000077777770777"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_i_2__0_n_0\,
      I3 => \s2_can_right_i_3__0_n_0\,
      I4 => \s2_can_right_i_4__0_n_0\,
      I5 => \s2_can_right_i_5__0_n_0\,
      O => wc_right
    );
\s2_can_right_i_20__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2DD2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_right_i_20__0_n_0\
    );
\s2_can_right_i_21__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_21__0_n_0\
    );
\s2_can_right_i_22__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      O => \s2_can_right_i_22__0_n_0\
    );
\s2_can_right_i_2__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0990"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_2__0_n_0\
    );
\s2_can_right_i_3__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AB54FD02FD0254AB"
    )
        port map (
      I0 => \s2_can_right_i_6__0_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__0_n_7\,
      I3 => \s2_can_right_reg_i_7__0_n_5\,
      I4 => \s2_can_right_reg_i_7__0_n_6\,
      I5 => s1_ghost_col(3),
      O => \s2_can_right_i_3__0_n_0\
    );
\s2_can_right_i_4__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"15550111EAAAFEEE"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__0_n_4\,
      I1 => \s2_can_right_reg_i_7__0_n_5\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__0_n_6\,
      I4 => \s2_can_right_i_8__0_n_0\,
      I5 => \s2_can_right_reg_i_9__0_n_7\,
      O => \s2_can_right_i_4__0_n_0\
    );
\s2_can_right_i_5__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A52D0F18080088"
    )
        port map (
      I0 => \s2_can_right_i_10__0_n_0\,
      I1 => \s2_can_right_i_11__0_n_0\,
      I2 => \s2_can_right_i_3__0_n_0\,
      I3 => \s2_can_right_i_12__0_n_0\,
      I4 => \s2_can_right_i_13__0_n_0\,
      I5 => \s2_can_right_i_14__0_n_0\,
      O => \s2_can_right_i_5__0_n_0\
    );
\s2_can_right_i_6__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0666666F666F666F"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__0_n_7\,
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_col(1),
      I4 => s1_ghost_row(0),
      I5 => s1_ghost_col(0),
      O => \s2_can_right_i_6__0_n_0\
    );
\s2_can_right_i_8__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"999F0009"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__0_n_6\,
      I2 => \s2_can_right_reg_i_7__0_n_7\,
      I3 => s1_ghost_col(2),
      I4 => \s2_can_right_i_6__0_n_0\,
      O => \s2_can_right_i_8__0_n_0\
    );
s2_can_right_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_right,
      Q => s2_can_right
    );
\s2_can_right_reg_i_7__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_right_reg_i_7__0_n_0\,
      CO(2) => \s2_can_right_reg_i_7__0_n_1\,
      CO(1) => \s2_can_right_reg_i_7__0_n_2\,
      CO(0) => \s2_can_right_reg_i_7__0_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_right_i_15__0_n_0\,
      DI(2) => \s2_can_right_i_16__0_n_0\,
      DI(1) => \s2_can_right_i_17__0_n_0\,
      DI(0) => '0',
      O(3) => \s2_can_right_reg_i_7__0_n_4\,
      O(2) => \s2_can_right_reg_i_7__0_n_5\,
      O(1) => \s2_can_right_reg_i_7__0_n_6\,
      O(0) => \s2_can_right_reg_i_7__0_n_7\,
      S(3) => \s2_can_right_i_18__0_n_0\,
      S(2) => \s2_can_right_i_19__0_n_0\,
      S(1) => \s2_can_right_i_20__0_n_0\,
      S(0) => \s2_can_right_i_21__0_n_0\
    );
\s2_can_right_reg_i_9__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_right_reg_i_7__0_n_0\,
      CO(3 downto 0) => \NLW_s2_can_right_reg_i_9__0_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_right_reg_i_9__0_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_right_reg_i_9__0_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_right_i_22__0_n_0\
    );
\s2_can_up_i_10__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__0_n_6\,
      O => \s2_can_up_i_10__0_n_0\
    );
\s2_can_up_i_11__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      O => wc_down5(1)
    );
\s2_can_up_i_12__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__0_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_up_i_12__0_n_0\
    );
\s2_can_up_i_13__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_up_reg_i_16__0_n_7\,
      O => \s2_can_up_i_13__0_n_0\
    );
\s2_can_up_i_14__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"69"
    )
        port map (
      I0 => s1_ghost_col(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_14__0_n_0\
    );
\s2_can_up_i_15__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_up_i_15__0_n_0\
    );
\s2_can_up_i_17__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"42BF"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_17__0_n_0\
    );
\s2_can_up_i_18__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1213"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_18__0_n_0\
    );
\s2_can_up_i_19__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6564"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_19__0_n_0\
    );
\s2_can_up_i_1__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000FFFE"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(2),
      I4 => \s2_can_up_i_2__0_n_0\,
      O => wc_up
    );
\s2_can_up_i_20__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"ED"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_20__0_n_0\
    );
\s2_can_up_i_21__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"9599"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_21__0_n_0\
    );
\s2_can_up_i_22__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5964"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_22__0_n_0\
    );
\s2_can_up_i_23__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"738C"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_23__0_n_0\
    );
\s2_can_up_i_24__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_up_i_24__0_n_0\
    );
\s2_can_up_i_2__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0028FFFF00280000"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__0_n_7\,
      I1 => s1_ghost_col(0),
      I2 => s1_ghost_row(0),
      I3 => \s2_can_up_reg_i_4__0_n_6\,
      I4 => \s2_can_up_reg_i_3__0_n_5\,
      I5 => \s2_can_up_i_5__0_n_0\,
      O => \s2_can_up_i_2__0_n_0\
    );
\s2_can_up_i_5__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A5870F42020022"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__0_n_6\,
      I1 => \s2_can_up_reg_i_4__0_n_6\,
      I2 => \s2_can_up_reg_i_3__0_n_7\,
      I3 => \s2_can_up_reg_i_4__0_n_5\,
      I4 => \s2_can_up_reg_i_4__0_n_4\,
      I5 => \s2_can_right_i_14__0_n_0\,
      O => \s2_can_up_i_5__0_n_0\
    );
\s2_can_up_i_6__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_up_reg_i_16__0_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_up_i_6__0_n_0\
    );
\s2_can_up_i_9__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__0_n_6\,
      I2 => \s2_can_up_reg_i_16__0_n_5\,
      O => \s2_can_up_i_9__0_n_0\
    );
s2_can_up_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_up,
      Q => s2_can_up
    );
\s2_can_up_reg_i_16__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_16__0_n_0\,
      CO(2) => \s2_can_up_reg_i_16__0_n_1\,
      CO(1) => \s2_can_up_reg_i_16__0_n_2\,
      CO(0) => \s2_can_up_reg_i_16__0_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_18__0_n_0\,
      DI(2) => \s2_can_up_i_19__0_n_0\,
      DI(1) => \s2_can_up_i_20__0_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_1\(0),
      O(2) => \s2_can_up_reg_i_16__0_n_5\,
      O(1) => \s2_can_up_reg_i_16__0_n_6\,
      O(0) => \s2_can_up_reg_i_16__0_n_7\,
      S(3) => \s2_can_up_i_21__0_n_0\,
      S(2) => \s2_can_up_i_22__0_n_0\,
      S(1) => \s2_can_up_i_23__0_n_0\,
      S(0) => \s2_can_up_i_24__0_n_0\
    );
\s2_can_up_reg_i_3__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_4__0_n_0\,
      CO(3 downto 2) => \NLW_s2_can_up_reg_i_3__0_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_up_reg_i_3__0_n_2\,
      CO(0) => \s2_can_up_reg_i_3__0_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_up_i_6__0_n_0\,
      O(3) => \NLW_s2_can_up_reg_i_3__0_O_UNCONNECTED\(3),
      O(2) => \s2_can_up_reg_i_3__0_n_5\,
      O(1) => \s2_can_up_reg_i_3__0_n_6\,
      O(0) => \s2_can_up_reg_i_3__0_n_7\,
      S(3) => '0',
      S(2) => \s2_can_up_reg_i_7__0_n_7\,
      S(1) => \s2_can_up_i_2__0_0\(0),
      S(0) => \s2_can_up_i_9__0_n_0\
    );
\s2_can_up_reg_i_4__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_4__0_n_0\,
      CO(2) => \s2_can_up_reg_i_4__0_n_1\,
      CO(1) => \s2_can_up_reg_i_4__0_n_2\,
      CO(0) => \s2_can_up_reg_i_4__0_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_10__0_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => wc_down5(1),
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_up_reg_i_4__0_n_4\,
      O(2) => \s2_can_up_reg_i_4__0_n_5\,
      O(1) => \s2_can_up_reg_i_4__0_n_6\,
      O(0) => \NLW_s2_can_up_reg_i_4__0_O_UNCONNECTED\(0),
      S(3) => \s2_can_up_i_12__0_n_0\,
      S(2) => \s2_can_up_i_13__0_n_0\,
      S(1) => \s2_can_up_i_14__0_n_0\,
      S(0) => \s2_can_up_i_15__0_n_0\
    );
\s2_can_up_reg_i_7__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_16__0_n_0\,
      CO(3 downto 0) => \NLW_s2_can_up_reg_i_7__0_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_up_reg_i_7__0_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_up_reg_i_7__0_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_up_i_17__0_n_0\
    );
\s2_facing_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(0),
      Q => s2_facing(0)
    );
\s2_facing_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(1),
      Q => s2_facing(1)
    );
s2_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_detected,
      Q => s2_los_detected
    );
\s2_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(0),
      Q => s2_los_dir(0)
    );
\s2_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(1),
      Q => s2_los_dir(1)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_1 is
  port (
    \s1_ghost_row_reg[2]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_1\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ACLK : in STD_LOGIC;
    AR : in STD_LOGIC_VECTOR ( 0 to 0 );
    s1_los_detected_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__1_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s1_los_detected_reg_1 : in STD_LOGIC;
    \s1_los_dir[1]_i_33__1_0\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost3_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[1]_i_6__1_0\ : in STD_LOGIC;
    ghost3_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    s1_los_detected_reg_2 : in STD_LOGIC;
    \s1_los_detected_i_2__1_0\ : in STD_LOGIC;
    \s1_los_detected_i_4__0_0\ : in STD_LOGIC;
    \s1_los_dir[1]_i_2__1_0\ : in STD_LOGIC;
    \s1_los_dir[0]_i_5__1_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_0\ : in STD_LOGIC;
    \s1_los_dir[1]_i_27__1_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_1\ : in STD_LOGIC;
    \s1_los_dir[1]_i_5__1_0\ : in STD_LOGIC;
    \s1_los_dir_reg[1]_2\ : in STD_LOGIC;
    \s1_los_dir[1]_i_6__1_1\ : in STD_LOGIC;
    \s1_los_dir[0]_i_4__1_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \p_0_in__0\ : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_1 : entity is "ghost_top";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_1;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_1 is
  signal \^d\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[0]_i_1__1_n_0\ : STD_LOGIC;
  signal \direction[1]_i_1__1_n_0\ : STD_LOGIC;
  signal los_detected_comb : STD_LOGIC;
  signal los_dir_comb : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal p_1_in : STD_LOGIC_VECTOR ( 5 to 5 );
  signal s1_ghost_col : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_ghost_row : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_los_detected : STD_LOGIC;
  signal \s1_los_detected_i_10__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_11__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_12__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_13__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_14__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_15__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_16__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_17__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_18__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_19__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_20__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_21__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_22__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_23__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_24__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_25__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_26__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_2__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_3__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_4__0_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_5__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_6__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_7__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_8__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_9__1_n_0\ : STD_LOGIC;
  signal s1_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \s1_los_dir[0]_i_10__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_11__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_12__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_13__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_14__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_15__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_16__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_17__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_18__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_19__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_20__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_21__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_22__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_23__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_2__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_3__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_4__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_5__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_6__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_7__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_8__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_9__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_105__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_10__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_11__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_12__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_13__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_14__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_15__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_16__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_17__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_18__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_19__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_20__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_21__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_22__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_23__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_24__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_25__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_26__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_27__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_28__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_29__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_2__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_30__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_31__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_32__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_33__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_34__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_35__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_36__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_37__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_38__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_39__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_3__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_40__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_41__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_42__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_43__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_44__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_45__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_46__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_47__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_48__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_49__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_4__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_50__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_51__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_52__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_53__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_54__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_55__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_56__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_57__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_58__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_59__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_5__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_60__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_61__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_62__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_63__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_64__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_65__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_66__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_67__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_68__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_69__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_6__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_70__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_71__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_72__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_73__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_74__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_75__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_76__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_77__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_78__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_79__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_7__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_80__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_81__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_82__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_83__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_84__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_85__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_86__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_87__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_88__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_89__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_8__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_92__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_93__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_94__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_95__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_96__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_9__1_n_0\ : STD_LOGIC;
  signal s2_can_down : STD_LOGIC;
  signal \s2_can_down_i_10__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_11__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_12__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_13__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_14__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_15__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_17__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_18__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_19__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_20__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_21__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_22__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_23__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_24__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_2__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_4__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_6__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_9__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__1_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__1_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__1_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__1_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__1_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__1_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_4\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__1_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_7__1_n_7\ : STD_LOGIC;
  signal s2_can_left : STD_LOGIC;
  signal \s2_can_left_i_10__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_11__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_12__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_13__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_14__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_15__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_3__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_6__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_8__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_9__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__1_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__1_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__1_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__1_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__1_n_7\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_1\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_4\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__1_n_7\ : STD_LOGIC;
  signal s2_can_right : STD_LOGIC;
  signal \s2_can_right_i_10__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_11__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_12__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_13__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_14__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_15__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_16__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_17__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_18__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_19__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_20__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_21__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_22__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_2__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_3__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_4__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_5__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_6__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_8__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_1\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_2\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_3\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_4\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_5\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_6\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__1_n_7\ : STD_LOGIC;
  signal \s2_can_right_reg_i_9__1_n_7\ : STD_LOGIC;
  signal s2_can_up : STD_LOGIC;
  signal \s2_can_up_i_10__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_12__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_13__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_14__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_15__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_17__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_18__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_19__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_20__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_21__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_22__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_23__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_24__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_2__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_5__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_6__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_9__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__1_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__1_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__1_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__1_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__1_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__1_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_4\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__1_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_7__1_n_7\ : STD_LOGIC;
  signal s2_facing : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal s2_los_detected : STD_LOGIC;
  signal s2_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal wc_down : STD_LOGIC;
  signal wc_down5 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal wc_left : STD_LOGIC;
  signal wc_left01_in : STD_LOGIC;
  signal wc_right : STD_LOGIC;
  signal wc_up : STD_LOGIC;
  signal \wf_dir__1\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \NLW_s2_can_down_reg_i_3__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_down_reg_i_3__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_down_reg_i_7__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_down_reg_i_7__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_left_reg_i_4__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_left_reg_i_4__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_right_reg_i_9__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_right_reg_i_9__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_up_reg_i_3__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_up_reg_i_3__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_up_reg_i_4__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_s2_can_up_reg_i_7__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_up_reg_i_7__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \s1_los_detected_i_10__1\ : label is "soft_lutpair71";
  attribute SOFT_HLUTNM of \s1_los_detected_i_11__1\ : label is "soft_lutpair67";
  attribute SOFT_HLUTNM of \s1_los_detected_i_14__1\ : label is "soft_lutpair62";
  attribute SOFT_HLUTNM of \s1_los_detected_i_15__1\ : label is "soft_lutpair69";
  attribute SOFT_HLUTNM of \s1_los_detected_i_16__1\ : label is "soft_lutpair69";
  attribute SOFT_HLUTNM of \s1_los_detected_i_25__0\ : label is "soft_lutpair68";
  attribute SOFT_HLUTNM of \s1_los_detected_i_26__1\ : label is "soft_lutpair68";
  attribute SOFT_HLUTNM of \s1_los_detected_i_9__1\ : label is "soft_lutpair71";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_10__1\ : label is "soft_lutpair62";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_12__1\ : label is "soft_lutpair58";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_18__1\ : label is "soft_lutpair73";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_19__1\ : label is "soft_lutpair83";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_20__1\ : label is "soft_lutpair73";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_21__1\ : label is "soft_lutpair77";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_22__1\ : label is "soft_lutpair79";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_23__1\ : label is "soft_lutpair60";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_6__1\ : label is "soft_lutpair66";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_105__1\ : label is "soft_lutpair67";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_21__1\ : label is "soft_lutpair82";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_34__1\ : label is "soft_lutpair75";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_35__1\ : label is "soft_lutpair70";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_38__1\ : label is "soft_lutpair63";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_39__1\ : label is "soft_lutpair72";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_41__0\ : label is "soft_lutpair83";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_43__0\ : label is "soft_lutpair72";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_44__1\ : label is "soft_lutpair57";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_46__1\ : label is "soft_lutpair70";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_48__1\ : label is "soft_lutpair81";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_49__1\ : label is "soft_lutpair78";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_51__1\ : label is "soft_lutpair74";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_52__1\ : label is "soft_lutpair63";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_57__1\ : label is "soft_lutpair76";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_58__1\ : label is "soft_lutpair74";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_59__0\ : label is "soft_lutpair59";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_62__0\ : label is "soft_lutpair75";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_63__1\ : label is "soft_lutpair61";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_67__0\ : label is "soft_lutpair78";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_70__1\ : label is "soft_lutpair76";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_71__1\ : label is "soft_lutpair80";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_72__1\ : label is "soft_lutpair61";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_77__1\ : label is "soft_lutpair77";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_79__1\ : label is "soft_lutpair79";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_80__1\ : label is "soft_lutpair60";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_81__1\ : label is "soft_lutpair81";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_82__1\ : label is "soft_lutpair82";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_83__0\ : label is "soft_lutpair58";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_84__1\ : label is "soft_lutpair66";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_86__1\ : label is "soft_lutpair80";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_87__0\ : label is "soft_lutpair59";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_92__0\ : label is "soft_lutpair57";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_3__1\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_5__1\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_left_i_2__1\ : label is "soft_lutpair65";
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_4__1\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_5__1\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_right_i_11__1\ : label is "soft_lutpair64";
  attribute SOFT_HLUTNM of \s2_can_right_i_13__1\ : label is "soft_lutpair56";
  attribute SOFT_HLUTNM of \s2_can_right_i_14__1\ : label is "soft_lutpair65";
  attribute SOFT_HLUTNM of \s2_can_right_i_2__1\ : label is "soft_lutpair64";
  attribute SOFT_HLUTNM of \s2_can_right_i_8__1\ : label is "soft_lutpair56";
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_3__1\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_4__1\ : label is 35;
begin
  D(1 downto 0) <= \^d\(1 downto 0);
\direction[0]_i_1__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(0),
      I1 => s2_los_detected,
      I2 => \wf_dir__1\(0),
      I3 => \p_0_in__0\,
      I4 => \^d\(0),
      O => \direction[0]_i_1__1_n_0\
    );
\direction[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FAAA0032FABB3332"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__1\(0)
    );
\direction[1]_i_1__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(1),
      I1 => s2_los_detected,
      I2 => \wf_dir__1\(1),
      I3 => \p_0_in__0\,
      I4 => \^d\(1),
      O => \direction[1]_i_1__1_n_0\
    );
\direction[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F555FF31F0113031"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__1\(1)
    );
\direction_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[0]_i_1__1_n_0\,
      Q => \^d\(0)
    );
\direction_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[1]_i_1__1_n_0\,
      Q => \^d\(1)
    );
\s1_ghost_col_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_col(0),
      Q => s1_ghost_col(0)
    );
\s1_ghost_col_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_col(1),
      Q => s1_ghost_col(1)
    );
\s1_ghost_col_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_col(2),
      Q => s1_ghost_col(2)
    );
\s1_ghost_col_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_col(3),
      Q => s1_ghost_col(3)
    );
\s1_ghost_row_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_row(0),
      Q => s1_ghost_row(0)
    );
\s1_ghost_row_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_row(1),
      Q => s1_ghost_row(1)
    );
\s1_ghost_row_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_row(2),
      Q => s1_ghost_row(2)
    );
\s1_ghost_row_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => ghost3_row(3),
      Q => s1_ghost_row(3)
    );
\s1_los_detected_i_10__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      I3 => ghost3_col(0),
      O => \s1_los_detected_i_10__1_n_0\
    );
\s1_los_detected_i_11__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost3_row(3),
      I1 => ghost3_row(2),
      O => \s1_los_detected_i_11__1_n_0\
    );
\s1_los_detected_i_12__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => \s1_los_detected_i_4__0_0\,
      I1 => \s1_los_detected_i_22__1_n_0\,
      I2 => ghost3_col(2),
      I3 => ghost3_col(1),
      I4 => ghost3_col(3),
      I5 => ghost3_col(0),
      O => \s1_los_detected_i_12__1_n_0\
    );
\s1_los_detected_i_13__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF0F00DF0D"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => rover_row(2),
      I2 => ghost3_row(3),
      I3 => rover_row(3),
      I4 => \s1_los_detected_i_23__1_n_0\,
      I5 => \s1_los_detected_i_24__1_n_0\,
      O => \s1_los_detected_i_13__1_n_0\
    );
\s1_los_detected_i_14__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"303E"
    )
        port map (
      I0 => ghost3_col(1),
      I1 => ghost3_col(3),
      I2 => ghost3_col(2),
      I3 => ghost3_col(0),
      O => \s1_los_detected_i_14__1_n_0\
    );
\s1_los_detected_i_15__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost3_row(3),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => ghost3_row(2),
      O => \s1_los_detected_i_15__1_n_0\
    );
\s1_los_detected_i_16__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(3),
      I2 => ghost3_row(1),
      I3 => ghost3_row(0),
      O => \s1_los_detected_i_16__1_n_0\
    );
\s1_los_detected_i_17__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF070707"
    )
        port map (
      I0 => rover_row(1),
      I1 => rover_row(0),
      I2 => rover_row(3),
      I3 => ghost3_row(1),
      I4 => ghost3_row(2),
      I5 => ghost3_row(3),
      O => \s1_los_detected_i_17__0_n_0\
    );
\s1_los_detected_i_18__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BEFFFFBEFFFFFFFF"
    )
        port map (
      I0 => \s1_los_detected_i_25__0_n_0\,
      I1 => ghost3_col(0),
      I2 => rover_col(0),
      I3 => ghost3_col(3),
      I4 => rover_col(3),
      I5 => \s1_los_detected_i_26__1_n_0\,
      O => \s1_los_detected_i_18__1_n_0\
    );
\s1_los_detected_i_19__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => rover_row(0),
      I1 => ghost3_row(0),
      I2 => ghost3_row(2),
      I3 => rover_row(2),
      I4 => ghost3_row(1),
      I5 => rover_row(1),
      O => \s1_los_detected_i_19__1_n_0\
    );
\s1_los_detected_i_1__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEFFFE"
    )
        port map (
      I0 => los_dir_comb(1),
      I1 => \s1_los_detected_i_2__1_n_0\,
      I2 => \s1_los_detected_i_3__1_n_0\,
      I3 => s1_los_detected_reg_1,
      I4 => \s1_los_detected_i_4__0_n_0\,
      O => los_detected_comb
    );
\s1_los_detected_i_20__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FEFFFFFFFEFEFEFE"
    )
        port map (
      I0 => ghost3_row(3),
      I1 => ghost3_row(2),
      I2 => ghost3_row(1),
      I3 => rover_row(1),
      I4 => rover_row(0),
      I5 => s1_los_detected_reg_2,
      O => \s1_los_detected_i_20__0_n_0\
    );
\s1_los_detected_i_21__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CECECEEFCECEEFFF"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(3),
      I2 => \s1_los_dir[1]_i_44__1_n_0\,
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_21__1_n_0\
    );
\s1_los_detected_i_22__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF15FFFF1515"
    )
        port map (
      I0 => ghost3_row(3),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_22__1_n_0\
    );
\s1_los_detected_i_23__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => rover_row(0),
      I2 => rover_row(2),
      I3 => ghost3_row(2),
      I4 => rover_row(1),
      I5 => ghost3_row(1),
      O => \s1_los_detected_i_23__1_n_0\
    );
\s1_los_detected_i_24__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEAAAAAAAAAAA"
    )
        port map (
      I0 => \s1_los_detected_i_18__1_n_0\,
      I1 => \s1_los_detected_i_10__1_n_0\,
      I2 => ghost3_row(1),
      I3 => ghost3_row(2),
      I4 => ghost3_row(3),
      I5 => \s1_los_detected_i_2__1_0\,
      O => \s1_los_detected_i_24__1_n_0\
    );
\s1_los_detected_i_25__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"44F4"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      I3 => rover_col(1),
      O => \s1_los_detected_i_25__0_n_0\
    );
\s1_los_detected_i_26__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"D0DD"
    )
        port map (
      I0 => rover_col(1),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => rover_col(2),
      O => \s1_los_detected_i_26__1_n_0\
    );
\s1_los_detected_i_2__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000000000AB"
    )
        port map (
      I0 => \s1_los_detected_i_5__1_n_0\,
      I1 => rover_row(2),
      I2 => rover_row(3),
      I3 => \s1_los_detected_i_6__1_n_0\,
      I4 => \s1_los_detected_i_7__1_n_0\,
      I5 => \s1_los_detected_i_8__1_n_0\,
      O => \s1_los_detected_i_2__1_n_0\
    );
\s1_los_detected_i_3__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7077FFFF50555055"
    )
        port map (
      I0 => \s1_los_detected_i_9__1_n_0\,
      I1 => ghost3_row(0),
      I2 => rover_row(0),
      I3 => \s1_los_detected_i_10__1_n_0\,
      I4 => ghost3_row(1),
      I5 => \s1_los_detected_i_11__1_n_0\,
      O => \s1_los_detected_i_3__1_n_0\
    );
\s1_los_detected_i_4__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFF1F1F1F1F1F1F1"
    )
        port map (
      I0 => \s1_los_detected_i_12__1_n_0\,
      I1 => \s1_los_detected_i_11__1_n_0\,
      I2 => \s1_los_detected_i_13__1_n_0\,
      I3 => \s1_los_detected_i_14__1_n_0\,
      I4 => \s1_los_detected_i_15__1_n_0\,
      I5 => s1_los_detected_reg_2,
      O => \s1_los_detected_i_4__0_n_0\
    );
\s1_los_detected_i_5__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => \s1_los_detected_i_16__1_n_0\,
      I1 => \s1_los_detected_i_17__0_n_0\,
      I2 => ghost3_col(2),
      I3 => ghost3_col(1),
      I4 => ghost3_col(3),
      I5 => ghost3_col(0),
      O => \s1_los_detected_i_5__1_n_0\
    );
\s1_los_detected_i_6__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000001D1C0000"
    )
        port map (
      I0 => ghost3_col(0),
      I1 => ghost3_col(2),
      I2 => ghost3_col(3),
      I3 => ghost3_col(1),
      I4 => \s1_los_detected_i_11__1_n_0\,
      I5 => \s1_los_detected_i_2__1_0\,
      O => \s1_los_detected_i_6__1_n_0\
    );
\s1_los_detected_i_7__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BABABABAFBFBBAFB"
    )
        port map (
      I0 => \s1_los_detected_i_18__1_n_0\,
      I1 => rover_row(3),
      I2 => ghost3_row(3),
      I3 => rover_row(2),
      I4 => ghost3_row(2),
      I5 => \s1_los_detected_i_19__1_n_0\,
      O => \s1_los_detected_i_7__1_n_0\
    );
\s1_los_detected_i_8__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7000000005550550"
    )
        port map (
      I0 => \s1_los_detected_i_20__0_n_0\,
      I1 => \s1_los_detected_i_21__1_n_0\,
      I2 => ghost3_col(3),
      I3 => ghost3_col(2),
      I4 => ghost3_col(1),
      I5 => ghost3_col(0),
      O => \s1_los_detected_i_8__1_n_0\
    );
\s1_los_detected_i_9__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"805E"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => ghost3_col(0),
      O => \s1_los_detected_i_9__1_n_0\
    );
s1_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_detected_comb,
      Q => s1_los_detected
    );
\s1_los_dir[0]_i_10__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFA8FFFF"
    )
        port map (
      I0 => ghost3_col(2),
      I1 => ghost3_col(1),
      I2 => ghost3_col(0),
      I3 => ghost3_col(3),
      I4 => \s1_los_dir_reg[1]_1\,
      O => \s1_los_dir[0]_i_10__1_n_0\
    );
\s1_los_dir[0]_i_11__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22288888E22BB88B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_54__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[0]_i_21__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[0]_i_19__1_n_0\,
      O => \s1_los_dir[0]_i_11__1_n_0\
    );
\s1_los_dir[0]_i_12__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEEEEA"
    )
        port map (
      I0 => \s1_los_dir[1]_i_27__1_0\,
      I1 => ghost3_col(3),
      I2 => ghost3_col(2),
      I3 => ghost3_col(1),
      I4 => ghost3_col(0),
      O => \s1_los_dir[0]_i_12__1_n_0\
    );
\s1_los_dir[0]_i_13__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEBBBBB2EE88BB8"
    )
        port map (
      I0 => \s1_los_dir[1]_i_65__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[0]_i_22__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[1]_i_48__1_n_0\,
      O => \s1_los_dir[0]_i_13__1_n_0\
    );
\s1_los_dir[0]_i_14__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00FF101030302020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_68__1_n_0\,
      I2 => \s1_los_dir[1]_i_69__1_n_0\,
      I3 => \s1_los_dir[1]_i_48__1_n_0\,
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      I5 => \s1_los_dir[0]_i_4__1_0\(0),
      O => \s1_los_dir[0]_i_14__1_n_0\
    );
\s1_los_dir[0]_i_15__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFF111"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost3_col(0),
      I3 => ghost3_col(1),
      I4 => ghost3_col(2),
      I5 => ghost3_col(3),
      O => \s1_los_dir[0]_i_15__1_n_0\
    );
\s1_los_dir[0]_i_16__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"828882888288BEBB"
    )
        port map (
      I0 => \s1_los_dir[1]_i_50__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_33__1_0\(3),
      I3 => \s1_los_dir[0]_i_23__1_n_0\,
      I4 => \s1_los_dir[1]_i_48__1_n_0\,
      I5 => \s1_los_dir[1]_i_47__1_n_0\,
      O => \s1_los_dir[0]_i_16__1_n_0\
    );
\s1_los_dir[0]_i_17__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2888288828882B8B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_45__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_40__1_n_0\,
      I4 => ghost3_row(1),
      I5 => ghost3_row(0),
      O => \s1_los_dir[0]_i_17__1_n_0\
    );
\s1_los_dir[0]_i_18__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"AAA9"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      O => \s1_los_dir[0]_i_18__1_n_0\
    );
\s1_los_dir[0]_i_19__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      O => \s1_los_dir[0]_i_19__1_n_0\
    );
\s1_los_dir[0]_i_1__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \s1_los_dir[0]_i_2__1_n_0\,
      I1 => \s1_los_detected_i_2__1_n_0\,
      O => los_dir_comb(0)
    );
\s1_los_dir[0]_i_20__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0332"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => ghost3_row(1),
      O => \s1_los_dir[0]_i_20__1_n_0\
    );
\s1_los_dir[0]_i_21__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      O => \s1_los_dir[0]_i_21__1_n_0\
    );
\s1_los_dir[0]_i_22__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0054"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[0]_i_22__1_n_0\
    );
\s1_los_dir[0]_i_23__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0F0FFFFE"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[0]_i_23__1_n_0\
    );
\s1_los_dir[0]_i_2__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_4__1_n_0\,
      I1 => \s1_los_dir[0]_i_3__1_n_0\,
      I2 => \s1_los_dir[0]_i_4__1_n_0\,
      I3 => \s1_los_dir[1]_i_19__1_n_0\,
      I4 => \s1_los_dir[0]_i_5__1_n_0\,
      I5 => \s1_los_dir[0]_i_6__1_n_0\,
      O => \s1_los_dir[0]_i_2__1_n_0\
    );
\s1_los_dir[0]_i_3__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7707770700007707"
    )
        port map (
      I0 => \s1_los_dir[0]_i_7__1_n_0\,
      I1 => \s1_los_dir[0]_i_8__1_n_0\,
      I2 => \s1_los_dir[0]_i_9__1_n_0\,
      I3 => \s1_los_dir[0]_i_10__1_n_0\,
      I4 => \s1_los_dir[0]_i_11__1_n_0\,
      I5 => \s1_los_dir[0]_i_12__1_n_0\,
      O => \s1_los_dir[0]_i_3__1_n_0\
    );
\s1_los_dir[0]_i_4__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF04FF04FFFFFF04"
    )
        port map (
      I0 => \s1_los_dir[0]_i_13__1_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_34__1_n_0\,
      I3 => \s1_los_dir[1]_i_71__1_n_0\,
      I4 => \s1_los_dir[0]_i_14__1_n_0\,
      I5 => \s1_los_dir[1]_i_66__1_n_0\,
      O => \s1_los_dir[0]_i_4__1_n_0\
    );
\s1_los_dir[0]_i_5__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"44F444F4FFFF44F4"
    )
        port map (
      I0 => \s1_los_dir[0]_i_15__1_n_0\,
      I1 => \s1_los_dir[0]_i_16__1_n_0\,
      I2 => \s1_los_dir[0]_i_17__1_n_0\,
      I3 => \s1_los_dir[1]_i_46__1_n_0\,
      I4 => \s1_los_dir[1]_i_11__1_n_0\,
      I5 => \s1_los_dir[1]_i_10__1_n_0\,
      O => \s1_los_dir[0]_i_5__1_n_0\
    );
\s1_los_dir[0]_i_6__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0008"
    )
        port map (
      I0 => \s1_los_dir[1]_i_9__1_n_0\,
      I1 => \s1_los_dir[1]_i_6__1_0\,
      I2 => ghost3_col(2),
      I3 => ghost3_col(3),
      O => \s1_los_dir[0]_i_6__1_n_0\
    );
\s1_los_dir[0]_i_7__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0100000001010101"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2__1_0\,
      O => \s1_los_dir[0]_i_7__1_n_0\
    );
\s1_los_dir[0]_i_8__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"38AAAE3C08AAA200"
    )
        port map (
      I0 => \s1_los_dir[1]_i_61__0_n_0\,
      I1 => \s1_los_dir[0]_i_18__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_40__1_n_0\,
      I4 => \s1_los_dir[1]_i_37__1_n_0\,
      I5 => \s1_los_dir[1]_i_44__1_n_0\,
      O => \s1_los_dir[0]_i_8__1_n_0\
    );
\s1_los_dir[0]_i_9__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7D3C3CDD41000011"
    )
        port map (
      I0 => \s1_los_dir[0]_i_19__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_40__1_n_0\,
      I3 => \s1_los_dir[1]_i_38__1_n_0\,
      I4 => \s1_los_dir[0]_i_20__1_n_0\,
      I5 => \s1_los_dir[1]_i_55__0_n_0\,
      O => \s1_los_dir[0]_i_9__1_n_0\
    );
\s1_los_dir[1]_i_105__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6FF6"
    )
        port map (
      I0 => rover_row(3),
      I1 => ghost3_row(3),
      I2 => rover_row(2),
      I3 => ghost3_row(2),
      O => \s1_los_dir[1]_i_105__1_n_0\
    );
\s1_los_dir[1]_i_10__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F111FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(0),
      I1 => rover_col(1),
      I2 => ghost3_col(2),
      I3 => ghost3_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_10__1_n_0\
    );
\s1_los_dir[1]_i_11__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"B2B88B8B82888888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_42__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_43__0_n_0\,
      I3 => \s1_los_dir[1]_i_40__1_n_0\,
      I4 => \s1_los_dir[1]_i_38__1_n_0\,
      I5 => \s1_los_dir[1]_i_41__0_n_0\,
      O => \s1_los_dir[1]_i_11__1_n_0\
    );
\s1_los_dir[1]_i_12__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__1_n_0\,
      I1 => \s1_los_dir[1]_i_40__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_37__1_n_0\,
      I4 => \s1_los_dir[1]_i_45__1_n_0\,
      I5 => \s1_los_dir[1]_i_46__1_n_0\,
      O => \s1_los_dir[1]_i_12__1_n_0\
    );
\s1_los_dir[1]_i_13__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__1_n_0\,
      I1 => \s1_los_dir[1]_i_48__1_n_0\,
      I2 => \s1_los_dir[1]_i_49__1_n_0\,
      I3 => \s1_los_dir[1]_i_50__1_n_0\,
      I4 => \s1_los_dir[1]_i_51__1_n_0\,
      I5 => \s1_los_dir[1]_i_2__1_0\,
      O => \s1_los_dir[1]_i_13__1_n_0\
    );
\s1_los_dir[1]_i_14__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__1_n_0\,
      I1 => \s1_los_dir[1]_i_53__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_54__1_n_0\,
      I4 => \s1_los_dir[1]_i_35__1_n_0\,
      I5 => \s1_los_dir[1]_i_27__1_0\,
      O => \s1_los_dir[1]_i_14__1_n_0\
    );
\s1_los_dir[1]_i_15__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55__0_n_0\,
      I1 => \s1_los_dir[1]_i_56__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_57__1_n_0\,
      I4 => \s1_los_dir_reg[1]_1\,
      I5 => \s1_los_dir[1]_i_58__1_n_0\,
      O => \s1_los_dir[1]_i_15__1_n_0\
    );
\s1_los_dir[1]_i_16__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF417DFFFFFFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_60__1_n_0\,
      I3 => \s1_los_dir[1]_i_61__0_n_0\,
      I4 => \s1_los_dir[1]_i_5__1_0\,
      I5 => \s1_los_dir[1]_i_62__0_n_0\,
      O => \s1_los_dir[1]_i_16__1_n_0\
    );
\s1_los_dir[1]_i_17__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0400000404444404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_34__1_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_63__1_n_0\,
      I3 => \s1_los_dir[1]_i_64__1_n_0\,
      I4 => \s1_los_dir[1]_i_37__1_n_0\,
      I5 => \s1_los_dir[1]_i_65__1_n_0\,
      O => \s1_los_dir[1]_i_17__1_n_0\
    );
\s1_los_dir[1]_i_18__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_66__1_n_0\,
      I1 => \s1_los_dir[1]_i_67__0_n_0\,
      I2 => \s1_los_dir[1]_i_68__1_n_0\,
      I3 => \s1_los_dir[1]_i_69__1_n_0\,
      I4 => \s1_los_dir[1]_i_70__1_n_0\,
      I5 => \s1_los_dir[1]_i_71__1_n_0\,
      O => \s1_los_dir[1]_i_18__1_n_0\
    );
\s1_los_dir[1]_i_19__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_72__1_n_0\,
      I1 => \s1_los_dir[1]_i_73__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_74__1_n_0\,
      I4 => \s1_los_dir[1]_i_75__1_n_0\,
      O => \s1_los_dir[1]_i_19__1_n_0\
    );
\s1_los_dir[1]_i_1__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0404040404FF0404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_2__1_n_0\,
      I1 => \s1_los_dir[1]_i_3__1_n_0\,
      I2 => \s1_los_dir[1]_i_4__1_n_0\,
      I3 => \s1_los_dir[1]_i_5__1_n_0\,
      I4 => \s1_los_dir[1]_i_6__1_n_0\,
      I5 => \s1_los_dir[1]_i_7__1_n_0\,
      O => los_dir_comb(1)
    );
\s1_los_dir[1]_i_20__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_76__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_77__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[1]_i_41__0_n_0\,
      O => \s1_los_dir[1]_i_20__0_n_0\
    );
\s1_los_dir[1]_i_21__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"15"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      O => \s1_los_dir[1]_i_21__1_n_0\
    );
\s1_los_dir[1]_i_22__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_78__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_79__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[1]_i_44__1_n_0\,
      O => \s1_los_dir[1]_i_22__0_n_0\
    );
\s1_los_dir[1]_i_23__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost3_col(2),
      I3 => ghost3_col(1),
      I4 => ghost3_col(0),
      I5 => ghost3_col(3),
      O => \s1_los_dir[1]_i_23__0_n_0\
    );
\s1_los_dir[1]_i_24__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF01FFFFFFFF"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => \s1_los_dir[1]_i_2__1_0\,
      O => \s1_los_dir[1]_i_24__1_n_0\
    );
\s1_los_dir[1]_i_25__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEBEBBBB22828888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_74__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_80__1_n_0\,
      I3 => \s1_los_dir[1]_i_81__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[1]_i_72__1_n_0\,
      O => \s1_los_dir[1]_i_25__1_n_0\
    );
\s1_los_dir[1]_i_26__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__1_n_0\,
      I1 => \s1_los_dir[1]_i_48__1_n_0\,
      I2 => \s1_los_dir[1]_i_49__1_n_0\,
      I3 => \s1_los_dir[1]_i_50__1_n_0\,
      I4 => \s1_los_dir[1]_i_5__1_0\,
      I5 => \s1_los_dir[1]_i_82__1_n_0\,
      O => \s1_los_dir[1]_i_26__1_n_0\
    );
\s1_los_dir[1]_i_27__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__1_n_0\,
      I1 => \s1_los_dir[1]_i_40__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_37__1_n_0\,
      I4 => \s1_los_dir[1]_i_45__1_n_0\,
      I5 => \s1_los_dir[1]_i_83__0_n_0\,
      O => \s1_los_dir[1]_i_27__1_n_0\
    );
\s1_los_dir[1]_i_28__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BE82000000000000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__1_n_0\,
      I1 => \s1_los_dir[1]_i_53__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_54__1_n_0\,
      I4 => \s1_los_dir_reg[1]_0\,
      I5 => \s1_los_dir[1]_i_84__1_n_0\,
      O => \s1_los_dir[1]_i_28__1_n_0\
    );
\s1_los_dir[1]_i_29__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55__0_n_0\,
      I1 => \s1_los_dir[1]_i_56__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_57__1_n_0\,
      I4 => \s1_los_dir[1]_i_6__1_0\,
      I5 => \s1_los_dir[1]_i_21__1_n_0\,
      O => \s1_los_dir[1]_i_29__1_n_0\
    );
\s1_los_dir[1]_i_2__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_8__1_n_0\,
      I1 => \s1_los_dir[1]_i_9__1_n_0\,
      I2 => \s1_los_dir[1]_i_10__1_n_0\,
      I3 => \s1_los_dir[1]_i_11__1_n_0\,
      I4 => \s1_los_dir[1]_i_12__1_n_0\,
      I5 => \s1_los_dir[1]_i_13__1_n_0\,
      O => \s1_los_dir[1]_i_2__1_n_0\
    );
\s1_los_dir[1]_i_30__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFBE82FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_63__1_n_0\,
      I1 => \s1_los_dir[1]_i_64__1_n_0\,
      I2 => \s1_los_dir[1]_i_37__1_n_0\,
      I3 => \s1_los_dir[1]_i_65__1_n_0\,
      I4 => ghost3_col(3),
      I5 => \s1_los_dir_reg[1]_2\,
      O => \s1_los_dir[1]_i_30__1_n_0\
    );
\s1_los_dir[1]_i_31__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_60__1_n_0\,
      I3 => \s1_los_dir[1]_i_61__0_n_0\,
      I4 => \s1_los_dir[1]_i_6__1_1\,
      I5 => \s1_los_dir[1]_i_51__1_n_0\,
      O => \s1_los_dir[1]_i_31__1_n_0\
    );
\s1_los_dir[1]_i_32__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_85__1_n_0\,
      I1 => \s1_los_dir[1]_i_67__0_n_0\,
      I2 => \s1_los_dir[1]_i_68__1_n_0\,
      I3 => \s1_los_dir[1]_i_69__1_n_0\,
      I4 => \s1_los_dir[1]_i_70__1_n_0\,
      I5 => \s1_los_dir[1]_i_86__1_n_0\,
      O => \s1_los_dir[1]_i_32__1_n_0\
    );
\s1_los_dir[1]_i_33__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000004FF44004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_87__0_n_0\,
      I1 => \s1_los_dir[1]_i_41__0_n_0\,
      I2 => \s1_los_dir[1]_i_88__1_n_0\,
      I3 => \s1_los_dir[1]_i_37__1_n_0\,
      I4 => \s1_los_dir[1]_i_42__1_n_0\,
      I5 => \s1_los_dir[1]_i_89__1_n_0\,
      O => \s1_los_dir[1]_i_33__1_n_0\
    );
\s1_los_dir[1]_i_34__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF80"
    )
        port map (
      I0 => ghost3_col(0),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => ghost3_col(3),
      O => \s1_los_dir[1]_i_34__1_n_0\
    );
\s1_los_dir[1]_i_35__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FF"
    )
        port map (
      I0 => ghost3_col(0),
      I1 => ghost3_col(1),
      I2 => ghost3_col(2),
      I3 => ghost3_col(3),
      O => \s1_los_dir[1]_i_35__1_n_0\
    );
\s1_los_dir[1]_i_36__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"27270F0D04A40082"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_36__0_n_0\
    );
\s1_los_dir[1]_i_37__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555655"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__1_0\(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => \s1_los_dir[1]_i_33__1_0\(3),
      I3 => \s1_los_dir[1]_i_44__1_n_0\,
      I4 => \s1_los_dir[1]_i_33__1_0\(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[1]_i_37__1_n_0\
    );
\s1_los_dir[1]_i_38__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"55555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(2),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(0),
      I4 => ghost3_row(1),
      O => \s1_los_dir[1]_i_38__1_n_0\
    );
\s1_los_dir[1]_i_39__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[1]_i_39__1_n_0\
    );
\s1_los_dir[1]_i_3__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_14__1_n_0\,
      I1 => \s1_los_dir[1]_i_15__1_n_0\,
      I2 => \s1_los_dir[1]_i_16__1_n_0\,
      I3 => \s1_los_dir[1]_i_17__1_n_0\,
      I4 => \s1_los_dir[1]_i_18__1_n_0\,
      I5 => \s1_los_dir[1]_i_19__1_n_0\,
      O => \s1_los_dir[1]_i_3__1_n_0\
    );
\s1_los_dir[1]_i_40__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(0),
      I4 => ghost3_row(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[1]_i_40__1_n_0\
    );
\s1_los_dir[1]_i_41__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      O => \s1_los_dir[1]_i_41__0_n_0\
    );
\s1_los_dir[1]_i_42__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0013401780DCA2D4"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => ghost3_row(0),
      I4 => ghost3_row(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_42__1_n_0\
    );
\s1_los_dir[1]_i_43__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      O => \s1_los_dir[1]_i_43__0_n_0\
    );
\s1_los_dir[1]_i_44__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => ghost3_row(1),
      O => \s1_los_dir[1]_i_44__1_n_0\
    );
\s1_los_dir[1]_i_45__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6022355C000835CC"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => ghost3_row(0),
      I5 => ghost3_row(1),
      O => \s1_los_dir[1]_i_45__1_n_0\
    );
\s1_los_dir[1]_i_46__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E0FF"
    )
        port map (
      I0 => ghost3_col(1),
      I1 => ghost3_col(2),
      I2 => ghost3_col(3),
      I3 => \s1_los_dir[0]_i_5__1_0\,
      O => \s1_los_dir[1]_i_46__1_n_0\
    );
\s1_los_dir[1]_i_47__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_47__1_n_0\
    );
\s1_los_dir[1]_i_48__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => ghost3_row(1),
      O => \s1_los_dir[1]_i_48__1_n_0\
    );
\s1_los_dir[1]_i_49__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5666"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__1_0\(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(3),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_49__1_n_0\
    );
\s1_los_dir[1]_i_4__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF10101010101010"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => \s1_los_dir_reg[1]_0\,
      I2 => \s1_los_dir[1]_i_20__0_n_0\,
      I3 => \s1_los_dir[1]_i_21__1_n_0\,
      I4 => \s1_los_dir_reg[1]_2\,
      I5 => \s1_los_dir[1]_i_22__0_n_0\,
      O => \s1_los_dir[1]_i_4__1_n_0\
    );
\s1_los_dir[1]_i_50__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5CCC22A05CC60800"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => ghost3_row(0),
      I5 => ghost3_row(1),
      O => \s1_los_dir[1]_i_50__1_n_0\
    );
\s1_los_dir[1]_i_51__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      I3 => ghost3_col(0),
      O => \s1_los_dir[1]_i_51__1_n_0\
    );
\s1_los_dir[1]_i_52__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"44400004"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_52__1_n_0\
    );
\s1_los_dir[1]_i_53__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => ghost3_row(1),
      I2 => ghost3_row(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_53__1_n_0\
    );
\s1_los_dir[1]_i_54__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"083009B52AA82AA0"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(2),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => ghost3_row(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(3),
      O => \s1_los_dir[1]_i_54__1_n_0\
    );
\s1_los_dir[1]_i_55__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1F0C0054FF00E000"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      I5 => \s1_los_dir[1]_i_33__1_0\(3),
      O => \s1_los_dir[1]_i_55__0_n_0\
    );
\s1_los_dir[1]_i_56__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF880001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(0),
      I1 => ghost3_row(1),
      I2 => ghost3_row(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      I5 => \s1_los_dir[1]_i_33__1_0\(3),
      O => \s1_los_dir[1]_i_56__1_n_0\
    );
\s1_los_dir[1]_i_57__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0802"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => ghost3_row(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_57__1_n_0\
    );
\s1_los_dir[1]_i_58__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(0),
      I2 => ghost3_col(1),
      I3 => ghost3_col(2),
      O => \s1_los_dir[1]_i_58__1_n_0\
    );
\s1_los_dir[1]_i_59__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000095"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(2),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(0),
      I4 => ghost3_row(1),
      O => \s1_los_dir[1]_i_59__0_n_0\
    );
\s1_los_dir[1]_i_5__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_23__0_n_0\,
      I1 => \s1_los_dir[1]_i_9__1_n_0\,
      I2 => \s1_los_dir[1]_i_24__1_n_0\,
      I3 => \s1_los_dir[1]_i_25__1_n_0\,
      I4 => \s1_los_dir[1]_i_26__1_n_0\,
      I5 => \s1_los_dir[1]_i_27__1_n_0\,
      O => \s1_los_dir[1]_i_5__1_n_0\
    );
\s1_los_dir[1]_i_60__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1155115511551554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => ghost3_row(0),
      I5 => ghost3_row(1),
      O => \s1_los_dir[1]_i_60__1_n_0\
    );
\s1_los_dir[1]_i_61__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"078DA4822F0D0002"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => ghost3_row(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      I5 => ghost3_row(1),
      O => \s1_los_dir[1]_i_61__0_n_0\
    );
\s1_los_dir[1]_i_62__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => ghost3_col(2),
      I1 => ghost3_col(1),
      I2 => ghost3_col(3),
      O => \s1_los_dir[1]_i_62__0_n_0\
    );
\s1_los_dir[1]_i_63__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3F7FFFBF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_63__1_n_0\
    );
\s1_los_dir[1]_i_64__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000111155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_64__1_n_0\
    );
\s1_los_dir[1]_i_65__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A5FBC5B3C5F7C5FF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(2),
      I1 => \s1_los_dir[1]_i_33__1_0\(3),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(0),
      I5 => ghost3_row(1),
      O => \s1_los_dir[1]_i_65__1_n_0\
    );
\s1_los_dir[1]_i_66__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => ghost3_col(2),
      I1 => ghost3_col(1),
      I2 => ghost3_col(0),
      I3 => ghost3_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_66__1_n_0\
    );
\s1_los_dir[1]_i_67__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A9"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__1_0\(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(3),
      I2 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_67__0_n_0\
    );
\s1_los_dir[1]_i_68__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CCC0CCC800033333"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => \s1_los_dir[1]_i_33__1_0\(3),
      I2 => \s1_los_dir[1]_i_33__1_0\(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(1),
      I4 => ghost3_row(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_68__1_n_0\
    );
\s1_los_dir[1]_i_69__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F6BFF48FF49FFC0F"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(3),
      I3 => \s1_los_dir[1]_i_33__1_0\(2),
      I4 => ghost3_row(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[1]_i_69__1_n_0\
    );
\s1_los_dir[1]_i_6__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_28__1_n_0\,
      I1 => \s1_los_dir[1]_i_29__1_n_0\,
      I2 => \s1_los_dir[1]_i_30__1_n_0\,
      I3 => \s1_los_dir[1]_i_31__1_n_0\,
      I4 => \s1_los_dir[1]_i_32__1_n_0\,
      I5 => \s1_los_dir[1]_i_33__1_n_0\,
      O => \s1_los_dir[1]_i_6__1_n_0\
    );
\s1_los_dir[1]_i_70__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__1_0\(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(2),
      I2 => ghost3_row(1),
      I3 => ghost3_row(0),
      O => \s1_los_dir[1]_i_70__1_n_0\
    );
\s1_los_dir[1]_i_71__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92__0_n_0\,
      I1 => \s1_los_dir[1]_i_93__0_n_0\,
      I2 => \s1_los_dir[1]_i_94__1_n_0\,
      O => \s1_los_dir[1]_i_71__1_n_0\
    );
\s1_los_dir[1]_i_72__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"20001030"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(1),
      I2 => ghost3_row(0),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_72__1_n_0\
    );
\s1_los_dir[1]_i_73__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0011555555555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(1),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_73__1_n_0\
    );
\s1_los_dir[1]_i_74__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"74F0D2D2202A0020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(2),
      I3 => ghost3_row(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(1),
      I5 => ghost3_row(0),
      O => \s1_los_dir[1]_i_74__1_n_0\
    );
\s1_los_dir[1]_i_75__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFF4"
    )
        port map (
      I0 => rover_col(1),
      I1 => \s1_los_dir[1]_i_2__1_0\,
      I2 => ghost3_col(0),
      I3 => ghost3_col(3),
      I4 => ghost3_col(1),
      I5 => ghost3_col(2),
      O => \s1_los_dir[1]_i_75__1_n_0\
    );
\s1_los_dir[1]_i_76__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"02021F5F002AD050"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => ghost3_row(1),
      I4 => ghost3_row(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_76__1_n_0\
    );
\s1_los_dir[1]_i_77__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(0),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => ghost3_row(1),
      I3 => ghost3_row(0),
      O => \s1_los_dir[1]_i_77__1_n_0\
    );
\s1_los_dir[1]_i_78__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0727270F2404A400"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(3),
      I1 => \s1_los_dir[1]_i_33__1_0\(1),
      I2 => ghost3_row(0),
      I3 => ghost3_row(1),
      I4 => \s1_los_dir[1]_i_33__1_0\(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_78__0_n_0\
    );
\s1_los_dir[1]_i_79__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0154"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(1),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      O => \s1_los_dir[1]_i_79__1_n_0\
    );
\s1_los_dir[1]_i_7__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"404040FF40404040"
    )
        port map (
      I0 => \s1_los_dir_reg[1]_1\,
      I1 => \s1_los_dir[1]_i_34__1_n_0\,
      I2 => \s1_los_dir[1]_i_22__0_n_0\,
      I3 => rover_col(3),
      I4 => \s1_los_dir[1]_i_35__1_n_0\,
      I5 => \s1_los_dir[1]_i_20__0_n_0\,
      O => \s1_los_dir[1]_i_7__1_n_0\
    );
\s1_los_dir[1]_i_80__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F0E00001"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_80__1_n_0\
    );
\s1_los_dir[1]_i_81__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(0),
      I1 => ghost3_row(0),
      I2 => ghost3_row(1),
      O => \s1_los_dir[1]_i_81__1_n_0\
    );
\s1_los_dir[1]_i_82__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost3_col(2),
      I1 => ghost3_col(3),
      O => \s1_los_dir[1]_i_82__1_n_0\
    );
\s1_los_dir[1]_i_83__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5777FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_27__1_0\,
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      I3 => ghost3_col(0),
      I4 => ghost3_col(3),
      O => \s1_los_dir[1]_i_83__0_n_0\
    );
\s1_los_dir[1]_i_84__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A8"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(2),
      I2 => ghost3_col(1),
      O => \s1_los_dir[1]_i_84__1_n_0\
    );
\s1_los_dir[1]_i_85__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(1),
      I2 => rover_col(0),
      I3 => rover_col(3),
      I4 => ghost3_col(3),
      I5 => ghost3_col(2),
      O => \s1_los_dir[1]_i_85__1_n_0\
    );
\s1_los_dir[1]_i_86__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92__0_n_0\,
      I1 => \s1_los_dir[1]_i_95__1_n_0\,
      I2 => \s1_los_dir[1]_i_96__1_n_0\,
      O => \s1_los_dir[1]_i_86__1_n_0\
    );
\s1_los_dir[1]_i_87__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"80007FFF"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(0),
      I2 => \s1_los_dir[1]_i_33__1_0\(1),
      I3 => \s1_los_dir[1]_i_33__1_0\(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(2),
      O => \s1_los_dir[1]_i_87__0_n_0\
    );
\s1_los_dir[1]_i_88__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0111111111111110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__1_0\(2),
      I1 => \s1_los_dir[1]_i_33__1_0\(3),
      I2 => ghost3_row(1),
      I3 => ghost3_row(0),
      I4 => \s1_los_dir[1]_i_33__1_0\(0),
      I5 => \s1_los_dir[1]_i_33__1_0\(1),
      O => \s1_los_dir[1]_i_88__1_n_0\
    );
\s1_los_dir[1]_i_89__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8FFF8FFF8FFFFFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost3_col(2),
      I3 => ghost3_col(3),
      I4 => ghost3_col(0),
      I5 => ghost3_col(1),
      O => \s1_los_dir[1]_i_89__1_n_0\
    );
\s1_los_dir[1]_i_8__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => ghost3_col(3),
      I1 => ghost3_col(2),
      I2 => rover_col(2),
      I3 => rover_col(1),
      I4 => rover_col(0),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_8__1_n_0\
    );
\s1_los_dir[1]_i_92__0\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFF6FF6"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => rover_row(1),
      I2 => ghost3_row(0),
      I3 => rover_row(0),
      I4 => \s1_los_dir[1]_i_105__1_n_0\,
      O => \s1_los_dir[1]_i_92__0_n_0\
    );
\s1_los_dir[1]_i_93__0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"20F220F2B0FB20F2"
    )
        port map (
      I0 => ghost3_col(2),
      I1 => rover_col(2),
      I2 => ghost3_col(3),
      I3 => rover_col(3),
      I4 => ghost3_col(1),
      I5 => rover_col(1),
      O => \s1_los_dir[1]_i_93__0_n_0\
    );
\s1_los_dir[1]_i_94__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A2A200A2"
    )
        port map (
      I0 => \s1_los_detected_i_26__1_n_0\,
      I1 => rover_col(3),
      I2 => ghost3_col(3),
      I3 => rover_col(0),
      I4 => ghost3_col(0),
      O => \s1_los_dir[1]_i_94__1_n_0\
    );
\s1_los_dir[1]_i_95__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DD4D0000FFFFDD4D"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost3_col(2),
      I2 => rover_col(1),
      I3 => ghost3_col(1),
      I4 => ghost3_col(3),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_95__1_n_0\
    );
\s1_los_dir[1]_i_96__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAEFFAE"
    )
        port map (
      I0 => \s1_los_detected_i_25__0_n_0\,
      I1 => ghost3_col(0),
      I2 => rover_col(0),
      I3 => ghost3_col(3),
      I4 => rover_col(3),
      O => \s1_los_dir[1]_i_96__1_n_0\
    );
\s1_los_dir[1]_i_9__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_36__0_n_0\,
      I1 => \s1_los_dir[1]_i_37__1_n_0\,
      I2 => \s1_los_dir[1]_i_38__1_n_0\,
      I3 => \s1_los_dir[1]_i_39__1_n_0\,
      I4 => \s1_los_dir[1]_i_40__1_n_0\,
      I5 => \s1_los_dir[1]_i_41__0_n_0\,
      O => \s1_los_dir[1]_i_9__1_n_0\
    );
\s1_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_dir_comb(0),
      Q => s1_los_dir(0)
    );
\s1_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => s1_los_detected_reg_0(0),
      CLR => AR(0),
      D => los_dir_comb(1),
      Q => s1_los_dir(1)
    );
\s2_can_down_i_10__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__1_n_6\,
      O => \s2_can_down_i_10__1_n_0\
    );
\s2_can_down_i_11__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_11__1_n_0\
    );
\s2_can_down_i_12__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__1_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_down_i_12__1_n_0\
    );
\s2_can_down_i_13__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_down_reg_i_16__1_n_7\,
      O => \s2_can_down_i_13__1_n_0\
    );
\s2_can_down_i_14__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      O => \s2_can_down_i_14__1_n_0\
    );
\s2_can_down_i_15__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_15__1_n_0\
    );
\s2_can_down_i_17__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"542B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_down_i_17__1_n_0\
    );
\s2_can_down_i_18__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8505"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_18__1_n_0\
    );
\s2_can_down_i_19__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1A9A"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_19__1_n_0\
    );
\s2_can_down_i_1__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000707070007"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(3),
      I3 => \s2_can_down_i_2__1_n_0\,
      I4 => \s2_can_down_reg_i_3__1_n_5\,
      I5 => \s2_can_down_i_4__1_n_0\,
      O => wc_down
    );
\s2_can_down_i_20__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_20__1_n_0\
    );
\s2_can_down_i_21__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"651A"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_21__1_n_0\
    );
\s2_can_down_i_22__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"4B52"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_22__1_n_0\
    );
\s2_can_down_i_23__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1CE3"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_23__1_n_0\
    );
\s2_can_down_i_24__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"65"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_down_i_24__1_n_0\
    );
\s2_can_down_i_2__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__1_n_6\,
      I1 => \s2_can_down_reg_i_5__1_n_6\,
      I2 => \s2_can_down_reg_i_3__1_n_7\,
      I3 => \s2_can_down_reg_i_5__1_n_5\,
      I4 => \s2_can_down_reg_i_5__1_n_4\,
      I5 => \s2_can_down_reg_i_5__1_n_7\,
      O => \s2_can_down_i_2__1_n_0\
    );
\s2_can_down_i_4__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__1_n_7\,
      I1 => \s2_can_down_reg_i_5__1_n_7\,
      I2 => \s2_can_down_reg_i_5__1_n_6\,
      O => \s2_can_down_i_4__1_n_0\
    );
\s2_can_down_i_6__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_down_reg_i_16__1_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_down_i_6__1_n_0\
    );
\s2_can_down_i_9__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__1_n_6\,
      I2 => \s2_can_down_reg_i_16__1_n_5\,
      O => \s2_can_down_i_9__1_n_0\
    );
s2_can_down_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_down,
      Q => s2_can_down
    );
\s2_can_down_reg_i_16__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_16__1_n_0\,
      CO(2) => \s2_can_down_reg_i_16__1_n_1\,
      CO(1) => \s2_can_down_reg_i_16__1_n_2\,
      CO(0) => \s2_can_down_reg_i_16__1_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_18__1_n_0\,
      DI(2) => \s2_can_down_i_19__1_n_0\,
      DI(1) => \s2_can_down_i_20__1_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_0\(0),
      O(2) => \s2_can_down_reg_i_16__1_n_5\,
      O(1) => \s2_can_down_reg_i_16__1_n_6\,
      O(0) => \s2_can_down_reg_i_16__1_n_7\,
      S(3) => \s2_can_down_i_21__1_n_0\,
      S(2) => \s2_can_down_i_22__1_n_0\,
      S(1) => \s2_can_down_i_23__1_n_0\,
      S(0) => \s2_can_down_i_24__1_n_0\
    );
\s2_can_down_reg_i_3__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_5__1_n_0\,
      CO(3 downto 2) => \NLW_s2_can_down_reg_i_3__1_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_down_reg_i_3__1_n_2\,
      CO(0) => \s2_can_down_reg_i_3__1_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_down_i_6__1_n_0\,
      O(3) => \NLW_s2_can_down_reg_i_3__1_O_UNCONNECTED\(3),
      O(2) => \s2_can_down_reg_i_3__1_n_5\,
      O(1) => \s2_can_down_reg_i_3__1_n_6\,
      O(0) => \s2_can_down_reg_i_3__1_n_7\,
      S(3) => '0',
      S(2) => \s2_can_down_reg_i_7__1_n_7\,
      S(1) => s2_can_down_reg_0(0),
      S(0) => \s2_can_down_i_9__1_n_0\
    );
\s2_can_down_reg_i_5__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_5__1_n_0\,
      CO(2) => \s2_can_down_reg_i_5__1_n_1\,
      CO(1) => \s2_can_down_reg_i_5__1_n_2\,
      CO(0) => \s2_can_down_reg_i_5__1_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_10__1_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_down_i_11__1_n_0\,
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_down_reg_i_5__1_n_4\,
      O(2) => \s2_can_down_reg_i_5__1_n_5\,
      O(1) => \s2_can_down_reg_i_5__1_n_6\,
      O(0) => \s2_can_down_reg_i_5__1_n_7\,
      S(3) => \s2_can_down_i_12__1_n_0\,
      S(2) => \s2_can_down_i_13__1_n_0\,
      S(1) => \s2_can_down_i_14__1_n_0\,
      S(0) => \s2_can_down_i_15__1_n_0\
    );
\s2_can_down_reg_i_7__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_16__1_n_0\,
      CO(3 downto 0) => \NLW_s2_can_down_reg_i_7__1_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_down_reg_i_7__1_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_down_reg_i_7__1_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_down_i_17__1_n_0\
    );
\s2_can_left_i_10__1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(1),
      O => \s2_can_left_i_10__1_n_0\
    );
\s2_can_left_i_11__1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(0),
      O => \s2_can_left_i_11__1_n_0\
    );
\s2_can_left_i_12__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__1_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_left_i_12__1_n_0\
    );
\s2_can_left_i_13__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__1_n_7\,
      O => \s2_can_left_i_13__1_n_0\
    );
\s2_can_left_i_14__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      O => \s2_can_left_i_14__1_n_0\
    );
\s2_can_left_i_15__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_left_i_15__1_n_0\
    );
\s2_can_left_i_1__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A2A2A202A2A2A2A2"
    )
        port map (
      I0 => wc_left01_in,
      I1 => \s2_can_left_i_3__1_n_0\,
      I2 => \s2_can_left_reg_i_4__1_n_5\,
      I3 => \s2_can_left_reg_i_5__1_n_6\,
      I4 => \s2_can_left_reg_i_5__1_n_7\,
      I5 => \s2_can_left_reg_i_4__1_n_7\,
      O => wc_left
    );
\s2_can_left_i_2__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_col(3),
      O => wc_left01_in
    );
\s2_can_left_i_3__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_left_reg_i_4__1_n_6\,
      I1 => \s2_can_left_reg_i_5__1_n_6\,
      I2 => \s2_can_left_reg_i_4__1_n_7\,
      I3 => \s2_can_left_reg_i_5__1_n_5\,
      I4 => \s2_can_left_reg_i_5__1_n_4\,
      I5 => \s2_can_left_reg_i_5__1_n_7\,
      O => \s2_can_left_i_3__1_n_0\
    );
\s2_can_left_i_6__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__1_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_left_i_6__1_n_0\
    );
\s2_can_left_i_7__1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__1_n_4\,
      O => p_1_in(5)
    );
\s2_can_left_i_8__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__1_n_6\,
      I2 => \s2_can_right_reg_i_7__1_n_5\,
      O => \s2_can_left_i_8__1_n_0\
    );
\s2_can_left_i_9__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__1_n_6\,
      O => \s2_can_left_i_9__1_n_0\
    );
s2_can_left_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_left,
      Q => s2_can_left
    );
\s2_can_left_reg_i_4__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_left_reg_i_5__1_n_0\,
      CO(3 downto 2) => \NLW_s2_can_left_reg_i_4__1_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_left_reg_i_4__1_n_2\,
      CO(0) => \s2_can_left_reg_i_4__1_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_left_i_6__1_n_0\,
      O(3) => \NLW_s2_can_left_reg_i_4__1_O_UNCONNECTED\(3),
      O(2) => \s2_can_left_reg_i_4__1_n_5\,
      O(1) => \s2_can_left_reg_i_4__1_n_6\,
      O(0) => \s2_can_left_reg_i_4__1_n_7\,
      S(3) => '0',
      S(2) => \s2_can_right_reg_i_9__1_n_7\,
      S(1) => p_1_in(5),
      S(0) => \s2_can_left_i_8__1_n_0\
    );
\s2_can_left_reg_i_5__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_left_reg_i_5__1_n_0\,
      CO(2) => \s2_can_left_reg_i_5__1_n_1\,
      CO(1) => \s2_can_left_reg_i_5__1_n_2\,
      CO(0) => \s2_can_left_reg_i_5__1_n_3\,
      CYINIT => '1',
      DI(3) => \s2_can_left_i_9__1_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_left_i_10__1_n_0\,
      DI(0) => \s2_can_left_i_11__1_n_0\,
      O(3) => \s2_can_left_reg_i_5__1_n_4\,
      O(2) => \s2_can_left_reg_i_5__1_n_5\,
      O(1) => \s2_can_left_reg_i_5__1_n_6\,
      O(0) => \s2_can_left_reg_i_5__1_n_7\,
      S(3) => \s2_can_left_i_12__1_n_0\,
      S(2) => \s2_can_left_i_13__1_n_0\,
      S(1) => \s2_can_left_i_14__1_n_0\,
      S(0) => \s2_can_left_i_15__1_n_0\
    );
\s2_can_right_i_10__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"2ABFD540"
    )
        port map (
      I0 => \s2_can_right_i_8__1_n_0\,
      I1 => \s2_can_right_reg_i_7__1_n_6\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__1_n_5\,
      I4 => \s2_can_right_reg_i_7__1_n_4\,
      O => \s2_can_right_i_10__1_n_0\
    );
\s2_can_right_i_11__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7887"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_11__1_n_0\
    );
\s2_can_right_i_12__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7887F00FF00F8778"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      I2 => \s2_can_right_reg_i_7__1_n_7\,
      I3 => s1_ghost_col(2),
      I4 => s1_ghost_col(1),
      I5 => s1_ghost_row(1),
      O => \s2_can_right_i_12__1_n_0\
    );
\s2_can_right_i_13__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"56A9A956"
    )
        port map (
      I0 => \s2_can_right_i_6__1_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__1_n_7\,
      I3 => \s2_can_right_reg_i_7__1_n_6\,
      I4 => s1_ghost_col(3),
      O => \s2_can_right_i_13__1_n_0\
    );
\s2_can_right_i_14__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_right_i_14__1_n_0\
    );
\s2_can_right_i_15__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      O => \s2_can_right_i_15__1_n_0\
    );
\s2_can_right_i_16__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      O => \s2_can_right_i_16__1_n_0\
    );
\s2_can_right_i_17__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_17__1_n_0\
    );
\s2_can_right_i_18__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(3),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_18__1_n_0\
    );
\s2_can_right_i_19__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(3),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_19__1_n_0\
    );
\s2_can_right_i_1__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000077777770777"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_i_2__1_n_0\,
      I3 => \s2_can_right_i_3__1_n_0\,
      I4 => \s2_can_right_i_4__1_n_0\,
      I5 => \s2_can_right_i_5__1_n_0\,
      O => wc_right
    );
\s2_can_right_i_20__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2DD2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_right_i_20__1_n_0\
    );
\s2_can_right_i_21__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_21__1_n_0\
    );
\s2_can_right_i_22__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      O => \s2_can_right_i_22__1_n_0\
    );
\s2_can_right_i_2__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0990"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_2__1_n_0\
    );
\s2_can_right_i_3__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AB54FD02FD0254AB"
    )
        port map (
      I0 => \s2_can_right_i_6__1_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__1_n_7\,
      I3 => \s2_can_right_reg_i_7__1_n_5\,
      I4 => \s2_can_right_reg_i_7__1_n_6\,
      I5 => s1_ghost_col(3),
      O => \s2_can_right_i_3__1_n_0\
    );
\s2_can_right_i_4__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"15550111EAAAFEEE"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__1_n_4\,
      I1 => \s2_can_right_reg_i_7__1_n_5\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__1_n_6\,
      I4 => \s2_can_right_i_8__1_n_0\,
      I5 => \s2_can_right_reg_i_9__1_n_7\,
      O => \s2_can_right_i_4__1_n_0\
    );
\s2_can_right_i_5__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A52D0F18080088"
    )
        port map (
      I0 => \s2_can_right_i_10__1_n_0\,
      I1 => \s2_can_right_i_11__1_n_0\,
      I2 => \s2_can_right_i_3__1_n_0\,
      I3 => \s2_can_right_i_12__1_n_0\,
      I4 => \s2_can_right_i_13__1_n_0\,
      I5 => \s2_can_right_i_14__1_n_0\,
      O => \s2_can_right_i_5__1_n_0\
    );
\s2_can_right_i_6__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0666666F666F666F"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__1_n_7\,
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_col(1),
      I4 => s1_ghost_row(0),
      I5 => s1_ghost_col(0),
      O => \s2_can_right_i_6__1_n_0\
    );
\s2_can_right_i_8__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"999F0009"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__1_n_6\,
      I2 => \s2_can_right_reg_i_7__1_n_7\,
      I3 => s1_ghost_col(2),
      I4 => \s2_can_right_i_6__1_n_0\,
      O => \s2_can_right_i_8__1_n_0\
    );
s2_can_right_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_right,
      Q => s2_can_right
    );
\s2_can_right_reg_i_7__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_right_reg_i_7__1_n_0\,
      CO(2) => \s2_can_right_reg_i_7__1_n_1\,
      CO(1) => \s2_can_right_reg_i_7__1_n_2\,
      CO(0) => \s2_can_right_reg_i_7__1_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_right_i_15__1_n_0\,
      DI(2) => \s2_can_right_i_16__1_n_0\,
      DI(1) => \s2_can_right_i_17__1_n_0\,
      DI(0) => '0',
      O(3) => \s2_can_right_reg_i_7__1_n_4\,
      O(2) => \s2_can_right_reg_i_7__1_n_5\,
      O(1) => \s2_can_right_reg_i_7__1_n_6\,
      O(0) => \s2_can_right_reg_i_7__1_n_7\,
      S(3) => \s2_can_right_i_18__1_n_0\,
      S(2) => \s2_can_right_i_19__1_n_0\,
      S(1) => \s2_can_right_i_20__1_n_0\,
      S(0) => \s2_can_right_i_21__1_n_0\
    );
\s2_can_right_reg_i_9__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_right_reg_i_7__1_n_0\,
      CO(3 downto 0) => \NLW_s2_can_right_reg_i_9__1_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_right_reg_i_9__1_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_right_reg_i_9__1_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_right_i_22__1_n_0\
    );
\s2_can_up_i_10__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__1_n_6\,
      O => \s2_can_up_i_10__1_n_0\
    );
\s2_can_up_i_11__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      O => wc_down5(1)
    );
\s2_can_up_i_12__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__1_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_up_i_12__1_n_0\
    );
\s2_can_up_i_13__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_up_reg_i_16__1_n_7\,
      O => \s2_can_up_i_13__1_n_0\
    );
\s2_can_up_i_14__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"69"
    )
        port map (
      I0 => s1_ghost_col(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_14__1_n_0\
    );
\s2_can_up_i_15__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_up_i_15__1_n_0\
    );
\s2_can_up_i_17__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"42BF"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_17__1_n_0\
    );
\s2_can_up_i_18__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1213"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_18__1_n_0\
    );
\s2_can_up_i_19__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6564"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_19__1_n_0\
    );
\s2_can_up_i_1__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000FFFE"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(2),
      I4 => \s2_can_up_i_2__1_n_0\,
      O => wc_up
    );
\s2_can_up_i_20__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"ED"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_20__1_n_0\
    );
\s2_can_up_i_21__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"9599"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_21__1_n_0\
    );
\s2_can_up_i_22__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5964"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_22__1_n_0\
    );
\s2_can_up_i_23__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"738C"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_23__1_n_0\
    );
\s2_can_up_i_24__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_up_i_24__1_n_0\
    );
\s2_can_up_i_2__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0028FFFF00280000"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__1_n_7\,
      I1 => s1_ghost_col(0),
      I2 => s1_ghost_row(0),
      I3 => \s2_can_up_reg_i_4__1_n_6\,
      I4 => \s2_can_up_reg_i_3__1_n_5\,
      I5 => \s2_can_up_i_5__1_n_0\,
      O => \s2_can_up_i_2__1_n_0\
    );
\s2_can_up_i_5__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A5870F42020022"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__1_n_6\,
      I1 => \s2_can_up_reg_i_4__1_n_6\,
      I2 => \s2_can_up_reg_i_3__1_n_7\,
      I3 => \s2_can_up_reg_i_4__1_n_5\,
      I4 => \s2_can_up_reg_i_4__1_n_4\,
      I5 => \s2_can_right_i_14__1_n_0\,
      O => \s2_can_up_i_5__1_n_0\
    );
\s2_can_up_i_6__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_up_reg_i_16__1_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_up_i_6__1_n_0\
    );
\s2_can_up_i_9__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__1_n_6\,
      I2 => \s2_can_up_reg_i_16__1_n_5\,
      O => \s2_can_up_i_9__1_n_0\
    );
s2_can_up_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_up,
      Q => s2_can_up
    );
\s2_can_up_reg_i_16__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_16__1_n_0\,
      CO(2) => \s2_can_up_reg_i_16__1_n_1\,
      CO(1) => \s2_can_up_reg_i_16__1_n_2\,
      CO(0) => \s2_can_up_reg_i_16__1_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_18__1_n_0\,
      DI(2) => \s2_can_up_i_19__1_n_0\,
      DI(1) => \s2_can_up_i_20__1_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_1\(0),
      O(2) => \s2_can_up_reg_i_16__1_n_5\,
      O(1) => \s2_can_up_reg_i_16__1_n_6\,
      O(0) => \s2_can_up_reg_i_16__1_n_7\,
      S(3) => \s2_can_up_i_21__1_n_0\,
      S(2) => \s2_can_up_i_22__1_n_0\,
      S(1) => \s2_can_up_i_23__1_n_0\,
      S(0) => \s2_can_up_i_24__1_n_0\
    );
\s2_can_up_reg_i_3__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_4__1_n_0\,
      CO(3 downto 2) => \NLW_s2_can_up_reg_i_3__1_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_up_reg_i_3__1_n_2\,
      CO(0) => \s2_can_up_reg_i_3__1_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_up_i_6__1_n_0\,
      O(3) => \NLW_s2_can_up_reg_i_3__1_O_UNCONNECTED\(3),
      O(2) => \s2_can_up_reg_i_3__1_n_5\,
      O(1) => \s2_can_up_reg_i_3__1_n_6\,
      O(0) => \s2_can_up_reg_i_3__1_n_7\,
      S(3) => '0',
      S(2) => \s2_can_up_reg_i_7__1_n_7\,
      S(1) => \s2_can_up_i_2__1_0\(0),
      S(0) => \s2_can_up_i_9__1_n_0\
    );
\s2_can_up_reg_i_4__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_4__1_n_0\,
      CO(2) => \s2_can_up_reg_i_4__1_n_1\,
      CO(1) => \s2_can_up_reg_i_4__1_n_2\,
      CO(0) => \s2_can_up_reg_i_4__1_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_10__1_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => wc_down5(1),
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_up_reg_i_4__1_n_4\,
      O(2) => \s2_can_up_reg_i_4__1_n_5\,
      O(1) => \s2_can_up_reg_i_4__1_n_6\,
      O(0) => \NLW_s2_can_up_reg_i_4__1_O_UNCONNECTED\(0),
      S(3) => \s2_can_up_i_12__1_n_0\,
      S(2) => \s2_can_up_i_13__1_n_0\,
      S(1) => \s2_can_up_i_14__1_n_0\,
      S(0) => \s2_can_up_i_15__1_n_0\
    );
\s2_can_up_reg_i_7__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_16__1_n_0\,
      CO(3 downto 0) => \NLW_s2_can_up_reg_i_7__1_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_up_reg_i_7__1_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_up_reg_i_7__1_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_up_i_17__1_n_0\
    );
\s2_facing_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(0),
      Q => s2_facing(0)
    );
\s2_facing_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(1),
      Q => s2_facing(1)
    );
s2_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_detected,
      Q => s2_los_detected
    );
\s2_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(0),
      Q => s2_los_dir(0)
    );
\s2_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(1),
      Q => s2_los_dir(1)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_2 is
  port (
    \s1_ghost_row_reg[2]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_1\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    rover_row_2_sp_1 : out STD_LOGIC;
    rover_col_3_sp_1 : out STD_LOGIC;
    \rover_row[2]_0\ : out STD_LOGIC;
    rover_row_0_sp_1 : out STD_LOGIC;
    rover_row_3_sp_1 : out STD_LOGIC;
    rover_col_2_sp_1 : out STD_LOGIC;
    \rover_col[3]_0\ : out STD_LOGIC;
    \rover_col[2]_0\ : out STD_LOGIC;
    \rover_col[2]_1\ : out STD_LOGIC;
    \rover_col[2]_2\ : out STD_LOGIC;
    \rover_col[3]_1\ : out STD_LOGIC;
    \rover_col[2]_3\ : out STD_LOGIC;
    \rover_col[3]_2\ : out STD_LOGIC;
    D : out STD_LOGIC_VECTOR ( 1 downto 0 );
    E : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ACLK : in STD_LOGIC;
    AR : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir_reg[0]_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__2_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir[1]_i_33__2_0\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[0]_i_4__2_0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \p_0_in__0\ : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_2 : entity is "ghost_top";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_2;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_2 is
  signal \^d\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[0]_i_1__2_n_0\ : STD_LOGIC;
  signal \direction[1]_i_1__2_n_0\ : STD_LOGIC;
  signal los_detected_comb : STD_LOGIC;
  signal los_dir_comb : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal p_1_in : STD_LOGIC_VECTOR ( 5 to 5 );
  signal \^rover_col[2]_0\ : STD_LOGIC;
  signal \^rover_col[2]_1\ : STD_LOGIC;
  signal \^rover_col[2]_2\ : STD_LOGIC;
  signal \^rover_col[2]_3\ : STD_LOGIC;
  signal \^rover_col[3]_0\ : STD_LOGIC;
  signal \^rover_col[3]_1\ : STD_LOGIC;
  signal \^rover_col[3]_2\ : STD_LOGIC;
  signal rover_col_2_sn_1 : STD_LOGIC;
  signal rover_col_3_sn_1 : STD_LOGIC;
  signal \^rover_row[2]_0\ : STD_LOGIC;
  signal rover_row_0_sn_1 : STD_LOGIC;
  signal rover_row_2_sn_1 : STD_LOGIC;
  signal rover_row_3_sn_1 : STD_LOGIC;
  signal s1_ghost_col : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_ghost_row : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal s1_los_detected : STD_LOGIC;
  signal \s1_los_detected_i_10__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_11__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_12__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_13__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_14__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_15__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_16__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_17__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_18__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_19__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_20__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_21__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_22__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_23__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_24__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_25__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_26__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_2__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_3__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_4__1_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_5__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_6__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_7__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_8__2_n_0\ : STD_LOGIC;
  signal \s1_los_detected_i_9__2_n_0\ : STD_LOGIC;
  signal s1_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \s1_los_dir[0]_i_10__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_11__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_12__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_13__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_14__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_15__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_16__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_17__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_18__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_19__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_20__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_21__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_22__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_23__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_2__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_3__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_4__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_5__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_6__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_7__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_8__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[0]_i_9__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_105__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_10__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_11__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_12__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_13__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_14__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_15__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_16__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_17__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_18__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_19__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_20__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_21__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_22__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_23__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_24__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_25__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_26__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_27__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_28__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_29__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_2__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_30__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_31__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_32__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_33__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_34__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_35__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_36__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_37__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_38__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_39__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_3__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_40__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_41__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_42__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_43__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_44__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_45__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_46__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_47__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_48__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_49__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_4__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_50__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_51__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_52__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_53__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_54__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_55__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_56__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_57__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_58__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_59__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_5__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_60__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_61__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_62__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_63__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_64__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_65__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_66__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_67__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_68__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_69__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_6__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_70__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_71__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_72__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_73__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_74__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_75__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_76__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_77__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_78__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_79__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_7__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_80__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_81__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_82__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_83__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_84__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_85__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_86__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_87__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_88__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_89__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_8__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_92__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_93__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_94__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_95__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_96__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_9__2_n_0\ : STD_LOGIC;
  signal s2_can_down : STD_LOGIC;
  signal \s2_can_down_i_10__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_11__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_12__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_13__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_14__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_15__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_17__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_18__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_19__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_20__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_21__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_22__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_23__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_24__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_2__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_4__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_6__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_9__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_16__2_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__2_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__2_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__2_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__2_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_3__2_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_0\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_1\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_2\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_3\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_4\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_5\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_6\ : STD_LOGIC;
  signal \s2_can_down_reg_i_5__2_n_7\ : STD_LOGIC;
  signal \s2_can_down_reg_i_7__2_n_7\ : STD_LOGIC;
  signal s2_can_left : STD_LOGIC;
  signal \s2_can_left_i_10__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_11__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_12__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_13__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_14__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_15__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_3__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_6__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_8__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_i_9__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__2_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__2_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__2_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__2_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_4__2_n_7\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_0\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_1\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_2\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_3\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_4\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_5\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_6\ : STD_LOGIC;
  signal \s2_can_left_reg_i_5__2_n_7\ : STD_LOGIC;
  signal s2_can_right : STD_LOGIC;
  signal \s2_can_right_i_10__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_11__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_12__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_13__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_14__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_15__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_16__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_17__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_18__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_19__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_20__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_21__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_22__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_2__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_3__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_4__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_5__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_6__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_i_8__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_0\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_1\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_2\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_3\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_4\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_5\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_6\ : STD_LOGIC;
  signal \s2_can_right_reg_i_7__2_n_7\ : STD_LOGIC;
  signal \s2_can_right_reg_i_9__2_n_7\ : STD_LOGIC;
  signal s2_can_up : STD_LOGIC;
  signal \s2_can_up_i_10__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_12__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_13__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_14__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_15__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_17__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_18__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_19__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_20__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_21__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_22__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_23__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_24__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_2__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_5__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_6__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_9__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_16__2_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__2_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__2_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__2_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__2_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_3__2_n_7\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_0\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_1\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_2\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_3\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_4\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_5\ : STD_LOGIC;
  signal \s2_can_up_reg_i_4__2_n_6\ : STD_LOGIC;
  signal \s2_can_up_reg_i_7__2_n_7\ : STD_LOGIC;
  signal s2_facing : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal s2_los_detected : STD_LOGIC;
  signal s2_los_dir : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal wc_down : STD_LOGIC;
  signal wc_down5 : STD_LOGIC_VECTOR ( 1 to 1 );
  signal wc_left : STD_LOGIC;
  signal wc_left01_in : STD_LOGIC;
  signal wc_right : STD_LOGIC;
  signal wc_up : STD_LOGIC;
  signal \wf_dir__2\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \NLW_s2_can_down_reg_i_3__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_down_reg_i_3__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_down_reg_i_7__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_down_reg_i_7__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_left_reg_i_4__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_left_reg_i_4__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_right_reg_i_9__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_right_reg_i_9__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s2_can_up_reg_i_3__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 2 );
  signal \NLW_s2_can_up_reg_i_3__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 to 3 );
  signal \NLW_s2_can_up_reg_i_4__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 0 to 0 );
  signal \NLW_s2_can_up_reg_i_7__2_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s2_can_up_reg_i_7__2_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of \s1_los_detected_i_10__2\ : label is "soft_lutpair99";
  attribute SOFT_HLUTNM of \s1_los_detected_i_14__2\ : label is "soft_lutpair90";
  attribute SOFT_HLUTNM of \s1_los_detected_i_15__2\ : label is "soft_lutpair97";
  attribute SOFT_HLUTNM of \s1_los_detected_i_16__2\ : label is "soft_lutpair97";
  attribute SOFT_HLUTNM of \s1_los_detected_i_17__2\ : label is "soft_lutpair95";
  attribute SOFT_HLUTNM of \s1_los_detected_i_20__2\ : label is "soft_lutpair107";
  attribute SOFT_HLUTNM of \s1_los_detected_i_25__1\ : label is "soft_lutpair96";
  attribute SOFT_HLUTNM of \s1_los_detected_i_25__2\ : label is "soft_lutpair107";
  attribute SOFT_HLUTNM of \s1_los_detected_i_26__2\ : label is "soft_lutpair96";
  attribute SOFT_HLUTNM of \s1_los_detected_i_9__2\ : label is "soft_lutpair99";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_10__2\ : label is "soft_lutpair90";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_12__2\ : label is "soft_lutpair86";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_18__2\ : label is "soft_lutpair101";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_19__2\ : label is "soft_lutpair116";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_20__2\ : label is "soft_lutpair101";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_21__2\ : label is "soft_lutpair105";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_22__2\ : label is "soft_lutpair110";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_23__2\ : label is "soft_lutpair88";
  attribute SOFT_HLUTNM of \s1_los_dir[0]_i_6__2\ : label is "soft_lutpair94";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_100__2\ : label is "soft_lutpair108";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_105__2\ : label is "soft_lutpair95";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_20__2\ : label is "soft_lutpair111";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_21__2\ : label is "soft_lutpair115";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_23__2\ : label is "soft_lutpair109";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_34__2\ : label is "soft_lutpair103";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_35__2\ : label is "soft_lutpair98";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_36__2\ : label is "soft_lutpair113";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_38__2\ : label is "soft_lutpair91";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_39__2\ : label is "soft_lutpair100";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_41__1\ : label is "soft_lutpair116";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_43__1\ : label is "soft_lutpair100";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_44__2\ : label is "soft_lutpair85";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_46__2\ : label is "soft_lutpair98";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_48__2\ : label is "soft_lutpair114";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_49__2\ : label is "soft_lutpair106";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_51__2\ : label is "soft_lutpair102";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_52__2\ : label is "soft_lutpair91";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_57__2\ : label is "soft_lutpair104";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_58__2\ : label is "soft_lutpair102";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_59__1\ : label is "soft_lutpair87";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_59__2\ : label is "soft_lutpair113";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_62__1\ : label is "soft_lutpair103";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_63__2\ : label is "soft_lutpair89";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_67__1\ : label is "soft_lutpair106";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_67__2\ : label is "soft_lutpair108";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_70__2\ : label is "soft_lutpair104";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_71__2\ : label is "soft_lutpair112";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_72__2\ : label is "soft_lutpair89";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_77__2\ : label is "soft_lutpair105";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_79__2\ : label is "soft_lutpair110";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_80__2\ : label is "soft_lutpair88";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_81__2\ : label is "soft_lutpair114";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_82__2\ : label is "soft_lutpair115";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_83__1\ : label is "soft_lutpair86";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_84__2\ : label is "soft_lutpair94";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_86__2\ : label is "soft_lutpair112";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_87__1\ : label is "soft_lutpair87";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_91\ : label is "soft_lutpair109";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_92__1\ : label is "soft_lutpair85";
  attribute SOFT_HLUTNM of \s1_los_dir[1]_i_92__2\ : label is "soft_lutpair111";
  attribute ADDER_THRESHOLD : integer;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_3__2\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_down_reg_i_5__2\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_left_i_2__2\ : label is "soft_lutpair93";
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_4__2\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_left_reg_i_5__2\ : label is 35;
  attribute SOFT_HLUTNM of \s2_can_right_i_11__2\ : label is "soft_lutpair92";
  attribute SOFT_HLUTNM of \s2_can_right_i_13__2\ : label is "soft_lutpair84";
  attribute SOFT_HLUTNM of \s2_can_right_i_14__2\ : label is "soft_lutpair93";
  attribute SOFT_HLUTNM of \s2_can_right_i_2__2\ : label is "soft_lutpair92";
  attribute SOFT_HLUTNM of \s2_can_right_i_8__2\ : label is "soft_lutpair84";
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_3__2\ : label is 35;
  attribute ADDER_THRESHOLD of \s2_can_up_reg_i_4__2\ : label is 35;
begin
  D(1 downto 0) <= \^d\(1 downto 0);
  \rover_col[2]_0\ <= \^rover_col[2]_0\;
  \rover_col[2]_1\ <= \^rover_col[2]_1\;
  \rover_col[2]_2\ <= \^rover_col[2]_2\;
  \rover_col[2]_3\ <= \^rover_col[2]_3\;
  \rover_col[3]_0\ <= \^rover_col[3]_0\;
  \rover_col[3]_1\ <= \^rover_col[3]_1\;
  \rover_col[3]_2\ <= \^rover_col[3]_2\;
  rover_col_2_sp_1 <= rover_col_2_sn_1;
  rover_col_3_sp_1 <= rover_col_3_sn_1;
  \rover_row[2]_0\ <= \^rover_row[2]_0\;
  rover_row_0_sp_1 <= rover_row_0_sn_1;
  rover_row_2_sp_1 <= rover_row_2_sn_1;
  rover_row_3_sp_1 <= rover_row_3_sn_1;
\direction[0]_i_1__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(0),
      I1 => s2_los_detected,
      I2 => \wf_dir__2\(0),
      I3 => \p_0_in__0\,
      I4 => \^d\(0),
      O => \direction[0]_i_1__2_n_0\
    );
\direction[0]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FAAA0032FABB3332"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__2\(0)
    );
\direction[1]_i_1__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"B8FFB800"
    )
        port map (
      I0 => s2_los_dir(1),
      I1 => s2_los_detected,
      I2 => \wf_dir__2\(1),
      I3 => \p_0_in__0\,
      I4 => \^d\(1),
      O => \direction[1]_i_1__2_n_0\
    );
\direction[1]_i_2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F555FF31F0113031"
    )
        port map (
      I0 => s2_can_down,
      I1 => s2_can_up,
      I2 => s2_can_right,
      I3 => s2_facing(1),
      I4 => s2_facing(0),
      I5 => s2_can_left,
      O => \wf_dir__2\(1)
    );
\direction_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[0]_i_1__2_n_0\,
      Q => \^d\(0)
    );
\direction_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => AR(0),
      D => \direction[1]_i_1__2_n_0\,
      Q => \^d\(1)
    );
\s1_ghost_col_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_col(0),
      Q => s1_ghost_col(0)
    );
\s1_ghost_col_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_col(1),
      Q => s1_ghost_col(1)
    );
\s1_ghost_col_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_col(2),
      Q => s1_ghost_col(2)
    );
\s1_ghost_col_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_col(3),
      Q => s1_ghost_col(3)
    );
\s1_ghost_row_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_row(0),
      Q => s1_ghost_row(0)
    );
\s1_ghost_row_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_row(1),
      Q => s1_ghost_row(1)
    );
\s1_ghost_row_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_row(2),
      Q => s1_ghost_row(2)
    );
\s1_ghost_row_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => ghost4_row(3),
      Q => s1_ghost_row(3)
    );
\s1_los_detected_i_10__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      I3 => ghost4_col(0),
      O => \s1_los_detected_i_10__2_n_0\
    );
\s1_los_detected_i_11__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost4_row(3),
      I1 => ghost4_row(2),
      O => \s1_los_detected_i_11__2_n_0\
    );
\s1_los_detected_i_12__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => rover_row_3_sn_1,
      I1 => \s1_los_detected_i_22__2_n_0\,
      I2 => ghost4_col(2),
      I3 => ghost4_col(1),
      I4 => ghost4_col(3),
      I5 => ghost4_col(0),
      O => \s1_los_detected_i_12__2_n_0\
    );
\s1_los_detected_i_13__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF0F00DF0D"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => rover_row(2),
      I2 => ghost4_row(3),
      I3 => rover_row(3),
      I4 => \s1_los_detected_i_23__2_n_0\,
      I5 => \s1_los_detected_i_24__2_n_0\,
      O => \s1_los_detected_i_13__2_n_0\
    );
\s1_los_detected_i_14__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"303E"
    )
        port map (
      I0 => ghost4_col(1),
      I1 => ghost4_col(3),
      I2 => ghost4_col(2),
      I3 => ghost4_col(0),
      O => \s1_los_detected_i_14__2_n_0\
    );
\s1_los_detected_i_15__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost4_row(3),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => ghost4_row(2),
      O => \s1_los_detected_i_15__2_n_0\
    );
\s1_los_detected_i_16__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(3),
      I2 => ghost4_row(1),
      I3 => ghost4_row(0),
      O => \s1_los_detected_i_16__2_n_0\
    );
\s1_los_detected_i_17__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF070707"
    )
        port map (
      I0 => rover_row(1),
      I1 => rover_row(0),
      I2 => rover_row(3),
      I3 => ghost4_row(1),
      I4 => ghost4_row(2),
      I5 => ghost4_row(3),
      O => \s1_los_detected_i_17__1_n_0\
    );
\s1_los_detected_i_17__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => rover_row(2),
      I1 => rover_row(3),
      O => \^rover_row[2]_0\
    );
\s1_los_detected_i_18__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BEFFFFBEFFFFFFFF"
    )
        port map (
      I0 => \s1_los_detected_i_25__1_n_0\,
      I1 => ghost4_col(0),
      I2 => rover_col(0),
      I3 => ghost4_col(3),
      I4 => rover_col(3),
      I5 => \s1_los_detected_i_26__2_n_0\,
      O => \s1_los_detected_i_18__2_n_0\
    );
\s1_los_detected_i_19__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => rover_row(0),
      I1 => ghost4_row(0),
      I2 => ghost4_row(2),
      I3 => rover_row(2),
      I4 => ghost4_row(1),
      I5 => rover_row(1),
      O => \s1_los_detected_i_19__2_n_0\
    );
\s1_los_detected_i_1__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEFFFE"
    )
        port map (
      I0 => los_dir_comb(1),
      I1 => \s1_los_detected_i_2__2_n_0\,
      I2 => \s1_los_detected_i_3__2_n_0\,
      I3 => rover_row_2_sn_1,
      I4 => \s1_los_detected_i_4__1_n_0\,
      O => los_detected_comb
    );
\s1_los_detected_i_20__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FEFFFFFFFEFEFEFE"
    )
        port map (
      I0 => ghost4_row(3),
      I1 => ghost4_row(2),
      I2 => ghost4_row(1),
      I3 => rover_row(1),
      I4 => rover_row(0),
      I5 => \^rover_row[2]_0\,
      O => \s1_los_detected_i_20__1_n_0\
    );
\s1_los_detected_i_20__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0307"
    )
        port map (
      I0 => rover_row(0),
      I1 => rover_row(2),
      I2 => rover_row(3),
      I3 => rover_row(1),
      O => rover_row_0_sn_1
    );
\s1_los_detected_i_21__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CECECEEFCECEEFFF"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(3),
      I2 => \s1_los_dir[1]_i_44__2_n_0\,
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_21__2_n_0\
    );
\s1_los_detected_i_22__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF15FFFF1515"
    )
        port map (
      I0 => ghost4_row(3),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => rover_row(2),
      I4 => rover_row(3),
      I5 => rover_row(1),
      O => \s1_los_detected_i_22__2_n_0\
    );
\s1_los_detected_i_23__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2202FF0F00002202"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => rover_row(0),
      I2 => rover_row(2),
      I3 => ghost4_row(2),
      I4 => rover_row(1),
      I5 => ghost4_row(1),
      O => \s1_los_detected_i_23__2_n_0\
    );
\s1_los_detected_i_24__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEAAAAAAAAAAA"
    )
        port map (
      I0 => \s1_los_detected_i_18__2_n_0\,
      I1 => \s1_los_detected_i_10__2_n_0\,
      I2 => ghost4_row(1),
      I3 => ghost4_row(2),
      I4 => ghost4_row(3),
      I5 => rover_row_0_sn_1,
      O => \s1_los_detected_i_24__2_n_0\
    );
\s1_los_detected_i_25__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"44F4"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      I3 => rover_col(1),
      O => \s1_los_detected_i_25__1_n_0\
    );
\s1_los_detected_i_25__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => rover_row(3),
      I1 => rover_row(2),
      I2 => rover_row(0),
      I3 => rover_row(1),
      O => rover_row_3_sn_1
    );
\s1_los_detected_i_26__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"D0DD"
    )
        port map (
      I0 => rover_col(1),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => rover_col(2),
      O => \s1_los_detected_i_26__2_n_0\
    );
\s1_los_detected_i_2__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000000000AB"
    )
        port map (
      I0 => \s1_los_detected_i_5__2_n_0\,
      I1 => rover_row(2),
      I2 => rover_row(3),
      I3 => \s1_los_detected_i_6__2_n_0\,
      I4 => \s1_los_detected_i_7__2_n_0\,
      I5 => \s1_los_detected_i_8__2_n_0\,
      O => \s1_los_detected_i_2__2_n_0\
    );
\s1_los_detected_i_3__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7077FFFF50555055"
    )
        port map (
      I0 => \s1_los_detected_i_9__2_n_0\,
      I1 => ghost4_row(0),
      I2 => rover_row(0),
      I3 => \s1_los_detected_i_10__2_n_0\,
      I4 => ghost4_row(1),
      I5 => \s1_los_detected_i_11__2_n_0\,
      O => \s1_los_detected_i_3__2_n_0\
    );
\s1_los_detected_i_4__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFF1F1F1F1F1F1F1"
    )
        port map (
      I0 => \s1_los_detected_i_12__2_n_0\,
      I1 => \s1_los_detected_i_11__2_n_0\,
      I2 => \s1_los_detected_i_13__2_n_0\,
      I3 => \s1_los_detected_i_14__2_n_0\,
      I4 => \s1_los_detected_i_15__2_n_0\,
      I5 => \^rover_row[2]_0\,
      O => \s1_los_detected_i_4__1_n_0\
    );
\s1_los_detected_i_4__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => rover_row(2),
      I1 => rover_row(3),
      I2 => rover_row(1),
      O => rover_row_2_sn_1
    );
\s1_los_detected_i_5__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5FFFFFFFF4CC44CF"
    )
        port map (
      I0 => \s1_los_detected_i_16__2_n_0\,
      I1 => \s1_los_detected_i_17__1_n_0\,
      I2 => ghost4_col(2),
      I3 => ghost4_col(1),
      I4 => ghost4_col(3),
      I5 => ghost4_col(0),
      O => \s1_los_detected_i_5__2_n_0\
    );
\s1_los_detected_i_6__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000001D1C0000"
    )
        port map (
      I0 => ghost4_col(0),
      I1 => ghost4_col(2),
      I2 => ghost4_col(3),
      I3 => ghost4_col(1),
      I4 => \s1_los_detected_i_11__2_n_0\,
      I5 => rover_row_0_sn_1,
      O => \s1_los_detected_i_6__2_n_0\
    );
\s1_los_detected_i_7__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BABABABAFBFBBAFB"
    )
        port map (
      I0 => \s1_los_detected_i_18__2_n_0\,
      I1 => rover_row(3),
      I2 => ghost4_row(3),
      I3 => rover_row(2),
      I4 => ghost4_row(2),
      I5 => \s1_los_detected_i_19__2_n_0\,
      O => \s1_los_detected_i_7__2_n_0\
    );
\s1_los_detected_i_8__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7000000005550550"
    )
        port map (
      I0 => \s1_los_detected_i_20__1_n_0\,
      I1 => \s1_los_detected_i_21__2_n_0\,
      I2 => ghost4_col(3),
      I3 => ghost4_col(2),
      I4 => ghost4_col(1),
      I5 => ghost4_col(0),
      O => \s1_los_detected_i_8__2_n_0\
    );
\s1_los_detected_i_9__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"805E"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => ghost4_col(0),
      O => \s1_los_detected_i_9__2_n_0\
    );
s1_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => los_detected_comb,
      Q => s1_los_detected
    );
\s1_los_dir[0]_i_10__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFA8FFFF"
    )
        port map (
      I0 => ghost4_col(2),
      I1 => ghost4_col(1),
      I2 => ghost4_col(0),
      I3 => ghost4_col(3),
      I4 => \^rover_col[2]_2\,
      O => \s1_los_dir[0]_i_10__2_n_0\
    );
\s1_los_dir[0]_i_11__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"22288888E22BB88B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_54__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[0]_i_21__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[0]_i_19__2_n_0\,
      O => \s1_los_dir[0]_i_11__2_n_0\
    );
\s1_los_dir[0]_i_12__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"EEEEEEEA"
    )
        port map (
      I0 => \^rover_col[2]_1\,
      I1 => ghost4_col(3),
      I2 => ghost4_col(2),
      I3 => ghost4_col(1),
      I4 => ghost4_col(0),
      O => \s1_los_dir[0]_i_12__2_n_0\
    );
\s1_los_dir[0]_i_13__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEBBBBB2EE88BB8"
    )
        port map (
      I0 => \s1_los_dir[1]_i_65__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[0]_i_22__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[1]_i_48__2_n_0\,
      O => \s1_los_dir[0]_i_13__2_n_0\
    );
\s1_los_dir[0]_i_14__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00FF101030302020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_68__2_n_0\,
      I2 => \s1_los_dir[1]_i_69__2_n_0\,
      I3 => \s1_los_dir[1]_i_48__2_n_0\,
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      I5 => \s1_los_dir[0]_i_4__2_0\(0),
      O => \s1_los_dir[0]_i_14__2_n_0\
    );
\s1_los_dir[0]_i_15__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFF111"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost4_col(0),
      I3 => ghost4_col(1),
      I4 => ghost4_col(2),
      I5 => ghost4_col(3),
      O => \s1_los_dir[0]_i_15__2_n_0\
    );
\s1_los_dir[0]_i_16__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"828882888288BEBB"
    )
        port map (
      I0 => \s1_los_dir[1]_i_50__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_33__2_0\(3),
      I3 => \s1_los_dir[0]_i_23__2_n_0\,
      I4 => \s1_los_dir[1]_i_48__2_n_0\,
      I5 => \s1_los_dir[1]_i_47__2_n_0\,
      O => \s1_los_dir[0]_i_16__2_n_0\
    );
\s1_los_dir[0]_i_17__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"2888288828882B8B"
    )
        port map (
      I0 => \s1_los_dir[1]_i_45__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_40__2_n_0\,
      I4 => ghost4_row(1),
      I5 => ghost4_row(0),
      O => \s1_los_dir[0]_i_17__2_n_0\
    );
\s1_los_dir[0]_i_18__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"AAA9"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      O => \s1_los_dir[0]_i_18__2_n_0\
    );
\s1_los_dir[0]_i_19__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      O => \s1_los_dir[0]_i_19__2_n_0\
    );
\s1_los_dir[0]_i_1__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => \s1_los_dir[0]_i_2__2_n_0\,
      I1 => \s1_los_detected_i_2__2_n_0\,
      O => los_dir_comb(0)
    );
\s1_los_dir[0]_i_20__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0332"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => ghost4_row(1),
      O => \s1_los_dir[0]_i_20__2_n_0\
    );
\s1_los_dir[0]_i_21__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0004"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      O => \s1_los_dir[0]_i_21__2_n_0\
    );
\s1_los_dir[0]_i_22__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0054"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[0]_i_22__2_n_0\
    );
\s1_los_dir[0]_i_23__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0F0FFFFE"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[0]_i_23__2_n_0\
    );
\s1_los_dir[0]_i_2__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_4__2_n_0\,
      I1 => \s1_los_dir[0]_i_3__2_n_0\,
      I2 => \s1_los_dir[0]_i_4__2_n_0\,
      I3 => \s1_los_dir[1]_i_19__2_n_0\,
      I4 => \s1_los_dir[0]_i_5__2_n_0\,
      I5 => \s1_los_dir[0]_i_6__2_n_0\,
      O => \s1_los_dir[0]_i_2__2_n_0\
    );
\s1_los_dir[0]_i_3__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7707770700007707"
    )
        port map (
      I0 => \s1_los_dir[0]_i_7__2_n_0\,
      I1 => \s1_los_dir[0]_i_8__2_n_0\,
      I2 => \s1_los_dir[0]_i_9__2_n_0\,
      I3 => \s1_los_dir[0]_i_10__2_n_0\,
      I4 => \s1_los_dir[0]_i_11__2_n_0\,
      I5 => \s1_los_dir[0]_i_12__2_n_0\,
      O => \s1_los_dir[0]_i_3__2_n_0\
    );
\s1_los_dir[0]_i_4__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF04FF04FFFFFF04"
    )
        port map (
      I0 => \s1_los_dir[0]_i_13__2_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_34__2_n_0\,
      I3 => \s1_los_dir[1]_i_71__2_n_0\,
      I4 => \s1_los_dir[0]_i_14__2_n_0\,
      I5 => \s1_los_dir[1]_i_66__2_n_0\,
      O => \s1_los_dir[0]_i_4__2_n_0\
    );
\s1_los_dir[0]_i_5__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"44F444F4FFFF44F4"
    )
        port map (
      I0 => \s1_los_dir[0]_i_15__2_n_0\,
      I1 => \s1_los_dir[0]_i_16__2_n_0\,
      I2 => \s1_los_dir[0]_i_17__2_n_0\,
      I3 => \s1_los_dir[1]_i_46__2_n_0\,
      I4 => \s1_los_dir[1]_i_11__2_n_0\,
      I5 => \s1_los_dir[1]_i_10__2_n_0\,
      O => \s1_los_dir[0]_i_5__2_n_0\
    );
\s1_los_dir[0]_i_6__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0008"
    )
        port map (
      I0 => \s1_los_dir[1]_i_9__2_n_0\,
      I1 => rover_col_3_sn_1,
      I2 => ghost4_col(2),
      I3 => ghost4_col(3),
      O => \s1_los_dir[0]_i_6__2_n_0\
    );
\s1_los_dir[0]_i_7__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0100000001010101"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => rover_col_2_sn_1,
      O => \s1_los_dir[0]_i_7__2_n_0\
    );
\s1_los_dir[0]_i_8__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"38AAAE3C08AAA200"
    )
        port map (
      I0 => \s1_los_dir[1]_i_61__1_n_0\,
      I1 => \s1_los_dir[0]_i_18__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_40__2_n_0\,
      I4 => \s1_los_dir[1]_i_37__2_n_0\,
      I5 => \s1_los_dir[1]_i_44__2_n_0\,
      O => \s1_los_dir[0]_i_8__2_n_0\
    );
\s1_los_dir[0]_i_9__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7D3C3CDD41000011"
    )
        port map (
      I0 => \s1_los_dir[0]_i_19__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_40__2_n_0\,
      I3 => \s1_los_dir[1]_i_38__2_n_0\,
      I4 => \s1_los_dir[0]_i_20__2_n_0\,
      I5 => \s1_los_dir[1]_i_55__1_n_0\,
      O => \s1_los_dir[0]_i_9__2_n_0\
    );
\s1_los_dir[1]_i_100__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"AA80"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(0),
      I2 => rover_col(1),
      I3 => rover_col(2),
      O => \^rover_col[3]_0\
    );
\s1_los_dir[1]_i_105__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6FF6"
    )
        port map (
      I0 => rover_row(3),
      I1 => ghost4_row(3),
      I2 => rover_row(2),
      I3 => ghost4_row(2),
      O => \s1_los_dir[1]_i_105__2_n_0\
    );
\s1_los_dir[1]_i_10__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F111FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(0),
      I1 => rover_col(1),
      I2 => ghost4_col(2),
      I3 => ghost4_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_10__2_n_0\
    );
\s1_los_dir[1]_i_11__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"B2B88B8B82888888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_42__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_43__1_n_0\,
      I3 => \s1_los_dir[1]_i_40__2_n_0\,
      I4 => \s1_los_dir[1]_i_38__2_n_0\,
      I5 => \s1_los_dir[1]_i_41__1_n_0\,
      O => \s1_los_dir[1]_i_11__2_n_0\
    );
\s1_los_dir[1]_i_12__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__2_n_0\,
      I1 => \s1_los_dir[1]_i_40__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_37__2_n_0\,
      I4 => \s1_los_dir[1]_i_45__2_n_0\,
      I5 => \s1_los_dir[1]_i_46__2_n_0\,
      O => \s1_los_dir[1]_i_12__2_n_0\
    );
\s1_los_dir[1]_i_13__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__2_n_0\,
      I1 => \s1_los_dir[1]_i_48__2_n_0\,
      I2 => \s1_los_dir[1]_i_49__2_n_0\,
      I3 => \s1_los_dir[1]_i_50__2_n_0\,
      I4 => \s1_los_dir[1]_i_51__2_n_0\,
      I5 => rover_col_2_sn_1,
      O => \s1_los_dir[1]_i_13__2_n_0\
    );
\s1_los_dir[1]_i_14__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__2_n_0\,
      I1 => \s1_los_dir[1]_i_53__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_54__2_n_0\,
      I4 => \s1_los_dir[1]_i_35__2_n_0\,
      I5 => \^rover_col[2]_1\,
      O => \s1_los_dir[1]_i_14__2_n_0\
    );
\s1_los_dir[1]_i_15__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55__1_n_0\,
      I1 => \s1_los_dir[1]_i_56__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_57__2_n_0\,
      I4 => \^rover_col[2]_2\,
      I5 => \s1_los_dir[1]_i_58__2_n_0\,
      O => \s1_los_dir[1]_i_15__2_n_0\
    );
\s1_los_dir[1]_i_16__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFF417DFFFFFFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_60__2_n_0\,
      I3 => \s1_los_dir[1]_i_61__1_n_0\,
      I4 => \^rover_col[3]_1\,
      I5 => \s1_los_dir[1]_i_62__1_n_0\,
      O => \s1_los_dir[1]_i_16__2_n_0\
    );
\s1_los_dir[1]_i_17__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0400000404444404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_34__2_n_0\,
      I1 => rover_col(3),
      I2 => \s1_los_dir[1]_i_63__2_n_0\,
      I3 => \s1_los_dir[1]_i_64__2_n_0\,
      I4 => \s1_los_dir[1]_i_37__2_n_0\,
      I5 => \s1_los_dir[1]_i_65__2_n_0\,
      O => \s1_los_dir[1]_i_17__2_n_0\
    );
\s1_los_dir[1]_i_18__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_66__2_n_0\,
      I1 => \s1_los_dir[1]_i_67__1_n_0\,
      I2 => \s1_los_dir[1]_i_68__2_n_0\,
      I3 => \s1_los_dir[1]_i_69__2_n_0\,
      I4 => \s1_los_dir[1]_i_70__2_n_0\,
      I5 => \s1_los_dir[1]_i_71__2_n_0\,
      O => \s1_los_dir[1]_i_18__2_n_0\
    );
\s1_los_dir[1]_i_19__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_72__2_n_0\,
      I1 => \s1_los_dir[1]_i_73__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_74__2_n_0\,
      I4 => \s1_los_dir[1]_i_75__2_n_0\,
      O => \s1_los_dir[1]_i_19__2_n_0\
    );
\s1_los_dir[1]_i_1__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0404040404FF0404"
    )
        port map (
      I0 => \s1_los_dir[1]_i_2__2_n_0\,
      I1 => \s1_los_dir[1]_i_3__2_n_0\,
      I2 => \s1_los_dir[1]_i_4__2_n_0\,
      I3 => \s1_los_dir[1]_i_5__2_n_0\,
      I4 => \s1_los_dir[1]_i_6__2_n_0\,
      I5 => \s1_los_dir[1]_i_7__2_n_0\,
      O => los_dir_comb(1)
    );
\s1_los_dir[1]_i_20__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_76__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_77__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[1]_i_41__1_n_0\,
      O => \s1_los_dir[1]_i_20__1_n_0\
    );
\s1_los_dir[1]_i_20__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FF"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(0),
      I2 => rover_col(1),
      I3 => rover_col(3),
      O => \^rover_col[2]_0\
    );
\s1_los_dir[1]_i_21__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"15"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      O => \s1_los_dir[1]_i_21__2_n_0\
    );
\s1_los_dir[1]_i_22__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_78__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_79__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[1]_i_44__2_n_0\,
      O => \s1_los_dir[1]_i_22__1_n_0\
    );
\s1_los_dir[1]_i_23__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost4_col(2),
      I3 => ghost4_col(1),
      I4 => ghost4_col(0),
      I5 => ghost4_col(3),
      O => \s1_los_dir[1]_i_23__1_n_0\
    );
\s1_los_dir[1]_i_23__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF80"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(0),
      I2 => rover_col(1),
      I3 => rover_col(3),
      O => \^rover_col[2]_3\
    );
\s1_los_dir[1]_i_24__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFF01FFFFFFFF"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => rover_col(0),
      I4 => rover_col(1),
      I5 => rover_col_2_sn_1,
      O => \s1_los_dir[1]_i_24__2_n_0\
    );
\s1_los_dir[1]_i_25__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEBEBBBB22828888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_74__2_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_80__2_n_0\,
      I3 => \s1_los_dir[1]_i_81__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[1]_i_72__2_n_0\,
      O => \s1_los_dir[1]_i_25__2_n_0\
    );
\s1_los_dir[1]_i_26__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000F1010000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_47__2_n_0\,
      I1 => \s1_los_dir[1]_i_48__2_n_0\,
      I2 => \s1_los_dir[1]_i_49__2_n_0\,
      I3 => \s1_los_dir[1]_i_50__2_n_0\,
      I4 => \^rover_col[3]_1\,
      I5 => \s1_los_dir[1]_i_82__2_n_0\,
      O => \s1_los_dir[1]_i_26__2_n_0\
    );
\s1_los_dir[1]_i_27__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000003FCA000A"
    )
        port map (
      I0 => \s1_los_dir[1]_i_44__2_n_0\,
      I1 => \s1_los_dir[1]_i_40__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_37__2_n_0\,
      I4 => \s1_los_dir[1]_i_45__2_n_0\,
      I5 => \s1_los_dir[1]_i_83__1_n_0\,
      O => \s1_los_dir[1]_i_27__2_n_0\
    );
\s1_los_dir[1]_i_28__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"BE82000000000000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_52__2_n_0\,
      I1 => \s1_los_dir[1]_i_53__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_54__2_n_0\,
      I4 => \^rover_col[2]_0\,
      I5 => \s1_los_dir[1]_i_84__2_n_0\,
      O => \s1_los_dir[1]_i_28__2_n_0\
    );
\s1_los_dir[1]_i_29__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000000000BE82"
    )
        port map (
      I0 => \s1_los_dir[1]_i_55__1_n_0\,
      I1 => \s1_los_dir[1]_i_56__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_57__2_n_0\,
      I4 => rover_col_3_sn_1,
      I5 => \s1_los_dir[1]_i_21__2_n_0\,
      O => \s1_los_dir[1]_i_29__2_n_0\
    );
\s1_los_dir[1]_i_2__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_8__2_n_0\,
      I1 => \s1_los_dir[1]_i_9__2_n_0\,
      I2 => \s1_los_dir[1]_i_10__2_n_0\,
      I3 => \s1_los_dir[1]_i_11__2_n_0\,
      I4 => \s1_los_dir[1]_i_12__2_n_0\,
      I5 => \s1_los_dir[1]_i_13__2_n_0\,
      O => \s1_los_dir[1]_i_2__2_n_0\
    );
\s1_los_dir[1]_i_30__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFBE82FFFF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_63__2_n_0\,
      I1 => \s1_los_dir[1]_i_64__2_n_0\,
      I2 => \s1_los_dir[1]_i_37__2_n_0\,
      I3 => \s1_los_dir[1]_i_65__2_n_0\,
      I4 => ghost4_col(3),
      I5 => \^rover_col[2]_3\,
      O => \s1_los_dir[1]_i_30__2_n_0\
    );
\s1_los_dir[1]_i_31__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"00000000BE820000"
    )
        port map (
      I0 => \s1_los_dir[1]_i_59__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_60__2_n_0\,
      I3 => \s1_los_dir[1]_i_61__1_n_0\,
      I4 => \^rover_col[3]_2\,
      I5 => \s1_los_dir[1]_i_51__2_n_0\,
      O => \s1_los_dir[1]_i_31__2_n_0\
    );
\s1_los_dir[1]_i_32__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFF55550100"
    )
        port map (
      I0 => \s1_los_dir[1]_i_85__2_n_0\,
      I1 => \s1_los_dir[1]_i_67__1_n_0\,
      I2 => \s1_los_dir[1]_i_68__2_n_0\,
      I3 => \s1_los_dir[1]_i_69__2_n_0\,
      I4 => \s1_los_dir[1]_i_70__2_n_0\,
      I5 => \s1_los_dir[1]_i_86__2_n_0\,
      O => \s1_los_dir[1]_i_32__2_n_0\
    );
\s1_los_dir[1]_i_33__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"000000004FF44004"
    )
        port map (
      I0 => \s1_los_dir[1]_i_87__1_n_0\,
      I1 => \s1_los_dir[1]_i_41__1_n_0\,
      I2 => \s1_los_dir[1]_i_88__2_n_0\,
      I3 => \s1_los_dir[1]_i_37__2_n_0\,
      I4 => \s1_los_dir[1]_i_42__2_n_0\,
      I5 => \s1_los_dir[1]_i_89__2_n_0\,
      O => \s1_los_dir[1]_i_33__2_n_0\
    );
\s1_los_dir[1]_i_34__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FF80"
    )
        port map (
      I0 => ghost4_col(0),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => ghost4_col(3),
      O => \s1_los_dir[1]_i_34__2_n_0\
    );
\s1_los_dir[1]_i_35__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"01FF"
    )
        port map (
      I0 => ghost4_col(0),
      I1 => ghost4_col(1),
      I2 => ghost4_col(2),
      I3 => ghost4_col(3),
      O => \s1_los_dir[1]_i_35__2_n_0\
    );
\s1_los_dir[1]_i_36__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"27270F0D04A40082"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_36__1_n_0\
    );
\s1_los_dir[1]_i_36__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"EC"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(3),
      I2 => rover_col(1),
      O => \^rover_col[2]_2\
    );
\s1_los_dir[1]_i_37__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555655"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__2_0\(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => \s1_los_dir[1]_i_33__2_0\(3),
      I3 => \s1_los_dir[1]_i_44__2_n_0\,
      I4 => \s1_los_dir[1]_i_33__2_0\(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[1]_i_37__2_n_0\
    );
\s1_los_dir[1]_i_38__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"55555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(2),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(0),
      I4 => ghost4_row(1),
      O => \s1_los_dir[1]_i_38__2_n_0\
    );
\s1_los_dir[1]_i_39__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[1]_i_39__2_n_0\
    );
\s1_los_dir[1]_i_3__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_14__2_n_0\,
      I1 => \s1_los_dir[1]_i_15__2_n_0\,
      I2 => \s1_los_dir[1]_i_16__2_n_0\,
      I3 => \s1_los_dir[1]_i_17__2_n_0\,
      I4 => \s1_los_dir[1]_i_18__2_n_0\,
      I5 => \s1_los_dir[1]_i_19__2_n_0\,
      O => \s1_los_dir[1]_i_3__2_n_0\
    );
\s1_los_dir[1]_i_40__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5555555555555556"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(0),
      I4 => ghost4_row(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[1]_i_40__2_n_0\
    );
\s1_los_dir[1]_i_41__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      O => \s1_los_dir[1]_i_41__1_n_0\
    );
\s1_los_dir[1]_i_42__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0013401780DCA2D4"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => ghost4_row(0),
      I4 => ghost4_row(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_42__2_n_0\
    );
\s1_los_dir[1]_i_43__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      O => \s1_los_dir[1]_i_43__1_n_0\
    );
\s1_los_dir[1]_i_44__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => ghost4_row(1),
      O => \s1_los_dir[1]_i_44__2_n_0\
    );
\s1_los_dir[1]_i_45__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"6022355C000835CC"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => ghost4_row(0),
      I5 => ghost4_row(1),
      O => \s1_los_dir[1]_i_45__2_n_0\
    );
\s1_los_dir[1]_i_46__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"E0FF"
    )
        port map (
      I0 => ghost4_col(1),
      I1 => ghost4_col(2),
      I2 => ghost4_col(3),
      I3 => \^rover_col[3]_0\,
      O => \s1_los_dir[1]_i_46__2_n_0\
    );
\s1_los_dir[1]_i_47__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_47__2_n_0\
    );
\s1_los_dir[1]_i_48__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => ghost4_row(1),
      O => \s1_los_dir[1]_i_48__2_n_0\
    );
\s1_los_dir[1]_i_49__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5666"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__2_0\(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(3),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_49__2_n_0\
    );
\s1_los_dir[1]_i_4__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FF10101010101010"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => \^rover_col[2]_0\,
      I2 => \s1_los_dir[1]_i_20__1_n_0\,
      I3 => \s1_los_dir[1]_i_21__2_n_0\,
      I4 => \^rover_col[2]_3\,
      I5 => \s1_los_dir[1]_i_22__1_n_0\,
      O => \s1_los_dir[1]_i_4__2_n_0\
    );
\s1_los_dir[1]_i_50__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"5CCC22A05CC60800"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => ghost4_row(0),
      I5 => ghost4_row(1),
      O => \s1_los_dir[1]_i_50__2_n_0\
    );
\s1_los_dir[1]_i_51__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      I3 => ghost4_col(0),
      O => \s1_los_dir[1]_i_51__2_n_0\
    );
\s1_los_dir[1]_i_52__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"44400004"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_52__2_n_0\
    );
\s1_los_dir[1]_i_53__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000001155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => ghost4_row(1),
      I2 => ghost4_row(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_53__2_n_0\
    );
\s1_los_dir[1]_i_54__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"083009B52AA82AA0"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(2),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => ghost4_row(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(3),
      O => \s1_los_dir[1]_i_54__2_n_0\
    );
\s1_los_dir[1]_i_55__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1F0C0054FF00E000"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      I5 => \s1_los_dir[1]_i_33__2_0\(3),
      O => \s1_los_dir[1]_i_55__1_n_0\
    );
\s1_los_dir[1]_i_55__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(3),
      O => rover_col_2_sn_1
    );
\s1_los_dir[1]_i_56__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFF880001"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(0),
      I1 => ghost4_row(1),
      I2 => ghost4_row(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      I5 => \s1_los_dir[1]_i_33__2_0\(3),
      O => \s1_los_dir[1]_i_56__2_n_0\
    );
\s1_los_dir[1]_i_57__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0802"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => ghost4_row(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_57__2_n_0\
    );
\s1_los_dir[1]_i_58__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(0),
      I2 => ghost4_col(1),
      I3 => ghost4_col(2),
      O => \s1_los_dir[1]_i_58__2_n_0\
    );
\s1_los_dir[1]_i_59__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"00000095"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(2),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(0),
      I4 => ghost4_row(1),
      O => \s1_los_dir[1]_i_59__1_n_0\
    );
\s1_los_dir[1]_i_59__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"1F"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(1),
      I2 => rover_col(3),
      O => \^rover_col[2]_1\
    );
\s1_los_dir[1]_i_5__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFF4F44"
    )
        port map (
      I0 => \s1_los_dir[1]_i_23__1_n_0\,
      I1 => \s1_los_dir[1]_i_9__2_n_0\,
      I2 => \s1_los_dir[1]_i_24__2_n_0\,
      I3 => \s1_los_dir[1]_i_25__2_n_0\,
      I4 => \s1_los_dir[1]_i_26__2_n_0\,
      I5 => \s1_los_dir[1]_i_27__2_n_0\,
      O => \s1_los_dir[1]_i_5__2_n_0\
    );
\s1_los_dir[1]_i_60__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"1155115511551554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => ghost4_row(0),
      I5 => ghost4_row(1),
      O => \s1_los_dir[1]_i_60__2_n_0\
    );
\s1_los_dir[1]_i_61__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"078DA4822F0D0002"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => ghost4_row(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      I5 => ghost4_row(1),
      O => \s1_los_dir[1]_i_61__1_n_0\
    );
\s1_los_dir[1]_i_62__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => ghost4_col(2),
      I1 => ghost4_col(1),
      I2 => ghost4_col(3),
      O => \s1_los_dir[1]_i_62__1_n_0\
    );
\s1_los_dir[1]_i_63__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"3F7FFFBF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_63__2_n_0\
    );
\s1_los_dir[1]_i_64__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000111155555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_64__2_n_0\
    );
\s1_los_dir[1]_i_65__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A5FBC5B3C5F7C5FF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(2),
      I1 => \s1_los_dir[1]_i_33__2_0\(3),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(0),
      I5 => ghost4_row(1),
      O => \s1_los_dir[1]_i_65__2_n_0\
    );
\s1_los_dir[1]_i_66__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => ghost4_col(2),
      I1 => ghost4_col(1),
      I2 => ghost4_col(0),
      I3 => ghost4_col(3),
      I4 => rover_col(3),
      I5 => rover_col(2),
      O => \s1_los_dir[1]_i_66__2_n_0\
    );
\s1_los_dir[1]_i_67__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A9"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__2_0\(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(3),
      I2 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_67__1_n_0\
    );
\s1_los_dir[1]_i_67__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0111"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => rover_col(1),
      I3 => rover_col(0),
      O => \^rover_col[3]_1\
    );
\s1_los_dir[1]_i_68__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"CCC0CCC800033333"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => \s1_los_dir[1]_i_33__2_0\(3),
      I2 => \s1_los_dir[1]_i_33__2_0\(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(1),
      I4 => ghost4_row(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_68__2_n_0\
    );
\s1_los_dir[1]_i_69__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F6BFF48FF49FFC0F"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(3),
      I3 => \s1_los_dir[1]_i_33__2_0\(2),
      I4 => ghost4_row(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[1]_i_69__2_n_0\
    );
\s1_los_dir[1]_i_6__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000010"
    )
        port map (
      I0 => \s1_los_dir[1]_i_28__2_n_0\,
      I1 => \s1_los_dir[1]_i_29__2_n_0\,
      I2 => \s1_los_dir[1]_i_30__2_n_0\,
      I3 => \s1_los_dir[1]_i_31__2_n_0\,
      I4 => \s1_los_dir[1]_i_32__2_n_0\,
      I5 => \s1_los_dir[1]_i_33__2_n_0\,
      O => \s1_los_dir[1]_i_6__2_n_0\
    );
\s1_los_dir[1]_i_70__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8000"
    )
        port map (
      I0 => \s1_los_dir[0]_i_4__2_0\(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(2),
      I2 => ghost4_row(1),
      I3 => ghost4_row(0),
      O => \s1_los_dir[1]_i_70__2_n_0\
    );
\s1_los_dir[1]_i_71__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"FE"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92__1_n_0\,
      I1 => \s1_los_dir[1]_i_93__1_n_0\,
      I2 => \s1_los_dir[1]_i_94__2_n_0\,
      O => \s1_los_dir[1]_i_71__2_n_0\
    );
\s1_los_dir[1]_i_72__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"20001030"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(1),
      I2 => ghost4_row(0),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_72__2_n_0\
    );
\s1_los_dir[1]_i_73__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0011555555555554"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(1),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_73__2_n_0\
    );
\s1_los_dir[1]_i_74__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"74F0D2D2202A0020"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(2),
      I3 => ghost4_row(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(1),
      I5 => ghost4_row(0),
      O => \s1_los_dir[1]_i_74__2_n_0\
    );
\s1_los_dir[1]_i_75__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFF4"
    )
        port map (
      I0 => rover_col(1),
      I1 => rover_col_2_sn_1,
      I2 => ghost4_col(0),
      I3 => ghost4_col(3),
      I4 => ghost4_col(1),
      I5 => ghost4_col(2),
      O => \s1_los_dir[1]_i_75__2_n_0\
    );
\s1_los_dir[1]_i_76__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"02021F5F002AD050"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => ghost4_row(1),
      I4 => ghost4_row(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_76__2_n_0\
    );
\s1_los_dir[1]_i_77__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(0),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => ghost4_row(1),
      I3 => ghost4_row(0),
      O => \s1_los_dir[1]_i_77__2_n_0\
    );
\s1_los_dir[1]_i_78__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0727270F2404A400"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(3),
      I1 => \s1_los_dir[1]_i_33__2_0\(1),
      I2 => ghost4_row(0),
      I3 => ghost4_row(1),
      I4 => \s1_los_dir[1]_i_33__2_0\(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_78__1_n_0\
    );
\s1_los_dir[1]_i_79__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0154"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(1),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      O => \s1_los_dir[1]_i_79__2_n_0\
    );
\s1_los_dir[1]_i_7__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"404040FF40404040"
    )
        port map (
      I0 => \^rover_col[2]_2\,
      I1 => \s1_los_dir[1]_i_34__2_n_0\,
      I2 => \s1_los_dir[1]_i_22__1_n_0\,
      I3 => rover_col(3),
      I4 => \s1_los_dir[1]_i_35__2_n_0\,
      I5 => \s1_los_dir[1]_i_20__1_n_0\,
      O => \s1_los_dir[1]_i_7__2_n_0\
    );
\s1_los_dir[1]_i_80__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"F0E00001"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_80__2_n_0\
    );
\s1_los_dir[1]_i_81__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"04"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(0),
      I1 => ghost4_row(0),
      I2 => ghost4_row(1),
      O => \s1_los_dir[1]_i_81__2_n_0\
    );
\s1_los_dir[1]_i_82__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => ghost4_col(2),
      I1 => ghost4_col(3),
      O => \s1_los_dir[1]_i_82__2_n_0\
    );
\s1_los_dir[1]_i_83__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"5777FFFF"
    )
        port map (
      I0 => \^rover_col[2]_1\,
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      I3 => ghost4_col(0),
      I4 => ghost4_col(3),
      O => \s1_los_dir[1]_i_83__1_n_0\
    );
\s1_los_dir[1]_i_84__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A8"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(2),
      I2 => ghost4_col(1),
      O => \s1_los_dir[1]_i_84__2_n_0\
    );
\s1_los_dir[1]_i_85__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EA00FFFFFFFFFFFF"
    )
        port map (
      I0 => rover_col(2),
      I1 => rover_col(1),
      I2 => rover_col(0),
      I3 => rover_col(3),
      I4 => ghost4_col(3),
      I5 => ghost4_col(2),
      O => \s1_los_dir[1]_i_85__2_n_0\
    );
\s1_los_dir[1]_i_86__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"BF"
    )
        port map (
      I0 => \s1_los_dir[1]_i_92__1_n_0\,
      I1 => \s1_los_dir[1]_i_95__2_n_0\,
      I2 => \s1_los_dir[1]_i_96__2_n_0\,
      O => \s1_los_dir[1]_i_86__2_n_0\
    );
\s1_los_dir[1]_i_87__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"80007FFF"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(0),
      I2 => \s1_los_dir[1]_i_33__2_0\(1),
      I3 => \s1_los_dir[1]_i_33__2_0\(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(2),
      O => \s1_los_dir[1]_i_87__1_n_0\
    );
\s1_los_dir[1]_i_88__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0111111111111110"
    )
        port map (
      I0 => \s1_los_dir[1]_i_33__2_0\(2),
      I1 => \s1_los_dir[1]_i_33__2_0\(3),
      I2 => ghost4_row(1),
      I3 => ghost4_row(0),
      I4 => \s1_los_dir[1]_i_33__2_0\(0),
      I5 => \s1_los_dir[1]_i_33__2_0\(1),
      O => \s1_los_dir[1]_i_88__2_n_0\
    );
\s1_los_dir[1]_i_89__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"8FFF8FFF8FFFFFFF"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => ghost4_col(2),
      I3 => ghost4_col(3),
      I4 => ghost4_col(0),
      I5 => ghost4_col(1),
      O => \s1_los_dir[1]_i_89__2_n_0\
    );
\s1_los_dir[1]_i_8__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"EEEEEEEEEFEFEFFF"
    )
        port map (
      I0 => ghost4_col(3),
      I1 => ghost4_col(2),
      I2 => rover_col(2),
      I3 => rover_col(1),
      I4 => rover_col(0),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_8__2_n_0\
    );
\s1_los_dir[1]_i_91\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FEAA"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(0),
      I2 => rover_col(1),
      I3 => rover_col(2),
      O => rover_col_3_sn_1
    );
\s1_los_dir[1]_i_92__1\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"FFFF6FF6"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => rover_row(1),
      I2 => ghost4_row(0),
      I3 => rover_row(0),
      I4 => \s1_los_dir[1]_i_105__2_n_0\,
      O => \s1_los_dir[1]_i_92__1_n_0\
    );
\s1_los_dir[1]_i_92__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"01"
    )
        port map (
      I0 => rover_col(3),
      I1 => rover_col(2),
      I2 => rover_col(1),
      O => \^rover_col[3]_2\
    );
\s1_los_dir[1]_i_93__1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"20F220F2B0FB20F2"
    )
        port map (
      I0 => ghost4_col(2),
      I1 => rover_col(2),
      I2 => ghost4_col(3),
      I3 => rover_col(3),
      I4 => ghost4_col(1),
      I5 => rover_col(1),
      O => \s1_los_dir[1]_i_93__1_n_0\
    );
\s1_los_dir[1]_i_94__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"A2A200A2"
    )
        port map (
      I0 => \s1_los_detected_i_26__2_n_0\,
      I1 => rover_col(3),
      I2 => ghost4_col(3),
      I3 => rover_col(0),
      I4 => ghost4_col(0),
      O => \s1_los_dir[1]_i_94__2_n_0\
    );
\s1_los_dir[1]_i_95__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"DD4D0000FFFFDD4D"
    )
        port map (
      I0 => rover_col(2),
      I1 => ghost4_col(2),
      I2 => rover_col(1),
      I3 => ghost4_col(1),
      I4 => ghost4_col(3),
      I5 => rover_col(3),
      O => \s1_los_dir[1]_i_95__2_n_0\
    );
\s1_los_dir[1]_i_96__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"AEAEFFAE"
    )
        port map (
      I0 => \s1_los_detected_i_25__1_n_0\,
      I1 => ghost4_col(0),
      I2 => rover_col(0),
      I3 => ghost4_col(3),
      I4 => rover_col(3),
      O => \s1_los_dir[1]_i_96__2_n_0\
    );
\s1_los_dir[1]_i_9__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"E22BB88B22288888"
    )
        port map (
      I0 => \s1_los_dir[1]_i_36__1_n_0\,
      I1 => \s1_los_dir[1]_i_37__2_n_0\,
      I2 => \s1_los_dir[1]_i_38__2_n_0\,
      I3 => \s1_los_dir[1]_i_39__2_n_0\,
      I4 => \s1_los_dir[1]_i_40__2_n_0\,
      I5 => \s1_los_dir[1]_i_41__1_n_0\,
      O => \s1_los_dir[1]_i_9__2_n_0\
    );
\s1_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => los_dir_comb(0),
      Q => s1_los_dir(0)
    );
\s1_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => \s1_los_dir_reg[0]_0\(0),
      CLR => AR(0),
      D => los_dir_comb(1),
      Q => s1_los_dir(1)
    );
\s2_can_down_i_10__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__2_n_6\,
      O => \s2_can_down_i_10__2_n_0\
    );
\s2_can_down_i_11__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_11__2_n_0\
    );
\s2_can_down_i_12__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__2_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_down_i_12__2_n_0\
    );
\s2_can_down_i_13__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_down_reg_i_16__2_n_7\,
      O => \s2_can_down_i_13__2_n_0\
    );
\s2_can_down_i_14__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      O => \s2_can_down_i_14__2_n_0\
    );
\s2_can_down_i_15__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_15__2_n_0\
    );
\s2_can_down_i_17__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"542B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_down_i_17__2_n_0\
    );
\s2_can_down_i_18__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"8505"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_18__2_n_0\
    );
\s2_can_down_i_19__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1A9A"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_19__2_n_0\
    );
\s2_can_down_i_1__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000707070007"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(3),
      I3 => \s2_can_down_i_2__2_n_0\,
      I4 => \s2_can_down_reg_i_3__2_n_5\,
      I5 => \s2_can_down_i_4__2_n_0\,
      O => wc_down
    );
\s2_can_down_i_20__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"E"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_down_i_20__2_n_0\
    );
\s2_can_down_i_21__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"651A"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_21__2_n_0\
    );
\s2_can_down_i_22__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"4B52"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_22__2_n_0\
    );
\s2_can_down_i_23__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1CE3"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_down_i_23__2_n_0\
    );
\s2_can_down_i_24__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"65"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_down_i_24__2_n_0\
    );
\s2_can_down_i_2__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__2_n_6\,
      I1 => \s2_can_down_reg_i_5__2_n_6\,
      I2 => \s2_can_down_reg_i_3__2_n_7\,
      I3 => \s2_can_down_reg_i_5__2_n_5\,
      I4 => \s2_can_down_reg_i_5__2_n_4\,
      I5 => \s2_can_down_reg_i_5__2_n_7\,
      O => \s2_can_down_i_2__2_n_0\
    );
\s2_can_down_i_4__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => \s2_can_down_reg_i_3__2_n_7\,
      I1 => \s2_can_down_reg_i_5__2_n_7\,
      I2 => \s2_can_down_reg_i_5__2_n_6\,
      O => \s2_can_down_i_4__2_n_0\
    );
\s2_can_down_i_6__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_down_reg_i_16__2_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_down_i_6__2_n_0\
    );
\s2_can_down_i_9__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_down_reg_i_16__2_n_6\,
      I2 => \s2_can_down_reg_i_16__2_n_5\,
      O => \s2_can_down_i_9__2_n_0\
    );
s2_can_down_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_down,
      Q => s2_can_down
    );
\s2_can_down_reg_i_16__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_16__2_n_0\,
      CO(2) => \s2_can_down_reg_i_16__2_n_1\,
      CO(1) => \s2_can_down_reg_i_16__2_n_2\,
      CO(0) => \s2_can_down_reg_i_16__2_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_18__2_n_0\,
      DI(2) => \s2_can_down_i_19__2_n_0\,
      DI(1) => \s2_can_down_i_20__2_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_0\(0),
      O(2) => \s2_can_down_reg_i_16__2_n_5\,
      O(1) => \s2_can_down_reg_i_16__2_n_6\,
      O(0) => \s2_can_down_reg_i_16__2_n_7\,
      S(3) => \s2_can_down_i_21__2_n_0\,
      S(2) => \s2_can_down_i_22__2_n_0\,
      S(1) => \s2_can_down_i_23__2_n_0\,
      S(0) => \s2_can_down_i_24__2_n_0\
    );
\s2_can_down_reg_i_3__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_5__2_n_0\,
      CO(3 downto 2) => \NLW_s2_can_down_reg_i_3__2_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_down_reg_i_3__2_n_2\,
      CO(0) => \s2_can_down_reg_i_3__2_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_down_i_6__2_n_0\,
      O(3) => \NLW_s2_can_down_reg_i_3__2_O_UNCONNECTED\(3),
      O(2) => \s2_can_down_reg_i_3__2_n_5\,
      O(1) => \s2_can_down_reg_i_3__2_n_6\,
      O(0) => \s2_can_down_reg_i_3__2_n_7\,
      S(3) => '0',
      S(2) => \s2_can_down_reg_i_7__2_n_7\,
      S(1) => s2_can_down_reg_0(0),
      S(0) => \s2_can_down_i_9__2_n_0\
    );
\s2_can_down_reg_i_5__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_down_reg_i_5__2_n_0\,
      CO(2) => \s2_can_down_reg_i_5__2_n_1\,
      CO(1) => \s2_can_down_reg_i_5__2_n_2\,
      CO(0) => \s2_can_down_reg_i_5__2_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_down_i_10__2_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_down_i_11__2_n_0\,
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_down_reg_i_5__2_n_4\,
      O(2) => \s2_can_down_reg_i_5__2_n_5\,
      O(1) => \s2_can_down_reg_i_5__2_n_6\,
      O(0) => \s2_can_down_reg_i_5__2_n_7\,
      S(3) => \s2_can_down_i_12__2_n_0\,
      S(2) => \s2_can_down_i_13__2_n_0\,
      S(1) => \s2_can_down_i_14__2_n_0\,
      S(0) => \s2_can_down_i_15__2_n_0\
    );
\s2_can_down_reg_i_7__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_down_reg_i_16__2_n_0\,
      CO(3 downto 0) => \NLW_s2_can_down_reg_i_7__2_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_down_reg_i_7__2_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_down_reg_i_7__2_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_down_i_17__2_n_0\
    );
\s2_can_left_i_10__2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(1),
      O => \s2_can_left_i_10__2_n_0\
    );
\s2_can_left_i_11__2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => s1_ghost_row(0),
      O => \s2_can_left_i_11__2_n_0\
    );
\s2_can_left_i_12__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__2_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_left_i_12__2_n_0\
    );
\s2_can_left_i_13__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__2_n_7\,
      O => \s2_can_left_i_13__2_n_0\
    );
\s2_can_left_i_14__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      O => \s2_can_left_i_14__2_n_0\
    );
\s2_can_left_i_15__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_left_i_15__2_n_0\
    );
\s2_can_left_i_1__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"A2A2A202A2A2A2A2"
    )
        port map (
      I0 => wc_left01_in,
      I1 => \s2_can_left_i_3__2_n_0\,
      I2 => \s2_can_left_reg_i_4__2_n_5\,
      I3 => \s2_can_left_reg_i_5__2_n_6\,
      I4 => \s2_can_left_reg_i_5__2_n_7\,
      I5 => \s2_can_left_reg_i_4__2_n_7\,
      O => wc_left
    );
\s2_can_left_i_2__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"FFFE"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_col(3),
      O => wc_left01_in
    );
\s2_can_left_i_3__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"42020022F0A5870F"
    )
        port map (
      I0 => \s2_can_left_reg_i_4__2_n_6\,
      I1 => \s2_can_left_reg_i_5__2_n_6\,
      I2 => \s2_can_left_reg_i_4__2_n_7\,
      I3 => \s2_can_left_reg_i_5__2_n_5\,
      I4 => \s2_can_left_reg_i_5__2_n_4\,
      I5 => \s2_can_left_reg_i_5__2_n_7\,
      O => \s2_can_left_i_3__2_n_0\
    );
\s2_can_left_i_6__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__2_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_left_i_6__2_n_0\
    );
\s2_can_left_i_7__2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__2_n_4\,
      O => p_1_in(5)
    );
\s2_can_left_i_8__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__2_n_6\,
      I2 => \s2_can_right_reg_i_7__2_n_5\,
      O => \s2_can_left_i_8__2_n_0\
    );
\s2_can_left_i_9__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__2_n_6\,
      O => \s2_can_left_i_9__2_n_0\
    );
s2_can_left_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_left,
      Q => s2_can_left
    );
\s2_can_left_reg_i_4__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_left_reg_i_5__2_n_0\,
      CO(3 downto 2) => \NLW_s2_can_left_reg_i_4__2_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_left_reg_i_4__2_n_2\,
      CO(0) => \s2_can_left_reg_i_4__2_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_left_i_6__2_n_0\,
      O(3) => \NLW_s2_can_left_reg_i_4__2_O_UNCONNECTED\(3),
      O(2) => \s2_can_left_reg_i_4__2_n_5\,
      O(1) => \s2_can_left_reg_i_4__2_n_6\,
      O(0) => \s2_can_left_reg_i_4__2_n_7\,
      S(3) => '0',
      S(2) => \s2_can_right_reg_i_9__2_n_7\,
      S(1) => p_1_in(5),
      S(0) => \s2_can_left_i_8__2_n_0\
    );
\s2_can_left_reg_i_5__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_left_reg_i_5__2_n_0\,
      CO(2) => \s2_can_left_reg_i_5__2_n_1\,
      CO(1) => \s2_can_left_reg_i_5__2_n_2\,
      CO(0) => \s2_can_left_reg_i_5__2_n_3\,
      CYINIT => '1',
      DI(3) => \s2_can_left_i_9__2_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => \s2_can_left_i_10__2_n_0\,
      DI(0) => \s2_can_left_i_11__2_n_0\,
      O(3) => \s2_can_left_reg_i_5__2_n_4\,
      O(2) => \s2_can_left_reg_i_5__2_n_5\,
      O(1) => \s2_can_left_reg_i_5__2_n_6\,
      O(0) => \s2_can_left_reg_i_5__2_n_7\,
      S(3) => \s2_can_left_i_12__2_n_0\,
      S(2) => \s2_can_left_i_13__2_n_0\,
      S(1) => \s2_can_left_i_14__2_n_0\,
      S(0) => \s2_can_left_i_15__2_n_0\
    );
\s2_can_right_i_10__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"2ABFD540"
    )
        port map (
      I0 => \s2_can_right_i_8__2_n_0\,
      I1 => \s2_can_right_reg_i_7__2_n_6\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__2_n_5\,
      I4 => \s2_can_right_reg_i_7__2_n_4\,
      O => \s2_can_right_i_10__2_n_0\
    );
\s2_can_right_i_11__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7887"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_col(1),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_11__2_n_0\
    );
\s2_can_right_i_12__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"7887F00FF00F8778"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      I2 => \s2_can_right_reg_i_7__2_n_7\,
      I3 => s1_ghost_col(2),
      I4 => s1_ghost_col(1),
      I5 => s1_ghost_row(1),
      O => \s2_can_right_i_12__2_n_0\
    );
\s2_can_right_i_13__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"56A9A956"
    )
        port map (
      I0 => \s2_can_right_i_6__2_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__2_n_7\,
      I3 => \s2_can_right_reg_i_7__2_n_6\,
      I4 => s1_ghost_col(3),
      O => \s2_can_right_i_13__2_n_0\
    );
\s2_can_right_i_14__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_col(0),
      O => \s2_can_right_i_14__2_n_0\
    );
\s2_can_right_i_15__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      O => \s2_can_right_i_15__2_n_0\
    );
\s2_can_right_i_16__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      O => \s2_can_right_i_16__2_n_0\
    );
\s2_can_right_i_17__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_17__2_n_0\
    );
\s2_can_right_i_18__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(3),
      I3 => s1_ghost_row(1),
      O => \s2_can_right_i_18__2_n_0\
    );
\s2_can_right_i_19__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_row(3),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_19__2_n_0\
    );
\s2_can_right_i_1__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000077777770777"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_i_2__2_n_0\,
      I3 => \s2_can_right_i_3__2_n_0\,
      I4 => \s2_can_right_i_4__2_n_0\,
      I5 => \s2_can_right_i_5__2_n_0\,
      O => wc_right
    );
\s2_can_right_i_20__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"2DD2"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(2),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_right_i_20__2_n_0\
    );
\s2_can_right_i_21__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      O => \s2_can_right_i_21__2_n_0\
    );
\s2_can_right_i_22__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"4B"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      O => \s2_can_right_i_22__2_n_0\
    );
\s2_can_right_i_2__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"0990"
    )
        port map (
      I0 => s1_ghost_row(1),
      I1 => s1_ghost_col(1),
      I2 => s1_ghost_col(0),
      I3 => s1_ghost_row(0),
      O => \s2_can_right_i_2__2_n_0\
    );
\s2_can_right_i_3__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AB54FD02FD0254AB"
    )
        port map (
      I0 => \s2_can_right_i_6__2_n_0\,
      I1 => s1_ghost_col(2),
      I2 => \s2_can_right_reg_i_7__2_n_7\,
      I3 => \s2_can_right_reg_i_7__2_n_5\,
      I4 => \s2_can_right_reg_i_7__2_n_6\,
      I5 => s1_ghost_col(3),
      O => \s2_can_right_i_3__2_n_0\
    );
\s2_can_right_i_4__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"15550111EAAAFEEE"
    )
        port map (
      I0 => \s2_can_right_reg_i_7__2_n_4\,
      I1 => \s2_can_right_reg_i_7__2_n_5\,
      I2 => s1_ghost_col(3),
      I3 => \s2_can_right_reg_i_7__2_n_6\,
      I4 => \s2_can_right_i_8__2_n_0\,
      I5 => \s2_can_right_reg_i_9__2_n_7\,
      O => \s2_can_right_i_4__2_n_0\
    );
\s2_can_right_i_5__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A52D0F18080088"
    )
        port map (
      I0 => \s2_can_right_i_10__2_n_0\,
      I1 => \s2_can_right_i_11__2_n_0\,
      I2 => \s2_can_right_i_3__2_n_0\,
      I3 => \s2_can_right_i_12__2_n_0\,
      I4 => \s2_can_right_i_13__2_n_0\,
      I5 => \s2_can_right_i_14__2_n_0\,
      O => \s2_can_right_i_5__2_n_0\
    );
\s2_can_right_i_6__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0666666F666F666F"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_right_reg_i_7__2_n_7\,
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_col(1),
      I4 => s1_ghost_row(0),
      I5 => s1_ghost_col(0),
      O => \s2_can_right_i_6__2_n_0\
    );
\s2_can_right_i_8__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"999F0009"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_right_reg_i_7__2_n_6\,
      I2 => \s2_can_right_reg_i_7__2_n_7\,
      I3 => s1_ghost_col(2),
      I4 => \s2_can_right_i_6__2_n_0\,
      O => \s2_can_right_i_8__2_n_0\
    );
s2_can_right_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_right,
      Q => s2_can_right
    );
\s2_can_right_reg_i_7__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_right_reg_i_7__2_n_0\,
      CO(2) => \s2_can_right_reg_i_7__2_n_1\,
      CO(1) => \s2_can_right_reg_i_7__2_n_2\,
      CO(0) => \s2_can_right_reg_i_7__2_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_right_i_15__2_n_0\,
      DI(2) => \s2_can_right_i_16__2_n_0\,
      DI(1) => \s2_can_right_i_17__2_n_0\,
      DI(0) => '0',
      O(3) => \s2_can_right_reg_i_7__2_n_4\,
      O(2) => \s2_can_right_reg_i_7__2_n_5\,
      O(1) => \s2_can_right_reg_i_7__2_n_6\,
      O(0) => \s2_can_right_reg_i_7__2_n_7\,
      S(3) => \s2_can_right_i_18__2_n_0\,
      S(2) => \s2_can_right_i_19__2_n_0\,
      S(1) => \s2_can_right_i_20__2_n_0\,
      S(0) => \s2_can_right_i_21__2_n_0\
    );
\s2_can_right_reg_i_9__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_right_reg_i_7__2_n_0\,
      CO(3 downto 0) => \NLW_s2_can_right_reg_i_9__2_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_right_reg_i_9__2_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_right_reg_i_9__2_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_right_i_22__2_n_0\
    );
\s2_can_up_i_10__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__2_n_6\,
      O => \s2_can_up_i_10__2_n_0\
    );
\s2_can_up_i_11__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      O => wc_down5(1)
    );
\s2_can_up_i_12__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"96"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__2_n_6\,
      I2 => s1_ghost_col(2),
      O => \s2_can_up_i_12__2_n_0\
    );
\s2_can_up_i_13__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(2),
      I1 => \s2_can_up_reg_i_16__2_n_7\,
      O => \s2_can_up_i_13__2_n_0\
    );
\s2_can_up_i_14__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"69"
    )
        port map (
      I0 => s1_ghost_col(1),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_14__2_n_0\
    );
\s2_can_up_i_15__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"9"
    )
        port map (
      I0 => s1_ghost_col(0),
      I1 => s1_ghost_row(0),
      O => \s2_can_up_i_15__2_n_0\
    );
\s2_can_up_i_17__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"42BF"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_17__2_n_0\
    );
\s2_can_up_i_18__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"1213"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_18__2_n_0\
    );
\s2_can_up_i_19__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6564"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_19__2_n_0\
    );
\s2_can_up_i_1__2\: unisim.vcomponents.LUT5
    generic map(
      INIT => X"0000FFFE"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(2),
      I4 => \s2_can_up_i_2__2_n_0\,
      O => wc_up
    );
\s2_can_up_i_20__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"ED"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      O => \s2_can_up_i_20__2_n_0\
    );
\s2_can_up_i_21__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"9599"
    )
        port map (
      I0 => s1_ghost_row(3),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      I3 => s1_ghost_row(2),
      O => \s2_can_up_i_21__2_n_0\
    );
\s2_can_up_i_22__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"5964"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(0),
      I2 => s1_ghost_row(1),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_22__2_n_0\
    );
\s2_can_up_i_23__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"738C"
    )
        port map (
      I0 => s1_ghost_row(0),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(2),
      I3 => s1_ghost_row(3),
      O => \s2_can_up_i_23__2_n_0\
    );
\s2_can_up_i_24__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"A6"
    )
        port map (
      I0 => s1_ghost_row(2),
      I1 => s1_ghost_row(1),
      I2 => s1_ghost_row(0),
      O => \s2_can_up_i_24__2_n_0\
    );
\s2_can_up_i_2__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0028FFFF00280000"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__2_n_7\,
      I1 => s1_ghost_col(0),
      I2 => s1_ghost_row(0),
      I3 => \s2_can_up_reg_i_4__2_n_6\,
      I4 => \s2_can_up_reg_i_3__2_n_5\,
      I5 => \s2_can_up_i_5__2_n_0\,
      O => \s2_can_up_i_2__2_n_0\
    );
\s2_can_up_i_5__2\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"F0A5870F42020022"
    )
        port map (
      I0 => \s2_can_up_reg_i_3__2_n_6\,
      I1 => \s2_can_up_reg_i_4__2_n_6\,
      I2 => \s2_can_up_reg_i_3__2_n_7\,
      I3 => \s2_can_up_reg_i_4__2_n_5\,
      I4 => \s2_can_up_reg_i_4__2_n_4\,
      I5 => \s2_can_right_i_14__2_n_0\,
      O => \s2_can_up_i_5__2_n_0\
    );
\s2_can_up_i_6__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"7"
    )
        port map (
      I0 => \s2_can_up_reg_i_16__2_n_6\,
      I1 => s1_ghost_col(3),
      O => \s2_can_up_i_6__2_n_0\
    );
\s2_can_up_i_9__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"78"
    )
        port map (
      I0 => s1_ghost_col(3),
      I1 => \s2_can_up_reg_i_16__2_n_6\,
      I2 => \s2_can_up_reg_i_16__2_n_5\,
      O => \s2_can_up_i_9__2_n_0\
    );
s2_can_up_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => wc_up,
      Q => s2_can_up
    );
\s2_can_up_reg_i_16__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_16__2_n_0\,
      CO(2) => \s2_can_up_reg_i_16__2_n_1\,
      CO(1) => \s2_can_up_reg_i_16__2_n_2\,
      CO(0) => \s2_can_up_reg_i_16__2_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_18__2_n_0\,
      DI(2) => \s2_can_up_i_19__2_n_0\,
      DI(1) => \s2_can_up_i_20__2_n_0\,
      DI(0) => '0',
      O(3) => \s1_ghost_row_reg[2]_1\(0),
      O(2) => \s2_can_up_reg_i_16__2_n_5\,
      O(1) => \s2_can_up_reg_i_16__2_n_6\,
      O(0) => \s2_can_up_reg_i_16__2_n_7\,
      S(3) => \s2_can_up_i_21__2_n_0\,
      S(2) => \s2_can_up_i_22__2_n_0\,
      S(1) => \s2_can_up_i_23__2_n_0\,
      S(0) => \s2_can_up_i_24__2_n_0\
    );
\s2_can_up_reg_i_3__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_4__2_n_0\,
      CO(3 downto 2) => \NLW_s2_can_up_reg_i_3__2_CO_UNCONNECTED\(3 downto 2),
      CO(1) => \s2_can_up_reg_i_3__2_n_2\,
      CO(0) => \s2_can_up_reg_i_3__2_n_3\,
      CYINIT => '0',
      DI(3 downto 1) => B"000",
      DI(0) => \s2_can_up_i_6__2_n_0\,
      O(3) => \NLW_s2_can_up_reg_i_3__2_O_UNCONNECTED\(3),
      O(2) => \s2_can_up_reg_i_3__2_n_5\,
      O(1) => \s2_can_up_reg_i_3__2_n_6\,
      O(0) => \s2_can_up_reg_i_3__2_n_7\,
      S(3) => '0',
      S(2) => \s2_can_up_reg_i_7__2_n_7\,
      S(1) => \s2_can_up_i_2__2_0\(0),
      S(0) => \s2_can_up_i_9__2_n_0\
    );
\s2_can_up_reg_i_4__2\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s2_can_up_reg_i_4__2_n_0\,
      CO(2) => \s2_can_up_reg_i_4__2_n_1\,
      CO(1) => \s2_can_up_reg_i_4__2_n_2\,
      CO(0) => \s2_can_up_reg_i_4__2_n_3\,
      CYINIT => '0',
      DI(3) => \s2_can_up_i_10__2_n_0\,
      DI(2) => s1_ghost_col(2),
      DI(1) => wc_down5(1),
      DI(0) => s1_ghost_row(0),
      O(3) => \s2_can_up_reg_i_4__2_n_4\,
      O(2) => \s2_can_up_reg_i_4__2_n_5\,
      O(1) => \s2_can_up_reg_i_4__2_n_6\,
      O(0) => \NLW_s2_can_up_reg_i_4__2_O_UNCONNECTED\(0),
      S(3) => \s2_can_up_i_12__2_n_0\,
      S(2) => \s2_can_up_i_13__2_n_0\,
      S(1) => \s2_can_up_i_14__2_n_0\,
      S(0) => \s2_can_up_i_15__2_n_0\
    );
\s2_can_up_reg_i_7__2\: unisim.vcomponents.CARRY4
     port map (
      CI => \s2_can_up_reg_i_16__2_n_0\,
      CO(3 downto 0) => \NLW_s2_can_up_reg_i_7__2_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s2_can_up_reg_i_7__2_O_UNCONNECTED\(3 downto 1),
      O(0) => \s2_can_up_reg_i_7__2_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s2_can_up_i_17__2_n_0\
    );
\s2_facing_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(0),
      Q => s2_facing(0)
    );
\s2_facing_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => \^d\(1),
      Q => s2_facing(1)
    );
s2_los_detected_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_detected,
      Q => s2_los_detected
    );
\s2_los_dir_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(0),
      Q => s2_los_dir(0)
    );
\s2_los_dir_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => E(0),
      CLR => AR(0),
      D => s1_los_dir(1),
      Q => s2_los_dir(1)
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_multi_axi_lite is
  port (
    S_AXI_AWREADY : out STD_LOGIC;
    S_AXI_WREADY : out STD_LOGIC;
    S_AXI_ARREADY : out STD_LOGIC;
    S_AXI_BVALID : out STD_LOGIC;
    S_AXI_RVALID : out STD_LOGIC;
    O : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_0\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_1\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_2\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_3\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_4\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_ghost_row_reg[2]_5\ : out STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_RDATA : out STD_LOGIC_VECTOR ( 3 downto 0 );
    S_AXI_ACLK : in STD_LOGIC;
    S : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_up_i_2 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir[1]_i_35\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost1_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost1_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    rover_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[0]_i_4\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir[1]_i_33__0\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost2_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost2_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[0]_i_4__0\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg_0 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__1\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir[1]_i_33__1\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost3_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost3_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[0]_i_4__1\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    s2_can_down_reg_1 : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s2_can_up_i_2__2\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    \s1_los_dir[1]_i_33__2\ : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_row : in STD_LOGIC_VECTOR ( 3 downto 0 );
    ghost4_col : in STD_LOGIC_VECTOR ( 3 downto 0 );
    \s1_los_dir[0]_i_4__2\ : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_ARVALID : in STD_LOGIC;
    S_AXI_ARESETN : in STD_LOGIC;
    S_AXI_WVALID : in STD_LOGIC;
    S_AXI_AWVALID : in STD_LOGIC;
    S_AXI_BREADY : in STD_LOGIC;
    S_AXI_RREADY : in STD_LOGIC;
    S_AXI_WDATA : in STD_LOGIC_VECTOR ( 0 to 0 );
    S_AXI_AWADDR : in STD_LOGIC_VECTOR ( 1 downto 0 );
    S_AXI_ARADDR : in STD_LOGIC_VECTOR ( 1 downto 0 )
  );
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_multi_axi_lite;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_multi_axi_lite is
  signal S_AXI_ARREADY0 : STD_LOGIC;
  signal S_AXI_AWREADY0 : STD_LOGIC;
  signal \^s_axi_bvalid\ : STD_LOGIC;
  signal S_AXI_BVALID_i_1_n_0 : STD_LOGIC;
  signal \^s_axi_rvalid\ : STD_LOGIC;
  signal S_AXI_RVALID_i_1_n_0 : STD_LOGIC;
  signal S_AXI_WREADY0 : STD_LOGIC;
  signal aw_active_i_1_n_0 : STD_LOGIC;
  signal aw_active_reg_n_0 : STD_LOGIC;
  signal \direction[0]_1\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[1]_2\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[2]_3\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal \direction[3]_4\ : STD_LOGIC_VECTOR ( 1 downto 0 );
  signal game_enable_i_1_n_0 : STD_LOGIC;
  signal game_enable_reg_n_0 : STD_LOGIC;
  signal ghost1_n_0 : STD_LOGIC;
  signal ghost1_n_2 : STD_LOGIC;
  signal ghost4_n_10 : STD_LOGIC;
  signal ghost4_n_11 : STD_LOGIC;
  signal ghost4_n_12 : STD_LOGIC;
  signal ghost4_n_13 : STD_LOGIC;
  signal ghost4_n_14 : STD_LOGIC;
  signal ghost4_n_2 : STD_LOGIC;
  signal ghost4_n_3 : STD_LOGIC;
  signal ghost4_n_4 : STD_LOGIC;
  signal ghost4_n_5 : STD_LOGIC;
  signal ghost4_n_6 : STD_LOGIC;
  signal ghost4_n_7 : STD_LOGIC;
  signal ghost4_n_8 : STD_LOGIC;
  signal ghost4_n_9 : STD_LOGIC;
  signal \p_0_in__0\ : STD_LOGIC;
  signal read_data : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal rst : STD_LOGIC;
  signal \valid[0]_0\ : STD_LOGIC;
  signal w_active_i_1_n_0 : STD_LOGIC;
  signal w_active_reg_n_0 : STD_LOGIC;
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of S_AXI_AWREADY_i_1 : label is "soft_lutpair118";
  attribute SOFT_HLUTNM of S_AXI_BVALID_i_1 : label is "soft_lutpair117";
  attribute SOFT_HLUTNM of aw_active_i_1 : label is "soft_lutpair118";
  attribute SOFT_HLUTNM of w_active_i_1 : label is "soft_lutpair117";
begin
  S_AXI_BVALID <= \^s_axi_bvalid\;
  S_AXI_RVALID <= \^s_axi_rvalid\;
S_AXI_ARREADY_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => S_AXI_ARVALID,
      I1 => \^s_axi_rvalid\,
      O => S_AXI_ARREADY0
    );
S_AXI_ARREADY_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => S_AXI_ARREADY0,
      Q => S_AXI_ARREADY
    );
S_AXI_AWREADY_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => S_AXI_AWVALID,
      I1 => aw_active_reg_n_0,
      O => S_AXI_AWREADY0
    );
S_AXI_AWREADY_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => S_AXI_AWREADY0,
      Q => S_AXI_AWREADY
    );
S_AXI_BVALID_i_1: unisim.vcomponents.LUT4
    generic map(
      INIT => X"7444"
    )
        port map (
      I0 => S_AXI_BREADY,
      I1 => \^s_axi_bvalid\,
      I2 => w_active_reg_n_0,
      I3 => aw_active_reg_n_0,
      O => S_AXI_BVALID_i_1_n_0
    );
S_AXI_BVALID_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => S_AXI_BVALID_i_1_n_0,
      Q => \^s_axi_bvalid\
    );
\S_AXI_RDATA[0]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \direction[3]_4\(0),
      I1 => \direction[1]_2\(0),
      I2 => S_AXI_ARADDR(0),
      I3 => \direction[2]_3\(0),
      I4 => S_AXI_ARADDR(1),
      I5 => \direction[0]_1\(0),
      O => read_data(0)
    );
\S_AXI_RDATA[1]_i_1\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"AFA0CFCFAFA0C0C0"
    )
        port map (
      I0 => \direction[3]_4\(1),
      I1 => \direction[1]_2\(1),
      I2 => S_AXI_ARADDR(0),
      I3 => \direction[2]_3\(1),
      I4 => S_AXI_ARADDR(1),
      I5 => \direction[0]_1\(1),
      O => read_data(1)
    );
\S_AXI_RDATA[3]_i_1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"02"
    )
        port map (
      I0 => game_enable_reg_n_0,
      I1 => S_AXI_ARADDR(0),
      I2 => S_AXI_ARADDR(1),
      O => read_data(3)
    );
\S_AXI_RDATA_reg[0]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => S_AXI_ARREADY0,
      CLR => rst,
      D => read_data(0),
      Q => S_AXI_RDATA(0)
    );
\S_AXI_RDATA_reg[1]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => S_AXI_ARREADY0,
      CLR => rst,
      D => read_data(1),
      Q => S_AXI_RDATA(1)
    );
\S_AXI_RDATA_reg[2]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => S_AXI_ARREADY0,
      CLR => rst,
      D => \valid[0]_0\,
      Q => S_AXI_RDATA(2)
    );
\S_AXI_RDATA_reg[3]\: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => S_AXI_ARREADY0,
      CLR => rst,
      D => read_data(3),
      Q => S_AXI_RDATA(3)
    );
S_AXI_RVALID_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => S_AXI_RREADY,
      I1 => \^s_axi_rvalid\,
      I2 => S_AXI_ARVALID,
      O => S_AXI_RVALID_i_1_n_0
    );
S_AXI_RVALID_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => S_AXI_RVALID_i_1_n_0,
      Q => \^s_axi_rvalid\
    );
S_AXI_WREADY_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => S_AXI_WVALID,
      I1 => w_active_reg_n_0,
      O => S_AXI_WREADY0
    );
S_AXI_WREADY_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => S_AXI_WREADY0,
      Q => S_AXI_WREADY
    );
aw_active_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => w_active_reg_n_0,
      I1 => aw_active_reg_n_0,
      I2 => S_AXI_AWVALID,
      O => aw_active_i_1_n_0
    );
aw_active_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => aw_active_i_1_n_0,
      Q => aw_active_reg_n_0
    );
game_enable_i_1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFBF00000080"
    )
        port map (
      I0 => S_AXI_WDATA(0),
      I1 => w_active_reg_n_0,
      I2 => aw_active_reg_n_0,
      I3 => S_AXI_AWADDR(1),
      I4 => S_AXI_AWADDR(0),
      I5 => game_enable_reg_n_0,
      O => game_enable_i_1_n_0
    );
game_enable_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => game_enable_i_1_n_0,
      Q => game_enable_reg_n_0
    );
ghost1: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top
     port map (
      AR(0) => rst,
      D(0) => \valid[0]_0\,
      E(0) => ghost1_n_0,
      O(0) => O(0),
      S(0) => S(0),
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARESETN => S_AXI_ARESETN,
      \direction_reg[1]_0\(1 downto 0) => \direction[0]_1\(1 downto 0),
      ghost1_col(3 downto 0) => ghost1_col(3 downto 0),
      ghost1_row(3 downto 0) => ghost1_row(3 downto 0),
      \p_0_in__0\ => \p_0_in__0\,
      \pipe_en_reg[0]_0\(0) => ghost1_n_2,
      \pipe_en_reg[0]_1\ => game_enable_reg_n_0,
      rover_col(3 downto 0) => rover_col(3 downto 0),
      rover_row(3 downto 0) => rover_row(3 downto 0),
      \s1_ghost_row_reg[2]_0\(0) => \s1_ghost_row_reg[2]\(0),
      s1_los_detected_i_2_0 => ghost4_n_5,
      s1_los_detected_i_5_0 => ghost4_n_6,
      s1_los_detected_reg_0 => ghost4_n_2,
      s1_los_detected_reg_1 => ghost4_n_4,
      \s1_los_dir[0]_i_4_0\(0) => \s1_los_dir[0]_i_4\(0),
      \s1_los_dir[0]_i_5_0\ => ghost4_n_8,
      \s1_los_dir[1]_i_29_0\ => ghost4_n_10,
      \s1_los_dir[1]_i_2_0\ => ghost4_n_7,
      \s1_los_dir[1]_i_35_0\(3 downto 0) => \s1_los_dir[1]_i_35\(3 downto 0),
      \s1_los_dir[1]_i_5_0\ => ghost4_n_12,
      \s1_los_dir[1]_i_6_0\ => ghost4_n_3,
      \s1_los_dir[1]_i_6_1\ => ghost4_n_14,
      \s1_los_dir_reg[1]_0\ => ghost4_n_9,
      \s1_los_dir_reg[1]_1\ => ghost4_n_11,
      \s1_los_dir_reg[1]_2\ => ghost4_n_13,
      s2_can_up_i_2_0(0) => s2_can_up_i_2(0)
    );
ghost2: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_0
     port map (
      AR(0) => rst,
      D(1 downto 0) => \direction[1]_2\(1 downto 0),
      E(0) => ghost1_n_0,
      S_AXI_ACLK => S_AXI_ACLK,
      ghost2_col(3 downto 0) => ghost2_col(3 downto 0),
      ghost2_row(3 downto 0) => ghost2_row(3 downto 0),
      \p_0_in__0\ => \p_0_in__0\,
      rover_col(3 downto 0) => rover_col(3 downto 0),
      rover_row(3 downto 0) => rover_row(3 downto 0),
      \s1_ghost_row_reg[2]_0\(0) => \s1_ghost_row_reg[2]_0\(0),
      \s1_ghost_row_reg[2]_1\(0) => \s1_ghost_row_reg[2]_1\(0),
      \s1_los_detected_i_2__0_0\ => ghost4_n_5,
      s1_los_detected_i_4_0 => ghost4_n_6,
      s1_los_detected_reg_0(0) => ghost1_n_2,
      s1_los_detected_reg_1 => ghost4_n_2,
      s1_los_detected_reg_2 => ghost4_n_4,
      \s1_los_dir[0]_i_4__0_0\(0) => \s1_los_dir[0]_i_4__0\(0),
      \s1_los_dir[0]_i_5__0_0\ => ghost4_n_8,
      \s1_los_dir[1]_i_27__0_0\ => ghost4_n_10,
      \s1_los_dir[1]_i_2__0_0\ => ghost4_n_7,
      \s1_los_dir[1]_i_33__0_0\(3 downto 0) => \s1_los_dir[1]_i_33__0\(3 downto 0),
      \s1_los_dir[1]_i_5__0_0\ => ghost4_n_12,
      \s1_los_dir[1]_i_6__0_0\ => ghost4_n_3,
      \s1_los_dir[1]_i_6__0_1\ => ghost4_n_14,
      \s1_los_dir_reg[1]_0\ => ghost4_n_9,
      \s1_los_dir_reg[1]_1\ => ghost4_n_11,
      \s1_los_dir_reg[1]_2\ => ghost4_n_13,
      s2_can_down_reg_0(0) => s2_can_down_reg(0),
      \s2_can_up_i_2__0_0\(0) => \s2_can_up_i_2__0\(0)
    );
ghost3: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_1
     port map (
      AR(0) => rst,
      D(1 downto 0) => \direction[2]_3\(1 downto 0),
      E(0) => ghost1_n_0,
      S_AXI_ACLK => S_AXI_ACLK,
      ghost3_col(3 downto 0) => ghost3_col(3 downto 0),
      ghost3_row(3 downto 0) => ghost3_row(3 downto 0),
      \p_0_in__0\ => \p_0_in__0\,
      rover_col(3 downto 0) => rover_col(3 downto 0),
      rover_row(3 downto 0) => rover_row(3 downto 0),
      \s1_ghost_row_reg[2]_0\(0) => \s1_ghost_row_reg[2]_2\(0),
      \s1_ghost_row_reg[2]_1\(0) => \s1_ghost_row_reg[2]_3\(0),
      \s1_los_detected_i_2__1_0\ => ghost4_n_5,
      \s1_los_detected_i_4__0_0\ => ghost4_n_6,
      s1_los_detected_reg_0(0) => ghost1_n_2,
      s1_los_detected_reg_1 => ghost4_n_2,
      s1_los_detected_reg_2 => ghost4_n_4,
      \s1_los_dir[0]_i_4__1_0\(0) => \s1_los_dir[0]_i_4__1\(0),
      \s1_los_dir[0]_i_5__1_0\ => ghost4_n_8,
      \s1_los_dir[1]_i_27__1_0\ => ghost4_n_10,
      \s1_los_dir[1]_i_2__1_0\ => ghost4_n_7,
      \s1_los_dir[1]_i_33__1_0\(3 downto 0) => \s1_los_dir[1]_i_33__1\(3 downto 0),
      \s1_los_dir[1]_i_5__1_0\ => ghost4_n_12,
      \s1_los_dir[1]_i_6__1_0\ => ghost4_n_3,
      \s1_los_dir[1]_i_6__1_1\ => ghost4_n_14,
      \s1_los_dir_reg[1]_0\ => ghost4_n_9,
      \s1_los_dir_reg[1]_1\ => ghost4_n_11,
      \s1_los_dir_reg[1]_2\ => ghost4_n_13,
      s2_can_down_reg_0(0) => s2_can_down_reg_0(0),
      \s2_can_up_i_2__1_0\(0) => \s2_can_up_i_2__1\(0)
    );
ghost4: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_top_2
     port map (
      AR(0) => rst,
      D(1 downto 0) => \direction[3]_4\(1 downto 0),
      E(0) => ghost1_n_0,
      S_AXI_ACLK => S_AXI_ACLK,
      ghost4_col(3 downto 0) => ghost4_col(3 downto 0),
      ghost4_row(3 downto 0) => ghost4_row(3 downto 0),
      \p_0_in__0\ => \p_0_in__0\,
      rover_col(3 downto 0) => rover_col(3 downto 0),
      \rover_col[2]_0\ => ghost4_n_9,
      \rover_col[2]_1\ => ghost4_n_10,
      \rover_col[2]_2\ => ghost4_n_11,
      \rover_col[2]_3\ => ghost4_n_13,
      \rover_col[3]_0\ => ghost4_n_8,
      \rover_col[3]_1\ => ghost4_n_12,
      \rover_col[3]_2\ => ghost4_n_14,
      rover_col_2_sp_1 => ghost4_n_7,
      rover_col_3_sp_1 => ghost4_n_3,
      rover_row(3 downto 0) => rover_row(3 downto 0),
      \rover_row[2]_0\ => ghost4_n_4,
      rover_row_0_sp_1 => ghost4_n_5,
      rover_row_2_sp_1 => ghost4_n_2,
      rover_row_3_sp_1 => ghost4_n_6,
      \s1_ghost_row_reg[2]_0\(0) => \s1_ghost_row_reg[2]_4\(0),
      \s1_ghost_row_reg[2]_1\(0) => \s1_ghost_row_reg[2]_5\(0),
      \s1_los_dir[0]_i_4__2_0\(0) => \s1_los_dir[0]_i_4__2\(0),
      \s1_los_dir[1]_i_33__2_0\(3 downto 0) => \s1_los_dir[1]_i_33__2\(3 downto 0),
      \s1_los_dir_reg[0]_0\(0) => ghost1_n_2,
      s2_can_down_reg_0(0) => s2_can_down_reg_1(0),
      \s2_can_up_i_2__2_0\(0) => \s2_can_up_i_2__2\(0)
    );
w_active_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"74"
    )
        port map (
      I0 => aw_active_reg_n_0,
      I1 => w_active_reg_n_0,
      I2 => S_AXI_WVALID,
      O => w_active_i_1_n_0
    );
w_active_reg: unisim.vcomponents.FDCE
     port map (
      C => S_AXI_ACLK,
      CE => '1',
      CLR => rst,
      D => w_active_i_1_n_0,
      Q => w_active_reg_n_0
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  port (
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
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "ghost_bd_ghost_multi_0_0,ghost_multi_axi_lite,{}";
  attribute DowngradeIPIdentifiedWarnings : string;
  attribute DowngradeIPIdentifiedWarnings of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "yes";
  attribute IP_DEFINITION_SOURCE : string;
  attribute IP_DEFINITION_SOURCE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "package_project";
  attribute X_CORE_INFO : string;
  attribute X_CORE_INFO of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix : entity is "ghost_multi_axi_lite,Vivado 2020.2";
end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture STRUCTURE of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  signal \<const0>\ : STD_LOGIC;
  signal \^s_axi_rdata\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal inst_n_10 : STD_LOGIC;
  signal inst_n_11 : STD_LOGIC;
  signal inst_n_12 : STD_LOGIC;
  signal inst_n_5 : STD_LOGIC;
  signal inst_n_6 : STD_LOGIC;
  signal inst_n_7 : STD_LOGIC;
  signal inst_n_8 : STD_LOGIC;
  signal inst_n_9 : STD_LOGIC;
  signal \s1_los_dir[1]_i_100__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_100__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_100_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_101__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_101__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_101__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_102__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_102__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_102__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_103__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_103__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_103__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_104__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_104__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_104__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_106_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_107_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_108_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_109_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_110_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_111_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_112_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_113_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_97__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_97__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_97__2_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_98__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_98__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_98_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_99__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_99__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir[1]_i_99_n_0\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_0\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_1\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_2\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_3\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_4\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_5\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_6\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__0_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_0\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_1\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_2\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_3\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_4\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_5\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_6\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90__1_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_0\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_1\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_2\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_3\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_4\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_5\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_6\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_90_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_91__0_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_91__1_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_91_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_0\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_1\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_2\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_3\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_4\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_5\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_6\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_98_n_7\ : STD_LOGIC;
  signal \s1_los_dir_reg[1]_i_99_n_7\ : STD_LOGIC;
  signal \s2_can_down_i_8__0_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_8__1_n_0\ : STD_LOGIC;
  signal \s2_can_down_i_8__2_n_0\ : STD_LOGIC;
  signal s2_can_down_i_8_n_0 : STD_LOGIC;
  signal \s2_can_up_i_8__0_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_8__1_n_0\ : STD_LOGIC;
  signal \s2_can_up_i_8__2_n_0\ : STD_LOGIC;
  signal s2_can_up_i_8_n_0 : STD_LOGIC;
  signal \NLW_s1_los_dir_reg[1]_i_91_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s1_los_dir_reg[1]_i_91_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s1_los_dir_reg[1]_i_91__0_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s1_los_dir_reg[1]_i_91__0_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s1_los_dir_reg[1]_i_91__1_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s1_los_dir_reg[1]_i_91__1_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  signal \NLW_s1_los_dir_reg[1]_i_99_CO_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 0 );
  signal \NLW_s1_los_dir_reg[1]_i_99_O_UNCONNECTED\ : STD_LOGIC_VECTOR ( 3 downto 1 );
  attribute X_INTERFACE_INFO : string;
  attribute X_INTERFACE_INFO of S_AXI_ACLK : signal is "xilinx.com:signal:clock:1.0 S_AXI_ACLK CLK";
  attribute X_INTERFACE_PARAMETER : string;
  attribute X_INTERFACE_PARAMETER of S_AXI_ACLK : signal is "XIL_INTERFACENAME S_AXI_ACLK, ASSOCIATED_BUSIF S_AXI, ASSOCIATED_RESET S_AXI_ARESETN, FREQ_HZ 50000000, FREQ_TOLERANCE_HZ 0, PHASE 0.000, CLK_DOMAIN ghost_bd_processing_system7_0_0_FCLK_CLK0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of S_AXI_ARESETN : signal is "xilinx.com:signal:reset:1.0 S_AXI_ARESETN RST";
  attribute X_INTERFACE_PARAMETER of S_AXI_ARESETN : signal is "XIL_INTERFACENAME S_AXI_ARESETN, POLARITY ACTIVE_LOW, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of S_AXI_ARREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARREADY";
  attribute X_INTERFACE_INFO of S_AXI_ARVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARVALID";
  attribute X_INTERFACE_INFO of S_AXI_AWREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWREADY";
  attribute X_INTERFACE_INFO of S_AXI_AWVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWVALID";
  attribute X_INTERFACE_INFO of S_AXI_BREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI BREADY";
  attribute X_INTERFACE_INFO of S_AXI_BVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI BVALID";
  attribute X_INTERFACE_INFO of S_AXI_RREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI RREADY";
  attribute X_INTERFACE_PARAMETER of S_AXI_RREADY : signal is "XIL_INTERFACENAME S_AXI, DATA_WIDTH 32, PROTOCOL AXI4LITE, FREQ_HZ 50000000, ID_WIDTH 0, ADDR_WIDTH 4, AWUSER_WIDTH 0, ARUSER_WIDTH 0, WUSER_WIDTH 0, RUSER_WIDTH 0, BUSER_WIDTH 0, READ_WRITE_MODE READ_WRITE, HAS_BURST 0, HAS_LOCK 0, HAS_PROT 0, HAS_CACHE 0, HAS_QOS 0, HAS_REGION 0, HAS_WSTRB 1, HAS_BRESP 1, HAS_RRESP 1, SUPPORTS_NARROW_BURST 0, NUM_READ_OUTSTANDING 1, NUM_WRITE_OUTSTANDING 1, MAX_BURST_LENGTH 1, PHASE 0.000, CLK_DOMAIN ghost_bd_processing_system7_0_0_FCLK_CLK0, NUM_READ_THREADS 1, NUM_WRITE_THREADS 1, RUSER_BITS_PER_BYTE 0, WUSER_BITS_PER_BYTE 0, INSERT_VIP 0";
  attribute X_INTERFACE_INFO of S_AXI_RVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI RVALID";
  attribute X_INTERFACE_INFO of S_AXI_WREADY : signal is "xilinx.com:interface:aximm:1.0 S_AXI WREADY";
  attribute X_INTERFACE_INFO of S_AXI_WVALID : signal is "xilinx.com:interface:aximm:1.0 S_AXI WVALID";
  attribute X_INTERFACE_INFO of S_AXI_ARADDR : signal is "xilinx.com:interface:aximm:1.0 S_AXI ARADDR";
  attribute X_INTERFACE_INFO of S_AXI_AWADDR : signal is "xilinx.com:interface:aximm:1.0 S_AXI AWADDR";
  attribute X_INTERFACE_INFO of S_AXI_BRESP : signal is "xilinx.com:interface:aximm:1.0 S_AXI BRESP";
  attribute X_INTERFACE_INFO of S_AXI_RDATA : signal is "xilinx.com:interface:aximm:1.0 S_AXI RDATA";
  attribute X_INTERFACE_INFO of S_AXI_RRESP : signal is "xilinx.com:interface:aximm:1.0 S_AXI RRESP";
  attribute X_INTERFACE_INFO of S_AXI_WDATA : signal is "xilinx.com:interface:aximm:1.0 S_AXI WDATA";
  attribute X_INTERFACE_INFO of S_AXI_WSTRB : signal is "xilinx.com:interface:aximm:1.0 S_AXI WSTRB";
begin
  S_AXI_BRESP(1) <= \<const0>\;
  S_AXI_BRESP(0) <= \<const0>\;
  S_AXI_RDATA(31) <= \<const0>\;
  S_AXI_RDATA(30) <= \<const0>\;
  S_AXI_RDATA(29) <= \<const0>\;
  S_AXI_RDATA(28) <= \<const0>\;
  S_AXI_RDATA(27) <= \<const0>\;
  S_AXI_RDATA(26) <= \<const0>\;
  S_AXI_RDATA(25) <= \<const0>\;
  S_AXI_RDATA(24) <= \<const0>\;
  S_AXI_RDATA(23) <= \<const0>\;
  S_AXI_RDATA(22) <= \<const0>\;
  S_AXI_RDATA(21) <= \<const0>\;
  S_AXI_RDATA(20) <= \<const0>\;
  S_AXI_RDATA(19) <= \<const0>\;
  S_AXI_RDATA(18) <= \<const0>\;
  S_AXI_RDATA(17) <= \<const0>\;
  S_AXI_RDATA(16) <= \<const0>\;
  S_AXI_RDATA(15) <= \<const0>\;
  S_AXI_RDATA(14) <= \<const0>\;
  S_AXI_RDATA(13) <= \<const0>\;
  S_AXI_RDATA(12) <= \<const0>\;
  S_AXI_RDATA(11) <= \<const0>\;
  S_AXI_RDATA(10) <= \<const0>\;
  S_AXI_RDATA(9) <= \<const0>\;
  S_AXI_RDATA(8) <= \<const0>\;
  S_AXI_RDATA(7) <= \<const0>\;
  S_AXI_RDATA(6) <= \<const0>\;
  S_AXI_RDATA(5) <= \<const0>\;
  S_AXI_RDATA(4) <= \<const0>\;
  S_AXI_RDATA(3 downto 0) <= \^s_axi_rdata\(3 downto 0);
  S_AXI_RRESP(1) <= \<const0>\;
  S_AXI_RRESP(0) <= \<const0>\;
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
inst: entity work.decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ghost_multi_axi_lite
     port map (
      O(0) => inst_n_5,
      S(0) => s2_can_down_i_8_n_0,
      S_AXI_ACLK => S_AXI_ACLK,
      S_AXI_ARADDR(1 downto 0) => S_AXI_ARADDR(3 downto 2),
      S_AXI_ARESETN => S_AXI_ARESETN,
      S_AXI_ARREADY => S_AXI_ARREADY,
      S_AXI_ARVALID => S_AXI_ARVALID,
      S_AXI_AWADDR(1 downto 0) => S_AXI_AWADDR(3 downto 2),
      S_AXI_AWREADY => S_AXI_AWREADY,
      S_AXI_AWVALID => S_AXI_AWVALID,
      S_AXI_BREADY => S_AXI_BREADY,
      S_AXI_BVALID => S_AXI_BVALID,
      S_AXI_RDATA(3 downto 0) => \^s_axi_rdata\(3 downto 0),
      S_AXI_RREADY => S_AXI_RREADY,
      S_AXI_RVALID => S_AXI_RVALID,
      S_AXI_WDATA(0) => S_AXI_WDATA(0),
      S_AXI_WREADY => S_AXI_WREADY,
      S_AXI_WVALID => S_AXI_WVALID,
      ghost1_col(3 downto 0) => ghost1_col(3 downto 0),
      ghost1_row(3 downto 0) => ghost1_row(3 downto 0),
      ghost2_col(3 downto 0) => ghost2_col(3 downto 0),
      ghost2_row(3 downto 0) => ghost2_row(3 downto 0),
      ghost3_col(3 downto 0) => ghost3_col(3 downto 0),
      ghost3_row(3 downto 0) => ghost3_row(3 downto 0),
      ghost4_col(3 downto 0) => ghost4_col(3 downto 0),
      ghost4_row(3 downto 0) => ghost4_row(3 downto 0),
      rover_col(3 downto 0) => rover_col(3 downto 0),
      rover_row(3 downto 0) => rover_row(3 downto 0),
      \s1_ghost_row_reg[2]\(0) => inst_n_6,
      \s1_ghost_row_reg[2]_0\(0) => inst_n_7,
      \s1_ghost_row_reg[2]_1\(0) => inst_n_8,
      \s1_ghost_row_reg[2]_2\(0) => inst_n_9,
      \s1_ghost_row_reg[2]_3\(0) => inst_n_10,
      \s1_ghost_row_reg[2]_4\(0) => inst_n_11,
      \s1_ghost_row_reg[2]_5\(0) => inst_n_12,
      \s1_los_dir[0]_i_4\(0) => \s1_los_dir_reg[1]_i_99_n_7\,
      \s1_los_dir[0]_i_4__0\(0) => \s1_los_dir_reg[1]_i_91_n_7\,
      \s1_los_dir[0]_i_4__1\(0) => \s1_los_dir_reg[1]_i_91__0_n_7\,
      \s1_los_dir[0]_i_4__2\(0) => \s1_los_dir_reg[1]_i_91__1_n_7\,
      \s1_los_dir[1]_i_33__0\(3) => \s1_los_dir_reg[1]_i_90_n_4\,
      \s1_los_dir[1]_i_33__0\(2) => \s1_los_dir_reg[1]_i_90_n_5\,
      \s1_los_dir[1]_i_33__0\(1) => \s1_los_dir_reg[1]_i_90_n_6\,
      \s1_los_dir[1]_i_33__0\(0) => \s1_los_dir_reg[1]_i_90_n_7\,
      \s1_los_dir[1]_i_33__1\(3) => \s1_los_dir_reg[1]_i_90__0_n_4\,
      \s1_los_dir[1]_i_33__1\(2) => \s1_los_dir_reg[1]_i_90__0_n_5\,
      \s1_los_dir[1]_i_33__1\(1) => \s1_los_dir_reg[1]_i_90__0_n_6\,
      \s1_los_dir[1]_i_33__1\(0) => \s1_los_dir_reg[1]_i_90__0_n_7\,
      \s1_los_dir[1]_i_33__2\(3) => \s1_los_dir_reg[1]_i_90__1_n_4\,
      \s1_los_dir[1]_i_33__2\(2) => \s1_los_dir_reg[1]_i_90__1_n_5\,
      \s1_los_dir[1]_i_33__2\(1) => \s1_los_dir_reg[1]_i_90__1_n_6\,
      \s1_los_dir[1]_i_33__2\(0) => \s1_los_dir_reg[1]_i_90__1_n_7\,
      \s1_los_dir[1]_i_35\(3) => \s1_los_dir_reg[1]_i_98_n_4\,
      \s1_los_dir[1]_i_35\(2) => \s1_los_dir_reg[1]_i_98_n_5\,
      \s1_los_dir[1]_i_35\(1) => \s1_los_dir_reg[1]_i_98_n_6\,
      \s1_los_dir[1]_i_35\(0) => \s1_los_dir_reg[1]_i_98_n_7\,
      s2_can_down_reg(0) => \s2_can_down_i_8__0_n_0\,
      s2_can_down_reg_0(0) => \s2_can_down_i_8__1_n_0\,
      s2_can_down_reg_1(0) => \s2_can_down_i_8__2_n_0\,
      s2_can_up_i_2(0) => s2_can_up_i_8_n_0,
      \s2_can_up_i_2__0\(0) => \s2_can_up_i_8__0_n_0\,
      \s2_can_up_i_2__1\(0) => \s2_can_up_i_8__1_n_0\,
      \s2_can_up_i_2__2\(0) => \s2_can_up_i_8__2_n_0\
    );
\s1_los_dir[1]_i_100\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(0),
      I2 => ghost2_row(3),
      I3 => ghost2_row(1),
      O => \s1_los_dir[1]_i_100_n_0\
    );
\s1_los_dir[1]_i_100__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(0),
      I2 => ghost3_row(3),
      I3 => ghost3_row(1),
      O => \s1_los_dir[1]_i_100__0_n_0\
    );
\s1_los_dir[1]_i_100__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(0),
      I2 => ghost4_row(3),
      I3 => ghost4_row(1),
      O => \s1_los_dir[1]_i_100__1_n_0\
    );
\s1_los_dir[1]_i_101__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(3),
      I2 => ghost2_row(2),
      I3 => ghost2_row(0),
      O => \s1_los_dir[1]_i_101__0_n_0\
    );
\s1_los_dir[1]_i_101__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(3),
      I2 => ghost3_row(2),
      I3 => ghost3_row(0),
      O => \s1_los_dir[1]_i_101__1_n_0\
    );
\s1_los_dir[1]_i_101__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(3),
      I2 => ghost4_row(2),
      I3 => ghost4_row(0),
      O => \s1_los_dir[1]_i_101__2_n_0\
    );
\s1_los_dir[1]_i_102__0\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6696"
    )
        port map (
      I0 => ghost2_row(1),
      I1 => ghost2_row(3),
      I2 => ghost2_row(0),
      I3 => ghost2_row(2),
      O => \s1_los_dir[1]_i_102__0_n_0\
    );
\s1_los_dir[1]_i_102__1\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6696"
    )
        port map (
      I0 => ghost3_row(1),
      I1 => ghost3_row(3),
      I2 => ghost3_row(0),
      I3 => ghost3_row(2),
      O => \s1_los_dir[1]_i_102__1_n_0\
    );
\s1_los_dir[1]_i_102__2\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6696"
    )
        port map (
      I0 => ghost4_row(1),
      I1 => ghost4_row(3),
      I2 => ghost4_row(0),
      I3 => ghost4_row(2),
      O => \s1_los_dir[1]_i_102__2_n_0\
    );
\s1_los_dir[1]_i_103__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(0),
      O => \s1_los_dir[1]_i_103__0_n_0\
    );
\s1_los_dir[1]_i_103__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(0),
      O => \s1_los_dir[1]_i_103__1_n_0\
    );
\s1_los_dir[1]_i_103__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(0),
      O => \s1_los_dir[1]_i_103__2_n_0\
    );
\s1_los_dir[1]_i_104__0\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"59"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(1),
      I2 => ghost2_row(3),
      O => \s1_los_dir[1]_i_104__0_n_0\
    );
\s1_los_dir[1]_i_104__1\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"59"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(1),
      I2 => ghost3_row(3),
      O => \s1_los_dir[1]_i_104__1_n_0\
    );
\s1_los_dir[1]_i_104__2\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"59"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(1),
      I2 => ghost4_row(3),
      O => \s1_los_dir[1]_i_104__2_n_0\
    );
\s1_los_dir[1]_i_106\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost1_row(0),
      I1 => ghost1_row(2),
      O => \s1_los_dir[1]_i_106_n_0\
    );
\s1_los_dir[1]_i_107\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost1_row(3),
      I1 => ghost1_row(1),
      O => \s1_los_dir[1]_i_107_n_0\
    );
\s1_los_dir[1]_i_108\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(0),
      O => \s1_los_dir[1]_i_108_n_0\
    );
\s1_los_dir[1]_i_109\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(0),
      I2 => ghost1_row(3),
      I3 => ghost1_row(1),
      O => \s1_los_dir[1]_i_109_n_0\
    );
\s1_los_dir[1]_i_110\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"B44B"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(3),
      I2 => ghost1_row(2),
      I3 => ghost1_row(0),
      O => \s1_los_dir[1]_i_110_n_0\
    );
\s1_los_dir[1]_i_111\: unisim.vcomponents.LUT4
    generic map(
      INIT => X"6696"
    )
        port map (
      I0 => ghost1_row(1),
      I1 => ghost1_row(3),
      I2 => ghost1_row(0),
      I3 => ghost1_row(2),
      O => \s1_los_dir[1]_i_111_n_0\
    );
\s1_los_dir[1]_i_112\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"6"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(0),
      O => \s1_los_dir[1]_i_112_n_0\
    );
\s1_los_dir[1]_i_113\: unisim.vcomponents.LUT3
    generic map(
      INIT => X"59"
    )
        port map (
      I0 => ghost1_row(2),
      I1 => ghost1_row(1),
      I2 => ghost1_row(3),
      O => \s1_los_dir[1]_i_113_n_0\
    );
\s1_los_dir[1]_i_97__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost2_row(0),
      I1 => ghost2_row(2),
      O => \s1_los_dir[1]_i_97__0_n_0\
    );
\s1_los_dir[1]_i_97__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost3_row(0),
      I1 => ghost3_row(2),
      O => \s1_los_dir[1]_i_97__1_n_0\
    );
\s1_los_dir[1]_i_97__2\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost4_row(0),
      I1 => ghost4_row(2),
      O => \s1_los_dir[1]_i_97__2_n_0\
    );
\s1_los_dir[1]_i_98\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost2_row(3),
      I1 => ghost2_row(1),
      O => \s1_los_dir[1]_i_98_n_0\
    );
\s1_los_dir[1]_i_98__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost3_row(3),
      I1 => ghost3_row(1),
      O => \s1_los_dir[1]_i_98__0_n_0\
    );
\s1_los_dir[1]_i_98__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => ghost4_row(3),
      I1 => ghost4_row(1),
      O => \s1_los_dir[1]_i_98__1_n_0\
    );
\s1_los_dir[1]_i_99\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost2_row(2),
      I1 => ghost2_row(0),
      O => \s1_los_dir[1]_i_99_n_0\
    );
\s1_los_dir[1]_i_99__0\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost3_row(2),
      I1 => ghost3_row(0),
      O => \s1_los_dir[1]_i_99__0_n_0\
    );
\s1_los_dir[1]_i_99__1\: unisim.vcomponents.LUT2
    generic map(
      INIT => X"B"
    )
        port map (
      I0 => ghost4_row(2),
      I1 => ghost4_row(0),
      O => \s1_los_dir[1]_i_99__1_n_0\
    );
\s1_los_dir_reg[1]_i_90\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s1_los_dir_reg[1]_i_90_n_0\,
      CO(2) => \s1_los_dir_reg[1]_i_90_n_1\,
      CO(1) => \s1_los_dir_reg[1]_i_90_n_2\,
      CO(0) => \s1_los_dir_reg[1]_i_90_n_3\,
      CYINIT => '0',
      DI(3) => \s1_los_dir[1]_i_97__0_n_0\,
      DI(2) => \s1_los_dir[1]_i_98_n_0\,
      DI(1) => \s1_los_dir[1]_i_99_n_0\,
      DI(0) => '0',
      O(3) => \s1_los_dir_reg[1]_i_90_n_4\,
      O(2) => \s1_los_dir_reg[1]_i_90_n_5\,
      O(1) => \s1_los_dir_reg[1]_i_90_n_6\,
      O(0) => \s1_los_dir_reg[1]_i_90_n_7\,
      S(3) => \s1_los_dir[1]_i_100_n_0\,
      S(2) => \s1_los_dir[1]_i_101__0_n_0\,
      S(1) => \s1_los_dir[1]_i_102__0_n_0\,
      S(0) => \s1_los_dir[1]_i_103__0_n_0\
    );
\s1_los_dir_reg[1]_i_90__0\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s1_los_dir_reg[1]_i_90__0_n_0\,
      CO(2) => \s1_los_dir_reg[1]_i_90__0_n_1\,
      CO(1) => \s1_los_dir_reg[1]_i_90__0_n_2\,
      CO(0) => \s1_los_dir_reg[1]_i_90__0_n_3\,
      CYINIT => '0',
      DI(3) => \s1_los_dir[1]_i_97__1_n_0\,
      DI(2) => \s1_los_dir[1]_i_98__0_n_0\,
      DI(1) => \s1_los_dir[1]_i_99__0_n_0\,
      DI(0) => '0',
      O(3) => \s1_los_dir_reg[1]_i_90__0_n_4\,
      O(2) => \s1_los_dir_reg[1]_i_90__0_n_5\,
      O(1) => \s1_los_dir_reg[1]_i_90__0_n_6\,
      O(0) => \s1_los_dir_reg[1]_i_90__0_n_7\,
      S(3) => \s1_los_dir[1]_i_100__0_n_0\,
      S(2) => \s1_los_dir[1]_i_101__1_n_0\,
      S(1) => \s1_los_dir[1]_i_102__1_n_0\,
      S(0) => \s1_los_dir[1]_i_103__1_n_0\
    );
\s1_los_dir_reg[1]_i_90__1\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s1_los_dir_reg[1]_i_90__1_n_0\,
      CO(2) => \s1_los_dir_reg[1]_i_90__1_n_1\,
      CO(1) => \s1_los_dir_reg[1]_i_90__1_n_2\,
      CO(0) => \s1_los_dir_reg[1]_i_90__1_n_3\,
      CYINIT => '0',
      DI(3) => \s1_los_dir[1]_i_97__2_n_0\,
      DI(2) => \s1_los_dir[1]_i_98__1_n_0\,
      DI(1) => \s1_los_dir[1]_i_99__1_n_0\,
      DI(0) => '0',
      O(3) => \s1_los_dir_reg[1]_i_90__1_n_4\,
      O(2) => \s1_los_dir_reg[1]_i_90__1_n_5\,
      O(1) => \s1_los_dir_reg[1]_i_90__1_n_6\,
      O(0) => \s1_los_dir_reg[1]_i_90__1_n_7\,
      S(3) => \s1_los_dir[1]_i_100__1_n_0\,
      S(2) => \s1_los_dir[1]_i_101__2_n_0\,
      S(1) => \s1_los_dir[1]_i_102__2_n_0\,
      S(0) => \s1_los_dir[1]_i_103__2_n_0\
    );
\s1_los_dir_reg[1]_i_91\: unisim.vcomponents.CARRY4
     port map (
      CI => \s1_los_dir_reg[1]_i_90_n_0\,
      CO(3 downto 0) => \NLW_s1_los_dir_reg[1]_i_91_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s1_los_dir_reg[1]_i_91_O_UNCONNECTED\(3 downto 1),
      O(0) => \s1_los_dir_reg[1]_i_91_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s1_los_dir[1]_i_104__0_n_0\
    );
\s1_los_dir_reg[1]_i_91__0\: unisim.vcomponents.CARRY4
     port map (
      CI => \s1_los_dir_reg[1]_i_90__0_n_0\,
      CO(3 downto 0) => \NLW_s1_los_dir_reg[1]_i_91__0_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s1_los_dir_reg[1]_i_91__0_O_UNCONNECTED\(3 downto 1),
      O(0) => \s1_los_dir_reg[1]_i_91__0_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s1_los_dir[1]_i_104__1_n_0\
    );
\s1_los_dir_reg[1]_i_91__1\: unisim.vcomponents.CARRY4
     port map (
      CI => \s1_los_dir_reg[1]_i_90__1_n_0\,
      CO(3 downto 0) => \NLW_s1_los_dir_reg[1]_i_91__1_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s1_los_dir_reg[1]_i_91__1_O_UNCONNECTED\(3 downto 1),
      O(0) => \s1_los_dir_reg[1]_i_91__1_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s1_los_dir[1]_i_104__2_n_0\
    );
\s1_los_dir_reg[1]_i_98\: unisim.vcomponents.CARRY4
     port map (
      CI => '0',
      CO(3) => \s1_los_dir_reg[1]_i_98_n_0\,
      CO(2) => \s1_los_dir_reg[1]_i_98_n_1\,
      CO(1) => \s1_los_dir_reg[1]_i_98_n_2\,
      CO(0) => \s1_los_dir_reg[1]_i_98_n_3\,
      CYINIT => '0',
      DI(3) => \s1_los_dir[1]_i_106_n_0\,
      DI(2) => \s1_los_dir[1]_i_107_n_0\,
      DI(1) => \s1_los_dir[1]_i_108_n_0\,
      DI(0) => '0',
      O(3) => \s1_los_dir_reg[1]_i_98_n_4\,
      O(2) => \s1_los_dir_reg[1]_i_98_n_5\,
      O(1) => \s1_los_dir_reg[1]_i_98_n_6\,
      O(0) => \s1_los_dir_reg[1]_i_98_n_7\,
      S(3) => \s1_los_dir[1]_i_109_n_0\,
      S(2) => \s1_los_dir[1]_i_110_n_0\,
      S(1) => \s1_los_dir[1]_i_111_n_0\,
      S(0) => \s1_los_dir[1]_i_112_n_0\
    );
\s1_los_dir_reg[1]_i_99\: unisim.vcomponents.CARRY4
     port map (
      CI => \s1_los_dir_reg[1]_i_98_n_0\,
      CO(3 downto 0) => \NLW_s1_los_dir_reg[1]_i_99_CO_UNCONNECTED\(3 downto 0),
      CYINIT => '0',
      DI(3 downto 0) => B"0000",
      O(3 downto 1) => \NLW_s1_los_dir_reg[1]_i_99_O_UNCONNECTED\(3 downto 1),
      O(0) => \s1_los_dir_reg[1]_i_99_n_7\,
      S(3 downto 1) => B"000",
      S(0) => \s1_los_dir[1]_i_113_n_0\
    );
s2_can_down_i_8: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_5,
      O => s2_can_down_i_8_n_0
    );
\s2_can_down_i_8__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_7,
      O => \s2_can_down_i_8__0_n_0\
    );
\s2_can_down_i_8__1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_9,
      O => \s2_can_down_i_8__1_n_0\
    );
\s2_can_down_i_8__2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_11,
      O => \s2_can_down_i_8__2_n_0\
    );
s2_can_up_i_8: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_6,
      O => s2_can_up_i_8_n_0
    );
\s2_can_up_i_8__0\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_8,
      O => \s2_can_up_i_8__0_n_0\
    );
\s2_can_up_i_8__1\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_10,
      O => \s2_can_up_i_8__1_n_0\
    );
\s2_can_up_i_8__2\: unisim.vcomponents.LUT1
    generic map(
      INIT => X"1"
    )
        port map (
      I0 => inst_n_12,
      O => \s2_can_up_i_8__2_n_0\
    );
end STRUCTURE;
