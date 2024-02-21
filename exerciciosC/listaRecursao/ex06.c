// Implemente uma fun ̧c ̃ao recursiva para calcular a soma dos elementos de um array. Por exemplo, se o array dado for:
// int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10} a resposta deve ser 55

#include <stdio.h>

int somaArray(int array[],int tam){

    if (tam == 0){

        return 0;
    } else {

        return array[tam - 1] + somaArray(array,tam - 1);
    }
}

int main(){

    int array[10] = {1,2,3,4,5,6,7,8,9,10};
    int tam = 10;

    int resultado = somaArray(array, tam);

    printf("A soma dos elementos é: %d",resultado);

    return 0;
}