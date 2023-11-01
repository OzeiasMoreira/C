#include <stdio.h>

int main() {

    char letra = 'c';
    char *pChar = &letra;
    char **ppChar = &pChar;
    char ***pppChar = &ppChar;
    char ****ppppChar = pppChar;

    printf("%c\n", *pChar);
    printf("%c\n", **ppChar);
    printf("%c\n", ***pppChar);
    printf("%c\n", ****ppppChar);
    
    return 0;
}