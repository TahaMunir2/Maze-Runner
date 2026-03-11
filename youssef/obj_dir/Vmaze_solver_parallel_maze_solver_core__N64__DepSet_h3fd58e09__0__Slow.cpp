// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmaze_solver_parallel.h for the primary calling header

#include "Vmaze_solver_parallel__pch.h"
#include "Vmaze_solver_parallel_maze_solver_core__N64.h"

VL_ATTR_COLD void Vmaze_solver_parallel_maze_solver_core__N64___ctor_var_reset(Vmaze_solver_parallel_maze_solver_core__N64* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmaze_solver_parallel_maze_solver_core__N64___ctor_var_reset\n"); );
    Vmaze_solver_parallel__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->name());
    vlSelf->clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16707436170211756652ull);
    vlSelf->rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18209466448985614591ull);
    vlSelf->start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9867861323841650631ull);
    vlSelf->grid0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1862437880860874839ull);
    vlSelf->grid1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12695811892588907155ull);
    vlSelf->grid2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13978605058352999989ull);
    vlSelf->grid3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11534313734606634685ull);
    vlSelf->done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10296494685231209730ull);
    vlSelf->path_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 14470622935530075418ull);
    vlSelf->path_word0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16408729472157823957ull);
    vlSelf->path_word1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15080482152089666894ull);
    vlSelf->path_word2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2999163070224720514ull);
    vlSelf->path_word3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 9802896947556956916ull);
    vlSelf->path_word4 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 186460582866001737ull);
    vlSelf->path_word5 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4334852283928067726ull);
    vlSelf->path_word6 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5096274582918213404ull);
    vlSelf->valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4944192500720994163ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->__PVT__visited[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15071944054341601215ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->__PVT__parent_dir[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5171330918559316549ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->__PVT__has_parent[__Vi0] = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17207658977738801674ull);
    }
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->__PVT__queue[__Vi0] = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13180104962153300214ull);
    }
    vlSelf->__PVT__q_head = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 7432655502285373436ull);
    vlSelf->__PVT__q_tail = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6797121083921541517ull);
    vlSelf->__PVT__q_count = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 18262664364146872907ull);
    for (int __Vi0 = 0; __Vi0 < 100; ++__Vi0) {
        vlSelf->__PVT__path_buf[__Vi0] = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5517747798372588051ull);
    }
    vlSelf->__PVT__path_len_reg = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 7699226028049693553ull);
    vlSelf->__PVT__st = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 5703567563794871410ull);
    vlSelf->__PVT__cur_x_reg = 0;
    vlSelf->__PVT__cur_y_reg = 0;
    vlSelf->__PVT__nb_i = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5636992021911628976ull);
    vlSelf->__PVT__bt_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 13123647988440122237ull);
    vlSelf->__PVT__bt_len = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 17413340172931881532ull);
    for (int __Vi0 = 0; __Vi0 < 7; ++__Vi0) {
        vlSelf->__PVT__path_words[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15909545498719419955ull);
    }
    vlSelf->__PVT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15817570140490810055ull);
    vlSelf->__PVT__unnamedblk1__DOT__popped_idx = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 1958754268078664970ull);
    vlSelf->__PVT__unnamedblk2__DOT__nx = 0;
    vlSelf->__PVT__unnamedblk2__DOT__ny = 0;
    vlSelf->__PVT__unnamedblk2__DOT__dir_to_neighbor = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 18416386667201883503ull);
    vlSelf->__PVT__unnamedblk2__DOT__unnamedblk3__DOT__nidx = 0;
    vlSelf->__PVT__unnamedblk4__DOT__bx = 0;
    vlSelf->__PVT__unnamedblk4__DOT__by = 0;
    vlSelf->__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_fwd = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 334311776972096605ull);
    vlSelf->__PVT__unnamedblk4__DOT__unnamedblk5__DOT__d_back = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 7287024853310562476ull);
    vlSelf->__PVT__unnamedblk6__DOT__fwd_i = 0;
    vlSelf->__PVT__unnamedblk6__DOT__word_i = 0;
    vlSelf->__PVT__unnamedblk6__DOT__bitpos = 0;
    vlSelf->__PVT__unnamedblk6__DOT__mv = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13299901954846567967ull);
    vlSelf->__Vlvbound_h1e62cca8__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8210994439667613491ull);
    vlSelf->__Vlvbound_h7a4d3d60__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7386732757809862602ull);
    vlSelf->__Vlvbound_h9d5f4d18__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 17555367712112693991ull);
    vlSelf->__Vlvbound_hffa0b24d__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17030962156043865733ull);
    vlSelf->__Vlvbound_h9b0fa813__0 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4530663159778831328ull);
    vlSelf->__Vlvbound_h3c9c8691__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2107048738582888422ull);
    vlSelf->__Vlvbound_hdabc1705__1 = VL_SCOPED_RAND_RESET_I(7, __VscopeHash, 6089535789483909271ull);
    vlSelf->__Vlvbound_h73cb18d2__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 438222988998352462ull);
    vlSelf->__Vlvbound_h95c5206c__0 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12976432788037140868ull);
}
