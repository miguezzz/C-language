#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void menu();
void inserir();
void buscar();
void remover();
void visualizar();


#define MAX_CONTATOS 100
int contador;


typedef struct contato {

    char nome[81];
    float telefone;

} Contato;

Contato contatos[MAX_CONTATOS];


int main(void) {

    contador = 0;
    menu();


    return 0;
}


void menu()
{
    int op;

    do
    {
        system("clear");

        printf("\n1 - Inserir contato");
        printf("\n2 - Buscar contato");
        printf("\n3 - Remover contato");
        printf("\n4 - Visualizar contatos");
        printf("\n0 - Sair\n");
        printf("\n");

        scanf("%d", &op);

        getchar();

        switch (op) {
        
        case 1:
            inserir();
        break;
        
        case 2:
            buscar();
        break;

        case 3:
            remover();
        break;
        
        case 4:
            visualizar();
        break;
        
        }

        getchar();

    } while (op != 0);
    
    return;
}

void inserir()
{
    system("clear");
    int op, i;

    char nome[81];
    float telefone;

    do
    {
        printf("\nDigite o nome do contato\n");
        fgets(nome, sizeof(nome), stdin);

        printf("\nDigite o numero de telefone do contato\n");
        scanf("%f", &telefone);

        for (i = contador; i < MAX_CONTATOS; i++)
        {
            strcpy(contatos[i].nome, nome);
            contatos[i].telefone = telefone;
            contador++;
            
            break;
        }
        
        printf("\n1 - Inserir novo contato\n0 - Voltar\n");
        scanf("%d", &op);

        getchar();

    } while (op != 0);
    
    return;
}

void buscar()
{
    system("clear");

    char nome[81];

    printf("\nDigite o nome do contato: ");
    fgets(nome, sizeof(nome), stdin);

    int ini = 0;
    int fim = strlen(nome) - 1;

    while (ini <= fim)
    {
        int meio = (ini + fim) / 2; 

        switch (strcmp(nome, contatos[meio].nome))
        {
            case -1:
                fim = meio - 1;
            break;

            case 1:
                ini = meio + 1;
            break;

            case 0:
                printf("\nNome:%s%.0f\n", contatos[meio].nome, contatos[meio].telefone);
            break;

            default:
                printf("\nContato nao encontrado\n");
            break;
        }
    }

    return;
}

void remover()
{
    system("clear");

    char nome[81];
    int i, index = -1;

    visualizar();

    printf("\nDigite o nome do contato a ser excluido: ");
    fgets(nome, sizeof(nome), stdin);

    //busca o contato para remover
    for (i = 0; i < contador; i++)
    {
        if (strcmp(nome, contatos[i].nome) == 0)
        {
            index = i;
            break;
        }
    }
    
    //remove o contato
    if (index != -1)
    {
        for (i = index; i < contador; i++)
        {
            contatos[i] = contatos[i + 1];
        }
        contador--;
    }

    return;
}

void visualizar()
{
    system("clear");

    int i;

    printf("\nLista de Contatos\n");

    for (i = 0; i < contador; i++)
    {
        printf("\nNome:%s%.0f\n", contatos[i].nome, contatos[i].telefone);
    }
    

    return;
}