#include <stdio.h>
#include <math.h>

double calcularPotencia(int x,int n) {

    return pow(x, n);
}

int main() {

    int x, n;

    printf("Digite o numero base: ");
    scanf("%d", &x);

    printf("Digite o expoente: ");
    scanf("%d", &n);

    double potencia = calcularPotencia(x, n);

    printf("O resultado da potencia é: %.2lf\n", potencia);

    return 0;
}