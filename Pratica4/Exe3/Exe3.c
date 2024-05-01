#include <stdio.h>
#include <math.h>
#include <locale.h>



int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    int c;
    double resultado, n1, n2;
    char caractere;


    for(c=1;c<=10;c++){
        puts("Calculadora\n"
                "=================================\n"
                "|  1 - Adição (+)             |\n"
                "|  2 - Subtração (-)          |\n"
                "|  3 - Multiplicação (x)      |\n"
                "|  4 - Divisão (÷)            |\n"
                "|  5 - Potencialização (^)    |\n"
                "|  6 - Raiz Quadrada (√)      |\n"
                "=================================\n");
        
        printf("Digite o numero para fazer as respectivas operações: ");
        scanf(" %c",&caractere);
        if (caractere == 'x' || caractere == 'X'){
            printf("Operação encerrada\n");
            break;
        }
        
        printf("Informe o Primeiro Valor: ");
        scanf("%lf",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%lf",&n2);

        switch (caractere){
        case '1':
            resultado = n1 + n2;
            printf("\nResultado de %.2lf + %.2lf = %.2lf \n\n",n1,n2,resultado);
            break;
        case '2':
            resultado = n1 - n2;
            printf("\nResultado de %.2lf - %.2lf = %.2lf \n\n", n1, n2, resultado);
            break;
        case '3':
            resultado = n1 * n2;
            printf("\nResultado de %.2lf * %.2lf = %.2lf \n\n", n1, n2, resultado);
            break;
        case '4':
            if (n2 != 0){
                resultado = n1 / n2;
                printf("\nResultado de %.2lf / %.2lf = %.2lf\n\n", n1, n2, resultado);
            }else{
                printf("\nNão da para dividir por 0 \n\n");
            }
            break;
        case '5':
            resultado = pow(n1, n2);
            printf("\nResultado de %.2lf ^ %.2lf = %.2lf\n\n", n1, n2, resultado);
            break;
        case '6':
            if (n1 >= 1){
                resultado = sqrt(n1); 
                printf("\nResultado de √%.2lf = %.2lf\n\n", n1, resultado);
            }else{
                printf("\nNão é possivel calcular raiz quadrada de numero negativo. \n\n"); 
            }
            break;
        default:
            printf("Valor Inválido.\n");
        }
        caractere=0;
    }
}