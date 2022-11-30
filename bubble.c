#include <stdio.h>

void bubble(int *vet, int n);

int main(void) {

    int i, tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    int vector[tamanho];

    for (i = 0; i < tamanho; i++)
    {
        scanf("%d", &vector[i]);
    }
    
    bubble(vector, tamanho);

    return 0;
}

void bubble(int *vet, int n)
{
    int k, j, aux, final;

    for (k = n - 1; k > 0; k--) 
    {

        for (j = 0; j < k; j++) 
        {

            if (vet[j] > vet[j + 1]) 
            {
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
            }
            
    
        }
    }
    
    for(final = 0; final < n; final++)
    {
        printf("%d ", vet[final]);
    }
}