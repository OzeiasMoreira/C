#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int tam = 5;
    int mat[tam][tam];

    srand(time(NULL));

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {

            mat[i][j] = rand() % 100;

             }

              }

    for (int i = 0; i < tam; i++)
    {
        for (int j = 0; j < tam; j++)
        {
            if (i == j)
            {
                printf("%d",mat[i][j]);
            
            }
            
        }

        printf("\n");
        
    }

    return 0;
    
}