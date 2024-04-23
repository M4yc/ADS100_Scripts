#include <stdio.h>
#include <math.h>
//#include <locale.h>


int main(){
    //setlocale(LC ALL);
    int opmenu;
    float resultado, n1, n2;
    
    printf("Digite o numero para fazer as respectivas operações\n 1 - Adição \n 2 - Subtração \n 3 - Multiplicação \n 4 - Divisão \n5 - Potencialização\n6 - Raiz Quadrada\n");
    
    scanf("%d",&opmenu);

    switch (opmenu){
    case 1:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = n1 + n2;
        printf("A soma dos numeros digitados é : %.2f\n",resultado);
        break;
    case 2:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = n1 - n2;
        printf("A soma dos numeros digitados é : %.2f\n",resultado);
        break;
    case 3:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = n1 * n2;
        printf("A Multiplicação dos numeros digitados é : %.2f\n",resultado);
        break;
    case 4:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = n1/n2;
        printf("A Divisão dos numeros digitados é : %.2f\n",resultado);
        break;
    case 5:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = pow(n1, n2);
        printf("A Potencialição dos numeros digitados é : %.2f\n",resultado);
        break;
    case 6:
        printf("Informe o Primeiro Valor: ");
        scanf("%f",&n1);
        printf("Informe o Segundo Valor: ");
        scanf("%f",&n2);
        resultado = sqrt(n1);
        printf("A raiz quadrada dos numeros digitados é : %.2f\n",resultado);
        break;
    default:
        break;
    }
}