#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif

int main()
{
    float n1, n2, n3, n4, m; //Declaração de Variavel
    printf("Informe o Primeiro valor: ");
    scanf("%f", &n1);

    printf("Informe o Segundo valor: ");
    scanf("%f", &n2);

    printf("Informe o Terceiro valor: ");
    scanf("%f", &n3);

    printf("Informe o Quarto valor: ");
    scanf("%f", &n4);

    m = (n1+n2+n3+n4) / 4; //Calculo de Media
    printf("A media dos valores fornecido: %.2f", m);

    //Codigo para funcionar em linux e em Windows
    //###########################################
    #ifdef _WIN32
    printf("\nPressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...");
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif
    //##################################################
    
    return 0;
}
