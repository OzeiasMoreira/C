#include <stdio.h>

int main() {
    int numeroFuncionario;
    float horasTrabalhadas, valorHora, salario;

    printf("Digite o número do funcionário: ");
    scanf("%d", &numeroFuncionario);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horasTrabalhadas);

    printf("Digite o valor recebido por hora: ");
    scanf("%f", &valorHora);

    salario = horasTrabalhadas * valorHora;

    printf("Número do funcionário: %d\n", numeroFuncionario);
    printf("Salário do funcionário: R$%.2f\n", salario);

    return 0;
}
