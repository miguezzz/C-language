#include <stdio.h>

int main(void) {

    int N, i;
    int aprovados = 0;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);

        if(vetor[i] >= 5 && vetor[i] <= 10)
            aprovados++;
    }
    
    printf("%d", aprovados);


    return 0;
}