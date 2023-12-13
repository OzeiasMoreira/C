#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char * frase,* fraseInversa;
    int tamanho,indice;

    printf("Insira o tamanho da frase:");
    scanf("%d",&tamanho);

    tamanho += 2;

    frase = (char *)malloc((tamanho) * sizeof(char));
    fraseInversa = (char *)malloc((tamanho) * sizeof(char));

    printf("Insira a frase:");
    setbuf(stdin,NULL);
    fgets(frase,tamanho,stdin);

    for (int i = 0; i < tamanho; i++)
    {
        if (frase[i] == '\0')
        {
            indice = i;
            break;
        }
        
    }

    for (int i = 0; i < tamanho; i++)
    {
        fraseInversa[i] = frase[indice - 2 -i];
    }

    printf("Frase inversa:  %s",fraseInversa);

    return 0;

}