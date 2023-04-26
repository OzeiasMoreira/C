#include <stdio.h>
#include <math.h>

int main()
{
    int x1,x2,y1,y2;
    float distancia;
    scanf("%i %i %i %i", &x1, &x2, &y1, &y2);

    distancia= sqrt( pow(x2-x1, 2)+pow(y2-y1, 2));

    printf("%f", distancia);
    return 0;
}
