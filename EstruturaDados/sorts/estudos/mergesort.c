#include <stdio.h>
#include <stdlib.h>

void merge(int *vetor,int inicio,int meio,int fim){
    int p1,p2 ,tamanho;
    int *temporario;
    temporario = (int*)malloc(tamanho * sizeof(int));
    tamanho = fim - inicio + 1;
    int i,j,k;
    int fim1 = 0, fim2 = 0;
    p1 = inicio;
    p2 = meio + 1;

    if (temporario != NULL)
    {
        for ( i = 0; i < tamanho; i++)
        {
            if (!fim1 && !fim2)
            {
                if (vetor[p1] < vetor[p2])
                {
                    temporario = vetor[p1++];
                } else {
                    temporario = vetor[p2++];
                }

                if (p1 > meio)
            {
                fim1 = 1;
            }
            
            if (p2 > fim)
            {
                fim2 = 1;
            }
                
            } else {
                if (!fim1)
                {
                    temporario[i] = vetor[p1++];
                } else {
                    temporario[i] = vetor[p2++];
                }
                
            }
            
        }

        for ( j = 0, k = inicio; j < tamanho;j++, k++)
        {
            vetor[k] = temporario[i];
        }
        
    }

    free(temporario);
    
}

void mergesort(int *vetor,int inicio,int fim){
    int meio;
    if (inicio < fim)
    {
        meio = floor((inicio + fim) / 2);
        mergesort(vetor,inicio,meio);
        mergesort(vetor,meio + 1,fim);
        merge(vetor,inicio,meio,fim);
    }
    
}