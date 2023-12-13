#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct{

    char nomeLoja[MAX];
    char endereco[MAX];
    char telefone[MAX];
    float preçoProduto;
} Cadastro;

float calcularMedia(int tamanho,Cadastro *c) {

    float soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += c[i].preçoProduto;

    }
    return soma / tamanho;
}

int main() {

    Cadastro cadastro[100];
    int tamanho;
    float media;
    char opcao;
    
    for (tamanho = 0; tamanho < 100; tamanho++)
    {
        printf("Digite o nome da Loja:");
        setbuf(stdin,NULL);
        fgets(cadastro[tamanho].nomeLoja,MAX,stdin);
        printf("Digite o endereço da loja:");
        setbuf(stdin,NULL);
        fgets(cadastro[tamanho].endereco,MAX,stdin);
        printf("Digite o telefone:");
        setbuf(stdin,NULL);
        fgets(cadastro[tamanho].telefone,MAX,stdin);
        printf("Insira o preço de um produto:");
        scanf("%f",&cadastro[tamanho].preçoProduto);
        printf("vc quer continuar cadastrando lojas?");
        setbuf(stdin,NULL);
        scanf("%c",&opcao);
        
        if(opcao != 's'){
            break;
        }
        printf("\n");
    }

    media = calcularMedia(tamanho + 1,cadastro);
    printf("A media dos produtos é:%f",media);
    
    return 0;
} 