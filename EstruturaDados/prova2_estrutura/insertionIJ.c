#include <stdio.h>
#include <stdlib.h>

void insertionSort (int vetor[], int tamanho, int i, int j) {
    int k, l, chave;
    for (k = i+1; k<=j; k++) {
        chave = vetor[k];
        l = k-1;

        while (l >= i && vetor[l] > chave) {
            vetor[l+1] = vetor[l];
            l -= 1;
        }
        vetor[l+1] = chave;
    }
}

// trocar variáveis por k e l
// k = i+1 k <= j
// while (l >= i)

int main() {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor antes do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    insertionSort(vetor, tamanho_vetor, 2, 6);
    printf("Vetor depois do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}