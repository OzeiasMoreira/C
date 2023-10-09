#include <stdio.h>
#include <string.h>

int espaçoBranco(const char * string) {

    int contador = 0;
    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            contador++;
        }
        
    }
    
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    fgets(string,sizeof(string), stdin);

    string[strlen(string) - 1] = '\0';

    int quantidadeEspaços = espaçoBranco(string);

    printf("Quantidade de espaços em branco: %d\n", quantidadeEspaços);

    return 0;
}