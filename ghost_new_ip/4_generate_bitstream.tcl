# ---------------------------------------------------------------
# 4_generate_bitstream.tcl
# ---------------------------------------------------------------
launch_runs synth_1 -jobs 4
wait_on_run synth_1
puts ">>> Synthesis done"

launch_runs impl_1 -to_step write_bitstream -jobs 4
wait_on_run impl_1
puts ">>> Bitstream written to:"
puts "    ./ghost_game/ghost_game.runs/impl_1/ghost_bd_wrapper.bit"