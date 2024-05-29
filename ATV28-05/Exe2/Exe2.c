#include <stdio.h>
#include <string.h> 

int main (){
    char str1[100],str2[100],str3[100];
    printf ("Entre com uma string: ");
    fgets(str1, sizeof(str1), stdin);
    strcpy (str2,str1); /* Copy str1 em str2 */
    strcpy (str3,"Voce digitou a string ");
    // Copia "Voce digitou a
    // string" em str3
    printf ("\n\n%s%s",str3,str2);
    return(0);
}