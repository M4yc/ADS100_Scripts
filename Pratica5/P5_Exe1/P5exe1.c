#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int num_ped = 1, quant;
    float total = 0, preco;


    while(-1){
        
        printf("Menu de Opções Food & Code:\n");
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
        printf("Informe o Preço: ");
        scanf("%f",&preco);
        printf("Informe a quantidade: ");
        scanf("%d",&quant);

        total += (quant*preco);
    }
    printf("\nTotal da compra é: R$%.2f\n",total);
    
    system("pause");
    
    return 0;
}