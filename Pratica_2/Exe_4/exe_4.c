#include <stdio.h>
#include <math.h>

int main(){

    float a, b, c, x1, x2;
    
    printf("Informe o valor de A:");
    scanf("%f",&a);

    printf("Informe o valor de B:");
    scanf("%f",&b);

    printf("Informe o valor de C:");
    scanf("%f",&c);

    x1 = (-b + sqrt(b*b-4*a*c))/ a*2;
    x2 = (-b - sqrt(b*b-4*a*c))/ a*2;

    printf("x1= %f", x1);
    printf("x2= %f", x2);

    /* ax²+bx+c=0 */
    return 0;
}
