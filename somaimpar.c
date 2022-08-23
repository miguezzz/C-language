#include <stdio.h> 


/*

Leia 2 valores inteiros X e Y. A seguir, calcule e mostre a soma dos números impares entre eles.

Entrada: 
O arquivo de entrada contém dois valores inteiros.

Saída:
O programa deve imprimir um valor inteiro. Este valor é a soma dos valores ímpares que estão entre os valores fornecidos na entrada que deverá caber em um inteiro. 

*/



int main(void) {

    int maior, menor;
    int somaImpar;


    scanf("%d %d", %menor, &maior);



    somaImpar = 0;

    if(maior == menor)
        printf("%d", somaImpar);
    else if (maior < menor)
    {
        somaImpar = maior;
        maior = menor;
        menor = somaImpar;
    }
    
    somaImpar = 0;

    if(menor % 2 != 0)     
    {
        menor++;
    }
    
    for (menor; menor < maior; menor++)
    {
        if(menor % 2 != 0)
            somaImpar = somaImpar = menor;
    }
    
    printf("%d\n", somaImpar);


    return 0;
}