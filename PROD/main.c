#include <stdio.h>

int produto (int a, int b);

int main(){
    int x = 5;
    int y = 3;
    int resultado;

    resultado = produto(x, y);

    printf("o produto de %d e %d é %d\n", x, y, resultado);
    return 0;
}

int produto(int a, int b){
    return a * b;
}
