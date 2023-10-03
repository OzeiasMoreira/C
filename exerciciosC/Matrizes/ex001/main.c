#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int soma = 0,mat[5][3];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[i][j] = rand() % 100;
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            soma += mat[i][j];
            printf("%2d", mat[i][j]);
        }

        printf("\n");
        
    }

    printf("\nSoma total: %d\n", soma);
    
    
}