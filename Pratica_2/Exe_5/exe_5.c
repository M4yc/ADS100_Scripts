#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c;
    
    printf("Informe o valor de A:");
    scanf("%f",&a);

    printf("Informe o valor de B:");
    scanf("%f",&b);

    printf("Informe o valor de C:");
    scanf("%f",&c);

    if (a < b + c && b < a + c && c < a + b){
        if (a == b && b == c){
           printf("O triangulo é equilatero.\n");
        } else if (a == b || a == c|| b == c){
            printf("O triangulo é isoceles\n");
        } else{
            printf("O triangulo é escaleno.\n");
        }
    } else{
        printf("Nao forma um triangulo.\n");
    }

    return 0;
}
