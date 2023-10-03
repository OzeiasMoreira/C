#include <stdio.h>

int converterSegundos(int horas, int minutos, int segundos) {

    int totalSegundos = horas * 3600 + minutos * 60 + segundos ;
    return totalSegundos;
}

int main() {

    int horas, minutos, segundos;

    printf("Digite a hora no formato horas,minutos e ssegundos: ");
    scanf("%d%d%d", &horas, &minutos, &segundos);

    int totalSegundos = converterSegundos(horas ,minutos , segundos);

    printf("O valor em segundos é: %d\n", totalSegundos);

    return 0;
}