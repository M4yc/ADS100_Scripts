/*
 * File Name: P8_Exe2.c
 * Developer: Maycon
 * Creation Date: 03/06/2024
 * Description: ?????
 * Last Modification: 03/06/2024
 * Modified by: Maycon
*/

#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

#define Diaria 30
#define Taxa_Serv_15 15
#define Taxa_Serv_10 8

int main(){

    float ValorTot = 0;
    char Nome[100];
    int Num_Conta;
    int Dias;
    float VarlorCliente = 0;
    

    while (1){
        printf("\nInforme o nome do Cliente: ");
        scanf(" %s",&Nome);
        printf("\nDigite o numero da conta (0 para sair): ");
        scanf("%d",&Num_Conta);
        if (Num_Conta == 0){
            break;
        }

        printf("Informe o numero de dias que o cliente ficou hospedado: ");
        scanf("%d",&Dias);
        if (Dias < 10){
            VarlorCliente = Dias * Diaria + Taxa_Serv_15;
        }else if (Dias >= 10){
            VarlorCliente = Dias * Diaria + Taxa_Serv_10;
        }
        
        printf("Cliente: %s, Conta: %d, Total: R$%.2f ", Nome, Num_Conta, VarlorCliente);

        ValorTot += VarlorCliente; 
    }
    
    printf("\n========== Nota Final =============");
    printf("\nO valor total da pousada foi: R$%.2f", ValorTot);
    return 0;
}