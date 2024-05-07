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