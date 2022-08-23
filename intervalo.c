#include <stdio.h>

int main(void) {

    double X;

    printf("Digite um valor e descubra seu intervalo: ");
    scanf("%lf", &X);

    if(X<0 || X>100.0)
        printf("Fora de intervalo");

    else if(25.0>=X)
        printf("Intervalo [0,25]");

    else if(50.0>=X)
        printf("Intervalo (25,50]");

    else if(75.0>=X)
        printf("Intervalo (50,75]");

    else if(100.00>=X)
        printf("Intervalo (75,100]");


    
    return 0;

}