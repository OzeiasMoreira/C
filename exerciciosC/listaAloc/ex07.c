#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {

    int codigo;
    char titulo[255];
    char autor[255];
   
} Livro;

int encontrarLivro (struct livro *livros,int linhas,int codigo){

    for (int i = 0; i < livros; i++)
    {
        if (livros[i].codigo == codigo)
        {
            return 1;
        }
        
    }

    return 0;
}

int main(){

    struct Livros *livros; 
    int n,codigo;

    printf("\nQuantidade de livros: ");
    scanf("%d"&n);

    livros = (struct livros)malloc(n * sizeof(struct livro));

    if (livros == NULL)
    {
        printf("Erro ao alocar memoria!");
    }

    for (int i = 0; i < n; i++)
    {
        printf("Titulo do livro:");
        setbuf(stdin,NULL);
        fgets(livros[i].titulo,255,stdin);

        printf("\n");
        
        printf("Autor do livro:");
        setbuf(stdin,NULL);
        fgets(livros[i].autor,255,stdin);

        printf("\n");

        printf("Digite o codigo do livro:");
        scanf("%d"&livros[i].codigo);
    }
    
    printf("\n");
    printf("Digite um codigo no livro:");
    scanf("%d",&codigo);

    if (encontrarLivro(livros,n,codigo))
    {
        printf("O codigo %d foi encontrado!",codigo);
    }

    else {

        printf("O codigo %d não foi encontrado.Tente novamente",codigo);
    }
    
    return 0;
}