#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco, npreco;
    int cat;
    char situ;

    printf("\n---- O programa do Leão ----");
    printf("\nCalcule o imposto do produto.");
    printf("Informe o Preço do Produto: ");
    scanf("%f",&preco);
    
    printf("\n----------------------");
    printf("\n      Categorias      ");
    printf("\n[ 1 ] - Limpeza");
    printf("\n[ 2 ] - Alimentação");
    printf("\n[ 3 ] - Vestuario");
    printf("\n----------------------");
    printf("\nInforme a categoria:");
    scanf("%d",&cat);

    printf("\n----------------------");
    printf("\n      Situação      ");
    printf("\n[ N ] - Produtos que não necessitam de refrigeração");
    printf("\n[ R ] - Produtos que necessitam de refrigeração");
    printf("\n----------------------");
    printf("\nInforme a Situação:");
    scanf("%c",&situ);

    if (preco <= 25){
        if (cat == 1){
        
        }else if (cat == 2){
            
        }else if (cat == 3){
            
        }
    }else{

    }
    


    system("pause");
    
    return 0;

}