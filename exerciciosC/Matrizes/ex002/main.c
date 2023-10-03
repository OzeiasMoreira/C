#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int soma, mat[3][5],somaLinhas[3], somaColunas[5];

    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = rand() % 100;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        soma = 0;
        for (int j = 0; j < 5; j++)
        {
            soma += mat[i][j];
        }
        somaLinhas[i] = soma;
    }

    for (int j = 0; j < 5; j++)
    {
        for (int i = 0; i < 3; i++)
        {
            soma += mat[i][j];
        }
        
        somaColunas[j] = soma;
    }
    
    printf("\nMatiz: \n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%2d", mat[i][j]);
        }
        
        printf("\n");
    }

    printf("\n\nVetir com a soma das linhas: \n");
    for (int i = 0; i < 3; i++)
    {
        printf("Linha %d: %d\n",i,somaLinhas);
    }

    printf("\n\nVetor com a soma das colunas: \n");
    for (int j = 0; j < 5; j++)
    {
        printf("Coluna %d: %d\n", j,somaColunas);
    }
    
    
    return 0;
    
}