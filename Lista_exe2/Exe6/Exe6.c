#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int produto, quantidade;
    float valor;

    printf("Informe o codigo do produto: ");
    scanf("%d", &produto);

    printf("Informe a quantidade comprada: ");
    scanf("%d", &quantidade);
    
    if (produto >= 1 && produto <= 10){
        valor = 10 * quantidade;
        printf("Produto 1 a 10 Valor de R$ 10,00\n");
    } else if (produto >= 11 && produto <= 20){
        valor = 15 * quantidade;
        printf("Produto 11 a 20 Valor de R$ 15,00\n");
    } else if (produto >= 21 && produto <= 30){
        valor = 20 * quantidade;
        printf("Produto 21 a 30 Valor de R$ 20,00\n");
    } else if (produto >= 31 && produto <= 40){
        valor = 30 * quantidade;
        printf("Produto 31 a 40 Valor de R$ 30,00\n");
    }

    if (valor < 250){
        printf("Valor total: R$ %.2f\n", valor);
        printf("Valor do desconto de 5%%: R$ %.2f\n", valor*0.05);
        printf("Valor Total com desconto: R$ %.2f\n", valor-(valor*0.05));
    } else if (valor >= 250 && valor <= 500){
        printf("Valor total: R$ %.2f\n", valor);
        printf("Valor do desconto de 10%%: R$ %.2f\n", valor*0.10);
        printf("Valor Total com desconto: R$ %.2f\n", valor-(valor*0.10));

    } else if (valor > 500){
        printf("Valor total: R$ %.2f\n", valor);
        printf("Valor do desconto de 15%%: R$ %.2f\n", valor*0.15);
        printf("Valor Total com desconto: R$ %.2f\n", valor-(valor*0.15));
    }
    
    
    
    return 0;
}
