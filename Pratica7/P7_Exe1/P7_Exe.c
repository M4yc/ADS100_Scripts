/*
 * File Name: P7_Exe.c
 * Developer: Maycon
 * Creation Date: 27/05/2024
 * Description: Programa para adicionar 1 na posição impar e 0 na posição par.
 * Version: 1.0
 * Last Modification: 02/06/2024
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
    //Print a mais para saber se está funcionando da maneira correta.
    for ( i = 0; i < 100; i++){
        printf("\n Pos: %d \n Valor: %d \n", i, a[i]);
    }
    
    printf("Fim");
    system("pause");
    return 0;

}