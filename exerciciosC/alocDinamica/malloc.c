#include <stdio.h>
#include <stdlib.h>

int main(){

    int *x;
    x = malloc(sizeof(int));

    if (x)
    {
        printf("memoria alocada com sucesso!\n");
        printf("x: %d\n");
        *x = 50;
        printf("x: %d\n");
    }
    else{

        printf("Erro ao alocar memoria!");
    }

    return 0;
}