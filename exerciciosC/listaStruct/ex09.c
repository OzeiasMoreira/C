#include <stdio.h>
#include <string.h>

struct jogo{

    char nome[255];
    char genero[255];
    char modoDeJogo[255];
    char plataformaSuportada[255];
    int ranking;

};

void inserir (int numero, struct jogo *jogos){
    for(int i = 0; i < numero; i++){
        printf("\n-=-=-=-=-=-=-=-=-=-= [Jogo %d] =-=-=-=-=-=-=-=-=-=-\n",i);
        setbuf(stdin,NULL);
        printf("Digite o nome do jogo: ");
        fgets(jogos[i].nome,255,stdin);

        printf("\nDigite o genero do jogo: ");
        fgets(jogos[i].genero,255,stdin);

        printf("\nDigite o modo de jogo: ");
        fgets(jogos[i].modoDeJogo,255,stdin);

        printf("\nDigite a plataforma do jogo: ");
        fgets(jogos[i].plataformaSuportada,255,stdin);
        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
    }
}

void ler (int numero, struct jogo *jogos){
    for(int i = 0; i < numero; i++){
        printf("\n--------------------------------------------------");
        printf("\nNome do jogo: %s",jogos[i].nome);
        printf("Digite o genero: %s",jogos[i].genero);
        printf("Digite o modo de jogo: %s",jogos[i].modoDeJogo);
        printf("Digite a plataforma do jogo: %s",jogos[i].plataformaSuportada);
        printf("--------------------------------------------------\n");
    }
}

void encontrarGenero (int numero, char * genero, struct jogo *jogos){
    printf("\n--------------------------------------------------");
    printf("\n-> Genero: %s",genero);
    for(int i = 0; i < numero; i++)
        if(strcmp(genero,jogos[i].genero) == 0)
            printf("\n- %s",jogos[i].nome);
    printf("--------------------------------------------------\n");
}

void classificar(int numero, struct jogo * jogos){
    int maiorNota = 0;

    printf("\n------------------ [Classificar] -----------------");
    for(int i = 0; i < numero; i++){
        int nota;

        while(1){
            printf("\n\nNome: %s",jogos[i].nome);
            printf("[De 1 a 5] Nota: ");
            scanf("%d",&nota);
            if (nota >= 1 && nota <= 5){
                break;
            }else{
                printf("\nNota inválida");
            }
        }
        jogos[i].ranking = nota;
        maiorNota = (jogos[i].ranking > maiorNota) ? jogos[i].ranking : maiorNota;
    }
    printf("\n--------------------------------------------------\n");

    printf("\nJogos com maior nota (%d):\n",maiorNota);
    for(int i = 0; i < numero; i++){
        if(jogos[i].ranking == maiorNota)
            printf("%s",jogos[i].nome);
    }
}

int entreFavoritos(int numero, char * nome, struct jogo * jogos){
    int maiorNota = 0;

    for(int i = 0; i < numero; i++){
        maiorNota = (maiorNota < jogos[i].ranking) ? jogos[i].ranking : maiorNota;
    }

    for(int i = 0; i < numero; i++){
        if(strcmp(nome,jogos[i].nome) == 0 && jogos[i].ranking == maiorNota){
            return 1;
        }
    }

    return 0;
}

int main(){
    int numero;

    printf("\nNumero de jogos a serem cadastrados: ");
    scanf("%d",&numero);

    struct jogo jogos[numero];

    inserir(numero,jogos);

    ler(numero,jogos);

    char genero[255];

    printf("\nDigite um genero: ");
    setbuf(stdin,NULL);
    fgets(genero,255,stdin);

    encontrarGenero(numero,genero,jogos);

    classificar(numero, jogos);

    char nome[255];

    setbuf(stdin,NULL);
    printf("\nDigite o nome de um jogo. Verificarei se está entre os jogos com maiores notas: ");
    fgets(nome,255,stdin);

    if(entreFavoritos(numero, nome, jogos)){
        printf("\nO jogo está entre os favoritos\n");
    } else {
        printf("\nO jogo não está entre os favoritos\n");
    }

    return 0;
}