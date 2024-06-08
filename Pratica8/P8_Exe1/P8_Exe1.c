/*
 * File Name: P8_Exe1.c
 * Developer: Maycon
 * Creation Date: 03/06/2024
 * Description: Programa para leitura de notas calcular media e informa notas acima da media
 * Last Modification: 03/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int vClasse[10];
    float Soma, Media;
    int NotaAcima, x;

    Soma = 0;
    NotaAcima = 0;

    for (x = 0; x < 10; x++){
        printf("Informe o valor de V[%d]: ", x);
        scanf("%d",&vClasse[x]);
    }

    //Vetor para Soma
    for (x = 0; x < 10; x++){
        Soma += vClasse[x];
    }
    Media = Soma / 10;

    // Vetor para valores acima da media
    for (x = 0; x < 10; x++){
        if (vClasse[x] > Media){
            NotaAcima += 1;
        }
    }

    //printf("\nMedia: %.2f", Media);
    printf("\nNotas acima da media: %d", NotaAcima);

    return 0;
}