#include <stdio.h>

int contOcorrencias(int vetor[], int tamanho, int ultimoNum) {

    int contador = 0;
    for (int i = 0; i < tamanho; i++)
    {
        if(vetor[i] == ultimoNum) {

            contador++;
        }
    }

    return contador;
    
}

int main() {

    int n;

    printf("Digite o tamanho da sequencia: ");
    scanf("%d", &n);

    if (n <= 0) {

        printf("Tamanho invalido! O tamanho deve ser menor que zero.\n");
        return 1;
    }

    int vetor[n];

    printf("Digite a sequencia: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int ultimoNum;
    if (n > 0)
    {
        ultimoNum = vetor[n - 1];
        int ocorrencias = contOcorrencias(vetor , n , ultimoNum);
        printf("O ultimo numero lido (%d) ocorre %d vezes na sequencia. \n");
    } else {

        printf("A sequencia esta vazia. \n");
    }
    
    return 0;
    
}