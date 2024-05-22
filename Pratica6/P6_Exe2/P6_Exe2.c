/*
 * File Name: P6_Exe2.c
 * Developer: Maycon, Luslene
 * Creation Date: 20/05/2024
 * Description: Programa para calcular o novo preço de um produto aplicando o aumento e o imposto nos produtos necessarios.
 * Version: 1.0
 * Last Modification: 22/05/2024
 * Modified by: Maycon, Luslene
 */

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");
    float preco, npreco, aumento, imposto;
    int cat;
    char situ;

    printf("\n---- O programa do Leão ----");
    printf("\nCalcule o imposto do produto.");
    printf("\nInforme o Preço do Produto: ");
    scanf("%f",&preco);
    
    printf("\n----------------------");
    printf("\n      Categorias      ");
    printf("\n[ 1 ] - Limpeza");
    printf("\n[ 2 ] - Alimentação");
    printf("\n[ 3 ] - Vestuario");
    printf("\n----------------------");
    printf("\nInforme a categoria: ");
    scanf("%d",&cat);

    if(cat == 2){
        printf("\n----------------------");
        printf("\n      Situação      ");
        printf("\n[ N ] - Produtos que não necessitam de refrigeração");
        printf("\n[ R ] - Produtos que necessitam de refrigeração");
        printf("\n----------------------");
        printf("\nInforme a Situação: ");
        scanf(" %c",&situ);
    }

    if (preco <= 25){
        if (cat == 1){
            
            aumento = preco * 0.05;
            npreco = preco + aumento;

            printf("\n--------------------");
            printf("\n Preço produto: R$ %.2f", preco);
            printf("\n Valor do Aumeto de 5%%: R$ %.2f", aumento);
            printf("\n Novo Preço produto: R$ %.2f", npreco);
            
            
        }else if (cat == 2){
            if (situ=='R' || situ=='r'){

                aumento = preco * 0.08;
                npreco = preco + aumento;
                imposto = npreco * 0.05;
                npreco = npreco + imposto;

                printf("\n--------------------");
                printf("\n Preço produto: R$ %.2f", preco);
                printf("\n Valor do Aumeto de 8%%: R$ %.2f", aumento);
                printf("\n Valor do Imposto de 5%%: R$ %.2f", imposto);
                printf("\n Novo Preço produto: R$ %.2f", npreco);
                
                
            }else{
                
                aumento = preco * 0.08;
                npreco = preco + aumento;
                imposto = npreco * 0.08;
                npreco = npreco + imposto;

                printf("\n--------------------");
                printf("\n Preço produto: R$ %.2f", preco);
                printf("\n Valor do Aumeto de 8%%: R$ %.2f", aumento);
                printf("\n Valor do Imposto de 8%%: R$ %.2f", imposto);
                printf("\n Novo Preço produto: R$ %.2f", npreco);
                

            }
        }else if (cat == 3){
            aumento = preco * 0.10;
            npreco = preco + aumento;

            printf("\n--------------------");
            printf("\n Preço produto: R$ %.2f", preco);
            printf("\n Valor do Aumeto de 10%%: R$ %.2f", aumento);
            printf("\n Novo Preço produto: R$ %.2f", npreco);
            
            
        }
    }else{
        if (cat == 1){
            aumento = preco * 0.12;
            npreco = preco + aumento;

            printf("\n--------------------");
            printf("\n Preço produto: R$ %.2f", preco);
            printf("\n Valor do Aumeto de 12%%: R$ %.2f", aumento);
            printf("\n Novo Preço produto: R$ %.2f", npreco);
            

        }else if (cat == 2){
            if (situ=='R' || situ=='r'){

                aumento = preco * 0.15;
                npreco = preco + aumento;
                imposto = npreco * 0.05;
                npreco = npreco + imposto;

                printf("\n--------------------");
                printf("\n Preço produto: R$ %.2f", preco);
                printf("\n Valor do Aumeto de 15%%: R$ %.2f", aumento);
                printf("\n Valor do Imposto de 5%%: R$ %.2f", imposto);
                printf("\n Novo Preço produto: R$ %.2f", npreco);
                

            }else{
                
                aumento = preco * 0.15;
                npreco = preco + aumento;
                imposto = npreco * 0.08;
                npreco = npreco + imposto;

                printf("\n--------------------");
                printf("\n Preço produto: R$ %.2f", preco);
                printf("\n Valor do Aumeto de 15%%: R$ %.2f", aumento);
                printf("\n Valor do Imposto de 8%%: R$ %.2f", imposto);
                printf("\n Novo Preço produto: R$ %.2f", npreco);
                

            }
        }else if (cat == 3){
            aumento = preco * 0.18;
            npreco = preco + aumento;
            
            printf("\n--------------------");
            printf("\n Preço produto: R$ %.2f", preco);
            printf("\n Valor do Aumeto de 18%%: R$ %.2f", aumento);
            printf("\n Novo Preço produto: R$ %.2f", npreco);
            
        }
    }
    if (npreco <= 50){
        printf("\n A classificação é 'Barato'\n");
        printf("\n----------------------------\n");
    }else if (npreco > 50 && npreco < 120){
        printf("\n A classificação é 'Normal'\n");
        printf("\n----------------------------\n");
    }else if (npreco >= 120){
        printf("\n A classificação é 'Caro'\n");
        printf("\n--------------------------\n");
    }
    
    system("pause");
    
    return 0;

}