#include <stdio.h>
#include <stdlib.h>

struct Element{
    int number;
    struct Element *prox;
};
typedef struct Element Element;

struct Stack {

    Element *top; /* aponta p elemento no topo da pilha */
};
typedef struct Stack Stack;

Element *aux;

Stack*  createStack(){
    /* alocação do ponteiro pi p controlar a pila */
    Stack* st = (Stack*)malloc(sizeof(Stack));
    if(st != NULL){
        st->top = NULL; /* a pilha inicia vazia */
    }

    return st;
}

void insertElement(Stack *st, int number){

    Element *new = (Element*)malloc(sizeof(Element));
    //printf("Insert a number in stack:");
    new->number = number;
    new->prox = st->top;
    st->top = new;
    printf("Number add in stack!\n");
}

void showStack(Stack *st){

    if(st->top == NULL){
        printf("\nEmpty stack...");
    } else {
        aux = st->top;
        do{
            printf("\n%d", aux->number);
            aux = aux->prox;
        } while (aux != NULL);
    }
}

void removeStack(Stack *st,int number){

    if(st->top == NULL){
        printf("\nEmpty Stack...");
    } else {
        aux = st->top;
        printf("%d deleted!", st->top->number);
        st->top = st->top->prox;
        free(aux);
    }
}

void clearStack(Stack *st){

    if(st->top == NULL){
        printf("Empty stack...");
    } else {

        aux = st->top;
        do{
            st->top = st->top->prox;
            free(aux);
            aux = st->top;
        } while(aux != NULL);
          printf("\nStack Clear...");
        }
    }

int main(){

    Stack* st;
    st = createStack();
    insertElement(st,45);
    insertElement(st,32);
    insertElement(st,21);
    insertElement(st,67);
    insertElement(st,9);
    insertElement(st,10);
    removeStack(st,45);
    clearStack(st);
    showStack(st);


    return 0;
}
