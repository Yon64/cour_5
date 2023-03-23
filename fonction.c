#include "fonction.h"
#include "trie.h"
#include "trisRapide.h"
#include <stdlib.h>
#include <stdio.h>

int* allouer(int taille){
    int* grille;
    grille=malloc(taille * sizeof(int*));
    return grille;
}

void initialiser(int* monTab, int taille){
    for(int i=0;i<taille;i++){
        monTab[i]=rand()%100;
    }
}

void afficher(int* monTab,int taille){
    for(int i=0;i<taille;i++){
        printf("%d/",monTab[i]);
    }
    printf("\n");
}

void copie(int* tableauOriginal, int* tableauCopie, int tailleTableau){
    for(int i=0;i<tailleTableau;i++){
        tableauCopie[i]=tableauOriginal[i];
    }
}

void echange(int* monTab, int i, int j){
    int temp=monTab[i];
    monTab[i]=monTab[j];
    monTab[j]=temp;
}

int partitionner (int* tab, int p, int r){
    int pivot, i, j;
    pivot = tab[p];
    i=p-1;
    j=r+1;
    while(i<j){
        do{
            j--;
        }while(tab[j]>pivot);
        do{
            i++;
        }while(tab[i]<pivot);
        if(i<j){
            echange(tab,i,j);
        }
    }
    return j;
}

void fusionner(int* tab, int deb, int m, int fin) {
  int i = 0;
  int max = fin-deb;
  int gauche = deb;
  int droite = m+1;
  int* tabTemp = allouer(sizeof(tab));
  while (gauche<=m && droite<=fin) {
    if (tab[gauche]<tab[droite]) {
      tabTemp[i] = tab[gauche];
      gauche = gauche+1;
    } else {
      tabTemp[i] = tab[droite];
      droite = droite + 1;
    }
    i++;
  }
  while (gauche <= m) {
    tabTemp[i] = tab[gauche];
    gauche = gauche+1;
    i++;
  }
  while (droite <= fin) {
    tabTemp[i] = tab[droite];
    droite++;
    i++;
  }
  for (i=0; i<max; i++) {
    tab[i+deb] = tabTemp[i];
  }
  free(tabTemp);
}

