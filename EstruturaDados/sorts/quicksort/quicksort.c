#include <stdio.h>
#include <stdlib.h>

int particiona(int *vetor,int inicio, int final){
    int esquerda, direita, pivo, aux;
    esquerda = inicio;
    direita = final;
    pivo = vetor[inicio];
    while (esquerda < direita)
    {
        while (vetor[esquerda] <= pivo)
        {
            esquerda++;
        }

        while (vetor[direita] > pivo)
        {
            direita--;
        }
        
        if (esquerda < direita)
        {
            aux = vetor[esquerda];
            vetor[esquerda] = vetor[direita];
            vetor[direita] = aux;
        }
        
    }

    vetor[inicio] = vetor[direita];
    vetor[direita] = pivo;
    return direita;
    
}

void quicksort(int *vetor,int inicio, int final){
    int pivo;
    if (final > inicio)
    {
        pivo = particiona(vetor, inicio, final);
        quicksort(vetor, inicio, pivo - 1);
        quicksort(vetor, pivo + 1, final);
    }
    
}

int main(){
    
    return 0;
}