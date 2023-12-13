#include <stdio.h>

#define MAXALU 50

struct cadastro {
    int matricula;
    char nome [50];
    float nota;
};

typedef struct cadastro cadastro;

void insere(cadastro *p);
void exibir(cadastro *p);
void exibirmediageral(cadastro *p);
void exibirmaiornota(cadastro*p);

int main(){
    
    cadastro cadastros[MAXALU];

    insere(cadastros);

    exibir(cadastros);

    exibirmaiornota(cadastros);

    return 0;
}

void insere(cadastro *p){
    for(int i = 0; i < MAXALU; i++){
        printf("\n==================== ALUNO [%d] ====================",i);
        printf("\nDigite a matricula do aluno: ");
        scanf("%d",&p[i].matricula);

        setbuf(stdin,NULL);
        printf("\nDigite o nome do aluno: ");
        fgets(p[i].nome,50,stdin);

        printf("\nDigite a nota do aluno: ");
        scanf("%f",&p[i].nota);

        printf("===================================================\n");
    }
}

void exibir(cadastro *p){

    printf("\n------------- [APROVADOS] -------------\n");
    for(int i = 0; i < MAXALU; i++){
        if(p[i].nota >= 7){
            printf("\nMatricula do aluno: %d\n",p[i].matricula);
            printf("Nome do aluno: %s",p[i].nome);
            printf("Nota do aluno: %.2f\n",p[i].nota);
        }
    }
    printf("\n--------------------------------------\n\n");

    printf("\n-------------- [EXAME] --------------\n");
    for(int i = 0; i < MAXALU; i++){
        if(4 <= p[i].nota && p[i].nota < 7){
            printf("\nMatricula do aluno: %d\n",p[i].matricula);
            printf("Nome do aluno: %s",p[i].nome);
            printf("Nota do aluno: %.2f\n",p[i].nota);
        }
    }
    printf("\n-------------------------------------\n\n");

    printf("\n------------ [REPROVADOS] ------------\n");
    for(int i = 0; i < MAXALU; i++){
        if(4 > p[i].nota){
            printf("\nMatricula do aluno: %d\n",p[i].matricula);
            printf("Nome do aluno: %s",p[i].nome);
            printf("Nota do aluno: %.2f\n",p[i].nota);
        }
    }
    printf("\n--------------------------------------\n\n");
}

void exibirmediageral(cadastro *p){
    float soma = 0;
    for(int i = 0; i < MAXALU; i++){
        soma += p[i].nota;
    }
    
    printf("**** MEDIA GERAL: %.2f****\n",soma/MAXALU);
}

void exibirmaiornota(cadastro*p){
    float maiornota = p[0].nota;

    for(int i = 0; i < MAXALU; i++)
        maiornota = (maiornota < p[i].nota) ? p[i].nota : maiornota;
    
    printf("\n\n=-=-=-=-=-=-=-=-=-= [MELHORES NOTAS] =-=-=-=-=-=-=-=-=-=\n");
    for(int i = 0; i < MAXALU; i++){
        if(p[i].nota == maiornota){
            printf("\nMatricula: %d",p[i].matricula);
            printf("\nNome do aluno: %s",p[i].nome);
            printf("Nota do aluno: %.2f\n",p[i].nota);
        }
    }
    printf("\n=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=\n");
}