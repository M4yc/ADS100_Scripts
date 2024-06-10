/*
 * File Name: JogoDaVelha.c
 * Developer: Maycon
 * Creation Date: 04/06/2024
 * Description: Jogo da Velha em C
 * Last Modification: 05/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

/*  Funções do Game */
void resetGame(char jogo[3][3]);

void printGame(char jogo[3][3]);

void CheckVitor(char jogo[3][3]);


int jogadorDaVez = 1;
int jogadas = 0;

int main(){

    setlocale(LC_ALL, "Portuguese");
    
    char input;

    char jogo[3][3] = {{'.','.','.'},
                        {'.','.','.'},
                        {'.','.','.'}};
    

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printGame(jogo);
            printf("Informe o valor para a posição [%d , %d] (X ou O): ", i, j);
            scanf(" %c",&input);
            input = toupper(input);
            while (1){
                if (input == 'X' || input == 'O'){
                    break;
                }
                else{
                    printf("Entrada invalida!. Informe o valor para a posição [%d , %d] (X ou O): ", i, j);
                    scanf(" %c",&input);
                    input = toupper(input);
                }
            }
            jogo[i][j] = input;

            while ((getchar()) != '\n'); //Limpar Buffer
        }
        printf("\n");
    }

    printGame(jogo);

    resetGame(jogo);

    printGame(jogo);

    return 0;
}

void resetGame(char jogo[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            jogo[i][j] = '.';
        }
    }
}

void CheckVitor(char jogo[3][3]){
    if (jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'){
        printf("Vitoria jogador 1");
    }
    
}

void printGame(char jogo[3][3]){
    printf("Tabuleiro Final: \n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("| %c ", jogo[i][j]);
        }
        printf("|");
        printf("\n");
        printf("------------");
        printf("\n");
    }
}