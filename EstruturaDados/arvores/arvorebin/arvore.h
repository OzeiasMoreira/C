#ifndef ARVORE_H
#define ARVORE_H

#include <stdio.h>

typedef struct noArv NoArv;

//Cria uma arvore vazia
NoArv* arv_criavazia(void);

//Insere na arvore
NoArv* arv_cria(int c, NoArv* e, NoArv* d);

//Libera elementos da arvore
NoArv* arv_libera(NoArv* a);

//Verifica se arvore é vazia
int arv_vazia(NoArv* a);

//Verifica se um elemento está na arvore
int arv_pertence(NoArv* a,int c);

//Imprime a arvore
void arv_imprime(NoArv* e);

#endif