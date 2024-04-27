#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opmenu;
    double resultado, n1, n2;
    
    printf("Calculadora\n"
            "=================================\n"
            "|  1 - Adição (+)             |\n"
            "|  2 - Subtração (-)          |\n"
            "|  3 - Multiplicação (x)      |\n"
            "|  4 - Divisão (÷)            |\n"
            "|  5 - Potencialização (^)    |\n"
            "|  6 - Raiz Quadrada (√)      |\n"
            "=================================\n");
    
    printf("Digite o numero para fazer as respectivas operações: ");
    scanf("%d",&opmenu);

    printf("Informe o Primeiro Valor: ");
    scanf("%lf",&n1);
    printf("Informe o Segundo Valor: ");
    scanf("%lf",&n2);

    printf("Calculando.");
    sleep(1);
    printf(".");
    sleep(1);
    printf(".\n");

    switch (opmenu){
    case 1:
        resultado = n1 + n2;
        printf("A soma dos números digitados é : %.2lf\n",resultado);
        break;
    case 2:
        resultado = n1 - n2;
        printf("A subtração dos números digitados é : %.2lf\n",resultado);
        break;
    case 3:
        resultado = n1 * n2;
        printf("A multiplicação dos números digitados é : %.2lf\n",resultado);
        break;
    case 4:
        resultado = n1 / n2;
        printf("A divisão dos números digitados é : %.2lf\n",resultado);
        break;
    case 5:
        resultado = pow(6, 8);
        printf("A potenciação dos números digitados é : %.2lf\n",resultado);
        break;
    case 6:
        resultado = sqrt(9); // Raiz quadrada dos números digitados
        printf("A raiz quadrada dos números digitados é : %.2lf\n",resultado);
        break;
    default:
        printf("Valor Inválido.\n");
        break;
    }
    return 0;
}