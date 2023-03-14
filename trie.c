#include "trie.h"
#include "fonction.h"

void triSelection(int* monTab, int taille){
    int i,j,min;
    for(i=0;i<taille;i--){
        min=i;
        for(j=i+1;j<taille;j++){
            if (monTab[j]<monTab[min]){
                min=j;
            }
        }
        echange(monTab,i,min);
    }
}

void triBulles(int* monTab, int taille){
    int j, enDesordre;
    enDesordre=1;
    while(enDesordre){
        enDesordre=0;
        for(j=0;j<taille-1;j++){
            if (monTab[j]>monTab[j+1]){
                echange(monTab,j,j+1);
                enDesordre=1;
            }
        }
    }
}

void triInsertion(int* monTab, int taille){
    int i, j, eltEnCours;
    for(i=1;i<taille;i++){
        eltEnCours=monTab[i];
        for (j=i;j>0 && monTab[j-1]>eltEnCours;j--){
            monTab[j]=monTab[j-1];
        }
        monTab[j]=eltEnCours;
    }
}