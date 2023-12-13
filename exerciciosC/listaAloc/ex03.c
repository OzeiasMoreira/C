#include <stdio.h>
#include <stdlib.h>

int main() {

    int **ponteiro,quantidadeLinhas,quantidadeColunas;

    printf("Insira a quantidade de linhas e colunas:");
    scanf("%d%d",&quantidadeColunas,quantidadeLinhas);

    ponteiro = (int **)malloc(quantidadeLinhas * sizeof(int));

    if (ponteiro)
    {
        printf("Memoria insuficiente!");
    
    }
    for(int i = 0; i < quantidadeLinhas; i++){
        ponteiro[i] = (int *) malloc(quantidadeColunas * sizeof(int));
        if(ponteiro[i] == NULL){
            printf("Memoria insuficiente!");
            
        }
    }

    for (int i = 0; i < quantidadeLinhas; i++)
    {
        for (int j = 0; j < quantidadeColunas; j++)
        {
            printf("Digite o elemento %d %d:");
            scanf("%d",ponteiro[i][j]);
        }
        
    }

    printf("\nMatriz: "); 
    for (int i = 0; i < quantidadeColunas; i++)
    {
        /* code */
    }
    
    
        

    return 0;
}