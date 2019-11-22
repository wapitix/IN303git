#define TAILLE_FILE 1000

typedef struct{
  int *contenu; //tableau des elements
  int debut; //case de l element le plus anciennement enfilé
  int taille;
} File;

int estVide(File f);
File enfile(File f, int x);
int defile(File *f);
void afficherFile(File f);
File creerFile();
