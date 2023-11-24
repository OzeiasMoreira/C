#include <stdio.h>

int main(){

    int x,y = 27;
    int *pt1 = &x;
    int *pt2 = &y;
    int **pt = *pt1;
    **pt = pt2;

    (*pt2)++;

    x--;

    printf("%d %d\n",*pt1,*pt2);

    (**pt) += --(*pt2);

    printf("%d\n",**pt);
    printf("%d %d\n",x,y);
    printf("%d\n",pt1 == &y);
    printf("%d\n", &x != pt2);

    return 0;

}