#include <stdio.h>

int main() {
    float altura;
    int idade, brinquedosPermitidos = 0;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite a idade: ");
    scanf("%d", &idade);

    if (altura >= 1.5 && idade >= 12) {
        brinquedosPermitidos++;
    }

    if (altura >= 1.4 && idade >= 14) {
        brinquedosPermitidos++;
    }

    if (altura >= 1.7 || idade >= 16) {
        brinquedosPermitidos++;
    }

    printf("A pessoa pode andar em %d brinquedos.\n", brinquedosPermitidos);

    return 0;
}
