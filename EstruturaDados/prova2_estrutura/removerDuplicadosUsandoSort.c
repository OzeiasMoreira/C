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

int removeDuplicados (int vetor[], int tamanho) {
    if (tamanho == 0 || tamanho == 1) {
        return tamanho;
    }
    int j = 0;
    for (int i = 0; i<tamanho-1; i++) {
        if (vetor[i] != vetor[i+1]) {
            vetor[j++] = vetor[i];
        }
    }
    vetor[j++] = vetor[tamanho-1];
    return j;
}

int main() {
    int vetor[] = {1,2,4,3,3,2,1,3,3,2,4};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);
    printf("Vetor não-ordenado com duplicados:\n");
    for (int i = 0; i<tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    selectionSort(vetor, tamanho);
    printf("Vetor ordenado com duplicados:\n");
    for (int i = 0; i<tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    tamanho = removeDuplicados(vetor, tamanho);
    printf("Vetor ordenado sem duplicados:\n");
    for (int i = 0; i<tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}

/*
Dois for do selection sort:
i = 0 i<tamanho-1
j = i+1 j<tamanho
*/

/*
Dois for do bubble sort:
i = 0 i<tamanho-1
j = 0 j<tamanho-i-1
*/
