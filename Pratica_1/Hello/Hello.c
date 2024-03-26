#include <stdio.h>
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else
#include <stdio_ext.h> // Biblioteca específica do Linux para limpar o buffer do teclado
#endif

int main(){
    
    printf("Hello, world");

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