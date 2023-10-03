#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "");

    int x, y;
    int operacao;
    int soma;
    int subtracao;
    int multiplicação;
    int divisão;

    printf("digite dois numeros: \n");
    scanf("%i%i", &x, &y);

    printf("digite 1(soma) 2(subtração) 3(multiplicação) 4(divisão): \n");
    scanf("%i", &operacao);

    switch(operacao){
    case 1:
    soma = x + y;
    printf("resultado: %i", soma);

    break;

    case 2:
    subtracao = x - y;
    printf("resultado: %i", subtracao);

    break;

    case 3:
    multiplicação = x * y;
    printf("resultado: %i",multiplicação);

    break;

    case 4:
    divisão = x / y;
    printf("resultado: %i", divisão);
    
    break;

    }
}