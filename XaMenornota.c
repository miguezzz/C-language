#include <stdio.h>

int main(void) {

    int N, X;
    int i, nota, Xpos;

    printf("Quantos alunos?\n");
    scanf("%d", &N);

    printf("Qual a menor posicao quer imprimir?\n");
	scanf("%d", &Xpos);	
	
	int notas[11];
	
	for(i = 1 ; i <= N ; i++)
	{
    printf("nota %d de %d: ", i, N);
    scanf("%d", &nota);
    
    if(nota >= 0 && nota <= 10)
    {
    notas[nota]++;
    }
	}
	
	for(i = 1 ; i <= 10 ; i++)
	{
	printf("n[%d] = %d\n", i, notas[i]);
	}
	printf("\n\n");
	
	int varreX = 0;

	for(i = 0 ; i <= 10 ; i++)
	{
    if(notas[i] != 0)
    {
    varreX++;
    }

    if(varreX == Xpos)
    {
    printf("Menor posicao [%d] = %d", Xpos, i);
    break;
    }

	}
	printf("\n");



    return 0;
}