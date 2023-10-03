#include <stdio.h>

int main()
{
    int idade, totalMenores18 = 0, totalMaiores30 = 0;

    printf("Digite a idade das pessoas(digite 0 para encerrar): \n");

    while (1)
    {
        printf("Idade: ");
        scanf("%d", &idade);

        if (idade == 0)
        {
            break;
        }

        else if (idade < 18)
        {
            totalMenores18++;
        }

        else if (idade > 30)
        {
            totalMaiores30++;
        }
        
        
        
    }

    printf("Total de pessoas com menos de 18 anos: %d\n", totalMenores18);
    printf("Total de pessoas com mais de 30 anos: %d\n", totalMaiores30);
    

    return 0;
}
