// Exercício 1
// R: A complexidade do pior caso é O(n^3) e a do melhor caso é O(n^2)

// Exercício 2
// A complexidade é n, pois vai passar por todos os n elementos da lista dinâmica
int somarLista (Lista* l) {
    if (l == NULL) {
        return 0;
    }
    return l->valor + somarLista(l->prox);
}

// Exercício 3
typedef struct {
    Alunos alunos[10];
} Pilha;

typedef struct {
    int matricula;
    int nota;
} Alunos;

int buscaBinaria (Pilha* p, int chave) {
    int esquerda = 0, direita = p->topo-1;
    while (esquerda <= direita) {
        int meio = esquerda + (direita-esquerda) / 2;
        if (p->alunos[meio].matricula == chave) {
            return meio;
        } else if (p->alunos[meio].matricula > chave) {
            direita = meio-1;
        } else {
            esquerda = meio+1;
        }
    }
    return -1;
}

// Exercício 4
int buscaLinearRecursiva (Lista* l, int chave) {
    if (l == NULL) {
        return NULL;
    } else if (l->valor == chave) {
        return l;
    }
    return buscaLinearRecursiva(l->prox, chave);
}

//Exercício 5

typedef struct {
    int id;
    float CR;
} Aluno;

void merge (Aluno vetor[], int esquerda, int meio, int direita) {
    int i,j,k;
    int tamanho_esquerda = meio - esquerda + 1;
    int tamanho_direita = direita-meio;

    Aluno* lado_esquerdo = (Aluno*) malloc(tamanho_esquerda * sizeof(Aluno));
    Aluno* lado_direito = (Aluno*) malloc(tamanho_direita * sizeof(Aluno));

    for (i = 0; i<tamanho_esquerda; i++) {
        lado_esquerdo[i] = vetor[esquerda+i];
    }
    for (j = 0; j<tamanho_direita; j++) {
        lado_direito[j] = vetor[meio+1+j];
    }

    i = 0;
    j = 0;
    k = esquerda;

    while (i < tamanho_esquerda && j < tamanho_direita) {
        if (lado_esquerdo[i].CR <= lado_direito[j].CR) {
            vetor[k] = lado_esquerdo[i];
            i++;
        } else {
            vetor[k] = lado_direito[j];
            j++;
        }
        k++;
    }

    while (i < tamanho_esquerda) {
        vetor[k] = lado_esquerdo[i];
        i++;
        k++;
    }
    while (j < tamanho_direita) {
        vetor[k] = lado_direito[j];
        j++;
        k++;
    }
    
    free (lado_esquerdo);
    free(lado_direito);
}

#include <math.h>

// Exercicio 6
float menorDiff (float* vetor, int tam) {
    mergeSort(vetor, 0, tam-1);
    float menor_dif = fabs(vetor[0] - vetor[1]);
    for (int i = 1; i<tam-1; i++) {
        if (fabs(vetor[i] - vetor[i+1]) < menor_dif) {
            menor_dif = fabs(vetor[i] - vetor[i+1]);
        }
    }
    return menor_dif;
}

// Exercício 7
int quickfind (int* vetor, int esquerda, int direita, int k) {
    if (esquerda <= direita) {
        int pi = particionar(vetor, esquerda, direita);
        if (pi == k) {
            return vetor[pi];
        } else if (pi > k) {
            return quickfind(vetor, esquerda, pi-1, k);
        } else {
            return quickfind(vetor, pi+1, direita, k);
        }
    }
    return -1;
}