#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int vetorResultante[15], contador = 0, mat[5][3];

    srand(time(NULL));

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            mat[5][3] = rand() % 100;

            if (mat[i][j] % 3 == 0)
            {
                vetorResultante[contador] = mat[i][j];
                contador++;
            }
              
        }
        
        printf("\n");
    }

    printf("\nElementos multiplos de 3: \n");
    for (int i = 0; i < contador; i++)
    {
        printf("%d",vetorResultante[i]);
    }

    printf("\n");
    
    return 0;
}