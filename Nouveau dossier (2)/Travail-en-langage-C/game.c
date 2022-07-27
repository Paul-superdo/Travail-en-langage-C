#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "utils.h"



int devinerNombre( int nbAlea){
    int nbUser;
    printf("devinez le nombre : ");
    scanf("%d", &nbUser);

    if(nbUser == nbAlea){
        printf("Bravo ! Vous avez gagnez !\n");
        return 1;
    }

    else{
       if (nbUser < nbAlea){
           printf("Trop petit !\n");
       }
       else{
           printf("Trop grand !\n");
       }
       
        return 0;
    }
}

void demarrerJeu(){
    //initialiser le generateur de nombres aleatoires
    srand(time(NULL));

    //générer un nombre aléatoire
    int nombreAlea = genererNombreAlea(100);
    int resultat;
    //Demander à l'utilisateur de deviner le nombre
    do{
        resultat = devinerNombre(nombreAlea);
    }
    while(!resultat);
    
}