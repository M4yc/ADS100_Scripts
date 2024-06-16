/*
 * File Name: JogoDaVelha.c
 * Developer: Maycon, Luiz Felipe, Luslene, Vanessa, Tais
 * Creation Date: 04/06/2024
 * Description: Jogo da Velha em C
 * Last Modification: 14/06/2024
 * Version: 1.0
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h> // Lib para colocar cor no terminal

/*  Funções do Game */
void ResetGame(char Jogo[3][3]);

void PrintGame(char Jogo[3][3]);

int CheckVit(char Jogo[3][3]);

void PrintColored(char c);

void PrintIntro(); 


int main(){

    setlocale(LC_ALL, "Portuguese");
    
    char Jogo[3][3] = {{'.','.','.'},
                        {'.','.','.'},
                        {'.','.','.'}};

    int Jogadas = 0;
    char Jogador = 'X';
    char Resp;
    int Lin,Col;

    //Complete o codigo Abaixo
    PrintIntro();
    while (1){
        
        while (Jogadas <= 9){
        PrintGame(Jogo);
        printf("Jogador %c, digite a linha e a coluna (0, 1, 2): ", Jogador);
        scanf("%d %d",&Lin,&Col);
        
        //Abaixo Deve ter a vericação dos valores inseridos e se são validos
        if (?????){
            printf("Valores Invalidos! Tente novamente.\n");
            continue;
        }else if (???????){
            printf("Posição ja ocupada\n");
            continue;
        }
        //############################
        
        Jogo[Lin][Col] = Jogador;
        Jogadas += 1;

        if (CheckVit(Jogo)){
            PrintGame(Jogo);
            printf("Jogador %c venceu!\n", Jogador);
            break;
        }

        //Mudança de Jogador Falta Completar
        if (Jogador == 'X'){
            Jogador = 'O';
        }else if (Jogador == 'O'){
            Jogador = 'X';
        }
        

        if (Jogadas == 9 && CheckVit(Jogo) == 0){
            PrintGame(Jogo);
            printf("\nO Jogo terminou em empate!\n");
            break;
        }
        
    }

        printf("\nQuer jogar novamente?( S | N ) ");
        scanf(" %c",&Resp);
        if (Resp == 'N' || Resp == 'n'){
            break;
        }
        ResetGame(Jogo);
        Jogadas = 0;
        
        //Mudança de Jogador Falta Completar
        if (Jogador == 'X'){
            Jogador = 'O';
        }else if (Jogador == 'O'){
            Jogador = 'X';
        }
        
    }
    printf("\nObrigado pelo Game!!!");
    return 0;
}

void PrintIntro(){
    printf("\n========== Jogo da Velha ============\n");
    printf("*Instruções*\n");
    printf("Jogador 1 == X\n");
    printf("Jogador 2 == O\n");
    printf("Para inserir a posição da jogada digite a linha espaço e a coluna (1 0).\n");
    printf("Posições: \n");
    printf("| [0 0] | [0 1] | [0 2] |\n");
    printf("-------------------------\n");
    printf("| [1 0] | [1 1] | [1 2] |\n");
    printf("-------------------------\n");
    printf("| [2 0] | [2 1] | [2 2] |\n");
}


void PrintColored(char c) {
    if (c == 'X') {
        printf("\033[1;31m%c\033[0m", c); // Vermelho
    } else if (c == 'O') {
        printf("\033[1;32m%c\033[0m", c); // Verde
    } else {
        printf("%c", c);
    }
}

void ResetGame(char Jogo[3][3]){
    //Complete o codigo Abaixo
}

int CheckVit(char Jogo[3][3]){
    //Complete o codigo Abaixo
    if (Jogo[0][0] == 'X' && Jogo[0][1] == 'X' && Jogo[0][2] == 'X'){ // Linha 1
        printf("\nVitoria jogador X ");
        return 1;

    return 0;
}

void PrintGame(char Jogo[3][3]){
    printf("\nTabuleiro:\n");
    //Complete o codigo Abaixo
    
}