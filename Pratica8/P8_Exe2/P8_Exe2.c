/*
 * File Name: P8_Exe2.c
 * Developer: Maycon
 * Creation Date: 03/06/2024
 * Description: Programa para ordenar um vetor em ordem decrescente
 * Last Modification: 04/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int vetorOrd[10];
    int valor = 0;

    for (int x = 0; x < 10; x++){
        printf("Informe o valor de V[%d]: ", x);
        scanf("%d",&vetor[x]);
        vetorOrd[x] = vetor[x];
    }
    
    for (int i = 0; i < 10-1; i++){
        for (int j = i + 1; j < 10; j++){
            if (vetor[i] < vetor[j]){
                valor = vetor[i];
                vetorOrd[i] = vetorOrd[j];
                vetorOrd[j] = valor;
            }
            
        }
    }

    printf("Vetor original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    printf("Vetor ordenado em ordem decrescente:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetorOrd[i]);
    }
    printf("\n");
    
    return 0;
}