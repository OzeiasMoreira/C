#include <stdio.h>

int main() {
    float salarioAtual, salarioReajustado;
    char cargo;

    printf("Digite o salário atual: R$ ");
    scanf("%f", &salarioAtual);

    printf("Digite o cargo do funcionário (A, B, C ou D): ");
    scanf(" %c", &cargo);

    switch (cargo) {
        case 'A':
            salarioReajustado = salarioAtual * 1.1;  // 10% de aumento
            break;
        case 'B':
            salarioReajustado = salarioAtual * 1.07;  // 7% de aumento
            break;
        case 'C':
            salarioReajustado = salarioAtual * 1.12;  // 12% de aumento
            break;
        case 'D':
            salarioReajustado = salarioAtual * 1.11;  // 11% de aumento
            break;
        default:
            printf("Cargo inválido.\n");
            return 0;
    }

    printf("Valor do reajuste: R$ %.2f\n", salarioReajustado - salarioAtual);
    printf("Salário atualizado: R$ %.2f\n", salarioReajustado);

    return 0;
}
