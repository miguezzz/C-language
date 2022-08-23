#include <stdio.h>

int main(void) {

    int N, i, soma, invalida = 0;
    float average;
    //quantidade de alunos na turma:
    scanf("%d", &N);


    int alunos[N];

    for (i = 0; i < N; i++)
    {
        scanf("%d", &alunos[i]);
    }
    
    for (i = 0; i < N; i++)
    {
        if(alunos[i] < 0 || alunos[i] > 10)
            invalida++;
            
        else        
            soma = soma + alunos[i];
    }
    N = N - invalida;
    average = (float) soma / N;
    printf("%.1f", average);


    return 0;
}