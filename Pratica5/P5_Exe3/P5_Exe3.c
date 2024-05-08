#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    printf("Programa para determinar a seção de um condutor de cobre (em mm²)\n");

    float secao, P, L, pots;
    

    for (int i = 0; i < 3; i++){
        printf("Informe a potencia em Watt: ");
        scanf("%f",&P);

        printf("Informe a distancia em metros: ");
        scanf("%f",&L);

        pots += (P*L); 
    }

    secao = (2*(1/58)*(1/(0.02*(127*127)))*pots);

    printf("O diametro do fio é: %.2f\n",secao);

    system("pause");
    
    return 0;

}