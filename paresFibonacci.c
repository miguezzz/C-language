#include <stdio.h>

int main(void) {

    int N, soma = 0;
    int fibo, fibo1 = 1, fibo2 = 2;
    
    scanf("%d", &N);
    

    if(N > 1)
    {
    fibo = fibo2;
    while(fibo <= N)
    {
        if(fibo % 2 == 0)
        {
            soma = soma + fibo;
        }            
        
        fibo = fibo1 + fibo2;
        fibo1 = fibo2;
        fibo2 = fibo;
    }
    }
    
    printf("%d", soma);

    return 0;
}