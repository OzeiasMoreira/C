//A multiplica ̧c ̃ao de dois n ́umeros inteiros pode ser feita atrav ́es de somas sucessivas. Implemente
//uma fun ̧c ̃ao recursiva que calcule a multiplica ̧c ̃ao de dois inteiros usando essa ideia.

#include <stdio.h>

int mulRecursiva(int x,int y){

    if (x == 0 || y == 0){

        return 0;
    } 

    if (y == 1) {

        return x;
    }

    return x + mulRecursiva(x,y - 1);
}

int main(){

    int x , y;

    printf("insira um numero inteiro:");
    scanf("%d",&x);
    printf("insira outro numero inteiro:");
    scanf("%d",&y);

    int multiplicacao = mulRecursiva(x,y);

    printf("Resultado: %d",multiplicacao);

    return 0;
}