#include <stdio.h>

int main(void) {

    int n, i;
    int resultado;
    
    /*for(valor_inicial; codicao; valor incremento)
        {
           instrucoes;
        }
    */

    scanf("%d", &n);

    resultado = 0;

    for(i = 2; i <= n / 2; i++)
    {
        if(n % i == 0)
        {
            resultado = resultado + 1;
            break;
        }    
    
    }    
    if(resultado == 0 && n != 1)
        printf("primo");
    else    
        printf("nao");

return 0;
        
}