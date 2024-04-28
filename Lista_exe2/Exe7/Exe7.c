#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int produto;

    printf("Informe o codigo do produto: ");
    scanf("%d", &produto);

    switch (produto)
    {
    case 1:
        printf("Código %d Alimento não-perecível.", produto);
        break;
    case 2:
        printf("Código %d Alimento perecível.", produto);
        break;
    case 3:
        printf("Código %d Alimento perecível.", produto);
        break;
    case 4:
        printf("Código %d Alimento perecível.", produto);
        break;
    case 5:
        printf("Código %d Vestuário.", produto);
        break;
    case 6:
        printf("Código %d Vestuário.", produto);
        break;
    case 7:
        printf("Código %d Higiene pessoal.", produto);
        break;
    case 8:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 9:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 10:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 11:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 12:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 13:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 14:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    case 15:
        printf("Código %d Limpeza e utensílios domésticos.", produto);
        break;
    default:
        printf("Código %d Inválido", produto);
        break;
    }
    return 0;
}
