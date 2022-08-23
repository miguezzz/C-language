#include <stdio.h>

long fatorial(int N);

int main(void) {

    int N;

    scanf("%d", &N);
    printf("%ld", fatorial(N));


    return 0;
}


long fatorial(int N)
{
    int fat = 1;

    if(N == 1)
        return 1;
    else
    {
        while(N >= 1)
        {
            fat = fat * N;
            N--;
        }
        return fat;
    }    
}