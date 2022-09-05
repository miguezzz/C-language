#include <stdio.h>


void parenteses(char string[]);


int main(void) {

    char biscoito[1001];

    scanf("%s", biscoito);

    parenteses(biscoito);


    return 0;
}


void parenteses(char string[])
{
    int i, parenteses = 0;

    for (i = 0; string[i] != '\0'; i++) //vai ler os caracteres
    {
        if(string[i] == '(')
        {
            parenteses++;
        }
        else if(string[i] == ')')
        {
            parenteses--;
        }

        if(parenteses < 0)
        {
            break;
        }
    }
    
    if(parenteses != 0)
    {
        printf("incorrect\n");
    }
    else
    {
        printf("correct\n");
    }

    return;
}