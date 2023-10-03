#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int menorValor,soma,mat[4][5];

    srand(time(NULL));

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            mat[i][j] = rand() % 100;
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            soma += mat[i][j];
            printf("%2d", mat[i][j]);
        }
        
    }
    

    menorValor = mat[0][0];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (mat[i][j] < menorValor)
            {
                menorValor = mat[i][j];
            }
            
        }
        
    }

    printf("O menor elemento da matriz é: %d\n", menorValor);

    return 0;
    
    
}