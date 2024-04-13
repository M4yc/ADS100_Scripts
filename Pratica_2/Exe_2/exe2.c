/*
Acho que esse exercicio ficou meio confuso o enuncioado não deu muita informação
*/

#include <stdio.h>

int main(){
    int ano, idade;
    printf("Informe o ano: ");
    scanf("%d",&ano);

    idade = 2024 - ano;
    
    if (idade >= 16 && idade < 18){

        printf("Voce tem %d anos ", idade);
        printf("e voce pode votar!\n");        
    }else if (idade >= 18){
        printf("Voce tem %d anos ", idade);
        printf("e voce pode votar e tirar a carteira de habilitacao!\n"); 
    }else{
        printf("Voce tem %d anos", idade);
    }
    
    
    /* code */
    return 0;
}
