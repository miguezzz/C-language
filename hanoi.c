#include <stdio.h>
//lei diz que n movimentos = 2^qtd discos - 1
//64 discos = milhoes de anos pra resolver!!! cacetada kkk

void move(int d, char origem, char destino, char auxiliar);

int main(void) {

    int discos;

    scanf("%d", &discos);

    move(discos, '1', '2', '3');


    return 0;
}

void move(int d, char origem, char destino, char auxiliar)
{
    if(d == 1)
    {
        printf("%c %c\n", origem, auxiliar);
    }
    else
    {
        move(d - 1, origem, auxiliar, destino);
        printf("%c %c\n", origem, auxiliar);
        move(d - 1, destino, origem, auxiliar);
    }
}