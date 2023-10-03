#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número inteiro: ");
    scanf("%d", &num3);

    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }

    if (num3 < menor) {
        menor = num3;
    }

    printf("O menor número é: %d\n", menor);

    return 0;
}
