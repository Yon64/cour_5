#include "fonction.h"
#include "trie.h"
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