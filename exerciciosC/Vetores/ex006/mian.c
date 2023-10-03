#include <stdio.h>

void multiplosSete (int vetor[], int tamanho) {

    printf("Numeros multiplos de 7 no vetor: \n");
    for (int i = 0; i < tamanho; i++)
    {
        if (vetor[i] % 7 == 0)
        {
            printf("%d", vetor[i]);
        }
        
    }
    
    printf("\n");
}

int main() {

    int tamanho;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &tamanho);

    if (tamanho <= 0)
    {
        printf("Tamanho invalido!");
        return 1;
    }

    int vetor[tamanho];

    printf("Digite a sequencia:");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    multiplosSete(vetor , tamanho);


    return 0;
    
    
}