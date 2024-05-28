/*
 * File Name: P7_Exe1.c
 * Developer: Maycon
 * Creation Date: 27/05/2024
 * Description: Programa para calcular a media de cada aluno e depois a media geral da sala
 * Version: 1.0
 * Last Modification: 27/05/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int a[100];

    int i;

    for(i=0;i<100;i++){
        if (i % 2 != 0 ){
            a[i] = 1;
        }else{
            a[i] = 0;
        } 
    }
    for ( i = 0; i < 100; i++){
        printf("\n Valor: %d \n Pos: %d", a[i], i);
    }
    
    printf("Fim");
    system("pause");
    return 0;

}