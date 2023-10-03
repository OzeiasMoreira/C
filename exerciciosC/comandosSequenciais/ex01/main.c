#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float formulaA, formulaB, formulaC, formulaD;

    printf("Digite o valor de a: ");
    scanf("%f", &a);

    printf("Digite o valor de b: ");
    scanf("%f", &b);

    printf("Digite o valor de c: ");
    scanf("%f", &c);

    formulaA = (a * b) / c;
    formulaB = pow(a, 2) + b + (5 * c);
    formulaC = (a * b * c) + b + pow(c, 3) * 5 - 1;
    formulaD = pow((a * b * c), 3.2);

    printf("Resultado da fórmula a: %.2f\n", formulaA);
    printf("Resultado da fórmula b: %.2f\n", formulaB);
    printf("Resultado da fórmula c: %.2f\n", formulaC);
    printf("Resultado da fórmula d: %.2f\n", formulaD);

    return 0;
}
