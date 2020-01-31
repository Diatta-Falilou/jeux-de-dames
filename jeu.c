#include"header.h"

void appellejoueur(){
  printf("veuillez saisir votre nom : \n" );
  scanf("%c \n", &joueur1 );
  printf("merci\n", );
}




----------------------------------------JEU---------------------------------
void jeu(){
  /*afficher + affichage tableau */
  affiche();

  /*appeller les joueurs */
  appellejoueur();


  for ( ; ; ){
    appelleCoord1();





    /*passer au joueur suivant via booleen(a voir)*/



int main(int argc, char const *argv[]) {
  jeu();
  return 0;
}
