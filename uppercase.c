#include <stdio.h>

int main(void) {

    char palavra[200];
    int i;

    scanf("%s", palavra);

    for (i = 0; palavra[i] != '\0' ; i++)
    {
        if(i == 0)
        {
            if(palavra[i] >= 'a' && palavra[i] <= 'z')
                printf("%c", palavra[i] - 'a' + 'A');
            else
                printf("%c", palavra[i]);
        }
        else if(palavra[i] >= 'A' && palavra[i] <= 'Z')
            printf("%c", palavra[i] - 'A' + 'a');
        else
            printf("%c", palavra[i]);    
    }
    



    return 0;
}