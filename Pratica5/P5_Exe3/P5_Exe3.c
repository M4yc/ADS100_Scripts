#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Programa para determinar a seção de um condutor de cobre (em mm²)");

    float secao, Po, P, L, e, U, pots;
    

    for (int i = 0; i < 10; i++){
        printf("Informe a potencia em Watt: ");
        scanf("%f",&P);

        printf("Informe a distancia em Watt: ");
        scanf("%f",&L);

        pots += (P*L); 
    }
    secao = 2*p()*pots;

    system("pause");
    
    return 0;

}