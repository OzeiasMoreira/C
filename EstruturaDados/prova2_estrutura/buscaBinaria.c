#include <stdio.h>
#include <stdlib.h>

int trocar (int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int particionar (int* vetor, int inicio, int fim) {
    int pivo = vetor[fim];
    int i = inicio-1;

    for (int j = inicio; j<fim; j++) {
        if (vetor[j] <= pivo) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i+1], &vetor[fim]);
    return i+1;
}

void quickSort (int* vetor, int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, pi-1);
        quickSort(vetor, pi+1, fim);
    }
}

int buscaBinaria (int *vetor, int tamanho, int chave) {
    int esquerda = 0, direita = tamanho-1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita - esquerda) / 2;
        if (vetor[meio] == chave) {
            return meio;
        } else if (vetor[meio] > chave) {
            direita = meio-1;
        } else {
            esquerda = meio+1;
        }
    }
    return -1;
}

int main () {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    
    printf("Vetor antes do quick sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    quickSort(&vetor[0], 0, tamanho_vetor-1);
    printf("Vetor depois do quick sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    int resultado = buscaBinaria(&vetor[0], tamanho_vetor, 9);
    if (resultado == -1) {
        printf("Não encontrado!\n");
    } else {
        printf("Encontrado na posição %d\n", resultado);
    }
    return 0;
}