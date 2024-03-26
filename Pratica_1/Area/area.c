//Programa para Calcular a quantidade de latas de tintas

#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif


int main()
{
    float h, r, c, quantidade, area ,litro; //Declaração variaveis
    

    printf("Informe a altura do Cilindro: "); 
    scanf("%f",&h);      //Leitura da Altura
    
    printf("Informe o raio: ");
    scanf("%f",&r);     //Leitura do Raio
    
    area = (3.14*pow(r,2)) + (2*3.14*r*h);   //Calculo da area Total
    litro = area/3;                         //Calculo da quantidade de Litros
    quantidade = litro/5;                  //Calculo quantidade de Lata
    c = quantidade*50;                    //Calculo do Custo
    
    printf("Valor de Custo: R$%.2f\n", c);
    printf("Valor da Quantidade de Latas necessarias: %.2f\n", quantidade); 
    
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
