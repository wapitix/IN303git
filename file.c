#include <stdlib.h>
#include <stdio.h>
#include "file.h"

File creerFile(File f){

  f.debut = 0;

  f.taille=0;
  f.contenu = malloc(sizeof(int)*TAILLE_FILE);
  return f;
}


int estVide(File f){

  return !f.taille;
}


File enfile(File f, int x){
  if(f.taille == TAILLE_FILE) printf("Erreur file pleine\n");
  f.contenu[(f.debut + f.taille)%TAILLE_FILE] = x;
  f.taille++; //le modulo pour ne pas depasser la taille du tableau

  return f;
}


elem defile(File *f){
  if(estVide(*f)){
    printf("erreur file vide\n");
  }
  elem res = f->contenu[f->debut];
  f->debut = (f->debut +1)%TAILLE_FILE;
  f->taille++;
 return res;
}


void afficherFile(File f){
  if(f.debut+f.taille<=TAILLE_FILE){
    for(int i=f.debut;i<f.taille;i++){
      printf("%d\n",f.contenu[f.debut + i]);
    }
  }
  else{
    for(int i=f.debut; i<TAILLE_FILE;i++){
      printf("%d\n",f.contenu[i]);
    }
    for(int i=0; i<f.taille;i++){
      printf("%d\n",f.contenu[i]);
    }
  }
  printf("\n");
}
