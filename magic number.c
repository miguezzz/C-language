#include <stdio.h>

int fat(int n)
{
    if(n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        return n * fat(n - 1);
    }
    
}

float expo(float b, int e)
{
    int i = 1;
    float exp = 1;

    while(i <= e)
    {
        exp = exp * b;

        i++;
    }
    return exp;
}

float magico(float x, int n)
{
    float magic = 0.0;
    int i; 

        for (i = 0; i <= n; i++)
        {
            magic = magic + ((expo(-1, i)) * expo(x, ((2 * i) + 1)) / fat(i + 1));
        }
        
    return magic;
}
