#include <stdio.h>
#include <stdlib.h>

int main() {

    char *x;

    x = calloc(1,sizeof(char));

    if (x)
    {
        printf("Memoria alocada com sucesso\n");
        printf("x: %c\n", *x);
        *x = 'f';
        printf("x: %c\n",*x);
    }
    else{

        printf("Erro ao alocar memoria");
    }

    return 0;
}