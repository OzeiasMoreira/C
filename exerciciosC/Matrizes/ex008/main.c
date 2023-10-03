#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int dimensão,mat[dimensão][dimensão];

    printf("Digite a dimensão a ser calculada(maior que 0): ");
    scanf("%d", &dimensão);

    srand(time(NULL));

    for (int i = 0; i < dimensão; i++)
    {
        for (int j = 0; j < dimensão; j++)
        {
            mat[i][j] = rand() % 100;
        }
        
    }

    printf("Matriz gerada: \n");
    for (int i = 0; i < dimensão; i++)
    {
        for (int j = 0; j < dimensão; j++)
        {
            printf("%2d", mat[i][j]);
            printf("\n");
        }
        
    }

    for (int i = 0; i < dimensão; i++)
    {
        for (int j = 0; j < dimensão; j++)
        {
            if (i == j)
            {
                printf("%2d", mat[i][j]);
            }
            
        }
        
    }

    printf("\n");


    return 0;
     


}