#include <stdio.h>

int main()
{
    int numPremiado = 57;
    int palpite;

    printf("Bem vindo ao cassino! \n");

    while (1)
    {
        printf("Digite um numero: ");
        scanf("%d", &palpite);

        if (palpite == numPremiado) 
        {
            printf("Parabéns vc é o vencedor! \n");
            break;
        } 

        else if (palpite < numPremiado)
        {
           printf("Incorreto! O numero é maior que %d\n", palpite);
        }

        else {

            printf("Incorreto! O numero é menor que %d\n", palpite);
        }
        
        
    }
    
    return 0;
}
