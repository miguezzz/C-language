#include <stdio.h>
//programa que calcule enesimo termo de fibo de forma recursiva.

int fibonacci(int n);

int main(void) {

    int N;

    scanf("%d", &N);

    printf("%d", fibonacci(N));

    return 0;
}

int fibonacci(int n)
{

    if(n == 0 || n == 1)
        return n;
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2); //daqui, ele vai fazer ate fibo 0 dps volta somando ate o enesimo termo de fibo. daora kkkkk.
    }    

}