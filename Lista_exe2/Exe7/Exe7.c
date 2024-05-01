#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int produto;

    printf("Informe o código do produto: ");
    scanf("%d", &produto);

    switch (produto) {
        case 1:
            printf("Código %d: Alimento não-perecível.\n", produto);
            break;
        case 2:
        case 3:
        case 4:
            printf("Código %d: Alimento perecível.\n", produto);
            break;
        case 5:
        case 6:
            printf("Código %d: Vestuário.\n", produto);
            break;
        case 7:
            printf("Código %d: Higiene pessoal.\n", produto);
            break;
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
            printf("Código %d: Limpeza e utensílios domésticos.\n", produto);
            break;
        default:
            printf("Código %d: Inválido.\n", produto);
            break;
    }

    return 0;
}
