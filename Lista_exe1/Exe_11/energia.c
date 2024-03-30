//Programa para Calcular a conta de energia

#include <stdio.h>
#include <math.h>

//Codigo para funcionar em linux e em Windows
#ifdef _WIN32
#include <conio.h> // Biblioteca específica do Windows para getch()
#endif

int main(){
    float salario, q_watts, v_watts, valor, valor_desc;

    printf("Digite o valor do salario em Reais: R$");
    scanf("%f",&salario);
    
    printf("Digite a quantidade de quilowatts consumida: ");
    scanf("%f",&q_watts);
    v_watts = salario / 5;
    valor = v_watts * q_watts;
    valor_desc = valor * 0.15;
    printf("O valor por quilowatts é: R$%.2f\n",v_watts);
    printf("O valor Total da fatura: R$%.2f\n",valor);
    printf("O valor Total com desconto: R$%.2f\n",(valor - valor_desc));

    //Codigo para funcionar em linux e em Windows
    //###########################################
    #ifdef _WIN32
    printf("Pressione qualquer tecla para sair...");
    getch(); // Espera o usuário pressionar uma tecla no Windows
    #else
    printf("Pressione Enter para sair...\n");
    getchar(); // Espera o usuário pressionar Enter no Linux
    #endif
    //##################################################
    
    return 0;
}