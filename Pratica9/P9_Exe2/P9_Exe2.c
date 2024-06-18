/*
 * File Name: P9_Exe1.c
 * Developer: Maycon,Luiz Felipe, Luslene
 * Creation Date: 17/06/2024
 * Description: ???????????
 * Last Modification: 17/06/2024
 * Modified by: Maycon, Luiz Felipe, Luslene
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    setlocale(LC_ALL, "Portuguese");

    int num = 3;
    int simetria = 1;
    int matriz[num][num];

    for(int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            printf("Informe um valor inteiro para a posição [%d][%d]: ",i,j);
            scanf("%d",&matriz[i][j]);
        }
    }
    
    for(int i = 0; i < num; i++){
        for (int j = 0; j < num; j++){
            if(matriz[i][j] != matriz[j][i]){
                simetria = 0;
                break;
            }
        }
    }

    if (simetria == 1 )
    {
        printf("\nMatriz Simetrica\n");
    }else{
        printf("\nMatriz não Simetrica\n");
    }
    
    return 0;
}