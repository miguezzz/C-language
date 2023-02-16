#include <stdio.h>
#include <stdlib.h>

typedef struct elemento {
    int info;
    struct elemento* prox;
} Elemento;

typedef struct pilha {
    Elemento* topo;
} Pilha;

Pilha* cria_pilha (void);
Pilha* push_pilha (Pilha* p, int val);
int pop_pilha (Pilha* p);
int pilha_vazia (Pilha* p);
void pilha_libera (Pilha* p);
void imprime_pilha (Pilha* p);

int main (void) {

    Pilha* p;
    p = cria_pilha();

    p = push_pilha(p, 12);
    p = push_pilha(p, 21);
    p = push_pilha(p, 4);

    pop_pilha(p);

    imprime_pilha(p);

    return 0;
}


Pilha* cria_pilha (void)
{
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

Pilha* push_pilha (Pilha* p, int val)
{
    Elemento* novo = (Elemento*) malloc(sizeof(Elemento));
    novo->info = val;
    novo->prox = p->topo; // novo->prox recebe NULL
    p->topo = novo; // topo atualizado

    return p;
}

int pilha_vazia (Pilha* p)
{
    if(p->topo == NULL)
    {
        return 1; // 1 se estiver vazia
    }
    return 0;
} 

int pop_pilha (Pilha* p)
{
    Elemento* aux;
    int val; // valor a ser retornado

    if (pilha_vazia(p))
    {
        exit(1); // aborta programa caso a pilha esteja vazia
    }

    aux = p->topo; // aux recebe o elemento onde o numero esta localizado
    val = aux->info; // val recebe o valor dentro do elemento
    p->topo = aux->prox; // topo passa para o elemento "de baixo"

    free(aux);

    return val;
}

void imprime_pilha (Pilha* p)
{
    Elemento* aux;

    for (aux = p->topo; aux != NULL; aux = aux->prox)
    {
        printf ("%d\n", aux->info);
    }
    
    return;
}
