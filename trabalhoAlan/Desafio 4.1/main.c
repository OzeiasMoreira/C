#include <stdio.h>

int main()
{
    int n, i;
    int soma = 0;

    printf("Digite um numeoro inteiro: " );
    scanf("%d", &n);

    for ( i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 5 == 0)
        {
            soma += i;
        }
        
    }

    printf("A soma de todos os multiplos de 3 ou 5 abaixo de %d é: %d\n", n, soma);
    
    return 0;
}
