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
*  Nom du fichier :  AlphNum.c                                                *
*                                                                             *
******************************************************************************/
#include <string.h>
#include "Encodage.h"

int AlphaNum(char *message){
    char Ac[]     = "àáâãäåæçèéêëìíîïðñòóôõöøœšùúûüýÿ";
    char AcM[]    = "ÀÁÂÃÄÅÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖØŒŠÙÚÛÜÝŸ";
    char Alpha[]  = "abcdefghijqlmnopqrstuvwxyz";
    char AlphaM[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char Num[]    = "0123456789";
    int r = 0;
    int x = 0;
    for (int i = 0; i < strlen(message); i++){
        x = i;
        for (int i = 0; i < 26; i ++){
            if (message[x] == Alpha[i] || message[x] == AlphaM[i]){
                r = 1;
                i = 26;
            }
        }
        if (r == 0) {
            for (int i = 0; i < 32; i ++){
                if (message[x] == Ac[i] || message[x] == AcM[i]){
                    r = 1;
                    i = 32;
                }
            }
        }else if (r == 0) {
            for (int i = 0; i < 10; i ++){
                if (message[x] == Num[i]){
                    r = 1;
                    i = 10;
                }
            }
        }
    }
    if (r == 0){
        return 0;
    } else {
        return 1;
    }
}