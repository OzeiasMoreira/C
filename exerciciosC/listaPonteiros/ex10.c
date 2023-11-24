#include <stdio.h>

#define MAXSIZE 4

int main(){

    int matrix[MAXSIZE][MAXSIZE], *pt = &matrix[0][0];

    for (int i = 0; i < MAXSIZE*MAXSIZE; i++)
    {
        printf("Digite o elemento numero [%d]: ",i+1);
        scanf("%d",(pt+1));
    }

    int x,count = 0;
    printf("Digite um valor inteiro:");
    scanf("%d",(ptr+i));
    
}

pt = &matrix[0][0];

for (int i = 0; i < MAXSIZE*MAXSIZE; i++)
{
    if (*(pt+i) == x)
    {
       count++;
    }

printf("O Numero [%d] aparece [%d] vezes na matrix"x,count);

return 0;
    
}
