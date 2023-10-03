#include <stdio.h>

int main() {
    int A, B, C, D, diferenca;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    printf("Digite o valor de C: ");
    scanf("%d", &C);

    printf("Digite o valor de D: ");
    scanf("%d", &D);

    diferenca = (A * B) - (C * D);

    printf("A diferença do produto de A e B pelo produto de C e D é: %d\n", diferenca);

    return 0;
}
