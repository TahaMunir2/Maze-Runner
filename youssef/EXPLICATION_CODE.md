# Explication du code - Solveur de Maze SystemVerilog

## Vue d'ensemble

Ce code implémente un solveur de labyrinthe utilisant l'algorithme **BFS (Breadth-First Search)** en matériel (SystemVerilog pour FPGA).

## Architecture générale

Le solveur fonctionne comme une **machine à états finis (FSM)** avec 6 états :

1. **S_IDLE** : Attente du signal `start`
2. **S_INIT** : Initialisation (reset des tableaux, ajout du point de départ)
3. **S_BFS** : Exploration BFS du labyrinthe
4. **S_BACKTRACK** : Reconstruction du chemin depuis le goal vers le start
5. **S_PACK** : Empaquetage du chemin dans les mots de sortie
6. **S_DONE** : Solution terminée

## Format des données

### Entrée du maze
- Le maze 10×10 est représenté par **100 bits** (1 bit par cellule)
- Packé dans **4 mots de 32 bits** : `grid0`, `grid1`, `grid2`, `grid3`
- Bit index = `y*10 + x` (ligne y, colonne x)
- `1` = cellule libre, `0` = mur

### Sortie du chemin
- Chaque mouvement = **2 bits** (00=UP, 01=RIGHT, 10=DOWN, 11=LEFT)
- Packé dans **7 mots de 32 bits** (capacité : 112 mouvements max)
- `path_len` = nombre de mouvements

## Algorithme BFS - Détails

### Phase 1 : Initialisation (S_INIT)
```
1. Réinitialiser tous les tableaux :
   - visited[] = tous à 0 (aucune cellule visitée)
   - has_parent[] = tous à 0
   - parent_dir[] = tous à 0

2. Initialiser la queue :
   - q_head = 0, q_tail = 1, q_count = 1
   - Ajouter le point de départ (0,0) à la queue
   - Marquer (0,0) comme visité
```

### Phase 2 : Exploration BFS (S_BFS)

Le BFS explore le maze niveau par niveau :

```
Pour chaque cycle :
  Si nb_i == 0 (début d'exploration d'un nouveau nœud) :
    1. Vérifier si la queue est vide → si oui, pas de solution
    2. Pop le prochain nœud de la queue
    3. Vérifier si c'est le goal (9,9) → si oui, aller à S_BACKTRACK
    4. Calculer les coordonnées (cur_x_reg, cur_y_reg)
  
  Sinon (traitement des voisins) :
    1. Calculer les coordonnées du voisin selon nb_i :
       - nb_i=0: UP    (x, y-1)
       - nb_i=1: RIGHT (x+1, y)
       - nb_i=2: DOWN  (x, y+1)
       - nb_i=3: LEFT  (x-1, y)
    
    2. Pour chaque voisin valide :
       - Vérifier si dans les limites du maze
       - Vérifier si cellule libre (pas un mur)
       - Vérifier si pas déjà visité
       - Si OK : ajouter à la queue, marquer comme visité, enregistrer parent_dir
    
    3. Incrémenter nb_i (0→1→2→3→0)
```

**Important** : On traite **un voisin par cycle** pour simplifier le timing matériel.

### Phase 3 : Backtrack (S_BACKTRACK)

Une fois le goal trouvé, on remonte le chemin :

```
1. Partir du goal (9,9)
2. Pour chaque étape jusqu'au start (0,0) :
   - Lire parent_dir[cellule_actuelle] = direction parent→enfant
   - Inverser la direction pour obtenir enfant→parent
   - Stocker cette direction dans path_buf[]
   - Se déplacer vers le parent
3. path_buf contient maintenant : [goal→...→start] (ordre inversé)
```

### Phase 4 : Packing (S_PACK)

On inverse et empaquette le chemin :

```
1. Lire path_buf à l'envers (de la fin vers le début)
2. Empaqueter dans path_words[] :
   - 16 mouvements par mot (32 bits / 2 bits par mouvement)
   - Format : [mouvement0, mouvement1, ..., mouvement15]
```

## Structures de données

### Queue BFS
- **queue[]** : Tableau circulaire stockant les indices de cellules (0-99)
- **q_head** : Index de la tête (prochain élément à pop)
- **q_tail** : Index de la queue (prochain emplacement libre)
- **q_count** : Nombre d'éléments dans la queue

### Tableaux de suivi
- **visited[]** : Cellules déjà explorées
- **parent_dir[]** : Direction prise depuis le parent (pour reconstruire le chemin)
- **has_parent[]** : Indique si une cellule a un parent

### Buffer de chemin
- **path_buf[]** : Stocke temporairement les directions du chemin
- **path_words[]** : Sortie finale empaquetée

## Exemple d'exécution

Pour un maze simple (toutes cellules libres) :

```
Cycle 1 (S_INIT) :
  - Ajouter (0,0) à la queue
  - q_count = 1

Cycle 2 (S_BFS, nb_i=0) :
  - Pop (0,0)
  - Vérifier si goal → Non
  - Traiter voisin UP (0,-1) → Invalide (hors limites)

Cycle 3 (S_BFS, nb_i=1) :
  - Traiter voisin RIGHT (1,0) → Valide, ajouter à queue
  - q_count = 2

Cycle 4 (S_BFS, nb_i=2) :
  - Traiter voisin DOWN (0,1) → Valide, ajouter à queue
  - q_count = 3

... continue jusqu'à trouver (9,9) ...

Cycle N (S_BFS) :
  - Pop (9,9)
  - C'est le goal ! → Aller à S_BACKTRACK

Cycle N+1 à N+M (S_BACKTRACK) :
  - Remonter le chemin de (9,9) à (0,0)
  - Stocker les directions dans path_buf

Cycle N+M+1 (S_PACK) :
  - Inverser et empaqueter path_buf dans path_words

Cycle N+M+2 (S_DONE) :
  - done = 1, valid = 1
```

## Points clés de l'implémentation matérielle

1. **Pipelining** : Un voisin traité par cycle pour éviter les chemins critiques
2. **Mémoire distribuée** : Tableaux utilisant la mémoire distribuée du FPGA
3. **Synchronisation** : Toutes les opérations synchronisées sur `clk`
4. **Optimisation** : Pas de multiplication/division complexe, seulement additions/soustractions
