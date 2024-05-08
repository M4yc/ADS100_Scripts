#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numv, cod, numac, numac2 = 0;
    float media, soma, soma2;

    printf("Programa para pesquisa estatística sobre acidentes de transito.\n");
    for (int i = 0; i < 5; i++){
        printf("Informe o codigo da cidade: ");
        scanf("%f",&cod);

        printf("Informe o numero de veiculos em (2007): ");
        scanf("%f",&numv);

        printf("Informe o numero de acidentes: ");
        scanf("%f",&numac);

        soma += numv;
        if (numv < 2000){
            numac2 += 1;
            soma2 += numac;
        }
    }

    media = soma / 5;
    
    printf("A media de Veiculos nas cinco cidades é: %.2f\n", media);
    printf("A media de Acidentes em cidades com menos de 2000 veiculos é: %.2f\n", (soma2/numac2));
    system("pause");
    
    return 0;

}