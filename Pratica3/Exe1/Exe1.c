#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int opmenu;
    double resultado, n1, n2;
    
    printf("Digite o numero para fazer as respectivas operações\n1 - Adição\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Potencialização\n6 - Raiz Quadrada\n");
    
    scanf("%d",&opmenu);

    printf("Informe o Primeiro Valor: ");
    scanf("%lf",&n1);
    printf("Informe o Segundo Valor: ");
    scanf("%lf",&n2);
    
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