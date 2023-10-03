#include <stdio.h>

int main() {

    int numerator = 1;
    float denominator = 1;
    float num = 0;

    for (int i = 1; i <= 50; i++) {

        num += numerator / denominator;
        numerator += 2;
        denominator ++;

    }

    printf("Valor de S: %.2f\n", num);

    return 0;
}