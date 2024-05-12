#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

#define e_percent 0.02
#define U_volt 127
#define p_resist (1.0/58)


int main(){

    printf("Programa para determinar a seção de um condutor de cobre (em mm²)\n");

    float secao, P, L, pots;
    
    for (int i = 0; i < 10; i++){
        printf("\nInforme a %d° potencia em Watt: ", i+1);
        scanf("%f", &P);

        printf("\nInforme a %d° distancia em Metros: ", i+1);
        scanf("%f", &L);

        pots += (P * L); 
    }

    secao = 2 * p_resist * (1 / (e_percent * U_volt * U_volt)) * pots;

    printf("\nO diametro do fio é: %.2f em mm²\n", secao);

    system("pause");
    
    return 0;

}