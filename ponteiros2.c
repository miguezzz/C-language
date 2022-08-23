#include <stdio.h>

//desenhar memoria pra entender melhor.

int main(void) {

    int variavel;
    int *ponteiro;

    variavel = 5;

    printf("variavel: %d\n", variavel);

    ponteiro = &variavel; //ponteiro recebe endereco da variavel

    *ponteiro = 10; //onde aponta o valor recebido (variavel) vai ser igual a 10

    printf("variavel: %d\n", variavel);

    printf("damanho da variavel: %d bytes", sizeof(ponteiro));




    return 0;
}