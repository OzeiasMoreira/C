#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int linhas,colunas,mat[linhas][colunas],trans[colunas][linhas];

    printf("Digite as linhas e colunas da matriz: ");
    scanf("%d%d", &linhas,&colunas);

    srand(time(NULL));

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            mat[i][j] = rand() % 500;
        }
        
    }

    printf("\nMatriz original: \n");

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%3d", mat[i][j]);
        }
        printf("\n");
    }
    
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
           trans[j][i] = mat[i][j];
        }
        
    }

    printf("\nMatriz transposta: \n");
    for (int i = 0; i < colunas; i++)
    {
        for (int j = 0; j < linhas; j++)
        {
            printf("%3d", mat[i][j]);
        }

        printf("\n");
        
    }

    return 0;
}