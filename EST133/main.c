#include <stdio.h>

int soma(int a, int b);

int main(){
    int x = 5;
    int y = 3;
    int resultado;

    resultado = soma(x, y);

    printf("A soma de %d e %d é %d\n", x, y, resultado);
    return 0;
}

int soma(int a, int b){
    return a + b;
}
