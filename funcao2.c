#include <stdio.h>

int main(void) {

    float calcularAreaRetang(float base, float altura);

    float area = calcularAreaRetang(10.0, 20.0);

    printf("Area eh --%.2f", area);

    return 0;
}

float calcularAreaRetang(float base, float altura)//<- o que a funcao recebe de informacao 
//^ o que ela vai retornar
{
    float area = base * altura;
    
    return area;
}