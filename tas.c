#include <stdio.h>
#include <stdlib.h>
#include "tas.h"

tas creerTas(){
  tas t;
  t.taille=0;
  t.contenu=malloc(sizeof(int)*TAILLE_TAS);
  return t;
}

void afficherTas(tas t){
  for(int i=1; i<t.taille+1; i++){
    printf("%d ",t.contenu[i]);
  }
  printf("\n");
}

tas insererTas(tas t, int x){
  if(t.taille == TAILLE_TAS-1){
    printf("Impossible\n");
    exit(1);
  }
  t.contenu[t.taille+1] = x;
  t.taille++;
  int indice = t.taille;

  while(indice >1 && t.contenu[indice] > t.contenu[indice/2]){
    int temp;
    t.contenu[indice]=temp;
    t.contenu[indice]=t.contenu[indice/2];
    t.contenu[indice/2]=temp;
    indice /=2;
  }

  return t;
}

int supprimerMax(tas *t){
  if(t->taille == 0) exit(1);
  int res= t->contenu[1];
  t->contenu[1]= t->contenu[t->taille];
  int indice= 1;
  t->taille--;
  while((indice*2 < t->taille && t->contenu[indice] < t->contenu[indice*2]) || (indice*2+1<t->taille && t->contenu[indice] < t->contenu[indice*2 +1])){
    int indice_echange=indice*2;
    if(indice*2 +1 < t->taille && t->contenu[indice*2] < t->contenu[indice*2] ){
      indice_echange= 2*indice +1;
    }
    int temp = t->contenu[indice_echange];
    t->contenu[indice_echange] = t->contenu[indice];
    t->contenu[indice] =temp;
    indice = indice_echange;
  }
  return res;
}


tas tableau_vers_tas(int *tab, int taille_tableau){
  tas t= creerTas();
  for(int i=0; i<taille_tableau; i++){
    t = insererTas(t,tab[i]);
  }
  return t;
}
