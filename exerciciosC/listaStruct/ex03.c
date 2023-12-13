#include <stdio.h>
#include <string.h>

typedef struct {

    char idade[100];
    char nome[100];
    char sexo[100];
    char estadoCivil[100];
    char quantidadeAmigos[100];
    char quantidadeSeguidores[100];            
} Dados;

int main() {

    Dados dados[100];
    int tamanho,n;
    char opcao;

    printf("insira quantos dados deseja armazenar:");
    scanf("%d",&n);
    printf("\n");

    for ( tamanho = 0; tamanho < n; tamanho++)
    {
        printf("idade:");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].idade,100,stdin);
        printf("nome:");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].nome,100,stdin);
        printf("sexo:Masculino(m),Feminino(f):");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].sexo,100,stdin);
        printf("estado civil:Solteiro(s), Casado(c), Namorando(n),Divorciado(d):");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].estadoCivil,100,stdin);
        printf("quantidade amigos:");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].quantidadeAmigos,100,stdin);
        printf("quantidade seguidores:");
        setbuf(stdin,NULL);
        fgets(dados[tamanho].quantidadeSeguidores,100,stdin);
        
        printf("\n");
    
    }
    

    return 0;
}