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
*  Nom du fichier :  Cesar.c                                                  *
*                                                                             *
******************************************************************************/
#include <stdio.h>
#include <string.h>
#include "Encodage.h"

void Cesar(char *message){
    static char Alpha[]     = "abcdefghijqlmnopqrstuvwxyz";
    static char AlphaC[]    = "bcdefghijqlmnopqrstuvwxyza";// Clef 
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