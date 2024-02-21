//Implemente uma fun ̧c ̃ao recursiva que receba dois n ́umeros inteiros x e n e calcule o valor de xn


#include <stdio.h>

int pontenciaX(int x,int n){

    if(n == 1){

        return x;
    }

    return x * pontenciaX(x, n - 1);
}

int main(){

    int x,n;

    printf("Insira um numero inteiro:");
    scanf("%d",&x);
    printf("valor da potencia:");
    scanf("%d",&n);

    int potencia = pontenciaX(x,n);

    printf("resultado:%d",potencia);

    return 0;
}