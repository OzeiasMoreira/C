#include <stdio.h>
#include <stdlib.h>
#include "arvore.h"

struct noArv
{
    int info;
    NoArv *esq;
    NoArv *dir;
};

int arv_vazia(NoArv *a)
{
    return a == NULL;
}

NoArv *arv_criavazia(void)
{
    return NULL;
}

NoArv *arv_cria(int c, NoArv *sae, NoArv *sad)
{
    NoArv *p = (NoArv *)malloc(sizeof(NoArv));
    if (p == NULL)
    {
        exit(1);
    }
    
    p->info = c;
    p->esq = sae;
    p->dir = sad;

    return p;
}

NoArv *arv_libera(NoArv *a)
{
    if (!arv_vazia(a))
    {
        arv_libera(a->esq);
        arv_libera(a->dir);
        free(a);
    }

    return NULL;
}

int arv_pertence(NoArv *a, int c)
{
    if (arv_vazia(a))
    {
        return 0;
    }
    else
    {
        return a->info == c || arv_pertence(a->esq, c) || arv_pertence(a->dir, c);
    }
}

void arv_imprime(NoArv *a)
{
    if (!arv_vazia(a))
    {
        printf("%d ", a->info);
        arv_imprime(a->esq);
        arv_imprime(a->dir);
    }
}

int main()
{

    NoArv *a1 = arv_cria(2, arv_criavazia(), arv_criavazia());
    /* sub-árvore 'b' */
    NoArv *a2 = arv_cria(4, arv_criavazia(), a1);
    /* sub-árvore 'e' */
    NoArv *a3 = arv_cria(6, arv_criavazia(), arv_criavazia());
    /* sub-árvore 'f' */
    NoArv *a4 = arv_cria(8, arv_criavazia(), arv_criavazia());
    /* sub-árvore 'c' */
    NoArv *a5 = arv_cria(10, a3, a4);
    /* árvore 'a' */
    NoArv *a = arv_cria(12, a2, a5);
    arv_imprime(a);

    return 0;
}