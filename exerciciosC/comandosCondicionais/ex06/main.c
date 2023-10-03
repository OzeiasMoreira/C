#include <stdio.h>

int main() {
    int codigoProduto;
    int quantidade;
    float valorTotal;
    float valorDesconto = 0.15;  // 15% de desconto
    float precoProduto;

    printf("Digite o código do produto (1 a 4): ");
    scanf("%d", &codigoProduto);

    printf("Digite a quantidade comprada: ");
    scanf("%d", &quantidade);

    // Verifica o preço do produto com base no código
    switch (codigoProduto) {
        case 1:
            precoProduto = 5.3;
            break;
        case 2:
            precoProduto = 6.0;
            break;
        case 3:
            precoProduto = 3.2;
            break;
        case 4:
            precoProduto = 2.5;
            break;
        default:
            printf("Código de produto inválido.\n");
            return 0;
    }

    // Calcula o valor total sem desconto
    valorTotal = precoProduto * quantidade;

    // Verifica se o desconto é aplicável
    if (quantidade >= 15 || valorTotal >= 40.0) {
        valorTotal -= valorTotal * valorDesconto;
    }

    printf("O valor a pagar é: R$ %.2f\n", valorTotal);

    return 0;
}

