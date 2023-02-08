#include <stdio.h>
#include <stdlib.h>

typedef struct lista {

    int info;
    struct lista* prox;

} Lista;

Lista* cria_lst (void);
Lista* insere_lst (Lista* lst, int val);
void imprime_lst(Lista* lst);
Lista* busca_lst(Lista* lst, int elemento);
Lista* remove_lst(Lista* lst, int tirar);



int main(void) {

    Lista* lst; //declara a lista
    lst = cria_lst(); //inicializa a lista

    int op;
    int inserir;
    int buscar;
    int remover;
    char qualquercoisa[20];

    do
    {
        system("clear");

        printf("\nO que deseja fazer com a lista?\n");

        printf("\n1 - Inserir elemento");
        printf("\n2 - Buscar elemento");
        printf("\n3 - Remover elemento");
        printf("\n4 - Imprimir valores da lista");
        printf("\n0 - Sair\n");
        printf("\n");

        scanf("%d", &op);

        getchar();

        switch(op) {

            case 1:
                printf("\nQual elemento deseja inserir\n");
                scanf("%d", &inserir);
                lst = insere_lst(lst, inserir);
                printf("\nElemento inserido. Digite enter para continuar.\n");
                fgets(qualquercoisa, sizeof(qualquercoisa), stdin);
            break;

            case 2:
                printf("\nQual elemento deseja buscar?\n");
                scanf("%d", &buscar);
                if (busca_lst(lst, buscar) != NULL)
                {
                    printf("\n%d Encontrado! Digite enter para continuar.\n", buscar);
                    fgets(qualquercoisa, sizeof(qualquercoisa), stdin);
                }
                else
                {
                    printf("\nElemento %d inexistente! Digite enter para continuar.\n", buscar);
                    fgets(qualquercoisa, sizeof(qualquercoisa), stdin);
                }
            break;

            case 3:
                imprime_lst(lst);
                printf("\nQue elemento deseja remover?\n");
                scanf("%d", &remover);
                remove_lst(lst, remover);
                printf("\n%d Removido! Digite enter para continuar.\n", remover);
                fgets(qualquercoisa, sizeof(qualquercoisa), stdin);
            break;

            case 4:
                printf("\n---------------Valores da lista encadeada---------------\n");
                imprime_lst(lst);
                printf("\nDigite enter para continuar.\n");
                fgets(qualquercoisa, sizeof(qualquercoisa), stdin);
            break;

        }

        getchar();

    } while (op != 0);


    return 0;
}



//criação: retorna uma lista vazia
Lista* cria_lst (void)
{
    return NULL;
}

//retorna lista atualizada
Lista* insere_lst (Lista* lst, int val)
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));

    novo->info = val;
    novo->prox = lst;

    return novo;
}

//imprime valores contidos na lista
void imprime_lst(Lista* lst)
{
    Lista* p;

    for (p = lst; p != NULL; p = p->prox)
    {
        printf("\ninfo = %d\n", p->info);
    }
    
}

//busca um valor específico dentro da lista
Lista* busca_lst(Lista* lst, int elemento)
{
    Lista* p;

    for (p = lst; p != NULL; p->prox)
    {
        if(p->info == elemento)
        {
            return p;
        }
    }
    return NULL; //caso o elemento n seja encontrado
    
}

//remove um elemento da lista
Lista* remove_lst(Lista* lst, int tirar)
{
    Lista* ant = NULL;
    Lista* p = lst;

    //procura o elemento na lista, guardando o anterior
    while (p != NULL && p->info != tirar)
    {
        ant = p;
        p = p->prox;
    }

    if (p == NULL)
    {
        return lst;
    }

    if (ant == NULL)
    {
        //remove o primeiro elemento, já que o anterior a ele é o NULL
        lst = p->prox;
    }
    else //tira elemento do meio da lista
    {
        ant->prox = p->prox;
    }

    free(p);

    return lst;

}