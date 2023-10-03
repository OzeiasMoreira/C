#include <stdio.h>

int main() {

    int n;
    float num = 0;

    printf("Digite um numero inteiro n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {

        num += 1.0 / i;
    }

    printf("Resultado da soma: %.2f\n", num);

    return 0;
}