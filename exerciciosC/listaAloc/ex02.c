#include <stdio.h>
#include <stdlib.h>

void ler(){

    int *vet;
    int quantidade; 

    for (int i = 0; i < quantidade; i++)
    {
        printf("Digite a matricula do aluno %d:",i);
        scanf("%d",&vet[i]);
    }
    
}


int main(){

    int quantProg1,quantProg2;

    printf("Insira a quantidade de alunos na turma de Prog 1:");
    scanf("%d",&quantProg1);
    printf("\n");
    printf("Insira a quantidade de alunos na turma de Prog 2:");
    scanf("%d",&quantProg2);

    int *Prog1 = (int *)malloc(quantProg1 * sizeof(int));
    int *Prog2 = (int *)malloc(quantProg2 * sizeof(int));

    printf("Prog 1:");
    ler(Prog1,quantProg1);

    printf("Prog 2:");
    ler(Prog2,quantProg2);

    printf("A quantidade de alunos que estão nas duas disciplinas:");
    for (int i = 0; i < quantProg1; i++)
    {
        for (int j = 0; j < quantProg2; j++)
        {
            if (Prog1[i] == Prog2[j])
            {
                printf("%d",Prog1[i]);
                break;
            }
            
        }
        
    }
    
    free(Prog1);
    free(Prog2);
    

    return 0;
}