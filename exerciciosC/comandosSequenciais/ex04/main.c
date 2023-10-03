#include <stdio.h>

int main() {
    float valorGasto, valorTotal;

    printf("Digite o valor gasto pelo cliente: ");
    scanf("%f", &valorGasto);

    valorTotal = valorGasto + (valorGasto * 0.1);

    printf("Valor total a ser pago (com 10%% do garçom): R$%.2f\n", valorTotal);

    return 0;
}
