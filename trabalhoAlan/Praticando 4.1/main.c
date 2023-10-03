#include <stdio.h>

int main()
{
    int num , produto;

    printf("Digite os numeros(0 para encerrar): \n");

    while (1)
    {
        printf("Numero: ");
        scanf("%d", &num);

        if (num == 0)
        {
            break;
        }

        produto *= num;
        
    }

    printf("O produto dos numeros digitados é: %d\n", produto);
    
    return 0;
}
