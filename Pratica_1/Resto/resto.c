#include <stdio.h>
#include <math.h> //Biblioteca para fazer Calculos

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif

int main()
{
    int n1, n2, n3, resto;      //Declaração de Variavel
    printf("Informe o Primeiro valor: ");
    scanf("%d", &n1);

    printf("Informe o Segundo valor: ");
    scanf("%d", &n2);

    printf("Informe o Terceiro valor: ");
    scanf("%d", &n3);

    resto = (n1*n2*n3)%2;
    printf("O resto da divisão de %d é %d", (n1*n2*n3), resto);

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
