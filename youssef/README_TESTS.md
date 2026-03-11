# Commandes pour tester le solveur de maze

## 1. Compiler le code SystemVerilog avec Verilator

```bash
verilator -cc maze_solver_core.sv --exe tb_maze_solver_core.cpp -CFLAGS "-std=c++17"
```

## 2. Compiler l'exécutable

```bash
cd obj_dir
make -j -f Vmaze_solver_core.mk Vmaze_solver_core__ALL.o
ar rcs Vmaze_solver_core__ALL.a Vmaze_solver_core__ALL.o
make -j -f Vmaze_solver_core.mk Vmaze_solver_core
cd ..
```

## 3. Exécuter les tests

### Test simple (un seul maze)
```bash
python3 test_maze_solver.py
```

### Tests multiples (5 mazes différents)
```bash
python3 test_maze_solver.py --multiple
```

### Test manuel avec valeurs spécifiques
```bash
./obj_dir/Vmaze_solver_core 0xFFFFFFFF 0xFFFFFFFF 0xFFFFFFFF 0x0000000F
```

## Script tout-en-un

Pour tout compiler et tester en une seule commande :

```bash
# Compilation complète
verilator -cc maze_solver_core.sv --exe tb_maze_solver_core.cpp -CFLAGS "-std=c++17" && \
cd obj_dir && \
make -j -f Vmaze_solver_core.mk Vmaze_solver_core__ALL.o && \
ar rcs Vmaze_solver_core__ALL.a Vmaze_solver_core__ALL.o && \
make -j -f Vmaze_solver_core.mk Vmaze_solver_core && \
cd .. && \
python3 test_maze_solver.py --multiple
```
