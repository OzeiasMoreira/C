#include <stdio.h>
#include  <stdlib.h>
#include <time.h>

int main() {

    int *vet, tamanho;

    printf("Digite o tamanho do vetor:");
    scanf("%d",&tamanho);
    srand(time(NULL));

    vet = malloc(tamanho * sizeof(int));

    if (vet)
    {
        for (int i = 0; i < tamanho; i++)
        {
            *(vet + i) = rand() % 100;
        }

        for (int i = 0; i < tamanho; i++)
        {
            printf("%d", *(vet + i));
        }
        
        
    }

    else {

        printf("Erro ao alocar memoria!\n");
    }
    

    return 0;
}