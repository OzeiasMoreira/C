#include <stdio.h>

float calcularIMC(float peso, float altura ) {

    return peso /(altura * altura);
}

void classificarIMC(float IMC) {

    if (IMC < 18.5)
    {
        printf("Abaixo do peso. \n");
    }

    else if (18.5 <= IMC <= 24.9)
    {
        printf("Peso normal. \n");
    }

    else if (25 <= IMC <= 29.9)
    {
        printf("Sobrepeso. \n");
    }

    else 
    {
        printf("Obeso. \n");
    }
    
    
}

int main()
{
    float peso, altura;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    float IMC = calcularIMC(peso, altura); 

    printf("IMC: %.2f\n", IMC);

    printf("Classificação: ");
    classificarIMC(IMC);


    return 0;
}
