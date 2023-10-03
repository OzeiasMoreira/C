#include <stdio.h>

int main() {

    int tamanho = 100;
    int idades[tamanho];
    int idade;
    int totalMenor18 = 0;
    int totalMaior30 = 0;

    printf("Digite as idades(o p/ encerrar):");

    int i = 0;
    while (1)
    {
        scanf("%d", &idade);

        if (idade = 0)
        {
            break;
        }

        idades[i] = idade;
        i++;

        if (idade < 18)
        {
            totalMenor18++;
        } else if (idade > 30) {

            totalMaior30++;
        }
        
    }

    printf("Total de pessoas com menos de 18 anos: %d\n", totalMenor18);
    printf("Total de pessoas com mais de 30 anos: %d\n", totalMaior30);

    return 0;
    
}