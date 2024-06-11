/*
 * File Name: JogoDaVelha.c
 * Developer: Maycon, Luiz Felipe, Luslene, Vanessa, Tais
 * Creation Date: 04/06/2024
 * Description: Jogo da Velha em C
 * Last Modification: 05/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h> // Lib para colocar cor no terminal

/*  Funções do Game */
void resetGame(char jogo[3][3]);

void printGame(char jogo[3][3]);

int checkVit(char jogo[3][3]);

void printColored(char c);

void PrintIntro(); 


int main(){

    setlocale(LC_ALL, "Portuguese");
    
    char jogo[3][3] = {{'.','.','.'},
                        {'.','.','.'},
                        {'.','.','.'}};

    int jogadas = 0;
    char Jogador = 'X';
    
    int Lin,Col;

    PrintIntro();

    while (jogadas <= 9){
        printGame(jogo);
        printf("Jogador %c, digite a linha e a coluna (0, 1, 2): ", Jogador);
        scanf("%d %d",&Lin,&Col);
        
        if (Lin >= 3 || Lin < 0 || Col >= 3 || Col < 0 ){
            printf("Valores Invalidos! Tente novamente.\n");
            continue;
        }else if (jogo[Lin][Col] != '.'){
            printf("Posição ja ocupada\n");
            continue;
        }
        
        jogo[Lin][Col] = Jogador;
        jogadas += 1;

        if (checkVit(jogo)){
            printGame(jogo);
            printf("Jogador %c venceu!\n", Jogador);
            return 0;
        }

        if (Jogador == 'X'){
            Jogador = 'O';
        }else if (Jogador == 'O'){
            Jogador = 'X';
        }

        if (jogadas == 9 && checkVit(jogo) == 0){
            printGame(jogo);
            printf("\nO jogo terminou em empate!\n");
            break;
        }
        
        // Alterna o jogador
        //Jogador = (Jogador == 'X') ? 'O' : 'X';
    }
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


void printColored(char c) {
    if (c == 'X') {
        printf("\033[1;31m%c\033[0m", c); // Vermelho
    } else if (c == 'O') {
        printf("\033[1;32m%c\033[0m", c); // Verde
    } else {
        printf("%c", c);
    }
}

void resetGame(char jogo[3][3]){
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            jogo[i][j] = '.';
        }
    }
}

int checkVit(char jogo[3][3]){
    if (jogo[0][0] == 'X' && jogo[0][1] == 'X' && jogo[0][2] == 'X'){ // Linha 1
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[1][0] == 'X' && jogo[1][1] == 'X' && jogo[1][2] == 'X'){ // Linha 2
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[2][0] == 'X' && jogo[2][1] == 'X' && jogo[2][2] == 'X'){ // Linha 3
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[0][0] == 'X' && jogo[1][0] == 'X' && jogo[2][0] == 'X'){ // Coluna 1
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[0][1] == 'X' && jogo[1][1] == 'X' && jogo[2][1] == 'X'){ // Coluna 2
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[0][2] == 'X' && jogo[1][2] == 'X' && jogo[2][2] == 'X'){ // Coluna 3
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[0][0] == 'X' && jogo[1][1] == 'X' && jogo[2][2] == 'X'){ // Diagonal
        printf("\nVitoria jogador X ");
        return 1;
    }else if (jogo[0][2] == 'X' && jogo[1][1] == 'X' && jogo[2][0] == 'X'){ // Diagonal Inversa
        printf("\nVitoria jogador X ");
        return 1;
    }
    if (jogo[0][0] == 'O' && jogo[0][1] == 'O' && jogo[0][2] == 'O'){ // Linha 1
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[1][0] == 'O' && jogo[1][1] == 'O' && jogo[1][2] == 'O'){ // Linha 2
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[2][0] == 'O' && jogo[2][1] == 'O' && jogo[2][2] == 'O'){ // Linha 3
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[0][0] == 'O' && jogo[1][0] == 'O' && jogo[2][0] == 'O'){ // Coluna 1
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[0][1] == 'O' && jogo[1][1] == 'O' && jogo[2][1] == 'O'){ // Coluna 2
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[0][2] == 'O' && jogo[1][2] == 'O' && jogo[2][2] == 'O'){ // Coluna 3
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[0][0] == 'O' && jogo[1][1] == 'O' && jogo[2][2] == 'O'){ // Diagonal
        printf("\nVitoria jogador O ");
        return 1;
    }else if (jogo[0][2] == 'O' && jogo[1][1] == 'O' && jogo[2][0] == 'O'){ // Diagonal Inversa
        printf("\nVitoria jogador O ");
        return 1;
    }

    return 0;
}

void printGame(char jogo[3][3]){
    printf("\nTabuleiro:\n");
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("| ");
            printColored(jogo[i][j]);
            printf(" ");
        }
        printf("|\n");
        if (i < 2) printf("------------\n");
    }
}