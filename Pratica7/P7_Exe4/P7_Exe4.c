/*
 * File Name: P7_Exe4.c
 * Developer: Maycon
 * Creation Date: 27/05/2024
 * Description: Programa para criar 2 vetores  e intercalar os valores deles em um vetor 3
 * Version: 1.0
 * Last Modification: 02/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int VET1[10] = {3, 5, 4, 2, 2, 5, 3, 2, 5, 9};
    int VET2[10] = {7, 15, 20, 0, 18, 4, 55, 23, 8, 6};
    int VET3[20];

    int k = 0, j = 0;

    for( int x=0; x < 20; x++){
        if(x % 2 == 0){
            VET3[x] = VET1[k++];    
        }else{
            VET3[x] = VET2[j++];    
        }
        
    }

    for (int i = 0; i < 20; i++){
        printf("%d ",VET3[i]);
    }
    printf("\n");
    system("pause");
    return 0;

}