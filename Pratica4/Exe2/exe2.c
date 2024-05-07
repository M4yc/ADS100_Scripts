//Programa que Imprimi até 100 com WHILE

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int c=0;

    while(c < 100){
        c += 1;
        printf("Valor de C= %d\n", c);
    }
    
    return 0;
}
