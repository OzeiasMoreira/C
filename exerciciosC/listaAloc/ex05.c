#include <stdio.h>
#include <stdlib.h>

void inserir(int ** matriz,int linhas,int colunas){

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("Insira o tamanho da matriz %d %d:",i,j);
            scanf("%d",&matriz[i][j]);
        }
        
    }
    
}

void imprimir(int ** matriz,int linhas,int colunas){

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%d",&matriz[i][j]);
        }
        
    }
    
}

int buscaNumero(int ** matriz,int linhas,int colunas,int numero){

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            if (numero == matriz[i][j])
            {
                return 1;
            }   
            
        }
        
    }
        
    return 0;

}

int main(){

    int linhas , colunas , **matriz, n;

    printf("Insira a quantidade de linhas e colunas:");
    scanf("%d%d",&linhas,&colunas);

    matriz = (int **)malloc(linhas * sizeof(int));
    if (matriz == NULL)
    {
        printf("Erro ao alocar memoria!");
    }

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int *)malloc(colunas * sizeof(int));
        if (matriz[i] ==  NULL)
        {
            printf("Erro ao alocar memoria!");
        }
        
    }

    inserir(matriz,linhas,colunas);
    imprimir(matriz,linhas,colunas);
    
    printf("Insira um numero:");
    scanf("%d",&n);

    if (buscaNumero(matriz,n,linhas,colunas))
    {
        printf("%d está na matriz!",n);
    }

    else 
    {
        printf("%d não está na matriz!");
    }
    
    
    return 0;
}