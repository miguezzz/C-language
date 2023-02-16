#include <stdio.h>
#include <stdlib.h>


typedef struct lista2 Lista2;
struct lista2 {

    int info;
    Lista2* ant;
    Lista2* prox;

};

Lista2* lst_cria ();
Lista2* lst_insere (Lista2* lst, int val);
Lista2* lst_imprime (Lista2* lst);
Lista2* lst_busca (Lista2* lst, int val);
Lista2* lst_remove (Lista2* lst, int val);

int main(void) {

    Lista2* lst;
    lst = lst_cria();


    lst = lst_insere(lst, 4);
    lst = lst_insere(lst, 21);
    lst = lst_insere(lst, 30);

    if(lst_busca(lst, 21) != NULL)
    {
        printf("elemento encontrado!\n\n");
    }
    else
    {
        printf("elemento nao encontrado\n\n");
    }

    lst_remove(lst, 4);

    lst_imprime(lst);
    
    

    return 0;
}

Lista2* lst_cria ()
{
    return NULL;
}

Lista2* lst_insere(Lista2* lst, int val)
{
    Lista2* novo = (Lista2*) malloc(sizeof(Lista2));
    novo->info = val;
    novo->prox = lst;
    novo->ant = NULL;

    if(lst != NULL)
    {
        lst->ant = novo;
    }

    return novo;
}

Lista2* lst_imprime(Lista2* lst)
{
    Lista2* p;
    for(p = lst; p != NULL; p = p->prox)
    {
        printf("info = %d\n", p->info);
    }
}

Lista2* lst_busca(Lista2* lst, int val)
{
    Lista2* p;
    for(p = lst; p != NULL; p = p->prox)
    {
        if(p->info == val)
        {
            return p;
        }
    }
    return NULL;    
}

Lista2* lst_remove(Lista2* lst, int val)
{
    Lista2* p = lst_busca(lst, val);
    if(p == NULL)
    {
        return lst;
    }


    if(lst == p) //se eh o primeiro elemento
    {
        lst = p->prox;
    }
    else
    {
        p->ant->prox = p->prox;

        if(p->prox != NULL) //testa se eh o ultimo elemento
        {
            p->prox->ant = p->ant;
        }
        
        free(p);

        return lst;
    }

}