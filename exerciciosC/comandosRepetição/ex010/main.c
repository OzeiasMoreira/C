#include <stdio.h>

int main() {
    
    int numero, quantidade = 0, soma = 0;

    printf("Digite uma sequência de números inteiros (0 para sair):\n");

    do {
       
        printf("Digite um número: ");
        scanf("%d", &numero);

        if (numero >= 10 && numero <= 50 && numero % 7 == 0) {
           
            quantidade++;
            soma += numero;
        }
    } while (numero != 0);

        printf("Quantidade de números múltiplos de 7 entre 10 e 50: %d\n", quantidade);

    if (quantidade > 0) {
        
        float media = (float)soma / quantidade;
        printf("Média dos números múltiplos de 7 entre 10 e 50: %.2f\n", media);
    }

    return 0;
}


