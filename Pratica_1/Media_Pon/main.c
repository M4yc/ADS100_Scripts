#include <stdio.h>
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else
#include <stdio_ext.h> // Biblioteca específica do Linux para limpar o buffer do teclado
#endif

int main(){
    float v1, v2, v3, v4, v5, p1, p2, p3, p4, p5, mediaP;

    p1 = 1.5;
    p2 = 2.5;
    p3 = 3.5;
    p4 = 4.5;
    p5 = 5.5;

    printf("Informe o 1 Valor: ");
    scanf("%f",&v1);

    printf("Informe o 2 Valor: ");
    scanf("%f",&v2);
    
    printf("Informe o 3 Valor: ");
    scanf("%f",&v3);

    printf("Informe o 4 Valor: ");
    scanf("%f",&v4);

    printf("Informe o 5 Valor: ");
    scanf("%f",&v5);


    mediaP = (v1*p1+v2*p2+v3*p3+v4*p4+v5*p5)/(p1+p2+p3+p4+p5);

    printf("A media ponderada e: %.3f", mediaP);

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
