/*
 * File Name: P7_Exe2.c
 * Developer: Maycon
 * Creation Date: 27/05/2024
 * Description: Programa para ler valores para um vetor A e B e fazer a soma dos vetores em R e mostrar o resultado logo em seguida
 * Version: 1.0
 * Last Modification: 02/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int VETA[5], VETB[5], VETR[5];

    for( int x=0; x < 5; x++){
        printf("\nInsira o valor de VetorA: Pos[%d]: ", x);
        scanf("%d",&VETA[x]);
        printf("\nInsira o valor de VetorB: Pos[%d]: ", x);
        scanf("%d",&VETB[x]);
        VETR[x] = VETA[x] + VETB[x];
        printf("Valor de VetR: %d", VETR[x]);
    }
    printf("\n");
    system("pause");
    return 0;

}