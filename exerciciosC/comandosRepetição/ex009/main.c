#include <stdio.h>

int main()
{
    int numero, i, flag = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &numero);

    for ( i = 2; i <= numero / 2; i++)
    {
        if (numero % i == 0)
        {
            flag = 1;
            break;
        }
        
    }

    if (numero == 1)
    {
        printf("1 não é um numero primo. \n");
    }
    else {

        if(flag == 0) {

            printf("%d é um numero primo. \n", numero);
        }

        else {

            printf("%d não é um numero primo. \n", numero);
        }
    }
    
    
    return 0;
}
