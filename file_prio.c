#include <stdlib.h>
#include <stdio.h>
#include "file_prio.h"

//decalage vers la droite
void decalage(File f, int pos_dec){
  //tous les elements de la file a partir de pos_dec
  for(int i=f.taille; (f.debut + i) !=(pos_dec) ; i--){
    f.contenu[(f.debut + i)%TAILLE_MAX] = f.contenu[(f.debut+i-1)%TAILLE_MAX];

  }
}


File entier_prio(File f, elem x){
  for(int i=0; f.contenu[(f.debut+i)%TAILLE_MAX].prio >= x.prio && i<taille; i++ && i<f.taille; i++){

  }
  if(i != f.taille) decalage(f,(f.debut+i)%TAILLE_MAX);
  f.contenu[(f.debut+i)%TAILLE_MAX = x;
  f.taille++;
  return f;

}
