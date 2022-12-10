#include <stdio.h>
#include <math.h>

float leibniz (int n);

int main(void) {

    int qtd_termos;
    float resultado;

    printf("Digite a quantidade de termos para aproximar o valor de pi: ");
    scanf("%d", &qtd_termos);

    if (qtd_termos < 1)
    {
        printf("\nO n. de termos deve ser maior que 0.\n");
    }
    else
    {
        resultado = leibniz(qtd_termos);

        printf("\npi = %f, aproximadamente.", resultado);
    }


    return 0;
}

float leibniz (int n)
{
    int k;
    float soma = 1;

    for (k = 0; k < n - 1; k++)
    {
        soma = soma + (pow(-1, k) / (2 * k) + 1);
    }

    return 4 * soma;
}