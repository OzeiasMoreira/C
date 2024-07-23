#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void merge(int *vetor,int inicio,int meio,int fim){
    int *temporario, p1, p2, tamanho;
    int i, j, k;
    int fim1 = 0, fim2 = 0;
    p1 = inicio;
    p2 = meio + 1;  
    temporario = (int*)malloc(tamanho * sizeof(int));
    if (temporario != NULL)
    {
        for (i = 0; i < tamanho; i++)
        {
            if (!fim1 && !fim2)
            {
                if (vetor[p1] < vetor[p2])
                {
                    temporario[i] = vetor[p1++];
                } else {
                    temporario[i] = vetor[p2++];
                }

                if (p1 > meio)
                {
                    fim1 = 1;
                }

                if (p2 > fim)
                {
                    fim2 = 1;
                } 

            }

            else {
                if (!fim1)
                {
                    temporario[i] = vetor[p1++];
                } else {
                    temporario[i] = vetor[p2++]
                }
                
            }
            
        }

        for (j = 0, k = inicio; j < tamanho; j++, k++)
        {
            vetor[k] = temporario[j]
        }
        
        free(temporario);
    }
    
}

void mergesort(int *vetor,int inicio,int fim){
    int meio;
    if (inicio < fim)
    {
        meio = floor((inicio + fim) / 2);
        mergesort(vetor, inicio, meio);
        mergesort(vetor,meio + 1,fim);
        merge(vetor,inicio,meio,fim);
    }
    
}

int main(){

    int vetor[] = {64, 25, 12, 22, 11, 87 , 112 , 4 ,45 ,2};
    int n = sizeof(vetor) / sizeof(vetor[0]);

    printf("\n");
    
    mergesort(vetor,0,n - 1);
    printf("vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
        
    }
    
    return 0;
}