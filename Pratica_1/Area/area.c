
#include <stdio.h>
#include <math.h>

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else
#include <stdio_ext.h> // Biblioteca específica do Linux para limpar o buffer do teclado
#endif


int main()
{
    float h, r; //Declaração variaveis
    float c, quantidade, area ,litro; //Declaração variaveis
    
    printf("Informe h:"); //Print 
    scanf("%f",&h);      //Leitura
    
    printf("Informe r:");
    scanf("%f",&r);
    
    area = (3.14*pow(r,2)) + (2*3.14*r*h); //Calculo area
    litro = area/3; //Calculo Litro
    quantidade = litro/5; //Calculo quantidade
    c = quantidade*50; // Calculo C
    
    printf("Valor de C: %.2f\n", c);
    printf("Valor da Quantidade: %.2f\n", quantidade); 
    
    
    //Codigo para funcionar em linux e em Windows
    //###########################################
    #ifdef _WIN32
    printf("Pressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...");
    __fpurge(stdin); // Limpa o buffer do teclado no Linux
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif
    //##################################################

    return 0;
}
