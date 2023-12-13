#include <stdio.h>

#define MAXCHAR 255

struct produto{
    int codigo;
    char descricao[MAXCHAR];
    float preco;
    int quantidade;
};

#include <stdio.h>

int verificarPedido (int n, int codigo, int quantidade, struct produto * produtos){

    if (quantidade <= 0)
        return 0;

    for(int i = 0; i < n; i++)
        if(produtos[i].codigo == codigo)
            return 1;

    return 0;
}

int encontrarPosicao(int n, int codigo, struct produto * produtos){
    for(int i = 0; i < n; i++)
        if(produtos[i].codigo == codigo)
            return i;
    return 0;
}

int main(){
    int n;

    printf("\nDigite a quantidade de produtos que você deseja cadastrar: ");
    scanf("%d",&n);

    struct produto produtos[n];

    for(int i = 0; i < n; i++){
        printf("\n-=-=-=-=-= [PRODUTO %d] =-=-=-=-=-\n",i);
        printf("\nDigite o codigo do produto: ");
        scanf("%d",&produtos[i].codigo);

        setbuf(stdin,NULL);

        printf("\nDigite a descrição do produto: ");
        fgets(produtos[i].descricao,MAXCHAR,stdin);

        printf("\nDigite o preço do produto: ");
        scanf("%f",&produtos[i].preco);

        produtos[i].quantidade = 0;

        printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    }

    int codigo, quantidade;

    while(1){
        printf("\n([0] para encerrar) Digite o codigo do produto que deseja comprar: ");
        scanf("%d",&codigo);

        if(codigo == 0){
            printf("\nEncerrando.\n");
            break;
        }

        printf("\nDigite a quantidade do produto que deseja comprar: ");
        scanf("%d",&quantidade);

        if(verificarPedido(n, codigo, quantidade, produtos)){
            produtos[encontrarPosicao(n, codigo, produtos)].quantidade += quantidade;
        } else {
            printf("\nPedido inválido.\n");
        }
    }

    float total = 0;

    printf("-=-=-=-=-=-=-=-=-=-=-= [PEDIDO] =-=-=-=-=-=-=-=-=-=-=-");
    for(int i = 0; i < n; i++){
        printf("\nCodigo: %d | Descrição: %s",produtos[i].codigo, produtos[i].descricao);
        printf("Quantidade: %d | Preço: R$%.2f\n-> Valor Total: R$%.2f\n",produtos[i].quantidade, produtos[i].preco,produtos[i].quantidade * produtos[i].preco);
        total += produtos[i].quantidade * produtos[i].preco;
    }
    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    printf("\n-=-=-=-=-=-=-=-=- [TOTAL A SER PAGO] -=-=-=-=-=-=-=-=-");
    printf("\n                      R$%.2f",total);
    printf("\n-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");
    
    return 0;
}