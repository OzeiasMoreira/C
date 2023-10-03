#include <stdio.h>

int verificarVogal(char letra) {
    if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u') {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (verificarVogal(letra)) {
        printf("A letra %c é uma vogal.\n", letra);
    } else {
        printf("A letra %c não é uma vogal.\n", letra);
    }

    return 0;
}





