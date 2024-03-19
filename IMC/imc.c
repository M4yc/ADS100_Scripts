#include <stdio.h>
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else
#include <stdio_ext.h> // Biblioteca específica do Linux para limpar o buffer do teclado
#endif

int main()
{
    /* code */

    float massa,alt,imc;

    printf("Informe seu peso: ");
    scanf("%f",&massa);

    printf("Informe sua altura: ");
    scanf("%f",&alt);

    imc = massa/(alt*2);

    printf("Este é seu IMC: %.2f\n", imc);

    if( imc < 18.5){
        printf("Abaixo do peso.\n");
    } else if (imc < 25){
        printf("Peso normal.\n");
    } else if (imc < 30){
        printf("Sobrepeso.\n");
    } else{
        printf("Obesidade.\n");
    }

    #ifdef _WIN32
    printf("Pressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...");
    __fpurge(stdin); // Limpa o buffer do teclado no Linux
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif


    return 0;
}
