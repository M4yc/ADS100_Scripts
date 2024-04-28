#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int produto;

    printf("Informe o codigo do produto: ");
    scanf("%d", &produto);

    if (produto == 1){
        printf("Código %d Alimento não-perecível.", produto);
    } else if (produto >=  2 && produto <= 4){
        printf("Código %d Alimento perecível.", produto);
    } else if (produto ==  5 || produto == 6){
        printf("Código %d Vestuário.", produto);
    } else if (produto ==  7){
        printf("Código %d Higiene pessoal.", produto);
    } else if (produto >=  8 && produto <= 15){
        printf("Código %d Limpeza e utensílios domésticos.", produto);
    } else {
        printf("Código %d Inválido", produto);
    }
    
    return 0;
}
