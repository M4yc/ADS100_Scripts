//Programa para Calcular a quantidade de latas de tintas
#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif


int main()
{
    
    float tamanho_arquivo, velocidade_conexao, tempo_download; //Declaração variaveis
    

    printf("Informe o tamanho do arquivo (em bits): "); 
    scanf("%f",&tamanho_arquivo);      //Tamanho dos arquivos
    
    printf("Informe a velocidade da conexão (bits por segundo): ");
    scanf("%f",&velocidade_conexao);     //Leitura 
    
    tempo_download = tamanho_arquivo / velocidade_conexao;
    
    printf("O Tempo necessário para fazer o download do arquivo é: %.1f segundos\n", tempo_download); 
    
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
