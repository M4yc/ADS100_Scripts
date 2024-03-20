#include <stdio.h>
#include <math.h>


int main(){
    float a,b,c,result,resto;

    printf("Informe o valor de A: ");
    scanf("%f",&a);

    printf("Informe o valor de B: ");
    scanf("%f",&b);

    printf("Informe o valor de C: ");
    scanf("%f",&c);

    result = (a*b*c) / 2;
    resto = fmodf((a*b*c), 2);

    printf("O resultado é: %.2f e o resto: %.2f\n", result,resto);

}