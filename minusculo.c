#include <stdio.h>

int main(void) {

    char nome[200];
    int i;

    scanf("%s", nome);

    for (i = 0; nome[i] != '\0'; i++)
    {
        if(nome[i] >= 'A' && nome[i] <= 'Z')
            printf("%c", nome[i] - 'A' + 'a');
        else
            printf("%c", nome[i]);
    }
    



    return 0;
}