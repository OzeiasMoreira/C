#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int valor;
    int indice_original;
} Elemento;

void trocar (Elemento* a, Elemento* b) {
    Elemento temp = *a;
    *a = *b;
    *b = temp;
}

int particionar (Elemento vetor[], int inicio, int fim) {
    Elemento pivo = vetor[fim];
    int i = inicio-1;

    for (int j = inicio; j<fim; j++) {
        if (vetor[j].valor < pivo.valor || vetor[j].valor == pivo.valor && vetor[j].indice_original < pivo.indice_original) {
            i++;
            trocar(&vetor[i], &vetor[j]);
        }
    }
    trocar(&vetor[i+1], &vetor[fim]);
    return i+1;
}

void quickSort (Elemento vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(vetor, inicio, fim);
        quickSort(vetor, inicio, pi-1);
        quickSort(vetor, pi+1, fim);
    }
}

int main() {
    int vetor[] = {2,6,9,8,5,3,4,7,8,5};
    int tamanho_vetor = sizeof(vetor) / sizeof(vetor[0]);
    Elemento array[tamanho_vetor];
    for (int i = 0; i<tamanho_vetor; i++) {
        array[i].valor = vetor[i];
        array[i].indice_original = i;
    }
    
    printf("Vetor antes do quick sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", array[i].valor);
    }
    printf("\n");
    quickSort(array, 0, tamanho_vetor-1);
    printf("Vetor depois do quick sort:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", array[i].valor);
    }
    return 0;
}