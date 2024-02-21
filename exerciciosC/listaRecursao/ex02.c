//Altere a fun ̧c ̃ao recursiva do exerc ́ıcio 1 de modo que o programa imprima todos os n ́umeros
//pares de 0 at ́e n em ordem crescente.

#include <stdio.h>

int sequenciaParCresc (int n){

    if(n < 0) {

        return 0;
    }

    2 + sequenciaParCresc(n - 2);
    printf("%d",n);
}

int sequenciaParSig(int n){

    if(n < 0){

        return -1 * sequenciaParCresc(n);
    }

    return sequenciaParCresc(n);
}   

