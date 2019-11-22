#include <stdio.h>
#include <stdlib.h>
#include "file_prio.h"
#include "tas.h"

int main(){
  /*
  File f= creerFile();
  afficherFile(f);
  f=enfile(f,2332);
  f=enfile(f,34);
  f=enfile(f,64);
  //defile(&f);
  afficherFile(f);
*/

tas t= creerTas();
t=insererTas(t,1);
t=insererTas(t,2);
t=insererTas(t,3);
t=insererTas(t,4);
t=insererTas(t,5);
supprimerMax(&t);
afficherTas(t);
  return 0;
}
