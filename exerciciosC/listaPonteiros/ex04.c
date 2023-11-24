#include <stdio.h>

#define MAX 255

int main(){

    char str[MAX],caractere, *ptr = str;
    int count = 0;

    printf("Digite uma string: ");
    fgets(str, MAX, stdin);

    printf("Digite um caractere:");
    scanf("%c",&caractere);

    for (int i = 0; *(ptr+i) != '\0'; i++)
    {
        if (*(ptr+i) == caractere)
        {
            printf("encontrei o caractere [%c] no indice: [%d\n]",caractere,i);
            count++;
        }
        
    }

    if (count == 0)
    {
        printf("-1\n");

    }
    
    return 0;
}