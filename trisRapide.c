#include "fonction.h"
#include "trie.h"
#include "trisRapide.h"
#include <stdio.h>

void trisRapide(int* tab, int pas, int taille){
    int q;
    if (pas<taille){
        q=partitionner(tab,pas,taille);
        trisRapide(tab,pas,q);
        trisRapide(tab,q+1,taille);
    }
}

void triFusion(int* tab, int deb, int fin) {
  int milieu;
  if (deb < fin) {
    milieu = (deb+fin)/2;
    triFusion(tab, deb, milieu);
    triFusion(tab, milieu+1, fin);
    fusionner(tab, deb, milieu, fin);
  }
}