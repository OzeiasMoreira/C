#include <stdio.h>

int main() {

    int tamanho = 50;
    int vetor[tamanho];
    int par[tamanho];
    int impar[tamanho];
    int countPar = 0;
    int countImpar = 0;

    printf("Digite os 50 numeros: \n");

    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0)
        {
            par[countPar] = vetor[i];
            countPar++;
        } else {

            impar[countImpar] = vetor[i];
            countImpar++;
        }
        
    }

    printf("Numeros pares: ");
    for (int i = 0; i < countPar; i++)
    {
        printf("%d", par[i]);
    }

    printf("\n");

    printf("Numeros impares:");
    for (int i = 0; i < countImpar; i++)
    {
        printf("%d", impar[i]);
    }

    printf("\n");

    return 0;
    
     
}