#include <stdio.h>
#include <math.h>

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif

int main(){
    float raio, volume, pi;
    pi = 3.14;
    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    volume = (4*pi*pow(raio,3))/3;
    printf("O volume da esfera eh: %.2f cm³\n", volume);
    
    
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