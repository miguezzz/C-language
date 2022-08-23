#include <stdio.h> //pf funcione

int sequencia(int n);
int somatorio(int n);


int main(void) {

    int N, i;

    scanf("%d", &N);

    int vetor[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    for (i = 0; i < N; i++)
    {
        if(vetor[i] == 0)
            {printf("Caso %d: 1 numero\n", i + 1);}
        else
            {printf("Caso %d: %d numeros\n", i + 1, somatorio(vetor[i]) + 1);}

        sequencia(vetor[i]);
        printf("\n");
        
    }
    






    return 0;
}



int sequencia(int n)
{
    int a, b;

    for (a = 0; a <= n; a++)
    {
        if(a == 0)
        {
            printf("%d ", a);
            continue;
        }
        else if(a == 1)
        {
            printf("%d ", a);
            continue;
        }
        
        
        else
        {
            for (b = 0; b < a; b++)
            {
                printf("%d ", a);
            }
            
        }
    }
    
}

int somatorio(int n)
{
    if(n == 1)
        return 1;
    else    
        return n + somatorio(n - 1);
}