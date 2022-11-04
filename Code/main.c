/******************************************************************************
*  ASR => M2101                                                               *
*******************************************************************************
*                                                                             *
*  N° de Sujet :  3                                                           *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Intitulé :  Chiffrement de messages                                        *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom-prénom1 : Bellanger Gaël                                               *
*                                                                             *
*  Nom-prénom2 : NULL                                                         *
*                                                                             *
*******************************************************************************
*                                                                             *
*  Nom du fichier :  main.c                                                   *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>
#include "Encodage.h"

void afficher_tab(char *tab);

int main(){
    char choix, choix_Ent;
    int Alph;
    char message[] = "world";//tmp

    printf("Entre votre message a encripter :\n");

    printf("le message a encripter est : ");
    afficher_tab(message);
    Alph = AlphaNum(message);
    printf("kfekeoe %i\n", Alph);
    if (Alph == 1) {
        printf("Erreur la chaine n'est pas Alphanumerique \n");
        return 0;
    }

    choix = getchar();
    choix_Ent = choix-'0';


    printf("choisir le node d'encription (1 : Cesar, 2 : ...) : ");
    choix = getchar();
    choix_Ent = choix-'0';

    if (choix_Ent == 1) {
        Cesar(message);
    } else if (choix_Ent == 2) {
        printf("not implemented\n");//tmp
    } else {
        printf("entrée une reponse valide\n");
    }
    afficher_tab(message);
    return 0; 
}

void afficher_tab(char *tab){
    for (int i = 0; i< strlen(tab); i ++){
        printf("%c", tab[i]);
    }
    printf("\n");
}






/*
char getText(char tabChar[]);

char getText(char tabChar[]) {
    int i = 0;
    while (i < sizeof (tabChar)){
        tabChar[i] = getchar();
        i += 1;
    }
    tabChar[i+1] = '\n';
    return tabChar;
}*/