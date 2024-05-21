#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1,n2,n3;
    printf("\n|--------------------------------|");
    printf("\n| Verificador de conta Bancaria. |");
    printf("\n|--------------------------------|");
    
    printf("\nInforme um numero de 3 Digitos da sua conta: ");
    printf("\nPrimeiro Digito: ");
    scanf("%d",&n1);
    printf("\nSegundo Digito: ");
    scanf("%d",&n2);
    printf("\nTerceiro Digito: ");
    scanf("%d",&n3);
    printf("\nConta: ");
    printf("%d%d%d", n1, n2, n3);
    
    int conta = (n1 * 100) + (n2 * 10) + n3;

    int containvert  = (n3 * 100) + (n2 * 10) + n1;

    int soma  = conta + containvert;

    int somac = soma / 100;
    int somad = (soma / 10) % 10;
    int somau = soma % 10; 

    int somaT = (somac * 1) + (somad * 2) + (somau*3);

    int codV = somaT % 10;

    //printf("\nSoma: %d\n", soma);
    //printf("\nMulti: %d\n", somaT);
    printf("\nO codigo Verificador da conta %d é: %d\n",conta,codV);

    system("pause");
    
    return 0;
}