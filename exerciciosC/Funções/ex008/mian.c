#include <stdio.h>

void mostrarDivisores(int num) {

    int quantidadeDivisores = 0;

    printf("Divisores de %d: ",num);

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d", i);
            quantidadeDivisores++;
        }
        
    }

    printf ("\nQuantidade de divisores: %d\n", quantidadeDivisores);
}

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    mostrarDivisores(num);

    return 0;
}