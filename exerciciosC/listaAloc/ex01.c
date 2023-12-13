#include <stdio.h>
#include <stdlib.h>

int *soma(int *vetX,int *vetY, int tamanho){

    int *ponteiro;

    ponteiro = (int *)malloc(tamanho * sizeof(int));

    if (ponteiro)
    {
        printf("Memoria alocada com sucesso!\n");

    }

    else {

        printf("Erro ao alocar memoria!\n");
          
        }  

    for (int i = 0; i < tamanho; i++)
    {
        ponteiro[i] = vetX[i] + vetY[i];
    }
    
        
    return ponteiro;     

 }

int main(){

    int tamanho;
    int vetX[tamanho], vetY[tamanho], *ponteiro;

    printf("Insira o tamanho dos vetores:");
    scanf("%d",&tamanho);
    printf("\n");

    for (int i = 1; i < tamanho; i++)
    {
        
        printf("Insira o %d vetor X:",i);
        scanf("%d",&vetX[tamanho]);
        printf("Insira o %d vetor Y:",i);
        scanf("%d",&vetY[tamanho]);
        printf("\n");
    }
    
    ponteiro = soma(vetX,vetY,tamanho);

    printf("\nA soma dos vetores é:%d",ponteiro);
    

    return 0;
}