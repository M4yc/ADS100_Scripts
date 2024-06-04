/*
 * File Name: P8_Exe3.c
 * Developer: Maycon
 * Creation Date: 03/06/2024
 * Description: Programa para receber a entrada de uma frase e contar quantas vogais tem na frase.
 * Last Modification: 04/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char frase[200];
    int ContVoga = 0;

    printf("Digite uma frase (maximo 199 caracteres): ");
    fgets(frase, sizeof(frase), stdin);

    for(int i = 0; i < strlen(frase); i++){
        if (frase[i] == 'A' || frase[i] == 'a' || frase[i] == 'E' || frase[i] == 'e' || frase[i] == 'I' || frase[i] == 'i' || frase[i] == 'O' || frase[i] == 'o' || frase[i] == 'U' || frase[i] == 'u'){
            ContVoga ++;
        }
        
    }
    

    printf("Na frase digitada contem %d vogais", ContVoga);
}