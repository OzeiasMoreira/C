#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Digite um numero inteiro maior que 1: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= 10; j++)
        {
            printf("%d * %d = %d \n", i, j, i * j);
        }

        printf("\n");
        
    }
    
    
    return 0;
}
