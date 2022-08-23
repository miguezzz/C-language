#include <stdio.h>

int main(void) {

    int N, i, menor = 10, position = 0;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);

        if(vetor[i] <= menor)
        {
            menor = vetor[i];
            position = i;
        }

    }
    
    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d", position);




    return 0;
}