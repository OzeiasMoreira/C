#include <stdio.h>

int main() {
    float x, y;
    int opcao;
    float resultado;

    printf("Digite o valor de x: ");
    scanf("%f", &x);

    printf("Digite o valor de y: ");
    scanf("%f", &y);

    printf("Escolha a operação:\n");
    printf("1 - Soma\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            resultado = x + y;
            printf("Resultado da soma: %.2f\n", resultado);
            break;
        case 2:
            resultado = x - y;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = x * y;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (y != 0) {
                resultado = x / y;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: divisão por zero.\n");
            }
            break;
        default:
            printf("Opção inválida.\n");
            return 0;
    }

    return 0;
}
