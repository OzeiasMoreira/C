#include <stdio.h>

int main() {

    float valor, maior, menor;
    int i;

    printf("Digite 15 valores: ");
    scanf("%f", &valor);

    maior = menor = valor;

    for ( i = 1; i < 15; i++)
    {
        scanf("%f", &valor);

        if (valor < 0)
        {
            printf("Numero negativo! \n");
            break;
        }

        if (valor > maior)
        {
            maior = valor;
        }

        if (valor < menor)
        {
            menor = valor;
        }
        
        
        
    }

    printf("O maior valor é: %.2f\n", maior);
    printf("O menor valor é: %.2f\n", menor);
    
}