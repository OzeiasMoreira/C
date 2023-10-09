#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int contarVogal(char * str);

int main() {

    char frase[100];
    int contador = 0;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    for (int i = 0; i < contador; i++)
    {
        if ((frase[i] == 'a') || (frase[i] == 'e') || (frase[i] == 'i') || (frase[i] == 'o') || (frase[i] == 'u')
        || (frase[i] == 'A') || (frase [i] == 'E') || (frase[i] == 'I') ||(frase[i] == 'O') || (frase[i] == 'U'))
        {
            contador++;
        }
        
    }
    
}

int contarVogal(char * str) {

    printf("Numero de vogais: \n", contarVogal);

    getchar();
}