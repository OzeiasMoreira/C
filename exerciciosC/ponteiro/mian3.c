#include <stdio.h>

int main(){

    int x = 5;
    int *p;
    int **pp;
    int ***ppp;

    p = &x;
    pp = &p;
    ppp = &pp;

    printf("%d\n",ppp);
    printf("%d\n",*ppp);
    printf("%d\n",**ppp);
    printf("%d\n",***ppp);
    
    return 0;

}