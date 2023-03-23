#include <stdio.h>
#include "fonction.h"
#include "trie.h"
#include "trisRapide.h"
#include <time.h>
#include <stdlib.h>
#define T 30

int main(){
    int* monTab;
    int taille = T;
    srand(time(NULL));
    monTab=allouer(taille);
    initialiser(monTab,taille);
    clock_t t1,t2;
    float temps_total;
    afficher(monTab,taille);
    t1=clock();
    
    trisRapide(monTab,0,taille);

    t2=clock();
    temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("ma Super Fonction a mis %f de secondes à s'executer \n",temps_total);
    afficher(monTab, taille);
    printf("\n");
   
    initialiser(monTab,taille);
    afficher(monTab,taille);
    t1=clock();

    triFusion(monTab,0,taille);

    t2=clock();
    temps_total= (float)(t2-t1)/CLOCKS_PER_SEC;
    printf("ma Super Fonction a mis %f de secondes à s'executer \n",temps_total);

    afficher(monTab, taille);  

    
    return 0;
}