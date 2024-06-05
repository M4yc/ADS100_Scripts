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

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Informe um numero pra a posicao [%d,%d] da matriz: ",i,j );
            scanf("%d",&matriz[i][j]);
        }
    }

    printf("\n");
    
    return 0;
}