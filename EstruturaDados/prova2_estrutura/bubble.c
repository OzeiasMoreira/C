#include <stdio.h>
#include <locale.h>

void bubbleSort (int vetor[], int tamanho) {
    for(int i = 0; i<tamanho-1; i++) {
        for(int j = 0; j<tamanho-i-1; j++) {
            if (vetor[j] > vetor[j+1]) {
                int temp = vetor[j];
                vetor[j] = vetor[j+1];
                vetor[j+1] = temp;
            }
        }
    }
}

int main () {
    int vetor[] = {5,3,2,6,1,4};
    int tamanho_vetor = sizeof(vetor)/sizeof(vetor[0]);
    
    printf("Vetor antes da ordenação:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    bubbleSort(vetor, tamanho_vetor);
    printf("Vetor depois da ordenação:\n");
    for(int i = 0; i<tamanho_vetor; i++) {
        printf("%d ", vetor[i]);
    }
}