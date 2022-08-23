#include <stdio.h>

long fatorial(int);

int main(void)
{
	int n;

	printf("Cálculo do Fatorial. Indique o n: ");
    scanf("%d", &n);

    printf("O valor é: %ld\n", fatorial(n));

	return 0;
}

long fatorial(int n)
{
    if(n == 1)
        return 1;

    return n * fatorial(n-1);
}