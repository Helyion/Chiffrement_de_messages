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
*  Nom du fichier :  CesarTest.c                                              *
*                                                                             *
******************************************************************************/

#include <stdio.h>
#include <string.h>

void Cesar(char *message);
void afficher_tab(char *tab);

int main(){
    char messageOr[] = "message";
    afficher_tab(messageOr);
    Cesar(&messageOr);
    afficher_tab(messageOr);
    return 0;
}

void Cesar(char *message){
    char Alpha[]  = "abcdefghijqlmnopqrstuvwxyz";
    char AlphaC[] = "bcdefghijqlmnopqrstuvwxyza";
    for (int y = 0; y< strlen(message); y ++){
        int x = y;
        for (int i = 0; i< strlen(Alpha); i ++){
            if (message[x] == Alpha[i]){
                message[x] = AlphaC[i];
                i = strlen(Alpha);
            }
        }
    }
}

void afficher_tab(char *tab){
    for (int i = 0; i< strlen(tab); i ++){
        printf("%c", tab[i]);
    }
    printf("\n");
}