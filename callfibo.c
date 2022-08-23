#include <stdio.h>

int fibo(int n);
int calls = 0;


int main(void) {

    int Casos, N, i;

    scanf("%d", &Casos);


    for (i = 0; i < Casos; i++)
    {
        scanf("%d", &N);

        printf("fib(%d) = %d calls = %d\n", N, calls - 1, fibo(N));
        calls = 0;
    }


    return 0;
}



int fibo(int n)
{
    if(n == 0)
    {
        calls++;
        return n;
    }
    else if(n == 1)
    {
        calls++;
        return n;    
    }
    else
    {
        calls++;
        return fibo(n - 1) + fibo(n - 2);
    }
}
