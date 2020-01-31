#include"header.h"
/*---------------------------NOTE---------------------
ce sont les pions du joueur en bas , ordre non négociable
---------------------------------------------------------*/

void appelleCoord(coord coordZ){
  printf("les coordonnées du pion que vous voulez bouger svp\n");
  scanf("%d \n %d \n", &coordA.ligne , &coordA.colonne );
  testLimites(coordZ);
}

void testLimites (coord coordZ){
    if((coordZ.ligne < 0) && (coordZ.ligne > 10) && (coordZ.colonne < 0) && (coordZ.colonne > 10) )){
      appelleCoord(coordZ);
    }
}









void appelleCoordCible(coord coordX , coord coordZ){
  printf("les coordonnées du pion que vous voulez bouger svp\n");
  scanf("%d \n %d \n", &coordZ.ligne , &coordZ.colonne );
  testLimitesCible(coordZ);
  diagnonal(coord X ,coordZ);
  coupPossible( coord coordX , coordZ);
}

void testLimitesCible (coord coordZ){
    if((coordZ.ligne < 0) && (coordZ.ligne > 10) && (coordZ.colonne < 0) && (coordZ.colonne > 10) )){
      coupJoueur1();
    }
}

void diagonal(coord coordX , coord coordZ) {
  if( ( (coordZ.ligne == (coordX.ligne + 1) ) && (coordZ.col == (coordX.col - 1) ) )
 ||( (coordZ.ligne == (coordX.ligne + 1) ) && (coordZ.col == (coordX.col + 1) ) ) )
 {}
   else {
     printf("vous ne pouvez pas jouez ce coup\n", );
     coupJoueur1();
   }
}





void coupPossible (coord coordX , coord coordZ){
  if ( coordZ.col == 10){
    changezEnDame(coordX, coordZ);
    printf("Vous avez une nouvelle Dame\n", );
  }
  else if (coordZ.val == 2) {
      //test guache droite et manger via avancerV2 et avnacerV3
      if( ( (coordZ.ligne == (coordX.ligne + 1) ) && (coordZ.col == (coordX.col - 1) ) ){
        avancerV2(coordX , coordZ ); //elimination a gauche
        coupJoueur2();
      }
      else if( ( (coordZ.ligne == (coordX.ligne + 1) ) && (coordZ.col == (coordX.col - 1) ) ){
        avancerV3(coordX , coordZ ); //elimination a droite
        coupJoueur2();
      }
      else if( ( (coordZ.ligne == (coordX.ligne - 1) ) && (coordZ.col == (coordX.col - 1) ) ){
        avancerV4(coordX , coordZ ); //elimination a arriere gauche
        coupJoueur2();
      }
      else if( ( (coordZ.ligne == (coordX.ligne - 1) ) && (coordZ.col == (coordX.col + 1) ) ){
        avancerV5(coordX , coordZ ); //elimination arriere droite
        coupJoueur2();
      }
  } else if (coordZ.val == 0) {
    avancer(coordX , coordZ );
  } else {
    printf("mouvement impossible veuillez selectionnez un autre pion\n" );
    coupJoueur1();
  }
}


void avancer (coord coordX , coord coordZ) {
  int temp;
  temp = coordZ.val;
  coordZ.val = coordX.val;
  coordZ.val = Temp;
}

void avancerV2(coord coordX , coord coordZ){
//saute a gauche et enleve la valeur comprise dans dans coordZ
  coord coordY;
  int temp1;

  coordY.ligne = (coordZ.ligne + 1);
  coordY.colonne = (coordZ.colonne - 1);

  temp1 = coordX.val;
  coordZ.val = 0;
  coordX.val = 0;
  coordY.val = temp1;
  //test rejouer
  recoupJ1(coordY);

}

void avancerV3(coord coordX , coord coordZ) {
  //saute a droite et enleve la valeur comprise dans dans coordZ
    coord coordY;
    int temp1;

    coordY.ligne = (coordZ.ligne + 1);
    coordY.colonne = (coordZ.colonne + 1);

    temp1 = coordX.val;
    coordZ.val = 0;
    coordX.val = 0;
    coordY.val = temp1;
    //test rejouer
    recoupJ1(coordY);

}



void avancerV4(coord coordX , coord coordZ) {
  //saute en bas a gauche et enleve la valeur comprise dans dans coordZ
    coord coordY;
    int temp1;

    coordY.ligne = (coordZ.ligne - 1);
    coordY.colonne = (coordZ.colonne - 1);

    temp1 = coordX.val;
    coordZ.val = 0;
    coordX.val = 0;
    coordY.val = temp1;

}



void avancerV5(coord coordX , coord coordZ) {
  //saute en bas a droite et enleve la valeur comprise dans dans coordZ
    coord coordY;
    int temp1;

    coordY.ligne = (coordZ.ligne - 1);
    coordY.colonne = (coordZ.colonne + 1);

    temp1 = coordX.val;
    coordZ.val = 0;
    coordX.val = 0;
    coordY.val = temp1;
    //test rejouer
    recoupJ1(coordY);
}


void changezEnDame(coord coordX , coord coordZ) {
  coordX.val = 0;
  coordZ.val = 3;
}
/*
//test rejouer
void recoupJ1(coord coordZ){
  coord coordY;

  //test selon la position si y a un ennemi a coté
  if () {
    /* code */
  }
    //si oui test la place au dela

}
*/
/*-------------------------------DAME---------------------------*/


void appelleCoordCibleDame(coord coordZ){
  printf("les coordonnées du pion que vous voulez bouger svp\n");
  scanf("%d \n %d \n", &coordA.ligne , &coordA.colonne );
  testLimitesDame(coordZ);
}

void testLimitesDame (coord coordZ){
    if((coordZ.ligne < 0) && (coordZ.ligne > 10) && (coordZ.colonne < 0) && (coordZ.colonne > 10) )){
      appelleCoordCibleDame(coordZ);
    }
}




void diagonalDame(coord coordX , coord coordZ) {
  int x;

  if( (((coordZ.ligne) / (coordX.ligne) )== x ) && (((coordZ.col) / (coordX.col) ) == x )
 {}
   else {
     printf("vous ne pouvez pas jouez ce coup car non diagonal\n", );
     coupJoueur1();
   }
}






void coupPossibleDames(coord coordX , coord coordZ ){
  if (coordZ.val == 2) {
      //test guache droite et manger via avancerV2 et avancerV3
      if( diagonalDame (coordX, coordZ ) ){
        eliminationDameV2(coordX , coordZ );
        //elimination a gauche et regarde si la cible est bien dans la trajectoire et que c est bien un pion adverse
        coupJoueur2();
      }


  }

  else if (coordZ.val == 0) {
    avancerDame(coordX , coordZ );
  }

  else {
    printf("mouvement impossible veuillez selectionnez un autre pion\n" );
    coupJoueur1();
  }
}

















/*--------------------------------COUP JOUEUR1-----------------*/
void coupJoueur1() {
  coord coordA;
  coord coordB;

  appelleCoord(coordA); //qui appelle testLimites
  if ((coordZ.val == 1) || (coordZ.val == 3)){
    if (coordZ.val == 1)  {
        appelleCoordCible(coord A ,coordB);//testLimites + verification en diagonale?
        coupPossible( coordA , coordB);
      }
      else{
        appelleCoordCibleDames(coord A ,coordB);//testLimites + verification en diagonale?
        coupPossibleDames(coordA , coordB); //a faire
      }
  else{
    printf("selectioner un de vos pions !\n" );
    coupJoueur1();
  }
}
