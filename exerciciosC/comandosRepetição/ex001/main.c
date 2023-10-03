#include <stdio.h>

int main() {
    int inicio, fim;

    printf("Digite o valor de início: ");
    scanf("%d", &inicio);

    printf("Digite o valor de fim: ");
    scanf("%d", &fim);

    printf("Números ímpares dentro do intervalo [%d, %d]:\n", inicio, fim);

    for (int i = inicio; i <= fim; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}