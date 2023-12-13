    #include <stdio.h>
    #include <string.h>


    typedef  struct 
        {
            int quantidadePersonagens;
            int quantidadeMonstros;
        }Quantidades;

    typedef struct 
    {
        char nickname[20];
        int id;
        int level;
        int vida;
        int ataque;
        int defesa;
    }Dados ;

    int main() {

        Quantidades quantidades;
        Dados dados;
        

        printf("insira a quantidade de personagens:");
        scanf("%d",&quantidades.quantidadePersonagens);
        printf("insira a quantidade de monstros:");
        scanf("%d",&quantidades.quantidadeMonstros);

        printf("\n");

        printf("Crie seu nickname:");
        setbuf(stdin,NULL);
        fgets(dados.nickname,20,stdin);

        if (dados.nickname > 20)
        {
            printf("O nome ultrapassa o limite de caracteres! ");
            return dados.nickname;
        }

        else {

            return 0;
        }

        printf("insira sua ID:");
        scanf("%d",&dados.id);
        printf("insira seu level:");
        scanf("%d",&dados.level);
        printf("insira seus pontos de ataque:");
        scanf("%d",&dados.ataque);
        printf("insira seus pontos de defesa:");
        scanf("%d",&dados.defesa);
    
        return 0;
    }