#include <stdio.h>
#include <stdlib.h>

void merge(int vetor[], int esquerda, int meio, int direita) {
    int i,j,k;
    
    int tamanho_esquerda = meio - esquerda + 1;
    int tamanho_direita = direita - meio;
    
    int* lado_esquerdo = (int*) malloc(tamanho_esquerda * sizeof(int));
    int* lado_direito = (int*) malloc(tamanho_direita * sizeof(int));
    
    for(i = 0; i<tamanho_esquerda; i++) {
        lado_esquerdo[i] = vetor[esquerda + i];
    }
    
    for(j = 0; j<tamanho_direita; j++) {
        lado_direito[j] = vetor[meio + 1 + j];
    }
    
    i = 0;
    j = 0;
    k = esquerda;
    
    while(i < tamanho_esquerda && j < tamanho_direita) {
        if (lado_esquerdo[i] <= lado_direito[j]) {
            vetor[k] = lado_esquerdo[i];
            i++;
        } else {
            vetor[k] = lado_direito[j];
            j++;
        }
        k++;
    }
    
    while(i < tamanho_esquerda) {
        vetor[k] = lado_esquerdo[i];
        i++;
        k++;
    }
    
    while (j < tamanho_direita) {
        vetor[k] = lado_direito[j];
        j++;
        k++;
    }
    
    free(lado_esquerdo);
    free(lado_direito);
}

void mergeSort(int vetor[], int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        
        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio+1, direita);
        
        merge(vetor, esquerda, meio, direita);
    }
}

int main() {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor antes do merge sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    mergeSort(vetor, 0, tamanho_vetor-1);
    printf("Vetor depois do merge sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    return 0;
}