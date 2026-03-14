# Labyrinthes 10×10 – Génération et résolution FPGA

Objectif : **générer N labyrinthes 10×10 résolubles** et les **résoudre en SystemVerilog** sur FPGA, avec logique **parallélisable** (blocs `generate` plutôt que boucles dans `always_comb`).

## Contenu

- **`maze_generator.py`** – Génère N labyrinthes 10×10 résolubles (départ (0,0), arrivée (9,9)), les résout en Python et produit le format 4×32 bits pour le RTL.
- **`maze_solver_core.sv`** – Cœur de résolution (BFS) pour un labyrinthe ; boucles converties en `generate` pour une mise en parallèle explicite sur FPGA.
- **`maze_solver_parallel.sv`** – Instancie plusieurs `maze_solver_core` en parallèle, planificateur et interface AXI4-Lite ; signaux dérivés (ex. `core_finished`) en `generate`.
- **`constraints.xdc`** – Contraintes de timing pour PYNQ Z-1 (optionnel).

## Utilisation

1. Générer N labyrinthes (ex. 100) et récupérer les grilles packées :
   ```bash
   python maze_generator.py
   ```
   Modifier `num_mazes` et `seed` dans `run_batch()` si besoin.

2. Synthèse / implémentation FPGA : utiliser `maze_solver_core.sv` et `maze_solver_parallel.sv` comme top RTL ; les boucles critiques sont en `generate` pour un mapping parallèle sur FPGA.
