#include <stdio.h>
#include <stdlib.h>

void selectionSort (int vetor[], int tamanho) {
    int i, j, min_idx, temp;
    for (i = 0; i<tamanho-1; i++) {
        min_idx = i;
        for (j = i+1; j<tamanho; j++) {
            if (vetor[j] < vetor[min_idx]) {
                min_idx = j;
            }
        }
        temp = vetor[min_idx];
        vetor[min_idx] = vetor[i];
        vetor[i] = temp;
    }
}

int main() {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor antes do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    selectionSort(vetor, tamanho_vetor);
    printf("Vetor depois do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}