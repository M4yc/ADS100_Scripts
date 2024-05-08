#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int numv, cod, numac, numac2 = 0, codm, codme, maior, menor;
    float media, soma, soma2;

    printf("Programa para pesquisa estatística sobre acidentes de transito.\n");
    for (int i = 0; i < 2; i++){
        printf("Informe o codigo da cidade: ");
        scanf("%d",&cod);

        printf("Informe o numero de veiculos em (2007): ");
        scanf("%d",&numv);

        printf("Informe o numero de acidentes: ");
        scanf("%d",&numac);

        soma += numv;
        if (numv < 2000){
            numac2 += 1;
            soma2 += numac;
        }
        if(i == 0){
            codm = cod;
            codme = cod;
            maior = numac;
            menor = numac;
        }else{
            if (numac >= maior){
                codm = cod;
                maior = numac;
            }else if (numac < menor){
                codme = cod;
                menor = numac;
            }
            
            
        }
        

    }

    media = soma / 2;
    
    printf("A media de Veiculos nas cinco cidades é: %.2f\n", media);
    printf("A media de Acidentes em cidades com menos de 2000 veiculos é: %.2f\n", (soma2/numac2));

    printf("\nMaior numero de acidentes: Cidade= %d, %d acidentes.\n", codm, maior);
    printf("\nMenor numero de acidentes: Cidade= %d, %d acidentes.\n", codme, menor);

    system("pause");
    
    return 0;

}