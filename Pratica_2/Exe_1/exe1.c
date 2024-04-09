#include <stdio.h>

int main(){
    int ano, idade;
    printf("Informe o ano: ");
    scanf("%d",&ano);

    idade = 2024 - ano;

    if (idade >= 16){
        printf("Você pode voltar!\n");
        if (idade >= 18){
            printf("Você pode tirar carteira de habilitação!\n");
        /* code */
        }

    } 
    
    
    /* code */
    return 0;
}
