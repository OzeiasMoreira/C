#include <stdio.h>
#include <stdlib.h>

int insertionSort (int vetor[], int tamanho) {
    int i,j,chave;
    for (i = 1; i<tamanho; i++) {
        chave = vetor[i];
        j = i-1;

        while (j >= 0 && vetor[j] > chave) {
            vetor[j+1] = vetor[j];
            j -= 1;
        }
        vetor[j+1] = chave;
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
    insertionSort(vetor, tamanho_vetor);
    printf("Vetor depois do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}