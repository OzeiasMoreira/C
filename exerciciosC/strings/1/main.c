#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter(char vet[]) {

    int aux, fim, tam = strlen(vet);
    fim = tam - 1;

    for (int i = 0; i < tam/2; i++)
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
    

}
int main() {

    char palavra[25] = ("Programa em C");

    inverter(palavra);
    printf("%s\n", palavra);

    inverter(palavra);
    printf("%s\n", palavra);

    return 0;


}