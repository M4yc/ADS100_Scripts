#include <stdio.h>

int main()
{
    /* code */

    float massa,alt,imc;

    printf("Informe seu peso: ");
    scanf("%f",&massa);

    printf("Informe sua altura: ");
    scanf("%f",&alt);

    imc = massa/(alt*2);

    printf("Este é seu IMC: %.2f\n", imc);

    if( imc < 18.5){
        printf("Abaixo do peso.\n");
    } else if (imc < 25){
        printf("Peso normal.\n");
    } else if (imc < 30){
        printf("Sobrepeso.\n");
    } else{
        printf("Obesidade.\n");
    }

    return 0;
}
