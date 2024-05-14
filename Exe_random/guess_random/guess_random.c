#include <stdio.h>
#include <locale.h>
#include <stdlib.h> // Biblioteca para gerar numeros aleatorios
#include <time.h> //Biblioteca de tempo

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num, numUser, tenta = 0;
    int lim_i = 1;
    int lim_s = 100;

    srand(time(NULL));

    num = rand() % ((lim_s - lim_i + 1) + lim_i);
    
    printf("\nTente adivinhar um numero inteiro de 0 a 100.\n");
    printf("Vamos começar\n");
    while (1){
        printf("Seu palpite: ");
        scanf("%d",&numUser);

        tenta ++;

        if (numUser == num){    
            printf("Parabens você acertou! Com %d tentativas.",tenta);
            break;
        } else{
            if (numUser > num){
                printf("O numero sorteado é menor,tente novamente.\n");
            } else if (numUser < num){
                printf("O numero sorteado é maior, tente novamente.\n");
            }

            if(tenta == 5){
                if (num % 2 == 0){
                    printf("Errou.\n");
                    printf("Uma dica é par\n");
                } else{
                    printf("Errou.\n");
                    printf("Uma dica é ímpar\n");
                }
            } else if (tenta == 8){
                printf("O numero está entre %d e %d\n", num - 3,num + 3);
            }
        }
    }
    return 0;
}