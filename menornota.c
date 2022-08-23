#include <stdio.h>

int main(void) {

    int N, i;
    int menorNota = 10;

    scanf("%d", &N);

    int nota[N];


    for(i = 0; i < N; i++)
    {
        
        scanf("%d", &nota[i]);

        if(nota[i] >= 0 && nota[i] <= 10)
        {
        if(nota[i] <= menorNota)
            menorNota = nota[i];
        }    
    }

    printf("%d", menorNota);

    return 0;
}