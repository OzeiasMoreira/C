#include <stdio.h>

#define DIARIA 30.00
#define PRECO_KM 0.01
#define DESCONTO 0.10

int main() {
    int dias;
    int quilometros;
    float valorTotal;

    printf("Digite a quantidade de dias que o carro foi alugado: ");
    scanf("%d", &dias);

    printf("Digite a quantidade de quilômetros rodados: ");
    scanf("%d", &quilometros);

    valorTotal = (dias * DIARIA) + (quilometros * PRECO_KM);
    valorTotal -= valorTotal * DESCONTO;

    printf("Valor total a ser pago: R$%.2f\n", valorTotal);

    return 0;
}
