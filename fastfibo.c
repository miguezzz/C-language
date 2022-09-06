#include <stdio.h>
#include <math.h>


void binet(int b);


int main(void) {

    int n;

    scanf("%d", &n);
    binet(n);

    return 0;
}

void binet(int b)
{
    float fibo;

    fibo = ((pow(((1.0 + sqrt(5)) / 2.0), b)) - (pow(((1.0 - sqrt(5)) / 2.0), b))) / sqrt(5);

    printf("%.1f\n", fibo);

    return;
}
