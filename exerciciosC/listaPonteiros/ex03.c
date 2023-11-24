#include <stdio.h>

int main(){

    int x = 10,y = 5;
    int *ptr1 = x;
    int *ptr2 = y;

    y = (*ptr2);
    printf("%d",*ptr2);

    return 0;
}