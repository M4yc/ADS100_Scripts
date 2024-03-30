#include <stdio.h>

int main(){
    float base,altura,area;

    printf("Informe o valor da Base: ");
    scanf("%f",&base);

    printf("Informe o valor da Altura: ");
    scanf("%f",&altura);

    area = (base*altura)/2;

    printf("O valor da area é: %.2f\n", area);

}