#include <stdio.h>

#define MAXSIZE 20

int main() {

    int vet[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int *pt_inicio = vet,*pt_fim = &vetor[MAXSIZE - 1];

    do
    {
        printf("%d %d\n",*pt_inicio,*pt_fim);
        pt_inicio++,pt_fim--;
    } while (pt_inicio<pt_fim);

    return 0;
    
}