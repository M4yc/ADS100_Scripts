#include <stdio.h>
#include <string.h>

int main(){
    char str1[100],str2[100];
    printf ("Entre com uma string: ");
    fgets(str1, sizeof(str1), stdin);
    printf ("Enter com outra string: ");
    fgets(str1, sizeof(str1), stdin);
    if (strcmp(str1, str2)){
        
        printf ("\n\nAs das strings sao iguais.");
    }else{ 
        
        printf ("\n\nAs das strings sao diferentes.");
    }
    return(0);
}