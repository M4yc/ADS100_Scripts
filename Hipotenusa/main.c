#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c;

    printf("Informe o valor de A: ");
    scanf("%f",&a);

    printf("Informe o valor de B: ");
    scanf("%f",&b);

    c = sqrt((a*a)+(b*b));

    printf("A hipotenusa é: %f\n", c);

    return 0;
}