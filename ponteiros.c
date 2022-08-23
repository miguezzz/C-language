#include <stdio.h>

void soma10p(int *x);

int main(void) {

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("O numero digitado foi: %d\n", numero);

    soma10p(&numero); // aqui, eu mando o endereco da variavel

    printf("Agora o numero vale %d\n", numero);

    return 0;
}

void soma10p(int *x) // aqui, onde o x aponta vai receber o endereco da variavel q eu mandei
{
    *x = *x + 10;

    return;
}