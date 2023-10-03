#include <stdio.h>
#include <math.h>

void calcularRaizes(float a, float b, float c) {
    if (a == 0) {
        printf("Não é uma equação de segundo grau.\n");
        return;
    }

    float delta = b * b - 4 * a * c;

    if (delta > 0) {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("As raízes são: %.2f e %.2f\n", x1, x2);
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("A raiz dupla é: %.2f\n", x);
    } else {
        float realPart = -b / (2 * a);
        float imagPart = sqrt(-delta) / (2 * a);
        printf("As raízes são complexas: %.2f + %.2fi e %.2f - %.2fi\n", realPart, imagPart, realPart, imagPart);
    }
}

int main() {
    float a, b, c;

    printf("Digite o coeficiente a: ");
    scanf("%f", &a);

    printf("Digite o coeficiente b: ");
    scanf("%f", &b);

    printf("Digite o coeficiente c: ");
    scanf("%f", &c);

    calcularRaizes(a, b, c);

    return 0;
}

