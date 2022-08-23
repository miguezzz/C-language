#include <stdio.h>


int main(void) {

    struct ficha_aluno
    {
      char nome[40];
      int numero;
      int nota;
  
    };
    
    struct ficha_aluno Victor;

    printf("Qual o nome do aluno?\n");
    fgets(Victor.nome, 40, stdin);//'stdin' significa que vem do teclado.
    printf("Qual o numero?\n");
    scanf("%d", &Victor.numero);
    printf("Qual a nota?\n");
    scanf("%d", &Victor.nota);

    printf("Aluno: %s", Victor.nome);
    printf("Numero: %d\n", Victor.numero);
    printf("Nota: %d\n", Victor.nota);


    return 0;
}