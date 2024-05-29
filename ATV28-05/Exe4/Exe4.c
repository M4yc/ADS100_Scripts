
#include <stdio.h>
#include <string.h>

int main(){
    int size;
    char str[100];
    printf ("Entre com uma string: ");
    fgets(str, sizeof(str), stdin);
    size=strlen (str);
    printf ("\n\nA string que voce digitou tem tamanho %d",size);
    return(0);
}