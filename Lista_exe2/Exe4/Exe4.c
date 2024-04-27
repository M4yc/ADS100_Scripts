#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float valor, venda;

    printf("Informe o valor do produto: ");
    scanf("%f", &valor);


    if (valor < 20){
        venda = (valor * 0.45) + valor;
        printf("Você deve vende o produto por R$ %.2f para ter 45%% de Lucro\n ", venda);
    } else {
        venda = (valor * 0.30) + valor;
        printf("Você deve vende o produto por R$ %.2f para ter 30%% de Lucro\n", venda);
    }

    return 0;
}
