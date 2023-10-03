#include <stdio.h>

int main() {
    float num1, num2, num3;
    float media;
    int count = 0;

    printf("Digite o primeiro número positivo: ");
    scanf("%f", &num1);

    printf("Digite o segundo número positivo: ");
    scanf("%f", &num2);

    printf("Digite o terceiro número positivo: ");
    scanf("%f", &num3);

    // Calcula a média aritmética
    media = (num1 + num2 + num3) / 3;

    // Verifica quantos números estão acima da média
    if (num1 > media) {
        count++;
    }
    if (num2 > media) {
        count++;
    }
    if (num3 > media) {
        count++;
    }

    printf("A média aritmética é: %.2f\n", media);
    printf("Quantidade de números acima da média: %d\n", count);

    return 0;
}
