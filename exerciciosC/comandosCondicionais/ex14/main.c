#include <stdio.h>

int main() {
    float trajeto, consumo;
    char tipoVeiculo;

    printf("Digite o trajeto percorrido em km: ");
    scanf("%f", &trajeto);

    printf("Digite o tipo do veículo (A, B ou C): ");
    scanf(" %c", &tipoVeiculo);

    if (tipoVeiculo == 'A') {
        consumo = trajeto / 15;
    } else if (tipoVeiculo == 'B') {
        consumo = trajeto / 12;
    } else if (tipoVeiculo == 'C') {
        consumo = trajeto / 10;
    } else {
        printf("Tipo de veículo inválido.\n");
        return 0;
    }

    printf("O consumo estimado de combustível é de: %.2f litros\n", consumo);

    return 0;
}
