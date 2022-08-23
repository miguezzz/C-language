#include <stdio.h>

int somar(int n, int vetor[]);

int main(void) {

    int N, i;
    int soma;
    int casos;

    scanf("%d", &casos);

    


    while(casos > 0) {

    scanf("%d", &N);
    int vetor[N];
    
    for (i = 0; i < N; i++)
    {
    scanf("%d", &vetor[i]);
    }

    soma = somar(N, vetor);

    printf("%d\n", soma);

    casos--;
    }
   
    return 0;
}

int somar(int n, int vetor[]) 
{
    if(n == 0)
        return 0;
    else
    {
        return vetor[n - 1] + somar(n - 1, vetor);
    }
}