#include <stdio.h>

int main() {

    int tamanho = 100;
    int vetor[tamanho];
    int numero;
    int contador = 0;

    printf("Digite uma sequencia(-1 p/ encerrar)");

    int i = 0;
    while (1)
    {
        scanf("%d", &numero);

        if (numero == -1)
        {
            break;
        }

        vetor[i] = numero;
        i++;

        if (numero >= 10 && numero <= 50)
        {
            contador++;
        }
          
    }
    
    printf("Numeros no intervalo [10, 50]: %d\n", contador);


    return 0;
}