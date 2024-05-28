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

    int VET1[10] = {3,5,4,2,2,5,3,2,5,9}, VET2[10] = {7,15,20,0,18,4,55,23,8,6}, VET3[20];
/*
    for( int x=0; x < 5; x++){
        if(x % 2 == 0){
            VET3[x] = VET1[x];    
        }else{
            VET3[x+1] = VET2[x];    
        }
        
    }
*/

    for (size_t i = 0; i < 20; i=i+2){
        VET3[i] = VET1[i];
        VET3[i+1] = VET2[i];

        printf("%d ",VET3[i]);
    }



    system("\npause");
    return 0;

}