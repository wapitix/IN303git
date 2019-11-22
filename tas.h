#define TAILLE_TAS 1000

typedef struct{
  int *contenu;
  int taille;
}tas;

tas creerTas();
void afficherTas(tas t);
tas insererTas(tas t, int x);
tas tableau_vers_tas(int *tab, int taille_tableau);
int supprimerMax(tas *t); // * car on va changer la taille du tas
