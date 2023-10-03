#include <stdio.h>

int maiorValor(int vetor[], int tamanho) { 
int maior = vetor[0];

for (int i = 0; i < tamanho; i++)
{
    maior = vetor[i];
}

return maior;

 }

 int main() {

    int n;

    printf("Digite o tamanho: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Tamanho invalido!");
        return 1;

    }

    int vetor[n];

    printf("Digite os elementos do vetor: \n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int maior = maiorValor(vetor , n);

    printf("O maior valor é: %d\n", maior);

    return 0;
    
    
 }
