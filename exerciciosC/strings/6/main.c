#include <stdio.h>

int main() {

    char string[1000], ch;
    int contador = 0;

    printf("Informe os caracteres:");
    fgets(string, sizeof(string), stdin);

    printf("Informe o caractere que deseja buscar: ");
    scanf("%c" ,&ch);

    for (int i = 0; i < string[i] != '\0'; i++)
    {
        if (ch == string[i])
        {
            contador++;
        }
        
    }

    printf("Quantidade de %c = %d", ch,contador);

    return 0;
    

}