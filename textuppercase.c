#include <stdio.h>

int main(void) {

    char string[100];
    int i;

    gets(string);

    for (i = 0; string[i] != '\0'; i++)
    {

        if(i == 0)
        {
            if(string[i] >= 'a' && string[i] <= 'z')
                printf("%c", string[i] - 'a' + 'A');
            else
                printf("%c", string[i]);
        }
        else
        {
            if(string[i] >= 'A' && string[i] <= 'Z')
                printf("%c", string[i] - 'A' + 'a');
            else
                printf("%c", string[i]);
        }

        if(string[i] == ' ')
        {
            if(string[i + 1] >= 'a' && string[i + 1] <= 'z')
            {
                printf("%c", string[i + 1] - 'a' + 'A');
                i++; //para parar de repetir a letra...
            }
            else
                printf("%c", string[i]);
        }

    }




    return 0;
}