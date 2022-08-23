#include <stdio.h>

int fat(int n);
float expo(float b, int e);
float magico(float x, int n);


int main(void) {

    int N;

    scanf("%d", &N);

    printf("fatorial de %d eh %d", N, fat(N));




    return 0;
}

int fat(int n) 
{
    if(n == 1 || n == 0)
    return 1;
    else
    return n * fat(n - 1);
}

float expo(float b, int e) 
{
    
}

float magico(float x, int n) 
{
    
}