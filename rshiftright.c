#include <stdio.h>

int main(void) {

    int N, i, aux;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
        
        aux = vetor[N - 1];
    }

    for (i = N - 1; i >= 0; i--)
    {
        vetor[i] = vetor[i - 1];
    }
    
    vetor[0] = aux;


    for (i = 0; i < N; i++)
    {
        printf("%d ", vetor[i]);
    }

    return 0;
}