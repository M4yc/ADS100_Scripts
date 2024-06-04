/*
 * File Name: P8_Exe1.c
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

    int vClasse[10];
    float Soma, Media;
    int NotaAcima, x;

    Soma = 0;
    NotaAcima = 0;

    for (x = 0; x < 10; x++){
        if (vClasse[x] > Media){
            NotaAcima += 1;
        }
    }
    
    for (x = 0; x < 10; x++){
        printf("Informe o valor de V[%d]: ", x);
        scanf("%d",&vClasse[x]);
    }

    for (x = 0; x < 10; x++){
        Soma += vClasse[x];
    }
    Media = Soma / 10;

    for (x = 0; x < 10; x++){
        if (vClasse[x] > Media){
            NotaAcima += 1;
        }
    }
    printf("Notas acima da media: %d", NotaAcima);

    return 0;
}