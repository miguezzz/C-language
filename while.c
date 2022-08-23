#include <stdio.h>

int main(void) {

    int X, fatorial;
    fatorial = 1;

    printf("Insira um numero e descubra seu fatorial: ");
    scanf("%d", &X);

    while(X >= 1)
        {
            fatorial = fatorial * X; 
            X = X - 1;
        }

    printf("-- %d", fatorial);


    return 0;
}
