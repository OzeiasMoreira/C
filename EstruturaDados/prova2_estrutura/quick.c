#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int trocar (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar (int vetor[], int esquerda, int direita) {
    int pivo = vetor[direita];
    int i = (esquerda - 1);
    
    for(int j = esquerda; j<direita; j++) {
        if (vetor[j] <= pivo) { //***** muito importante: vetor[j] <= pivo
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i+1], &vetor[direita]);
    return (i + 1);
}

int particiona_random (int vetor[], int inicio, int fim) {
    int pivo_indice = (rand() % (fim - inicio + 1)) + inicio;
    trocar(&vetor[pivo_indice], &vetor[fim]);
    return particionar(vetor, inicio, fim);
}

void quickSort (int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int pi = particiona_random(vetor, esquerda, direita);
        
        quickSort(vetor, esquerda, pi - 1);
        quickSort(vetor, pi + 1, direita);
    }
}

int main () {
    srand(time(NULL));
    int vetor[] = {2,6,51,4,8,5,23,8,41};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("Vetor antes do quick sort:\n");
    for(int i = 0; i<tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    quickSort(vetor, 0, tamanho-1);
    printf("Vetor depois do quick sort:\n");
    for(int i = 0; i<tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}