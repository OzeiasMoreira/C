#include <stdio.h>
#include <stdlib.h>

void selectionsort(int *vetor,int n){
    int i,j;
    int trocar, menor;
    for ( i = 0; i < n - 1; i++)
    {
        menor = i;
        for ( j = i; i < n; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        if (i != menor)
        {
            trocar = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = trocar;
        }
    } 
}
int main(){

    int vetor[] = {64, 25, 12, 22, 11, 87 , 112 , 4 ,45 ,2};
    int n = sizeof(vetor) / sizeof(vetor[0]);
    
    selectionsort(vetor, n);
    printf("vetor ordenado: ");
    for(int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
        
    }

    return 0;
}