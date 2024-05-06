#include <stdio.h>
#include <stdlib.h>

typedef struct lista Lista;

struct lista {
int info;
Lista *prox;
};

/* Cria uma lista vazia */
Lista* cria_list(void){

return NULL;

}

/* Inserçao na lista,retorna ela atualizada */
Lista* insere_list(Lista* list,int val){

Lista* novo = (Lista*)malloc(sizeof(Lista));
novo->info = val;
novo->prox = list;
return novo;

}

/* Imprime os valores dos elementos */
void imprime_list(Lista* list){

    Lista* p;
    for(p = list; p != NULL;p = p->prox){

            printf("info = %d\n", p->info);
    }
}
/*Verifica se a lista esta vazia */
int list_vazia(Lista* list) {

    return (list == NULL);
}
/*Busca os elementos na lista */
Lista* buscar(Lista* list,int v){

    Lista *p;
    for(p = list;p != NULL; p = p->prox){
        if (p->info == v){
            return p;
        }
    }

    return NULL;
}

Lista* retirar_list(Lista* list,int val){

    Lista* ant = NULL; /*Ponteiro para o elemento anterior */
    Lista* p = list; /* Ponteiro para percorrer a lista */

    /* procura elemento na lista ,guardando o anterior */
    while(p != NULL && p->info != val){

        ant = p;
        p = p->prox;
    }

    /* verifica se achou o elemento */
    if(p == NULL){
        return list; /*se não achou retorna a lista original */
    }   /* retira o elemento */

    if(ant == NULL){
        list = p->prox; /*retira o elemento do inicio */
    } else {
        ant->prox = p->prox; /* retira o elemento do meio da lista */
    }

    free(p);
    return list;
}

void liberar_list(Lista* list){
    Lista* t;
    Lista* p = list;
    while(p != NULL){
        t = p->prox; /* guarda a referencia p/ prox elemento */
        free(p);
        p = t; /* faz p apontar p/ prox */
    }

}

Lista* inserirOrdenado_list(Lista* list,int val){

    Lista* novo;
    Lista* ant = NULL; /* ponteiro p/ elemento anterior */
    Lista* p = list; /* ponteiro p/ percorrer a lista */

    while(p != NULL && p-> info < val){ /* procura a posição da inserção */

        ant = p; p = p->prox;
    }

    novo = (Lista*)malloc(sizeof(Lista)); /* cria novo elemento */
    novo->info = val;

    if(ant == NULL){
            novo->prox = list; list = novo; /* insere elemento no inicio */
    } else {
        novo->prox = ant->prox; /* insere elemento no meio ou final */
        ant->prox = novo;
    }
    return list;
}

int list_igual(Lista* list1, Lista* list2){

    Lista* p1; /* ponteiro p/ percorrer a lista 1 */
    Lista* p2; /* Ponteiro p/ percorrer a lista 2 */

    for(p1=list1, p2=list2;
    p1 != NULL && p2 != NULL;
    p1 = p1->prox, p2 = p2->prox){
        if(p1 = p1->info, p2 = p2->prox)
            return 0;
    }

    return p1 == p2;
}

int main (void){

    Lista* list;
    list = cria_list();
    list = insere_list(list,23);
    list = insere_list(list,46);
    list = insere_list(list,123);
    list = insere_list(list,432);
    list = insere_list(list,543);
    list = insere_list(list,234);
    list = insere_list(list,78);
    list = insere_list(list,1);
    imprime_list(list);
    list = buscar(list, 23);
    list = retirar_list(list,1);
    imprime_list(list);


return 0;

}
