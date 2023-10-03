#include <stdio.h>

float calcularMedia(float n1, float n2, char opcao) {
    float media;

    switch (opcao) {
        case 'a': // Média aritmética
            media = (n1 + n2) / 2;
            break;
        case 'p': // Média ponderada (pesos 3 e 2)
            media = (3 * n1 + 2 * n2) / 5;
            break;
        case 'h': // Média harmônica
            media = 2 / ((1 / n1) + (1 / n2));
            break;
        default:
            printf("Opção inválida!\n");
            return -1;
    }

    return media;
}

int main() {
    float n1, n2;
    char opcao;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a opção (a: média aritmética, p: média ponderada, h: média harmônica): ");
    scanf(" %c", &opcao);

    float media = calcularMedia(n1, n2, opcao);

    if (media != -1) {
        printf("A média é: %.2f\n", media);
    }

    return 0;
}