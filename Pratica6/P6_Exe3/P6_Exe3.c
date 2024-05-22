/*
 * File Name: P6_Exe3.c
 * Developer: Maycon, Luslene
 * Creation Date: 20/05/2024
 * Description: Programa para calcular a media de cada aluno e depois a media geral da sala
 * Version: 1.0
 * Last Modification: 22/05/2024
 * Modified by: Maycon, Luslene
 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    float nota1, nota2, media = 0, somaG, mediaG = 0 ;
    int tA = 0, tE = 0, tR = 0;
    printf("Para Calculo de Media geral e Media do Aluno.");

    for (int i = 0; i < 6; i++)
    {
        printf("\nInforme a Primeira nota do aluno %d: ",i+1);
        scanf("%f",&nota1);
        printf("\nInforme a Segunda nota do aluno %d: ",i+1);
        scanf("%f",&nota2);
        media= (nota1+nota2)/2;
        printf("\nSua media foi: %.1f", media);

        if(media < 3){
            printf("\nReprovado");
            tR += 1;
        }else if (media >= 3 && media < 7 ){
            printf("\nExame");
            tE += 1;
        }else if (media >= 7){
            printf("\nAprovado");
            tA += 1;
        }
        somaG += media;
    }

    mediaG = somaG / 6;

    printf("\nAlunos Aprovados: %d",tA);
    printf("\nAlunos de Exame: %d", tE);
    printf("\nAlunos reprovados: %d", tR);
    printf("\nA media geral da turma foi %.1f\n",mediaG);

    system("pause");
    
    return 0;

}