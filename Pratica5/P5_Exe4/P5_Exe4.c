#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numv, cod, numac, numAcmenor = 0, cod_AC_maior, cod_AC_menor, num_AC_Maior, num_AC_Menor;
    float media, soma, soma_ac;

    printf("Programa para pesquisa estatística sobre acidentes de transito.\n");
    for (int i = 0; i < 5; i++){
        printf("Informe o codigo da cidade: ");
        scanf("%d",&cod);

        printf("Informe o numero de veiculos em (2007): ");
        scanf("%d",&numv);

        printf("Informe o numero de acidentes: ");
        scanf("%d",&numac);

        soma += numv;
        if (numv < 2000){
            numAcmenor += 1;
            soma_ac += numac;
        }
        if(i == 0 || numac < num_AC_Menor){
            cod_AC_menor = cod;
            num_AC_Menor = numac;
        }
        if (i == 0 || numac > num_AC_Maior){
            cod_AC_maior = cod;
            num_AC_Maior = numac;
        }
        
    }

    media = soma / 5;
    
    printf("\nMaior numero de acidentes: Cidade= %d, com %d acidentes.\n", cod_AC_maior, num_AC_Maior);
    printf("\nMenor numero de acidentes: Cidade= %d, com %d acidentes.\n", cod_AC_menor, num_AC_Menor);

    printf("\nA media de Veiculos nas cinco cidades é: %.2f\n", media);
    if (numAcmenor == 0){
        printf("\nA media de Acidentes em cidades com menos de 2000 veiculos é: Não possui cidades com menos de 2000 veiculos\n");
    }else{
        printf("\nA media de Acidentes em cidades com menos de 2000 veiculos é: %.2f\n", (soma_ac/numAcmenor));
    }

    system("pause");
    
    return 0;

}