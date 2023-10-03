#include <stdio.h>

int main()
{
    int contador = 0;
    int  numero = 1;

    printf("Os primeiros 50 numeros multiplos de 3 são: \n");

    while (contador < 50)
    {
        if (numero % 3 == 0)
        {
            printf("%d", numero);
            contador++;
        }

        numero++;
        

    }

    printf("\n");
    
    return 0;
}
