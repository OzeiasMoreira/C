#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{

    char nome[255];
    char sobrenome[255];
    float nota;
}Aluno;

void alunoMaiorNota(struct Aluno * vetAluno,int tamanho){

    int indice = 0;

    for (int i = 0; i < tamanho; i++)
    {
        indice = (alunos[i].nota > aluno[indice].nota);
    }

    printf("\nO aluno com maior nota[%.2f] se chama:",aluno[indice].nota);
    
    for (int i = 0; alunos[indice].nome[i] != '\n'; i++)
    {
        printf("%c",aluno[indice].nome[i]);
    }

    for (int i = 0; aluno[indice].sobrenome[i] != '\n'; i++)
    {
        printf("%c",aluno[indice].sobrenome[i]);
    }
    
    
}

int main(){

    Aluno aluno;
    int tamanho;

    printf("Insira a quantidade de alunos:");
    scanf("%d",&tamanho);

    aluno = (struct aluno *)malloc(tamanho * sizeof(struct aluno));

    if (aluno == NULL)
    {
        printf("Erro ao alocar memoria!");
    }

    for (int i = 0; i < tamanho; i++)
    {
        printf("\n==============ALUNO %d==============",i);

        printf("Nome aluno:");
        setbuf(stdin,NULL);
        fgets(aluno[i].nome,255,stdin);

        printf("Sobrenome:");
        setbuf(stdin,NULL);
        fgets(aluno[i].sobrenome,255,stdin);

        printf("Nota:");
        scanf("%f",&aluno[i].nota);
    }

    alunoMaiorNota(aluno,tamanho);

    return 0;
}