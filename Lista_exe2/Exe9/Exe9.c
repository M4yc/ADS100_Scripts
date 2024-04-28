#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    printf("Ordenação de numeros somente com estruturas condicionais\n");
    printf("Informe o Primeiro numero inteiro: ");
    scanf("%d", &n1);

    printf("Informe o Segundo numero inteiro: ");
    scanf("%d", &n2);

    printf("Informe o Terceiro numero inteiro: ");
    scanf("%d", &n3);

    if (n1 <= n2 && n1 <= n3){
        if (n2 <= n3){
            printf("Ordem crescente: %d, %d, %d", n1, n2, n3);
        } else{
            printf("Ordem crescente: %d, %d, %d", n1, n3, n2);
        }
    } else if(n2 <= n1 && n2 <= n3){
        if(n1 <= n3){
            printf("Ordem crescente: %d, %d, %d", n2, n1, n3);
        } else{
            printf("Ordem crescente: %d, %d, %d", n2, n3, n1);
        }
    } else{
        if (n1 <= n2){
            printf("Ordem crescente: %d, %d, %d", n3, n1, n2);
        } else{
            printf("Ordem crescente: %d, %d, %d", n3, n2, n1);
        }
    }
    
    
    return 0;
}
