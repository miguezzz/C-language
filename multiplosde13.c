#include <stdio.h>

int main(void) {

    int X, Y, i;
    int soma = 0;

    scanf("%d %d", &X, &Y);



    if(X < Y)
    {
        for (i = X; i <= Y; i++)
        {
        if(i % 13 != 0)
            soma = soma + i;
        }
    }
    else
    {
        for(i = Y; i <= X; i++)
        {
            if(i % 13 != 0)
                soma = soma + i;
        }
    }
    
    printf("%d", soma);

    return 0;
}