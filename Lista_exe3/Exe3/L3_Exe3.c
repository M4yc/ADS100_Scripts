/*
 * File Name: P8_Exe3.c
 * Developer: Maycon
 * Creation Date: 08/06/2024
 * Description: Programa para receber numero de alunos e receber cindo notas de cada e informar se esta aprovado em determinadas materias
 * Last Modification: 09/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define NotaAprov 6.0


int main(){

    int N_Alunos = 0; //MUDAR ISSO DEPOIS

    printf("Informe o numero de Alunos: ");
    scanf("%d",&N_Alunos);

    char Alunos[N_Alunos][100];
    float Notas[N_Alunos][5];

    int ContAp3 = 0;
    float PercentAp3 = 0;
    
    //Leitura das notas
    for (int i = 0; i < N_Alunos; i++){
            printf("\nInforme o Nome do Aluno: ");
            scanf(" %s",&Alunos[i]);

        for (int j = 0; j < 5; j++){
            printf("\nInforme a %d nota do %d Aluno  %s: ",j+1, i+1, Alunos[i]);
            scanf("%f", &Notas[i][j]);
        }

        // Aprovado na materia 3
        if (Notas[i][2] >= NotaAprov){ 
            ContAp3 += 1;
        }
    }

    //Nome de alunos aprovados em todas Materias
    printf("\nAlunos aprovados em todas materias: \n");
    for (int i = 0; i < N_Alunos; i++){
        int AprovT = 1;
        for (int j = 0; j < 5; j++){
            if(Notas[i][j] < NotaAprov ){
                AprovT = 0;
                //printf("\nNão teve Aluno aprovado em todas as materias\n");
                break;
            }
        }
        if(AprovT == 1){
            printf("%s\n", Alunos[i]);
        }
    }

    //Nome de alunos aprovados na Materia 1 e 4.
    printf("\nAlunos aprovados na materia 1 e 4: \n");
    for (int i = 0; i < N_Alunos; i++){
        if (Notas[i][0] >= NotaAprov && Notas[i][3] >= NotaAprov){
            printf("%s\n", Alunos[i]);
        }
        else{
            printf("\nNao teve Aluno aprovado nas materias 1 e 4\n");
        }
    }
    
    //Percentual de alunos aprovados na Materia 3.
    PercentAp3 = ((float)ContAp3 / N_Alunos) * 100;
    printf("\nPercentual de Alunos aprovados na meteria 3: %.0f%%", PercentAp3);

    return 0;
}