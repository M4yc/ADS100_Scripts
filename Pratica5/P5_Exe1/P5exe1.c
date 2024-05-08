#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num_ped = 1, quant;
    double total = 0, preco;


    while(-1){
        
        printf("\nMenu de Opções Food & Code:\n");
        printf("[ 1 ] Pizza.\n");
        printf("[ 2 ] Hamburguer.\n");
        printf("[ 3 ] Macarrão.\n");
        printf("[ 4 ] Batata Frita.\n");
        printf("[ 5 ] Onion Rings.\n");
        printf("[ 6 ] Refrigerante.\n");
        printf("[ 7 ] Cerveja.\n");
        printf("[ 0 ] Para finalizar o pedido.\n");

        printf("Informe o numero do pedido: ");
        scanf("%d",&num_ped);

        if (num_ped == 0){
            break;
        }

        if (num_ped < 0 || num_ped > 7) {
            printf("Pedido inválido, Informe um número de pedido válido.\n");
            continue; 
        }

        printf("Informe o Preço: ");//Como está em Portugues a localidade tem que usar , nos numeros decimais
        scanf(" %lf",&preco);

        printf("Informe a quantidade: ");
        scanf(" %d",&quant);

        total += (quant*preco);
    }
    printf("\nTotal da compra é: R$ %.2lf\n",total);
    
    system("pause");
    
    printf("\a");

    return 0;
}