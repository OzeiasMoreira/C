#include <stdio.h>
    
int* bubblesort(int *vetor, int n){
    int fim = n, aux, continua;
    do{
        continua = 0;
        for(int i = 0;i < fim-1; i++){
            if(vetor[i] > vetor[i + 1]){
                aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
                continua = i + 1;
            }
        }   
        fim--;
    } while(continua != 0);
    return vetor;
}

int main()
{
    int vetor[] = {90 , 4 , 3 ,43 , 21 , 19 ,11}; 
    int n = sizeof(vetor) / sizeof(vetor[0]); 

    printf("Vetor antes da ordenação:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
        
    printf("\n");
        
    int vetorOrdenado = bubblesort(vetor, n);
        
    printf("Vetor dps de ordenar(insertionsort): \n");
    for(int i = 0; i < n; i++){
        printf("%d ", vetorOrdenado[i]);
    }

    return 0;
}        