#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100];
    printf ("Entre com uma string: ");
    fgets(str1, sizeof(str1), stdin);
    strcpy (str2,"Voce digitou a string ");
    strcat (str2,str1); // str2 armazenar a' Voce digitou a string + of
    //conteudo de str1
    printf ("\n\n%s",str2);
    return(0);
}