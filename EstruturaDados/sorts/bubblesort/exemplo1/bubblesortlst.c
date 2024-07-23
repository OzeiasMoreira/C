#include <stdio.h>
#include <stdlib.h>

typedef struct Lista
{
    int data;
    Lista* prox;
}Lista;

Lista* criar(int data){
    Lista* lst = (Lista*)malloc(sizeof(Lista));
    if (!lst)
    {
        printf("Erro ao alocar memoria!");
        exit(1);
    }
    
    lst->data = data;
    lst->prox = NULL;

    return lst;

}

void adicionalst(Lista** inicio, int data){
    Lista* lst = criar(data);
    if(*inicio == NULL){
        *inicio = lst;
        return;
    }

    Lista* final = *inicio;
    while (final->prox != NULL)
    {
        final = final->prox;
    }
    
    final->prox = lst;
}

void mostrar(Lista* inicio){
    Lista* aux = (Lista*)malloc(sizeof(Lista));
    while (aux != NULL)
    {
        printf("%d ", aux->data);
        aux = aux->prox;
    }
    
    printf("\n");
}

void bubblesort(Lista* inicio){
    int continua;
    Lista* p;
    Lista* lp = NULL;

    if (inicio == NULL)
    {
        return;
    }

    do
    {
        continua = 0;
        p = inicio;

        while (p->prox != lp)
        {
            if (p->data > p->prox->data)
            {
                int aux = p->data;
                p->data = p->prox->data;
                p->prox->data = aux;
                continua = 1;
            }
            
            p = p->prox;
        }

        lp = p;
        
    } while (continua);
    
    
}

int main(){
    
    Lista* inicio = NULL;
    
    adicionalst(&inicio, 43);
    adicionalst(&inicio, 23);
    adicionalst(&inicio, 76);
    adicionalst(&inicio, 8);
    adicionalst(&inicio, 47);
    adicionalst(&inicio, 14);
    adicionalst(&inicio, 2);
    
    printf("Lista sem ordenação: \n");
    mostrarlst(inicio);
    
    bubblesort(inicio);
    
    printf("Lista ordenada(bubblesort): \n");
    mostrarlst(inicio);

    return 0;
}