#include <stdio.h>
#include "fonction.h"
#include "trie.h"
#include <time.h>
#include <stdlib.h>
#define T 30

int main(){
    int* monTab;
    int taille = T;
    srand(time(NULL));
    monTab=allouer(taille);
    initialiser(monTab,taille);
    afficher(monTab,taille);
    triBulles(monTab,taille);
    afficher(monTab, taille);
    printf("\n");
   
    initialiser(monTab,taille);
    afficher(monTab,taille);
    triInsertion(monTab,taille);
    afficher(monTab, taille);    

    
    return 0;
}