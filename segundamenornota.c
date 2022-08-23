#include <stdio.h>

int main(void) {

    int N, i;
    int menorNota, segmenorNota, nada;

    scanf("%d", &N);

    int alunos[N];

    menorNota = 10;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &alunos[i]);

        if(alunos[i] >= 0 &&alunos[i] <= 10)
        {
            if(alunos[i] <= menorNota)
                menorNota =alunos[i];
        }

        segmenorNota = menorNota + 1;
    }
    
    printf("%d", segmenorNota);


    return 0;
}