// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_bfs_top.h for the primary calling header

#include "Vtb_bfs_top__pch.h"
#include "Vtb_bfs_top___024root.h"

VL_ATTR_COLD void Vtb_bfs_top___024root___eval_initial__TOP(Vtb_bfs_top___024root* vlSelf);
VlCoroutine Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__0(Vtb_bfs_top___024root* vlSelf);
VlCoroutine Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__1(Vtb_bfs_top___024root* vlSelf);

void Vtb_bfs_top___024root___eval_initial(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_initial\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_bfs_top___024root___eval_initial__TOP(vlSelf);
    Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VL_INLINE_OPT VlCoroutine Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__0(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_bfs_top__DOT__unnamedblk6__DOT__cycles;
    tb_bfs_top__DOT__unnamedblk6__DOT__cycles = 0;
    IData/*31:0*/ tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i;
    tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0;
    CData/*0:0*/ tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = 0;
    CData/*7:0*/ __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch = 0;
    VlUnpacked<std::string, 10> __Vtask_tb_bfs_top__DOT__load_maze__0__rows;
    IData/*31:0*/ __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r;
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 0;
    IData/*31:0*/ __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c;
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__8__r;
    __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__8__c;
    __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__9__r;
    __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0;
    IData/*31:0*/ __Vfunc_tb_bfs_top__DOT__idx10__9__c;
    __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0;
    std::string __Vfunc_tb_bfs_top__DOT__dir_to_str__10__Vfuncout;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dir_to_str__10__d;
    __Vfunc_tb_bfs_top__DOT__dir_to_str__10__d = 0;
    std::string __Vtemp_2;
    // Body
    vlSelfRef.tb_bfs_top__DOT__rst = 1U;
    vlSelfRef.tb_bfs_top__DOT__start = 0U;
    for (int __Vi0 = 0; __Vi0 < 10; ++__Vi0) {
        __Vtask_tb_bfs_top__DOT__load_maze__0__rows[__Vi0].clear();
    }
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[0U] = 
        std::string{".#...#...G"};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[1U] = 
        std::string{".#.#.#.#.."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[2U] = 
        std::string{"...#...#.."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[3U] = 
        std::string{"##.###.#.."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[4U] = 
        std::string{".......#.."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[5U] = 
        std::string{".###.###.."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[6U] = 
        std::string{"...#......"};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[7U] = 
        std::string{".#.###.##."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[8U] = 
        std::string{".#........"};
    __Vtask_tb_bfs_top__DOT__load_maze__0__rows[9U] = 
        std::string{"S####.###."};
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[1U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[2U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[3U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[4U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[5U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[6U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[7U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[8U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [0U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[9U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xaU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xbU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xcU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xdU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xeU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0xfU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x10U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x11U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x12U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [1U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x13U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x14U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x15U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x16U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x17U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x18U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x19U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1aU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1bU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1cU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [2U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1dU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1eU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x1fU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x20U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x21U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x22U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x23U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x24U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x25U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x26U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [3U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x27U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x28U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x29U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2aU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2bU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2cU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2dU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2eU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x2fU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x30U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [4U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x31U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x32U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x33U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x34U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x35U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x36U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x37U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x38U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x39U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3aU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [5U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3bU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3cU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3dU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3eU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x3fU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x40U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x41U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x42U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x43U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x44U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [6U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x45U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x46U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x47U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x48U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x49U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4aU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4bU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4cU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4dU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4eU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [7U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x4fU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x50U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x51U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x52U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x53U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x54U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x55U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x56U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x57U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x58U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [8U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x59U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],0U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5aU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],1U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5bU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],2U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5cU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],3U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5dU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],4U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5eU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],5U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x5fU] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],6U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x60U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],7U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x61U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],8U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x62U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    __Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch 
        = VL_GETC_N(__Vtask_tb_bfs_top__DOT__load_maze__0__rows
                    [9U],9U);
    tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0 = (0x23U 
                                                == (IData)(__Vtask_tb_bfs_top__DOT__load_maze__0__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__ch));
    vlSelfRef.tb_bfs_top__DOT__maze[0x63U] = tb_bfs_top__DOT____Vlvbound_hb1dc50e9__0;
    vlSelfRef.tb_bfs_top__DOT__maze[0x5aU] = 0U;
    vlSelfRef.tb_bfs_top__DOT__maze[9U] = 0U;
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         105);
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         105);
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         105);
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         105);
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         105);
    vlSelfRef.tb_bfs_top__DOT__rst = 0U;
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         107);
    vlSelfRef.tb_bfs_top__DOT__start = 1U;
    co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_bfs_top.clk)", 
                                                         "tb_bfs_top.sv", 
                                                         110);
    vlSelfRef.tb_bfs_top__DOT__start = 0U;
    tb_bfs_top__DOT__unnamedblk6__DOT__cycles = 0U;
    while ((((~ ((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path)) 
                 & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0))) 
             & (~ ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0) 
                   & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path)))) 
            & VL_GTS_III(32, 0x927c0U, tb_bfs_top__DOT__unnamedblk6__DOT__cycles))) {
        co_await vlSelfRef.__VtrigSched_h0adaf061__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_bfs_top.clk)", 
                                                             "tb_bfs_top.sv", 
                                                             115);
        tb_bfs_top__DOT__unnamedblk6__DOT__cycles = 
            ((IData)(1U) + tb_bfs_top__DOT__unnamedblk6__DOT__cycles);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 0;
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    VL_WRITEF_NX("G ",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 0U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 0U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 9U;
    VL_WRITEF_NX("S ",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 1U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 1U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 1U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 2U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 2U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 2U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 3U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 3U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 3U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 4U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 4U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 4U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 5U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 5U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 5U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 6U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 6U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 6U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 7U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 7U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 7U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 8U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 8U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 8U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 9U;
    if (((0x63U >= (0x7fU & ([&]() {
                            __Vfunc_tb_bfs_top__DOT__idx10__8__c = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__r = 9U;
                            __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout 
                                = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__8__r) 
                                   + __Vfunc_tb_bfs_top__DOT__idx10__8__c);
                        }(), __Vfunc_tb_bfs_top__DOT__idx10__8__Vfuncout))) 
         && vlSelfRef.tb_bfs_top__DOT__maze[(0x7fU 
                                             & ([&]() {
                        __Vfunc_tb_bfs_top__DOT__idx10__9__c = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__r = 9U;
                        __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout 
                            = (VL_MULS_III(32, (IData)(0xaU), __Vfunc_tb_bfs_top__DOT__idx10__9__r) 
                               + __Vfunc_tb_bfs_top__DOT__idx10__9__c);
                    }(), __Vfunc_tb_bfs_top__DOT__idx10__9__Vfuncout))])) {
        VL_WRITEF_NX("# ",0);
    } else {
        VL_WRITEF_NX(". ",0);
    }
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__unnamedblk2__DOT__c = 0xaU;
    VL_WRITEF_NX("\n",0);
    __Vtask_tb_bfs_top__DOT__print_maze__7__unnamedblk1__DOT__r = 0xaU;
    VL_WRITEF_NX("CYCLES (solve from start->done): %0d\n",0,
                 32,vlSelfRef.tb_bfs_top__DOT__solve_cycles);
    if (VL_UNLIKELY((((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0) 
                      & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path))))) {
        VL_WRITEF_NX("RESULT: NO PATH\n",0);
        VL_FINISH_MT("tb_bfs_top.sv", 126, "");
    }
    if (VL_UNLIKELY(((1U & (~ ((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path)) 
                               & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0))))))) {
        VL_WRITEF_NX("ERROR: TIMEOUT (no path_ready/no_path)\n",0);
        VL_FINISH_MT("tb_bfs_top.sv", 131, "");
    }
    VL_WRITEF_NX("RESULT: PATH FOUND - %0# steps\n",0,
                 7,vlSelfRef.tb_bfs_top__DOT__path_length);
    tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i = 0U;
    while ((tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i 
            < (IData)(vlSelfRef.tb_bfs_top__DOT__path_length))) {
        __Vtemp_2 = ([&]() {
                __Vfunc_tb_bfs_top__DOT__dir_to_str__10__d 
                    = ((0x62U >= (0x7fU & tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i))
                        ? vlSelfRef.tb_bfs_top__DOT__path
                       [(0x7fU & tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i)]
                        : 0U);
                __Vfunc_tb_bfs_top__DOT__dir_to_str__10__Vfuncout 
                    = ((1U == (IData)(__Vfunc_tb_bfs_top__DOT__dir_to_str__10__d))
                        ? std::string{"UP"} : ((2U 
                                                == (IData)(__Vfunc_tb_bfs_top__DOT__dir_to_str__10__d))
                                                ? std::string{"DOWN"}
                                                : (
                                                   (4U 
                                                    == (IData)(__Vfunc_tb_bfs_top__DOT__dir_to_str__10__d))
                                                    ? 
                                                   std::string{"LEFT"}
                                                    : 
                                                   ((8U 
                                                     == (IData)(__Vfunc_tb_bfs_top__DOT__dir_to_str__10__d))
                                                     ? 
                                                    std::string{"RIGHT"}
                                                     : 
                                                    std::string{"???"}))));
            }(), __Vfunc_tb_bfs_top__DOT__dir_to_str__10__Vfuncout);
        VL_WRITEF_NX("Step %0d: %@\n",0,32,tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i,
                     -1,&(__Vtemp_2));
        tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i 
            = ((IData)(1U) + tb_bfs_top__DOT__unnamedblk6__DOT__unnamedblk7__DOT__i);
    }
    VL_FINISH_MT("tb_bfs_top.sv", 139, "");
}

void Vtb_bfs_top___024root___act_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf);

void Vtb_bfs_top___024root___eval_act(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_act\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_bfs_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

extern const VlUnpacked<CData/*1:0*/, 32> Vtb_bfs_top__ConstPool__TABLE_hdc9aca40_0;

VL_INLINE_OPT void Vtb_bfs_top___024root___act_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___act_sequent__TOP__0\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*4:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = (((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done) 
                     << 4U) | (((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_done) 
                                << 3U) | (((IData)(vlSelfRef.tb_bfs_top__DOT__start) 
                                           << 2U) | (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))));
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st_n 
        = Vtb_bfs_top__ConstPool__TABLE_hdc9aca40_0
        [__Vtableidx1];
}

void Vtb_bfs_top___024root___nba_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf);
void Vtb_bfs_top___024root___nba_sequent__TOP__1(Vtb_bfs_top___024root* vlSelf);
void Vtb_bfs_top___024root___nba_sequent__TOP__2(Vtb_bfs_top___024root* vlSelf);

void Vtb_bfs_top___024root___eval_nba(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_nba\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_bfs_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_bfs_top___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_bfs_top___024root___nba_sequent__TOP__2(vlSelf);
        Vtb_bfs_top___024root___act_sequent__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_bfs_top___024root___nba_sequent__TOP__0(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___nba_sequent__TOP__0\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__c = 0;
    CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed = 0;
    IData/*31:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles = 0;
    CData/*1:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 0;
    CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i = 0;
    CData/*3:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx = 0;
    CData/*3:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy = 0;
    CData/*6:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d = 0;
    CData/*0:0*/ __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 0;
    CData/*3:0*/ __VdlyVal__tb_bfs_top__DOT__path__v0;
    __VdlyVal__tb_bfs_top__DOT__path__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__path__v0;
    __VdlyDim0__tb_bfs_top__DOT__path__v0 = 0;
    CData/*3:0*/ __VdlyVal__tb_bfs_top__DOT__path__v1;
    __VdlyVal__tb_bfs_top__DOT__path__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__path__v1;
    __VdlyDim0__tb_bfs_top__DOT__path__v1 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v0;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v0 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v0;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v0 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v1;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v1 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v1;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v1 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v2;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v2 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v2;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v2 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v3;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v3 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v3;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v3 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v4;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v4 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v4;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v4 = 0;
    CData/*6:0*/ __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v5;
    __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v5 = 0;
    CData/*6:0*/ __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v5;
    __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v5 = 0;
    // Body
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__st;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__st;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed;
    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed;
    if (vlSelfRef.tb_bfs_top__DOT__rst) {
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i = 0U;
        while (VL_GTS_III(32, 0x63U, vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_bfs_top__DOT__dut__DOT____Vlvbound_h24742f5c__0 = 0U;
            if (VL_LIKELY(((0x62U >= (0x7fU & vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__tb_bfs_top__DOT__path__v0 
                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT____Vlvbound_h24742f5c__0;
                __VdlyDim0__tb_bfs_top__DOT__path__v0 
                    = (0x7fU & vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__path.enqueue(__VdlyVal__tb_bfs_top__DOT__path__v0, (IData)(__VdlyDim0__tb_bfs_top__DOT__path__v0));
            }
            vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_bfs_top__DOT__dut__DOT__unnamedblk1__DOT__i);
        }
    } else if (vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we) {
        vlSelfRef.tb_bfs_top__DOT__dut__DOT____Vlvbound_h11a44dc8__0 
            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata;
        if ((0x62U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx))) {
            __VdlyVal__tb_bfs_top__DOT__path__v1 = vlSelfRef.tb_bfs_top__DOT__dut__DOT____Vlvbound_h11a44dc8__0;
            __VdlyDim0__tb_bfs_top__DOT__path__v1 = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx;
            vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__path.enqueue(__VdlyVal__tb_bfs_top__DOT__path__v1, (IData)(__VdlyDim0__tb_bfs_top__DOT__path__v1));
        }
    }
    if (vlSelfRef.tb_bfs_top__DOT__rst) {
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles = 0U;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles = 0U;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed = 0U;
    } else {
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles 
            = ((1U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))
                ? ((IData)(1U) + vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles)
                : 0U);
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles 
            = ((2U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))
                ? ((IData)(1U) + vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles)
                : 0U);
        if ((2U != (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
            vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed = 0U;
        }
        if ((1U != (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed = 0U;
        }
    }
    if (vlSelfRef.tb_bfs_top__DOT__rst) {
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_done = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d = 0U;
        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 0U;
        while (VL_GTS_III(32, 0x64U, vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i)) {
            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_heb6b86b7__0 = 0x7fU;
            if (VL_LIKELY(((0x63U >= (0x7fU & vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i))))) {
                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v0 
                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_heb6b86b7__0;
                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v0 
                    = (0x7fU & vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i);
                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v0, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v0));
            }
            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i 
                = ((IData)(1U) + vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk1__DOT__i);
        }
    } else {
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_done = 0U;
        if ((2U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__st))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed)))))) {
                    VL_WRITEF_NX("DISTMAP cycles: %0#\n",0,
                                 32,vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles);
                    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed = 1U;
                }
                vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_done = 1U;
                if ((1U != (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
                    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 0U;
                }
            } else {
                if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx)) 
                         && vlSelfRef.tb_bfs_top__DOT__maze
                         [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx])) 
                     & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx))
                          ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                         [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx]
                          : 0U) == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)))) {
                    if ((0U < (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy))) {
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__c 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__r 
                            = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy) 
                                       - (IData)(1U)));
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__Vfuncout 
                            = (0x7fU & (((IData)(0xaU) 
                                         * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__r)) 
                                        + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__c)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx 
                            = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__12__Vfuncout;
                        if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx)) 
                                 && vlSelfRef.tb_bfs_top__DOT__maze
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx])) 
                             & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx))
                                  ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx]
                                  : 0U) > ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d))))) {
                            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hcbc282ad__0 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx))) {
                                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v1 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hcbc282ad__0;
                                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v1 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk2__DOT__nidx;
                                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v1, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v1));
                            }
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 1U;
                        }
                    }
                    if ((9U > (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy))) {
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__c 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__r 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy)));
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__Vfuncout 
                            = (0x7fU & (((IData)(0xaU) 
                                         * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__r)) 
                                        + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__c)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx 
                            = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__13__Vfuncout;
                        if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx)) 
                                 && vlSelfRef.tb_bfs_top__DOT__maze
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx])) 
                             & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx))
                                  ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx]
                                  : 0U) > ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d))))) {
                            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hdebbed7b__0 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx))) {
                                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v2 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hdebbed7b__0;
                                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v2 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk3__DOT__nidx;
                                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v2, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v2));
                            }
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 1U;
                        }
                    }
                    if ((0U < (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx))) {
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__c 
                            = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx) 
                                       - (IData)(1U)));
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__r 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__Vfuncout 
                            = (0x7fU & (((IData)(0xaU) 
                                         * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__r)) 
                                        + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__c)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx 
                            = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__14__Vfuncout;
                        if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx)) 
                                 && vlSelfRef.tb_bfs_top__DOT__maze
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx])) 
                             & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx))
                                  ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx]
                                  : 0U) > ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d))))) {
                            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h2dc1b6d6__0 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx))) {
                                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v3 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h2dc1b6d6__0;
                                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v3 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk4__DOT__nidx;
                                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v3, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v3));
                            }
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 1U;
                        }
                    }
                    if ((9U > (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx))) {
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__c 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx)));
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__r 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__Vfuncout 
                            = (0x7fU & (((IData)(0xaU) 
                                         * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__r)) 
                                        + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__c)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx 
                            = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__15__Vfuncout;
                        if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx)) 
                                 && vlSelfRef.tb_bfs_top__DOT__maze
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx])) 
                             & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx))
                                  ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                                 [vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx]
                                  : 0U) > ((IData)(1U) 
                                           + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d))))) {
                            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h1d685d3f__0 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)));
                            if ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx))) {
                                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v4 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_h1d685d3f__0;
                                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v4 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__unnamedblk5__DOT__nidx;
                                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v4, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v4));
                            }
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 1U;
                        }
                    }
                }
                if ((9U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx))) {
                    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx = 0U;
                    if ((9U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy))) {
                        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy = 0U;
                        if ((1U & ((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed)) 
                                   | (0x63U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d))))) {
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 3U;
                        } else {
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d 
                                = (0x7fU & ((IData)(1U) 
                                            + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d)));
                            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 0U;
                        }
                    } else {
                        __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy)));
                    }
                } else {
                    __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx)));
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__st))) {
            vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hd8d98a8f__0 = 0x7fU;
            if ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i))) {
                __VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v5 
                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT____Vlvbound_hd8d98a8f__0;
                __VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v5 
                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i;
                vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(__VdlyVal__tb_bfs_top__DOT__dut__DOT__dist_table__v5, (IData)(__VdlyDim0__tb_bfs_top__DOT__dut__DOT__dist_table__v5));
            }
            if ((0x63U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i))) {
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed = 0U;
                if ((1U & (~ vlSelfRef.tb_bfs_top__DOT__maze
                           [9U]))) {
                    vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.enqueue(0U, 9U);
                }
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx = 0U;
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy = 0U;
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d = 0U;
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 2U;
            } else {
                __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i 
                    = (0x7fU & ((IData)(1U) + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i)));
            }
        } else if ((1U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i = 0U;
            __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st = 1U;
        }
    }
    vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__path.commit(vlSelfRef.tb_bfs_top__DOT__path);
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__st 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__st;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__init_i;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__d 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__d;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__changed;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_cycles;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__dist_printed;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy 
        = __Vdly__tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sx;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r 
        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__sy;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout 
        = (0x7fU & (((IData)(0xaU) * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__r)) 
                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__c)));
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__distmap__DOT__scan_idx 
        = __Vfunc_tb_bfs_top__DOT__dut__DOT__distmap__DOT__idx10__11__Vfuncout;
}

VL_INLINE_OPT void Vtb_bfs_top___024root___nba_sequent__TOP__1(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___nba_sequent__TOP__1\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __Vdly__tb_bfs_top__DOT__solve_cycles;
    __Vdly__tb_bfs_top__DOT__solve_cycles = 0;
    CData/*0:0*/ __Vdly__tb_bfs_top__DOT__counting;
    __Vdly__tb_bfs_top__DOT__counting = 0;
    // Body
    __Vdly__tb_bfs_top__DOT__solve_cycles = vlSelfRef.tb_bfs_top__DOT__solve_cycles;
    __Vdly__tb_bfs_top__DOT__counting = vlSelfRef.tb_bfs_top__DOT__counting;
    if (vlSelfRef.tb_bfs_top__DOT__rst) {
        __Vdly__tb_bfs_top__DOT__solve_cycles = 0U;
        __Vdly__tb_bfs_top__DOT__counting = 0U;
    } else if (vlSelfRef.tb_bfs_top__DOT__start) {
        __Vdly__tb_bfs_top__DOT__solve_cycles = 0U;
        __Vdly__tb_bfs_top__DOT__counting = 1U;
    } else if (vlSelfRef.tb_bfs_top__DOT__counting) {
        __Vdly__tb_bfs_top__DOT__solve_cycles = ((IData)(1U) 
                                                 + vlSelfRef.tb_bfs_top__DOT__solve_cycles);
        if ((((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path)) 
              & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0)) 
             | ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0) 
                & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path)))) {
            __Vdly__tb_bfs_top__DOT__counting = 0U;
        }
    }
    vlSelfRef.tb_bfs_top__DOT__solve_cycles = __Vdly__tb_bfs_top__DOT__solve_cycles;
    vlSelfRef.tb_bfs_top__DOT__counting = __Vdly__tb_bfs_top__DOT__counting;
}

VL_INLINE_OPT void Vtb_bfs_top___024root___nba_sequent__TOP__2(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___nba_sequent__TOP__2\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__c = 0;
    CData/*6:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__Vfuncout;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__Vfuncout = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__r;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__r = 0;
    CData/*3:0*/ __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__c;
    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__c = 0;
    // Body
    if (vlSelfRef.tb_bfs_top__DOT__rst) {
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata = 0U;
        vlSelfRef.tb_bfs_top__DOT__path_length = 0U;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r = 0U;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c = 0U;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d = 0x7fU;
        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr = 0U;
    } else {
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done = 0U;
        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 0U;
        if ((2U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__st))) {
            if ((1U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__st))) {
                if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed)))))) {
                    VL_WRITEF_NX("BACKTRACE cycles: %0#\n",0,
                                 32,vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles);
                    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed = 1U;
                }
                vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done = 1U;
                if ((2U != (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
                    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 0U;
                }
            } else if ((0U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d))) {
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 3U;
            } else {
                vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = 0U;
                if ((0U < (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r))) {
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__c 
                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__r 
                        = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r) 
                                   - (IData)(1U)));
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__Vfuncout 
                        = (0x7fU & (((IData)(0xaU) 
                                     * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__r)) 
                                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__c)));
                    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx 
                        = __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__20__Vfuncout;
                    if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx)) 
                             && vlSelfRef.tb_bfs_top__DOT__maze
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx])) 
                         & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx))
                              ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk2__DOT__nidx]
                              : 0U) == ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r 
                            = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r) 
                                       - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
                            = (0x7fU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata = 1U;
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved)) 
                     & (9U > (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c)))) {
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__c 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c)));
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__r 
                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__Vfuncout 
                        = (0x7fU & (((IData)(0xaU) 
                                     * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__r)) 
                                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__c)));
                    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx 
                        = __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__21__Vfuncout;
                    if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx)) 
                             && vlSelfRef.tb_bfs_top__DOT__maze
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx])) 
                         & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx))
                              ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk3__DOT__nidx]
                              : 0U) == ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c)));
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
                            = (0x7fU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata = 8U;
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved)) 
                     & (9U > (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r)))) {
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__c 
                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__r 
                        = (0xfU & ((IData)(1U) + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r)));
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__Vfuncout 
                        = (0x7fU & (((IData)(0xaU) 
                                     * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__r)) 
                                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__c)));
                    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx 
                        = __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__22__Vfuncout;
                    if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx)) 
                             && vlSelfRef.tb_bfs_top__DOT__maze
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx])) 
                         & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx))
                              ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk4__DOT__nidx]
                              : 0U) == ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r)));
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
                            = (0x7fU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata = 2U;
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr)));
                    }
                }
                if (((~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved)) 
                     & (0U < (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c)))) {
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__c 
                        = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c) 
                                   - (IData)(1U)));
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__r 
                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__Vfuncout 
                        = (0x7fU & (((IData)(0xaU) 
                                     * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__r)) 
                                    + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__c)));
                    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx 
                        = __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__23__Vfuncout;
                    if (((~ ((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx)) 
                             && vlSelfRef.tb_bfs_top__DOT__maze
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx])) 
                         & (((0x63U >= (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx))
                              ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                             [vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__unnamedblk5__DOT__nidx]
                              : 0U) == ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U))))) {
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c 
                            = (0xfU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c) 
                                       - (IData)(1U)));
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
                            = (0x7fU & ((IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d) 
                                        - (IData)(1U)));
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_we = 1U;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_widx 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
                        vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_wdata = 4U;
                        vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
                            = (0x7fU & ((IData)(1U) 
                                        + (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr)));
                    }
                }
                if ((1U & (~ (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__unnamedblk1__DOT__moved)))) {
                    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path = 1U;
                    vlSelfRef.tb_bfs_top__DOT__path_length = 0U;
                    vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 3U;
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__st))) {
            vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
                = ((0x63U >= ([&]() {
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__c 
                                = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__r 
                                = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__Vfuncout 
                                = (0x7fU & (((IData)(0xaU) 
                                             * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__r)) 
                                            + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__c)));
                        }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__24__Vfuncout)))
                    ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                   [([&]() {
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__c 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__r 
                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__Vfuncout 
                            = (0x7fU & (((IData)(0xaU) 
                                         * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__r)) 
                                        + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__c)));
                    }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__25__Vfuncout))]
                    : 0U);
            if (((0x7fU == ((0x63U >= ([&]() {
                                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__c 
                                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__r 
                                            = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                                        __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__Vfuncout 
                                            = (0x7fU 
                                               & (((IData)(0xaU) 
                                                   * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__r)) 
                                                  + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__c)));
                                    }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__26__Vfuncout)))
                             ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                            [([&]() {
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__c 
                                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__r 
                                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__Vfuncout 
                                        = (0x7fU & 
                                           (((IData)(0xaU) 
                                             * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__r)) 
                                            + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__c)));
                                }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__27__Vfuncout))]
                             : 0U)) | ((0x63U >= ([&]() {
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__c 
                                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__r 
                                        = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                                    __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__Vfuncout 
                                        = (0x7fU & 
                                           (((IData)(0xaU) 
                                             * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__r)) 
                                            + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__c)));
                                }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__28__Vfuncout))) 
                                       && vlSelfRef.tb_bfs_top__DOT__maze
                                       [([&]() {
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__c 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__r 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__Vfuncout 
                                    = (0x7fU & (((IData)(0xaU) 
                                                 * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__r)) 
                                                + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__c)));
                            }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__29__Vfuncout))]))) {
                vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path = 1U;
                vlSelfRef.tb_bfs_top__DOT__path_length = 0U;
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 3U;
            } else {
                vlSelfRef.tb_bfs_top__DOT__path_length 
                    = ((0x63U >= ([&]() {
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__c 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__r 
                                    = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                                __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__Vfuncout 
                                    = (0x7fU & (((IData)(0xaU) 
                                                 * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__r)) 
                                                + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__c)));
                            }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__30__Vfuncout)))
                        ? vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table
                       [([&]() {
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__c 
                                = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__r 
                                = vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
                            __Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__Vfuncout 
                                = (0x7fU & (((IData)(0xaU) 
                                             * (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__r)) 
                                            + (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__c)));
                        }(), (IData)(__Vfunc_tb_bfs_top__DOT__dut__DOT__bt__DOT__idx10__31__Vfuncout))]
                        : 0U);
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr = 0U;
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 2U;
            }
        } else {
            vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_no_path = 0U;
            if ((2U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st))) {
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r = 9U;
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c = 0U;
                vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st = 1U;
            }
        }
    }
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__st 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__st;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_r;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_c;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__cur_d;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__wptr;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_cycles;
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed 
        = vlSelfRef.__Vdly__tb_bfs_top__DOT__dut__DOT__bt__DOT__bt_printed;
    vlSelfRef.__VdlyCommitQueuetb_bfs_top__DOT__dut__DOT__dist_table.commit(vlSelfRef.tb_bfs_top__DOT__dut__DOT__dist_table);
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st 
        = ((IData)(vlSelfRef.tb_bfs_top__DOT__rst) ? 0U
            : (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st_n));
    vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT____VdfgRegularize_ha3d9603b_0_0 
        = ((2U == (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__fsm__DOT__st)) 
           & (IData)(vlSelfRef.tb_bfs_top__DOT__dut__DOT__bt_done));
}

void Vtb_bfs_top___024root___timing_commit(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___timing_commit\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h0adaf061__0.commit(
                                                   "@(posedge tb_bfs_top.clk)");
    }
}

void Vtb_bfs_top___024root___timing_resume(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___timing_resume\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h0adaf061__0.resume(
                                                   "@(posedge tb_bfs_top.clk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_bfs_top___024root___eval_triggers__act(Vtb_bfs_top___024root* vlSelf);

bool Vtb_bfs_top___024root___eval_phase__act(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_phase__act\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_bfs_top___024root___eval_triggers__act(vlSelf);
    Vtb_bfs_top___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_bfs_top___024root___timing_resume(vlSelf);
        Vtb_bfs_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_bfs_top___024root___eval_phase__nba(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_phase__nba\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_bfs_top___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__nba(Vtb_bfs_top___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_bfs_top___024root___dump_triggers__act(Vtb_bfs_top___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_bfs_top___024root___eval(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY(((0x64U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vtb_bfs_top___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb_bfs_top.sv", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY(((0x64U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                Vtb_bfs_top___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb_bfs_top.sv", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_bfs_top___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_bfs_top___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_bfs_top___024root___eval_debug_assertions(Vtb_bfs_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_bfs_top___024root___eval_debug_assertions\n"); );
    Vtb_bfs_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
