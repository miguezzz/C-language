#include <stdio.h>

int main(void) {

    int decimal;
    int bin1;
    int soma, s0, s1, s2, s3;

    printf("digite o numero decimal a ser transformado em binario: ");
    scanf("%d", &decimal);


    s0 = soma % 2;
    soma /= 2;
    s1 = soma % 2;
    soma /= 2;
    s2 = soma % 2;
    soma /= 2;
    s3 = soma % 2;

    printf("decimal %d na base 2: %d%d%d%d", decimal, s3, s2, s1, s0);

    return 0;
}
