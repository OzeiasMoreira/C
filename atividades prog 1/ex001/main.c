#include <stdio.h>
#include <stdlib.h>

#define pi 3.14

int main()
{   float r;
    printf("Informe o valor do raio: \n");
    scanf("%f", &r);

    printf("O valor do raio foi de:%0.2f", pi*(r*r));
    
}
