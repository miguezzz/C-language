#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void menu();
void visualizar();
void pesquisar();
void cadastrar();
void remover();
void aprovados();
void reprovados();

#define MAX_ALUNOS 50

typedef struct {

    char nome[50];
    float notas[4]; //4 bimestres
    int ativo;

} Alunos;

Alunos alunos[MAX_ALUNOS];

int main(void) {


    menu();


    return 0;
}

void menu()
{
    int op;


    do {
        system("clear");

        printf("\n1 - Cadastrar Aluno\n");
        printf("2 - Remover Aluno\n");
        printf("3 - Pesquisar Aluno\n");
        printf("4 - Alunos Aprovados\n");
        printf("5 - Alunos Reprovados\n");
        printf("6 - Visualizar Alunos\n");
        printf("0 - Sair\n");
        
        scanf("%d", &op);

        getchar();

        switch(op){
            case 1:
                cadastrar();
            break;

            case 2:
                remover();
            break;

            case 3:
                pesquisar();
            break;

            case 4:
                aprovados();
            break;

            case 5:
                reprovados();
            break;

            case 6:
                visualizar();
            break;
        }
        getchar();

    } while (op != 0);

    return;
}



void cadastrar()
{
    system("clear");

    int op, i;

    char nome[50];
    float notas[4];

    do {
        printf("\nDigite o nome do(a) aluno(a): ");
        fgets(nome, sizeof(nome), stdin);

        printf("\nNota 1 bimestre: ");
        scanf("%f", &notas[0]);
        printf("\nNota 2 bimestre: ");
        scanf("%f", &notas[1]);
        printf("\nNota 3 bimestre: ");
        scanf("%f", &notas[2]);
        printf("\nNota 4 bimestre: ");
        scanf("%f", &notas[3]);

        for (i = 0; i < MAX_ALUNOS; i++)
        {
            if(alunos[i].ativo == 0)
            {
                alunos[i].notas[0] = notas[0];
                alunos[i].notas[1] = notas[1];
                alunos[i].notas[2] = notas[2];
                alunos[i].notas[3] = notas[3];
                strcpy(alunos[i].nome, nome); //string copy
                alunos[i].ativo = 1;

                break;
            }
        }
        
        

        printf("\n1 - Continuar\n0 - Voltar\n");
        scanf("%d", &op);

        getchar();

    } while (op != 0);

    return;
}

void remover()
{
    int matricula;

    visualizar();

    printf("\nDigite a matricula do aluno a ser removido: ");
    scanf("%d", &matricula);
    --matricula; // pq vai de 0 a 49

    alunos[matricula].ativo = 0;

    printf("\nAluno removido com sucesso!\n");

    getchar();

    return;
}

void pesquisar()
{
    char nome[50];
    int op;

    do
    {
        system("clear");

        printf("\nDigite o nome do(a) aluno(a): ");
        fgets(nome, sizeof(nome), stdin);

        for (int i = 0; i < MAX_ALUNOS; i++)
        {
            if(strstr(alunos[i].nome, nome) != NULL) // strstr verifica se uma string eh igual a outra
            {
                printf("\n-------------\n");
                printf("Matricula: %d\n", (i + 1));
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim.: %.2f\n", alunos[i].notas[0]);
                printf("2 Bim.: %.2f\n", alunos[i].notas[1]);
                printf("3 Bim.: %.2f\n", alunos[i].notas[2]);
                printf("4 Bim.: %.2f\n", alunos[i].notas[3]);
                printf("\n-------------\n");
            }
            
        }

        printf("\nDigite 0 para sair ou 1 para nova pesquisa: ");
        scanf("%d", &op);
        getchar();
    } while (op != 0);
    
    return;
}

void aprovados()
{
    system("clear");

    float media;

    printf("\nLista de Aprovados\n");

    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if(alunos[i].ativo == 1)
        {
            media = 0;
            media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3]) / 4;

            if(media > 5)
            {
                printf("\n-------------\n");
                printf("Matricula: %d\n", (i + 1));
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim.: %.2f\n", alunos[i].notas[0]);
                printf("2 Bim.: %.2f\n", alunos[i].notas[1]);
                printf("3 Bim.: %.2f\n", alunos[i].notas[2]);
                printf("4 Bim.: %.2f\n", alunos[i].notas[3]);
                printf("\n-------------\n");
            }
        }
    }

    return;
}

void reprovados()
{
    system("clear");

    float media;

    printf("\nLista de Reprovados\n");

    for (int i = 0; i < MAX_ALUNOS; i++)
    {
        if(alunos[i].ativo == 1)
        {
            media = 0;
            media = (alunos[i].notas[0] + alunos[i].notas[1] + alunos[i].notas[2] + alunos[i].notas[3]) / 4;

            if(media < 5)
            {
                printf("\n-------------\n");
                printf("Matricula: %d\n", (i + 1));
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim.: %.2f\n", alunos[i].notas[0]);
                printf("2 Bim.: %.2f\n", alunos[i].notas[1]);
                printf("3 Bim.: %.2f\n", alunos[i].notas[2]);
                printf("4 Bim.: %.2f\n", alunos[i].notas[3]);
                printf("\nnota insuficiente.\n");
            }
        }
    }
    
    return;
}


void visualizar()
{
    system("clear");

    int i;

        printf("\nLista de Alunos\n");

        for (i = 0; i < MAX_ALUNOS; i++)
        {
            if(alunos[i].ativo == 1)
            {
                printf("\n-------------\n");
                printf("Matricula: %d\n", (i + 1));
                printf("Nome: %s\n", alunos[i].nome);
                printf("1 Bim.: %.2f\n", alunos[i].notas[0]);
                printf("2 Bim.: %.2f\n", alunos[i].notas[1]);
                printf("3 Bim.: %.2f\n", alunos[i].notas[2]);
                printf("4 Bim.: %.2f\n", alunos[i].notas[3]);
                printf("\n-------------\n");
            }
            
        }


    
    return;
}