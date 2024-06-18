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

    int num = 5;
    int n_vezes1 = 0, n_vezes2 = 0, n_vezes3 = 0, n_vezes4 = 0, n_vezes5 = 0, n_vezes6 = 0;
    int vetorE[num];

    for(int i = 0; i < num; i++){
        printf("Informe um valor inteiro para a posição [%d]: ",i);
        scanf("%d",&vetorE[i]);
 
    }
    for(int i = 0; i < num; i++){
        if (vetorE[i] == 1){
            n_vezes1 +=1;
        }
        if (vetorE[i] == 2){
            n_vezes2 +=1;
        }
        if (vetorE[i] == 3){
            n_vezes3 +=1;
        }
        if (vetorE[i] == 4){
            n_vezes4 +=1;
        }
        if (vetorE[i] == 5){
            n_vezes5 +=1;
        }
        if (vetorE[i] == 6){
            n_vezes6 +=1;
        }
    }

    printf("\nO numero 1 apareceu %d vezes.", n_vezes1);
    printf("\nO numero 2 apareceu %d vezes.", n_vezes2);
    printf("\nO numero 3 apareceu %d vezes.", n_vezes3);
    printf("\nO numero 4 apareceu %d vezes.", n_vezes4);
    printf("\nO numero 5 apareceu %d vezes.", n_vezes5);
    printf("\nO numero 6 apareceu %d vezes.", n_vezes6);

    return 0;
}