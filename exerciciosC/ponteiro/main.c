#include <stdio.h>

int main() {

    int vet[5] = {5,6,7,8,9};
    int *p = vet;

    for (int i = 0; i < 5; i++)
    {
        printf("%d", p[i]);
    }

    return 0;
    
}