#include <stdio.h>

int main(void) {

    int i;
    int vetor[6];

    int maiorValor = 0;
    int position;

    for (i = 1; i <= 5; i++)
    {
        scanf("%d", &vetor[i]);
    
        if(vetor[i] > maiorValor)
        {
            maiorValor = vetor[i];
            position = i;
        }
    }
    
    printf("%d\n%d", maiorValor, position);


    return 0;
}