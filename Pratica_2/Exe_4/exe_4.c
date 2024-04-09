#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, raiz1, raiz2, delta;
    
    printf("Informe o valor de A:");
    scanf("%f",&a);

    printf("Informe o valor de B:");
    scanf("%f",&b);

    printf("Informe o valor de C:");
    scanf("%f",&c);

    delta = b*b - 4 * a * c;

    if (delta > 0){
        raiz1 = (-b + sqrt(delta))/ a*2;
        raiz2 = (-b - sqrt(delta))/ a*2;

        printf("As raizes da equacao são:  x1= %.2f  x2= %.2f", raiz1, raiz2);
    } else if(delta == 0){
        raiz1 = -b  / (2*a);
        printf("A equação possui raízes iguais: %.2f\n", raiz1);
    } else{
        printf("Não existe");
    }

    return 0;
}
