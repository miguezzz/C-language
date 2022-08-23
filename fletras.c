#include <stdio.h>

int main(void) {

    int N;

    scanf("%d", &N);

    while(N > 1)
    {
        char texto[201];
        gets(texto);

        printf("o texto armazenado foi: %s", texto);
    }





    return 0;
}