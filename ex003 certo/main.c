#include <stdio.h>

int main()
{
    float preço, taxaDolar, taxaEuro, preçoDolar, preçoEuro;

       scanf("%f", &preço);
       scanf("%f", &taxaDolar, &taxaEuro);

       preçoDolar = preço * taxaDolar;
       preçoEuro = preço * taxaEuro;
       
       printf("\nPreço em dolar = %,2f\n", preçoDolar, preçoEuro);
       
    return 0;
}
