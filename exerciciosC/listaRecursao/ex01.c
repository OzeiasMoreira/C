//Implemente uma funcao recursiva que receba um n ́umero inteiro positivo par n e imprima 
//todos os n ́umeros pares de 0 at ́e n em ordem decrescente.

#include <stdio.h>

int sequenciaParDecre(int n) {

    if(n == 0){

        printf("%d",0);
        return 0;
    }

    if(n % 2 == 0){

        printf("%d",n);
    }

    sequenciaParDecre(n - 1);

}

int sequenciaParDecreSig(int n){

    if(n < 0){

        return -1 * sequenciaParDecre(n);
    }

    return sequenciaParDecre(n);
}