#include <stdio.h>

int main() {
    int limite = 4000000;
    int termo1 = 1;
    int termo2 = 2;
    int proximoTermo = 0;
    int soma = 2; // Começamos com 2, pois o segundo termo (2) é par.

    while (proximoTermo <= limite) {
        proximoTermo = termo1 + termo2;
        if (proximoTermo % 2 == 0) {
            soma += proximoTermo;
        }

        // Atualizando os termos anteriores
        termo1 = termo2;
        termo2 = proximoTermo;
    }

    printf("A soma dos termos pares da sequência de Fibonacci abaixo de 4 milhões é: %d\n", soma);

    return 0;
}
