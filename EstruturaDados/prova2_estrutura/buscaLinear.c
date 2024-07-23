#include <stdio.h>
#include <stdlib.h>

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
    int resultado = buscaLinearOrdenada(&vetor[0], tamanho_vetor, 8);
    if (resultado == -1) {
        printf("Não encontrado!\n");
    } else {
        printf("Encontrado na posição %d\n", resultado);
    }
    return 0;
}