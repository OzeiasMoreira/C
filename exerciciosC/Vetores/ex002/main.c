#include <stdio.h>

int main() {

    int n;

    printf("Digite o tamanho do vetor:");
    scanf("%d" , &n);

    if (n <= 0)
    {
        printf("Tamanho invalido!");
        return 1;
    }

    int vetor[n];

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    printf("Vetor na ordem inversa:\n");
    for (int i = n - 1; i <= 0; i--)
    {
        printf("%d", vetor[i]);
    }
    
   printf("\n");

   return 0;
    
}
