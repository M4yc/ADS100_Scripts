//Programa que Imprimi até 100 com FOR

#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int c;

    for(c=1;c <= 100;c++){
        printf("Valor de C= %d\n", c);
    }
    
    return 0;
}
