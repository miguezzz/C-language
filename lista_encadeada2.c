#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;
struct lista {
    int info;
    Lista* prox;
};

Lista* lst_cria (void);
Lista* lst_insere (Lista* lst, int val);
void lst_imprime (Lista* lst);
int lst_vazia (Lista* lst);
Lista* lst_busca (Lista* lst, int valor_desejado);
Lista* lst_retira (Lista* lst, int deseja_remover);

int main(void) {

    Lista* lst;
    lst = lst_cria();

    lst = lst_insere(lst, 12);
    lst = lst_insere(lst, 21);
    lst = lst_insere(lst, 4);


    lst_retira(lst, 12);


    if (lst_vazia(lst) == 0)
    {
        printf("\nLista vazia, amigao!!!\n");
    }
    else
    {
        lst_imprime(lst);
    }

    if (lst_busca(lst, 21) != NULL)
    {
        printf("\nElemento %d encontrado! seja feliz.\n", 21);
    }
    
    
    return 0;
}

/* função de criação: retorna uma lista vazia */
Lista* lst_cria (void)
{
    return NULL;
}

/* função vazia: retorna 0 se vazia ou 1 se não vazia */
// ta errado no slide
int lst_vazia (Lista* lst)
{
    if (lst == NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}


/* inserção no início: retorna a lista atualizada */
Lista* lst_insere (Lista* lst, int val) //lst: ponteiro para o inicio da lista
{
    Lista* novo = (Lista*) malloc(sizeof(Lista));
    novo->info = val;
    novo->prox = lst;
    return novo;
}


void lst_imprime (Lista* lst) 
{
    Lista* p;

    for (p = lst; p != NULL; p = p->prox)
    {
        printf("\ninfo = %d\n", p->info);
    }
    
}


Lista* lst_busca (Lista* lst, int valor_desejado)
{
    Lista* p;

    for (p = lst; p != NULL; p = p->prox)
    {
        if (p->info == valor_desejado)
        {
            return p;
        }
    }
    return NULL; //caso elemento nao seja encontrado
}

Lista* lst_retira (Lista* lst, int deseja_remover)
{
    Lista* p = lst;
    Lista* ant = NULL;

    while (p != NULL && p->info != deseja_remover)
    {
        ant = p;
        p = p->prox;
    }

    if (p == NULL)
    {
        return lst; //n achou o elemento. retorna lista normal
    }

    if (ant == NULL) //testa se o primeiro elemento eh o que vc procura
    {
        lst = p->prox; //remove o primeiro elemento
    }
    else
    {
        ant->prox = p->prox;
    }

    free(p);

    return lst;
}