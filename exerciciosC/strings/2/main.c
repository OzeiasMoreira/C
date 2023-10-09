#include <stdio.h>
#include <string.h>

void criptografarString(char * string) {

    for (int i = 0; i < strlen(string); i++)
    {
        char c = string[i];
        if (c >= 'a' && c <= 'z')
        {
            c -= 3;
            if (c < 'a')
            {
                c += 26;
            }
            
        } else if (c >= 'A' && c <= 'Z')
        {
            c -= 3;
            if (c < 'A')
            {
                c += 26;
            }
            
        }

        string[i] = c;
        
        
    }
    
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);

    string[strlen(string) - 1] = '\0';

    criptografarString(string);

    printf("string criptografada: %s\n", string);

    return 0;
}