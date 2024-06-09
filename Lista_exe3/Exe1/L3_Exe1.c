/*
 * File Name: P8_Exe1.c
 * Developer: Maycon
 * Creation Date: 08/06/2024
 * Description: Programa para receber dez notas de cada aluno de uma turma de 20 alunos calcular e imprimir a media de cada aluno a media da turma e Percentual de media acima de 5
 * Last Modification: 09/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){

    int N_Alunos = 3; //MUDAR ISSO DEPOIS
    int N_Notas = 3; //MUDAR ISSO DEPOIS

    float turma[N_Alunos][N_Notas];
    float MediaA[N_Alunos];
    float SomaA, SomaT, MediaT;
    
    int contM5 = 0;
    float percentM5 = 0;

    SomaA = 0;
    SomaT = 0;
    
    //Leitura das notas
    for (int i = 0; i < N_Alunos; i++){
        for (int j = 0; j < N_Notas; j++){
            printf("\nInforme a %d° nota do %d° Aluno: ",j+1,i+1);
            scanf("%f", &turma[i][j]);
            SomaA += turma[i][j];  
        }
        MediaA[i] = SomaA / N_Notas;
        SomaT += MediaA[i];
        if (MediaA[i] >= 5){
            contM5 += 1;
        }
    }

    MediaT = SomaT / N_Notas;
    
    //Print de Media de cada Aluno
    for (int i = 0; i < N_Alunos; i++){
        printf("\nMedia do Aluno %d : %.1f", i+1, MediaA[i]);
    }
    
    printf("\nMedia da Turma: %.1f", MediaT);

    percentM5 = ((float)contM5 / N_Alunos) * 100;
    printf("\nPercentual de Alunos com Medias maiores que 5.0 : %.0f%%", percentM5);

    return 0;
}