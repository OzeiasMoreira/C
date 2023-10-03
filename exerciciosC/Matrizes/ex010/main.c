#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int mat[3][7], count = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            mat[i][j] = rand() % 100;
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (mat[i][j] > 10 && mat[i][j] > 50)
            {
                count++;
            }
            
        }
        
    }

    printf("A quantidade de elementos no intervalo(10,50): %d\n");

    int segundaMat[3][7];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (mat[i][j] != 10 && mat[i][j] != 50)
            {
                segundaMat[i][j] = mat[i][j];
            } else {

                segundaMat[i][j] = mat[i][j];
            }
            
        }
        
    }

printf("segunda matriz com zeros no lugar de 10 e 50:");
for (int i = 0; i < 3; i++)
{
    for (int j = 0; j < 7; j++)
    {
        printf("%2d", segundaMat[i][j]);
    }

    printf("\n");
    
}

return 0;

    
    
}