#include <stdio.h>

int main(void) {

    int N, i;

    scanf("%d", &N); //notas a serem lidas

    int vetor[N];
    int nota0 = 0, nota1=0, nota2=0, nota3=0, nota4=0, nota5=0, nota6=0, nota7=0, nota8=0, nota9=0, nota10=0;

    for (i = 0; i < N; i++)
    {
        scanf("%d", &vetor[i]);

        if(vetor[i] == 0)
        {
            nota0++;
        }
        else if(vetor[i] == 1)
        {
            nota1++;
            
        }
        else if(vetor[i] == 2)
        {
            nota2++;
            
        }
        else if(vetor[i] == 3)
        {
            nota3++;
            
        }
        else if(vetor[i] == 4)
        {
            nota4++;
            
        }
        else if(vetor[i] == 5)
        {
            nota5++;
            
        }
        else if(vetor[i] == 6)
        {
            nota6++;
            
        }
        else if(vetor[i] == 7)
        {
            nota7++;
            
        }
        else if(vetor[i] == 8)
        {
            nota8++;
            
        }
        else if(vetor[i] == 9)
        {
            nota9++;
            
        }
        else if(vetor[i] == 10)
        {
            nota10++;
            
        }
        
    }
    
    printf("%d %d %d %d %d %d %d %d %d %d %d", nota0, nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10);


    return 0;
}