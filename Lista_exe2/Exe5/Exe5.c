#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int a,b,c;

    printf("Programa para detectar tipo de triangulo.");
    printf("Informe o valor de A: ");
    scanf("%d",&a);

    printf("Informe o valor de B: ");
    scanf("%d",&b);

    printf("Informe o valor de C: ");
    scanf("%d",&c);

    if((a < b + c) && (b < a + c) && (c < a + b)){
        if ((a == b) && (b == c)){
            printf("Triangulo Equilatero.");
        }else if(a == b || a == c || b == c){
            printf("Triangulo Isósceles");
        }else{
            printf("Triangulo Escaleno");
        }
    }else{
        printf("Estes valores não formam um triangulo!");
    }
    return 0;
}
