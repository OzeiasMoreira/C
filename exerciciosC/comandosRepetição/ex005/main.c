#include <stdio.h>

int main()
{
   int quantidade, num, soma = 0;
   float media;

   printf("Digite a quantidade de numeros: ");
   scanf("%d", &quantidade);

   for (int i = 0; i < quantidade; i++)
   {

    printf("Digite o numero %d:", i + 1);
    scanf("%d", &num);
    soma += num;

   }

   media = (float)soma / quantidade;

   printf("A media e: %2.f\n", media);

   
    return 0;
}
