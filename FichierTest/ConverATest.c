#include <stdio.h>
#include <string.h>

void ConverA(char *message){
    char AcO[]     = "ðòóôõöø";
    char AcA[]     = "àáâãäå";
    char AcMA[]    = "ÀÁÂÃÄÅ";
    char AcMO[]    = "ÒÓÔÕÖØ";
    char AcE[]     = "èéêë";
    char Aci[]     = "ìíîï";
    char AcU[]     = "ùúûü";
    char AcME[]    = "ÈÉÊË";
    char AcMi[]    = "ÌÍÎÏ";
    char AcMU[]    = "ÙÚÛÜ";
    char AcY[]     = "ýÿ";
    char AcMY[]    = "ÝŸ";

    for (int i = 0; i< strlen(message); i ++){
        int x = i;
        for (int i = 0; i< strlen(AcA); i ++){
            if (message[x] == AcA[i]){
                message[x] = "a";
                i = strlen(AcA);
            } else if (message[x] == AcMA[i]){
                message[x] = "A";
                i = strlen(AcA);
            } else if (message[x] == AcMO[i]){
                message[x] = "O";
                i = strlen(AcA);
            }
        }

        for (int i = 0; i< strlen(AcO); i ++){
            if (message[x] == AcO[i]){
                message[x] = "o";
                i = strlen(AcO);
            }
        }

        for (int i = 0; i< strlen(AcE); i ++){
            if (message[x] == AcE[i]){
                message[x] = "e";
                i = strlen(AcE);
            } else if (message[x] == AcME[i]){
                message[x] = "E";
                i = strlen(AcE);
            } else if (message[x] == Aci[i]){
                message[x] = "i";
                i = strlen(AcE);
            } else if (message[x] == AcU[i]){
                message[x] = "u";
                i = strlen(AcE);
            } else if (message[x] == AcMU[i]){
                message[x] = "U";
                i = strlen(AcE);
            }
        }

        for (int i = 0; i< strlen(AcY); i ++){
            if (message[x] == AcY[i]){
                message[x] = "y";
                i = strlen(AcY);
            } else if (message[x] == AcMY[i]){
                message[x] = "Y";
                i = strlen(AcY);
            } 
        }

            if (message[x] == "š"){
                message[x] = "s";
            } else if (message[x] == "Š"){
                message[x] = "S";
            } else if (message[x] == "ç"){
                message[x] = "c";
            } else if (message[x] == "Ç"){
                message[x] = "C";
            } else if (message[x] == "Ð"){
                message[x] = "D";
            } else if (message[x] == "ñ"){
                message[x] = "n";
            } else if (message[x] == "Ñ"){
                message[x] = "N";
            } 
    }
}


int main(){
    char message[] = "éêÐÑÒÓÔÕÖØëìíîïðñò";
    ConverA(message);
    printf("no :  %c\n", message);
    return 0;
}