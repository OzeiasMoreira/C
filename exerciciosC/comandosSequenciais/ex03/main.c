#include <stdio.h>

int main() {
    float massa, altura, imc;

    printf("Digite sua massa em kg: ");
    scanf("%f", &massa);

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    imc = massa / (altura * altura);

    printf("Seu IMC é: %.2f\n", imc);

    return 0;
}
