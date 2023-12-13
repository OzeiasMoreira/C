#include <stdio.h>
#include <stdlib.h>

void preencher(int N,int M,int ** matriz){

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("Insira o elemento %d %d da matriz:",i,j);
            scanf("%d",&matriz[i][j]);
        }
        
    }
    
}

void imprimir(int N,int M,int ** matriz){

    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d",&matrizz[i][j]);
        }
        
    }

}

void somar(int N,int M,int ** m1,int m2,int matrizSoma){

        for (int i = 0; i < M; i++)
        {
            for (int j = 0; j < N; j++)
            {
                matrizSoma[i][j] = m1[i][j] + m2 [i][j];
            }
            
        }
        

}

int main(){

    int **p1, **p2, **psoma,M,N;

    printf("Insira a quantidade de linhas e colunas:");
    scanf("%d%d",&M,&N);

    p1 = (int **)malloc(M * sizeof(int *));
    p2 = (int **)malloc(M * sizeof(int *));
    psoma = (int **)malloc(M * sizeof(int *)); 

    if (p1 == NULL || p2 == NULL|| psoma == NULL)
    {
        printf("Erro ao alocar memoria!");
    }
         
    for (int i = 0; i < M; i++)
    {
        p1 = (int *)malloc(N * sizeof(int));
        p2 = (int *)malloc(N * sizeof(int));
        psoma = (int *)malloc(N * sizeof(int));
        if (p1 == NULL || p2 == NULL || psoma == NULL)
        {
            printf("Erro ao alocar memoria!");
        }
        
    }
    
    printf("\n");
    printf("Matriz 1:");    
    preencher(M,N,p1);
    printf("\n");
    imprimir(M,N,p1);

    printf("\n");
    printf("Matriz 2:");
    preencher(M,N,p2);
    printf("\n");
    imprimir(M,N,p2);

    printf("\n");
    somar(M,N,p1,p2,psoma);
    printf("Matriz somada: \n");    
    imprimir(M,N,psoma);
}