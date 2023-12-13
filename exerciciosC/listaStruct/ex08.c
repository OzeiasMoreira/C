#include <stdio.h>

#define MAX 44

struct data{
    int dia;
    int mes;
    int hora;
    int minuto;
};

struct registro{
    int numeroPassagem;
    struct data data;
    char origem[255];
    char destino[255];
    int poltrona;
    int idade;
    char nomePassageiro[255];
};

int main(){
    struct registro registros[MAX];

    printf("-=-=-=-=-=-= [FICHA DE REGISTRO] =-=-=-=-=-=-");
    for(int i = 0; i < MAX; i++){
        printf("\n----------------- [FICHA %d] -----------------",i);
        printf("\n([-1] para encerrar) Digite o numero da passagem: ");
        scanf("%d",&registros[i].numeroPassagem);

        if(registros[i].numeroPassagem == -1){
            printf("\nEncerrando.\n");
            break;
        }

        setbuf(stdin,NULL);

        printf("\nDigite a origem: ");
        fgets(registros[i].origem,255,stdin);

        printf("\nDigite o destino:  ");
        fgets(registros[i].destino,255,stdin); 

        printf("\nDigite o dia da passagem: (formato [dd/mm]) ");
        scanf("%d/%d",&registros[i].data.dia,&registros[i].data.mes);

        printf("\nDigite o horario da passagem: (formato [hh:mm]) ");
        scanf("%d:%d",&registros[i].data.dia,&registros[i].data.mes);

        printf("\nDigite a poltrona: ");
        scanf("%d",&registros[i].poltrona);

        printf("\nDigite a idade: ");
        scanf("%d",&registros[i].idade);

        setbuf(stdin,NULL);

        printf("\nDigite o nome do passageiro: ");
        fgets(registros[i].nomePassageiro,255,stdin);
        printf("\n---------------------------------------------\n");
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-");

    //obter média das idades
    float media = 0;
    for(int i = 0; i < MAX; i++){
        media+= registros[i].idade;
    }
    media = media/MAX;

    printf("\n\nMedia das idades: %.2f",media);

    printf("\nNome dos passageiros com idade acima da média sentados em poltronas pares:\n");
    for(int i = 0; i < MAX; i++){
        if(registros[i].idade > media && registros[i].poltrona % 2 == 0){
            printf("%s",registros[i].nomePassageiro);
        }
    }

    return 0;
}