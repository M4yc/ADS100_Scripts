//Programa para Calcular a quantidade de latas de tintas
#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif


int main()
{
    float comprimento, largura, preco, area , custo; //Declaração variaveis
    

    printf("Informe o comprimento da sala em metros: "); 
    scanf("%f",&comprimento);      //Leitura do Comprimento
    
    printf("Informe a largura da sala em metros: ");
    scanf("%f",&largura);     //Leitura da Largura
    
    printf("Informe o preco do metro quadrado do carpete: ");
    scanf("%f",&preco);     //Leitura do Preço

    area = comprimento * largura;       //Calculo da area Total
    custo = area * preco;              //Calculo do custo
    
    printf("O Custo toal para forrar o piso é: R$%.2f\n", custo); 
    
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
