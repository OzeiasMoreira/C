#include <stdio.h>

int main() {

    int tamanho = 21;
    int vetor[tamanho];

    printf("Digite 21 numeros inteiros:\n ");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &vetor[i]);
    }

    int ultimoNum = vetor[tamanho - 1];
    int encontrado = 0;

    for (int i = 0; i < tamanho - 1; i++)
    {
        if (vetor[i] == ultimoNum){

        printf("O ultimo numero (%d) esta na posição %d do vetor", ultimoNum, i);
        encontrado = 1;
    }
    
    
}

if (!encontrado)
{
    printf("O ultimo numero (%d) não esta presentes nos 20 primeiros numeros \n",ultimoNum);

}

return 0;
 
 }