#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <unistd.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int c=0;
    double resultado, n1, n2;
    char caractere;


    while(c<10){
        printf("%d\n",c);
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
        scanf("%c",&caractere);
        
        if (caractere == 'x' || caractere == 'X'){
            printf("Operação encerrada\n");
            break;
        }
        
        printf("Informe o Primeiro Valor: ");
        scanf("%lf",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%lf",&n2);

        if (caractere == '1'){
            resultado = n1 + n2;
            printf("\n");
            printf("A soma dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        } else if(caractere == '2'){
            resultado = n1 - n2;
            printf("\n");
            printf("A subtração dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        } else if(caractere == '3'){
            resultado = n1 * n2;
            printf("\n");
            printf("A multiplicação dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        } else if(caractere == '4'){
            resultado = n1 / n2;
            printf("\n");
            printf("A divisão dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        } else if(caractere == '5'){
            resultado = pow(6, 8);
            printf("\n");
            printf("A potenciação dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        } else if(caractere == '6'){
            resultado = sqrt(9); // Raiz quadrada dos números digitados
            printf("\n");
            printf("A raiz quadrada dos números digitados é : %.2lf\n",resultado);
            printf("\n");
        }else {
            printf("Valor Inválido.\n");
        }
        c+=1;
    }
}