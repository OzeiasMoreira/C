#include <stdio.h>

void insertionsort(int *vetor, int n){
    int i, j, aux;
    for(i = 1;i < n;i++){
        aux = vetor[i];
        for(j = i; (j > 0) && (aux < vetor[j - 1]); j--){
            vetor[j] = vetor[j - 1];
        } 

        vetor[j] = aux;
    }
}

int main(){

    int vetor[] = {64, 25, 12, 22, 11, 87 , 112 , 4 ,45 ,2};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    
    insertionsort(vetor, n);
    printf("vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
        
    }

    return 0;
}