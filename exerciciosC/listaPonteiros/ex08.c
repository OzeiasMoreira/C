#include <stdio.h>

#define FRASE "Odeio programar em C"

int main(){
    char * pt = FRASE;

    for (int i = 0; *(pt) != 'g'; i++)
    {
        pt++;

        while (*pt != '\0')
        {
            printf("%c", *pt);
            pt++;
        }
        
    }

    return 0;
    
}