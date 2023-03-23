#ifndef __fonction_H_
#define __fonction_H_

int* allouer(int taille);
void initialiser(int* monTab, int taille);
void afficher(int* monTab,int taille);
void copie(int* tableauOriginal, int* tableauCopie, int tailleTableau);
void echange(int* monTab, int i, int j);
int partitionner (int* tab, int p, int r);
void fusionner(int*, int deb, int m, int fin);

#endif