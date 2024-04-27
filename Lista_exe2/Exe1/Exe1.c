#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    //setlocale(LC_ALL, "Portuguese");

    float nota1, nota2, nota3, media;

    printf("Informe a primeira nota: ");
    scanf("%f", &nota1);

    printf("Informe a Segunda nota: ");
    scanf("%f", &nota2);

    printf("Informe a Terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + nota3)/3;

    if (media > 0 && media < 3){
        printf("Media: %.2f Reprovado\n", media);
    } else if (media >= 3 && media < 7){
        printf("Media: %.2f Exame\n", media);
    } else if (media >= 7 && media <= 10){
        printf("Media: %.2f Aprovado\n", media);
    }
    
    return 0;
}
