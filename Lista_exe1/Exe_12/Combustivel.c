//Programa para Calcular o consumo de combustivel
#include <stdio.h>
#include <math.h>

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif

int main(){
    float tempo, velocidade, distancia, consumo;

    printf("Digite o tempo gasto na viagem em horas: ");
    scanf("%f",&tempo);
    
    printf("Digite a velocidade media do onibus em Km/h: ");
    scanf("%f",&velocidade);
    
    distancia = tempo * velocidade;
    consumo = distancia / 12;

    printf("A velocidade média do onibus foi: %.2f Km/h\n", velocidade);
    printf("O tempo gasto foi de: %.2f h\n", tempo);
    printf("A distancia percorrida foi: %.2f Km\n", distancia);
    printf("A quantidade de litros de gasolina gato foi: %.2f\n", consumo);

    //Codigo para funcionar em linux e em Windows
    //###########################################
    #ifdef _WIN32
    printf("Pressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...\n");
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif
    //##################################################
    
    return 0;
}