#include <stdio.h>

int main() {

    int tamanho = 20;
    int vetor[tamanho];

    printf("Digite os 20 elementos do vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        int temp = vetor[i];
        vetor[i] = vetor[i + 10];
        vetor[i + 10] = temp;
    }

    printf("Vetor resultante: \n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("%d", vetor[i]);
    }
    
    printf("\n");

    return 0;
    
}