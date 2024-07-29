#include <stdio.h>
#include <stdlib.h>

struct noArv{
    int info;
    struct noArv* esq;
    struct noArv* dir;
};

typedef struct noArv NoArv;

NoArv* abb_cria(void){
    return NULL;
}

void abb_imprime(NoArv* a){
    if (a != NULL)
    {
        abb_imprime(a->esq);
        printf("%d\n ",a->info );
        abb_imprime(a->dir);
    }
    
}

NoArv* abb_busca(NoArv* r, int v){
    if (r == NULL)
    {
        return NULL;
    }

    else if(r->info > v){
        return abb_busca(r->esq, v);
    }

    else if(r->info < v){
        return abb_busca(r->dir, v);
    }
    
    else{
        return r;
    }
}

NoArv* abb_insere(NoArv* a , int v){
    if (a == NULL)
    {
        a = (NoArv*)malloc(sizeof(NoArv));
        a->info = v;
        a->esq = a->dir = NULL;
    }
    
    else if(v < a->info) {
        a->esq = abb_insere(a->esq, v);
    }

    // v >= a->info
    else {
        a->dir = abb_insere(a->dir, v);
    }

    return a;
}

NoArv* abb_retira(NoArv* r, int v){
    if (r == NULL)
    {
        return NULL;
    }
    
    else if(r->info > v){
        r->esq = abb_retira(r->esq, v);
    }

    else if(r->info < v){
        r->dir = abb_retira(r->dir, v);
    }

    else { // achou o nó a remover
        // nó sem filhos
        if (r->esq == NULL && r->dir == NULL)
        {
            free(r);
            r = NULL;
        }

        // nó só tem filhos a direita
        else if(r->esq == NULL){
            NoArv* t = r;
            r = r->dir;
            free(t);
        }
        
        // nó só tem filhos a esquerda
        else if(r->dir == NULL){
            NoArv* t = r;
            r = r->dir;
            free(t);
        }

        // nó tem os dois filhos
        else {
            NoArv* f = r->esq;
            while (f->dir != NULL)
            {
                f = f->dir;
            }
            
            r->info = f->info; // troca as informações
            f->info = v;
            r->esq = abb_retira(r->esq, v);
        }
    }

    return r;
}

int main(){
    
    return 0;
}