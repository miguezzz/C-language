#include <stdio.h>

int main(void) {

    int i, j, N;

    scanf("%d", &N);

    j = N - 1;

    int vetor[N];
    int invertido[N];

    for(i = 0; i < N; i++)
    {
    scanf("%d", &vetor[i]);

    invertido[j] = vetor[i];
    
    j--;
    }

    for(j = 0; j < N; j++)
   {
        printf("%d", invertido[j]);
   }
    
    return 0;

}