/*
 * File Name: Aula-04-06_Exe1.c
 * Developer: Maycon
 * Creation Date: 04/06/2024
 * Description: ????
 * Last Modification: 04/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>


int main(){
    int matriz[3][3];

    char strings[5][100];


    for(int i = 0; i < 5; i++){
        printf("Digite uma string: ");
        fgets(strings, sizeof(strings), stdin);
    }
    

    printf("\n");
    
    return 0;
}