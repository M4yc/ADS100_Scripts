#include <stdio.h>
#include <math.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese");

    int cp, ci, n, c;

    for(c=1;c <= 10;c++){
        printf("Informe o valor de N: ");
        scanf("%d",&n);

        if (n % 2 == 0){
            cp += 1;
        }else{
            ci += 1;
        }
    }
    printf("Numeros pares digitados: %d\n", cp);
    printf("Numeros impares digitados: %d\n", ci);
    
    return 0;
}
