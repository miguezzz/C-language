#include <stdio.h>
#include <stdlib.h>

typedef struct lista {
    int info;
    struct lista* prox;
} Lista;

typedef struct fila {
    Lista* ini;
    Lista* fim;
} Fila;

Fila* cria_fila (void);
Fila* fila_insere (Fila* f, int val);
int fila_vazia (Fila* f);
int fila_retira (Fila* f);

int main (void) {

    Fila* f;
    f = cria_fila();


    return 0;
}

Fila* cria_fila (void)
{
    Fila* f = (Fila *) malloc(sizeof(Fila));
    f->ini = f->fim = NULL;
    return f;
}

Fila* fila_insere (Fila* f, int val)
{
    Lista* novo = (Lista *) malloc(sizeof(Lista));

    novo->info = val;
    novo->prox = NULL; // novo no passa a ser o ultimo

    if (f->fim != NULL) // testa se a lista ta vazia
    {
        f->fim->prox = novo;
    }
    else
    {
        f->ini = novo; // primeiro cara
    }
    
    f->fim = novo; // ultimo a entrar = ultimo a sair
}

int fila_vazia (Fila* f)
{
    if (f->ini == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int fila_retira (Fila* f)
{
    Lista* aux;
    int val;

    if (fila_vazia(f))
    {
        printf("\nFila vazia.");
        exit (1);
    }

    aux = f->ini; // aux recebe primeiro elemento da lista
    val = aux->info; // val recebe valor do primeiro elemento
    f->ini = aux->prox; // inicio passa a ser o proximo elemento

    if (f->ini == NULL) // se o inicio da fila nao tiver ngm...
    {
        f->fim = NULL; // ... a fila n tem ngm
    }

    free(aux);

    return val; // retorna primeiro da fila
}

void fila_libera (Fila*	f)	
{	
    Lista* aux = f->ini; // aux recebe primeiro elemento da lista

    while (aux != NULL)	
    {
        Lista* remove_proximo = aux->prox; 
        free(aux);
        aux = remove_proximo; // aux recebe o proximo elemento da lista
    }

    free(f);
}