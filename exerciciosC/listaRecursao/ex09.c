//Implemente uma fun ̧c ̃ao recursiva que mostre o maior elemento de um array de inteiros. O prototipo da fun ̧c ̃ao recursiva  ́e a seguinte:

#include <stdio.h>

int maior(int v[],int tam,int indice){

    if (tam  == 0){

        return v[indice];   
    } else {

        if(v[tam - 1] > v[indice]){
            return maior(v, tam - 1,tam - 1);
        }
            
        else {
            return maior(v,tam - 1,indice);
        }    
            
    }
}

int main(){

    int vet[10] = {937,842,464,128,237,109,715,56,9,10};

    printf("Maior: %d",maior(vet,10,0));

    return 0;
}