#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    float salario, presta;

    printf("Informe o valor do salario: ");
    scanf("%f", &salario);

    printf("Informe o valor da prestação: ");
    scanf("%f", &presta);

    if (presta <= (salario * 0.3)){
        printf(" R$%.2f é 30%% do seu salario.",(salario*0.3));
        printf("Você pode fazer emprestimo\n");

    } else {
        printf(" R$%.2f é 30%% do seu salario.",(salario*0.3));
        printf("Emprestimo negado\n");
    }

    return 0;
}
