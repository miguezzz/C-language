#include <stdio.h>

int main(void) {

    int i, tamanho, iguais = 0;
    char numero[30], invert[30];

    scanf("%s", &numero);

    tamanho = strlen(numero);

    for(i = 0; i < strlen(numero); i++){
        invert[i] = numero[tamanho - 1];
        tamanho--;
    }

    invert[i] = '/0';
    tamanho = strlen(numero);


    for(i = 0; i < tamanho; i++)
    {
        if(numero[i] == invert[i])
            iguais++;
    }
    
    if(tamanho == iguais)
        printf("palindromo");
    else
        printf("nao");


    return 0;
}