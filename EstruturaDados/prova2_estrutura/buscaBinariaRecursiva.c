#include <stdio.h>
#include <stdlib.h>

int buscaBinariaRecursiva (int vetor[], int esquerda, int direita, int chave) {
    if (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == chave) {
            return meio;
        } else if (vetor[meio] < chave) {
            return buscaBinariaRecursiva(vetor, meio+1, direita, chave);
        }
        return buscaBinariaRecursiva(vetor, esquerda, meio-1, chave);
    }
    return -1;
}

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
    printf("\n");
    int resultado = buscaBinariaRecursiva(vetor, 0, tamanho_vetor-1, 8);
    if (resultado == -1) {
        printf("Não encontrado!\n");
    } else {
        printf("Encontrado na posição %d\n", resultado);
    }
    return 0;
}