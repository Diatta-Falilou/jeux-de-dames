#include <stdlib.h>
#include <stdio.h>

//Donnez les LIGNE_MAX et COL_MAX ici
typedef struct {
  int** tableau;
  int t_lig;
  int t_col;
} tableau;


-------------------------------JOUEUR------------------------
typedef struct {
  char* joueur1;
  char* joueur2;
} donnees;

--------------------------------COORDONNEES------------------
//Creer le type coord
typedef struct coord coord;
struct coord{
  int ligne;
  int colonne;
  int val;
}
coord;

int Decompte = 0;
-----------------------------TABLEAU---------------------------
//void affiche(tableau);
