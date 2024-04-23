#include <stdio.h>
#include <math.h>
//#include <locale.h>


int main(){
    //setlocale(LC ALL);
    int opmenu;
    float resultado, n1, n2;
    
    printf("Digite o numero para fazer as respectivas operações\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Potencialização\n6 - Raiz Quadrada\n");
    
    scanf("%d",&opmenu);

    printf("Informe o Primeiro Valor: ");
    scanf("%f",&n1);
    printf("Informe o Segundo Valor: ");
    scanf("%f",&n2);
    
    switch (opmenu){
    case 1:
        resultado = n1 + n2;
        printf("A soma dos numeros digitados é : %.2f\n",resultado);
        break;
    case 2:
        
        resultado = n1 - n2;
        printf("A soma dos numeros digitados é : %.2f\n",resultado);
        break;
    case 3:
        
        resultado = n1 * n2;
        printf("A Multiplicação dos numeros digitados é : %.2f\n",resultado);
        break;
    case 4:
        
        resultado = n1/n2;
        printf("A Divisão dos numeros digitados é : %.2f\n",resultado);
        break;
    case 5:
        
        resultado = pow(n1, n2);
        printf("A Potencialição dos numeros digitados é : %.2f\n",resultado);
        break;
    case 6:
        
        resultado = sqrt(n1);
        printf("A raiz quadrada dos numeros digitados é : %.2f\n",resultado);
        break;
    default:
        break;
    }
}