#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    double base, altura, area;

    while (1){
        printf("Informe a medida da base: ");
        scanf("%lf",&base);
        if (base > 0){
            break;
        }
        printf("\nValor invalido tente novamente.\n");
    }
    
    while (1){
        printf("Informe a medida da altura: ");
        scanf("%lf",&altura);
        if (altura > 0){
            break;
        }
        printf("\nValor invalido tente novamente.\n");
    }
    
    area = (base * altura)/2;
    
    printf("A area do triangulo é: %.2lf\n", area);

    system("pause");
    
    return 0;

}