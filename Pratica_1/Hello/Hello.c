#include <stdio.h>
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else

#endif

int main(){
    
    printf("Hello, world!\n");

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