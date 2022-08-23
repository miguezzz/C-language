#include <stdio.h>
#include <math.h>

int main(void) {

   int N;
   int i;

    printf("Digite valor inteiro de entrada para calcular o quadrado dos pares: ");
    scanf("%d", &N);

    

    for (i = 1; i <= N; i++)
    {
        if(i % 2 == 0)
        {
            printf("%d^2 = %d\n", i, (i * i));
        }
    }
    




    return 0;
}