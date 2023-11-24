#include <stdio.h>

int main(){

    int vet1[] = {1,2,3,4,5,6,7};
    int vet2[] = {1,2,3,4,5,6,7};

     int *pt1 = vet1;
     int *pt2 = vet1 + 3;
     int *pt3 = vet2 + 5;

     (*pt1)++;
     (*pt2)++;
     (*pt3)--;

     printf("vet[0]: %d, vet1[3]: %d\n" ,vet1[0],vet1[3]);
     printf("vet2[0]: %d,vet2[5]: %d\n", vet2[0],vet2[5]);

     return 0;
}