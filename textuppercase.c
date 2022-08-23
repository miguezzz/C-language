#include <stdio.h>
#include <stdlib.h> //toupper() e tolower()

int main(void) {

    char palavra1[100];
    char palavra2[100];
    char palavra3[100];
    int i;

    scanf("%s", palavra1);
    scanf("%s", palavra2);
    scanf("%s", palavra3);

    printf("%s %s %s", palavra1, palavra2, palavra3);

    toupper(palavra1[0]);
    toupper(palavra2[0]);
    toupper(palavra3[0]);

    printf("%s %s %s", palavra1, palavra2, palavra3);

    return 0;
}