#include <stdio.h>

//A maior, B do meio, C menor


int main(void) {

    double A, B, C, nada;

   
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    if(B > A)
    {
        nada = A;
        A = B;
        B = nada;
    }
    if(B < C)
    {
        nada = B;
        B = C;
        C = nada;
    }
    if(B > A)
    {
        nada = A;
        A = B;
        B = nada;
    }

    if(A >= B + C)
        printf("NAO FORMA TRIANGULO");
    
    else if(A == 0 || B == 0 || C == 0)
        printf("NAO FORMA TRIANGULO");

    else if(A * A == B * B + C * C)
        printf("TRIANGULO RETANGULO\n");
    
    else if(A * A < B * B + C * C)        
        printf("TRIANGULO ACUTANGULO\n");

    else if(A * A > B * B + C * C)
        printf("TRIANGULO OBTUSANGULO\n");


    if(A == B && B == C)
        printf("TRIANGULO EQUILATERO\n");

    else if(A == B || A == C || B == C)
        printf("TRIANGULO ISOSCELES\n");




    return 0;

}