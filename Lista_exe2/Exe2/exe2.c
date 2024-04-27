#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int valor;

    printf("Informe um numero para vereificar se é par ou ímpar: ");
    scanf("%d", &valor);

    if (valor % 2 == 0){
        printf("O numero %d é par\n", valor);
    } else {
        printf("O numero %d é ímpar\n", valor);
    }

    return 0;
}
