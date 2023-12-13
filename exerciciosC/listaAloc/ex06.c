#include <stdio.h>
#include <stdlib.h>

int main(){

    int n, **matriz;

    printf("Insira o tamanho da matriz:");
    scanf("%d",&n);

    matriz = (int **)malloc(n * sizeof(int));

    if (matriz ==  NULL)
    {
        printf("Erro ao alocar memoria!");
    }

    for (int i = 0; i < n; i++)
    {
        matriz[i] = (int *)malloc(n * sizeof(int));
        if (matriz[i] == NULL)
        {
            printf("Erro ao alocar memoria!");
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < ; j++)
        {
            if (i + j == n - 1)
            {
                matriz[i][j] = 1;
            } else {

                matriz[i][j] = 0;
            }
            
        }
        
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d",matriz[i][j]);
        }
        
    }

    return 0;
}