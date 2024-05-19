#include <stdio.h>
#include <stdlib.h>


struct stack{ 

    int elements[MAX_ELEMENTS];
    int top;
} 

/*Criando uma pilha*/
struct stack * create(void){
    struct stack *st;
    st = malloc(sizeof(struct stack));
    if(!st) {perror(NULL);  exit(1); }
    /*IMPORTANTE*/
    st->top = 0;

    return st;
}

/*Empilhando um elemento*/
void stackUP(struct stack *st, int A){
    if(st == MAX_ELEMENTS){
        printf("Stack full!");
    } else {
    st->elements[st->top] = A;
    st->top = st->top + 1;
    }
}

int unstack(struct stack *st){
    if(st == 0){
        printf("Stack empty...");
    } else {
    
     st->top = st->top - 1;
    
    }
    
    return st->elements[st->top];
}

int size(struct stack *st){
    return st->top;
}

int delete(struct stack *st){
    free(stack);
}

int main(){

    stackUP(st, 1345);
    int t = unstack(st);


    return 0;
}