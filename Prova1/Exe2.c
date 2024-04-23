//Programa para Calcular a quantidade de latas de tintas
#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif


int main()
{
    float h, area ,base; //Declaração variaveis
    

    printf("Informe a altura: "); 
    scanf("%f",&h);      //Leitura da Altura
    
    printf("Informe o valor da base: ");
    scanf("%f",&base);     //Leitura do Raio
    
    area = (base * h)/2;   //Calculo da Area

    
    printf("Valor da Area: %.2f\n", area);
    
    //Codigo para funcionar em linux e em Windows
    //###########################################
    #ifdef _WIN32
    printf("Pressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...");
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif
    //##################################################
    
    return 0;
}
