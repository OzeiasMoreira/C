//Implemente uma fun ̧c ̃ao recursiva que retorne verdadeiro quando a string dada  ́e um palındromo.

#include <stdio.h>
#include <string.h>

int palindromo(char * str){

    int interna(char * s,int i,int tam,int teste){

        if (tam == -1)
        {
            if(teste) return 1;
            return teste;
        }

        if(s[i]) =! s[tam]{

            teste++;
            return 0;
        }

        interna(s,i + 1,tam - 1,teste);
        
    }

    int t = strlen(str);
    interna(str,0,t - 1,0);
}