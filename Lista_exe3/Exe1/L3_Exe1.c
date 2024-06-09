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

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8"); 

    int N_Alunos = 2; // Numero de alunos
    int N_Notas = 3;  // Numero de notas

    float nota, somaA, somaT, mediaA, mediaT;
    int contM5 = 0;
    float percentM5 = 0;

    somaT = 0;

    
    for (int i = 0; i < N_Alunos; i++) {
        somaA = 0;
        for (int j = 0; j < N_Notas; j++) {
            printf("\nInforme a %dª nota do %dº aluno: ", j + 1, i + 1);
            scanf("%f", &nota);
            somaA += nota;
        }
        mediaA = somaA / N_Notas;
        somaT += mediaA;
        printf("\nMédia do aluno %d: %.1f", i + 1, mediaA);
        if (mediaA >= 5) {
            contM5 += 1;
        }
    }

    mediaT = somaT / N_Alunos;
    printf("\nMédia da turma: %.1f", mediaT);

    percentM5 = ((float)contM5 / N_Alunos) * 100;
    printf("\nPercentual de alunos com médias maiores que 5.0: %.0f%%", percentM5);

    return 0;
}
