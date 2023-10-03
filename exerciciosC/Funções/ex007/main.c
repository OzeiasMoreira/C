#include <stdio.h>

void mostrarTabuada(int num) {

    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i,num * i);
    }
    
}

int main() {

    int num;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    mostrarTabuada(num);

    return 0;
}

