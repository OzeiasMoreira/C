#include <stdio.h>
#include <stdlib.h>

void insertionSortBolado (int *vetor, int i, int j) {
    int k,l,chave;
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

int buscaLinearOrdenada (int *vetor, int tamanho, int chave) {
    for (int i = 0; i<tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        } else if (vetor[i] > chave) {
            return -1;
        }
    }
    return -1;
}

int buscaLinear (int *vetor, int tamanho, int chave) {
    for (int i = 0; i<tamanho; i++) {
        if (vetor[i] == chave) {
            return i;
        }
    }
    return -1;
}

int main () {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor antes do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    insertionSortBolado(&vetor[0], 0, tamanho_vetor-1);
    printf("Vetor depois do insertion sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    int resultado = buscaLinearOrdenada(&vetor[0], tamanho_vetor, 8);
    if (resultado == -1) {
        printf("Não encontrado!\n");
    } else {
        printf("Encontrado na posição %d\n", resultado);
    }
    return 0;
}