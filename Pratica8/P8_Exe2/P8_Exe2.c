/*
 * File Name: P8_Exe2.c
 * Developer: Maycon
 * Creation Date: 03/06/2024
 * Description: ??????
 * Last Modification: 03/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int vetor[10];
    int valor = 0;

    for (int x = 0; x < 10; x++){
        printf("Informe o valor de V[%d]: ", x);
        scanf("%d",&vetor[x]);
    }
    
    for (int i = 0; i < 10-1; i++){
        for (int j = i + 1; j < 10; j++){
            if (vetor[i] < vetor[j]){
                valor = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = valor;
            }
            
        }
    }
    for (int x = 0; x < 10; x++){
        printf("%d ", vetor[x]);
    }


    printf("\n %d ", sizeof(vetor));
    return 0;
}