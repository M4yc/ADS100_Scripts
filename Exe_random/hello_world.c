#include <stdio.h>

#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#else
#include <stdio_ext.h> // Biblioteca específica do Linux para limpar o buffer do teclado
#endif

int main() {
    int num1, num2, resultado;

    printf("Digite o primeiro valor: ");
    scanf("%d", &num1);

    printf("Digite o segundo valor: ");
    scanf("%d", &num2);

    resultado = num1 + num2;

    printf("A soma dos dois valores: %d", resultado);
    printf("\n");

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