int main() {
    float valor, valorConvertido;
    int opcao;

    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);

    printf("\n1 - Converter de real para dolar\n2 - Converter de dolar para real\n");
    scanf("%d", &opcao);

    switch(opcao){
    case 1:// Converter de real para dolar
        valorConvertido = valor / 5.3;
        printf("Valor convertido: $%.2f\n", valorConvertido);
        break;
    case 2:// Converter de dolar para real
        valorConvertido = valor * 5.3;
        printf("Valor convertido: R$%.2f\n", valorConvertido);
        break;
    case 3:// Converter de real para euro
        valorConvertido = valor / 5.5;
        printf("Valor convertido: €%.2f\n", valorConvertido);
        break;
    case 4:// Converter de euro para real
        valorConvertido = valor * 5.5;
        printf("Valor convertido: R$%.2f\n", valorConvertido);
        break;
    default:
        printf("\nOpcao invalida!!!\n");
    }
    printf("Valor convertido: %.2f\n", valorConvertido);
}