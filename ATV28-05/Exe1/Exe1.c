#include <stdio.h>


int main ()
{
    char string[100];
    printf ("Digite o seu nome: ");
    fgets(string, sizeof(string), stdin);
    printf ("\n\n Ola %s",string);
    return(0);
}