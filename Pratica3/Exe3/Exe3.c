#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>


int main(){
    int opmenu;
    float salario, imposto, nsalario;
    
    while (1){
        printf("Menu de Opções\n"
            "=======================\n"
            "|  1 - Imposto        |\n"
            "|  2 - Novo Salário   |\n"
            "|  3 - Classificação  |\n"
            "=======================\n");

        printf("Digite sua opção desejada: ");
        scanf("%d",&opmenu);

        if (opmenu == 1 || opmenu == 2 || opmenu == 3){
            break;
        } else{
            printf("Você inseriu um valor Invalido tente novamente.\n");
        }
    }
    
    switch (opmenu){
        case 1:
            printf("Certo você escolheu a opção para calcular o imposto.");
            printf("Informe seu salario: ");
            scanf("%f",&salario);
            if (salario < 500){
                printf("Você paga 5%% de impostos");
            } else if (salario >= 500 && salario <= 850){
                printf("Você paga 10%% de impostos");
            } else{
                printf("Você paga 15%% de impostos");
            }
            break;
        case 2:
            printf("Certo você escolheu a opção para calcular seu novo salário.");
            printf("Informe seu salário: ");
            scanf("%f",&salario);
            if (salario > 1500){
                nsalario = salario + 25;
                printf("Seu salario teve um aumento de R$ 25,00 e é: %.2f", nsalario);
            } else if (salario >= 750 && salario <= 1500){
                nsalario = salario + 50;
                printf("Seu salario teve um aumento de R$ 50,00 e é: %.2f", nsalario);
            }else if (salario > 400 && salario < 750){
                nsalario = salario + 75;
                printf("Seu salario teve um aumento de R$ 75,00 e é: %.2f", nsalario);
            } else if(salario < 450){
                nsalario = salario + 100;
                printf("Seu salario teve um aumento de R$ 100,00 e é: %.2f", nsalario);
            }
            break;
        case 3:
            printf("Certo você escolheu a opção para Classificar seu salario\n");
            printf("Informe seu salário: ");
            scanf("%f",&salario);
            if(salario <= 700){
                printf("Mal remunerado.");
            } else if(salario > 700){
                printf("Bem Remunerado.");
            }
            break;
        default:
            printf("Opção invalida tente novamente");
            break;
    }

    return 0;
}