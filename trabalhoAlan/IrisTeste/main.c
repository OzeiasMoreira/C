#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define K 1

// Estrutura para armazenar um ponto de dados
struct PontoDados {
    float comprimento_sepala;
    float largura_sepala;
    float comprimento_petala;
    float largura_petala;
    int rotulo;
};

// Função para calcular a distância Euclidiana entre dois pontos de dados
float calcularDistancia(struct PontoDados *p1, struct PontoDados *p2) {
    return sqrt(pow(p1->comprimento_sepala - p2->comprimento_sepala, 2) +
                pow(p1->largura_sepala - p2->largura_sepala, 2) +
                pow(p1->comprimento_petala - p2->comprimento_petala, 2) +
                pow(p1->largura_petala - p2->largura_petala, 2));
}

// Função para classificar um único ponto de dados usando o KNN
int classificar(struct PontoDados *pontoTeste, struct PontoDados *dadosTreinamento, int numPontosTreinamento) {
    int i, j, indiceMin;
    float distanciaMin, dist;

    indiceMin = 0;
    distanciaMin = calcularDistancia(pontoTeste, &dadosTreinamento[0]);

    for (i = 1; i < numPontosTreinamento; i++) {
        dist = calcularDistancia(pontoTeste, &dadosTreinamento[i]);
        if (dist < distanciaMin) {
            distanciaMin = dist;
            indiceMin = i;
        }
    }

    return dadosTreinamento[indiceMin].rotulo;
}

int main() {
    FILE *arquivoTeste, *arquivoTreino;
    float comprimento_sepala, largura_sepala, comprimento_petala, largura_petala;
    int rotulo, numPontosTeste = 0, numPontosTreinamento = 0;

    // Ler os dados de treinamento do arquivo
    arquivoTreino = fopen("IrisTreino.txt", "r");
    if (arquivoTreino == NULL) {
        printf("Erro ao abrir o arquivo de treinamento.\n");
        return 1;
    }

    struct PontoDados *dadosTreinamento = NULL;

    while (fscanf(arquivoTreino, "%f,%f,%f,%f,%d", &comprimento_sepala, &largura_sepala, &comprimento_petala, &largura_petala, &rotulo) != EOF) {
        numPontosTreinamento++;
        dadosTreinamento = (struct PontoDados *)realloc(dadosTreinamento, numPontosTreinamento * sizeof(struct PontoDados));
        dadosTreinamento[numPontosTreinamento - 1].comprimento_sepala = comprimento_sepala;
        dadosTreinamento[numPontosTreinamento - 1].largura_sepala = largura_sepala;
        dadosTreinamento[numPontosTreinamento - 1].comprimento_petala = comprimento_petala;
        dadosTreinamento[numPontosTreinamento - 1].largura_petala = largura_petala;
        dadosTreinamento[numPontosTreinamento - 1].rotulo = rotulo;
    }

    fclose(arquivoTreino);

    // Ler os dados de teste do arquivo
    arquivoTeste = fopen("IrisTeste.txt", "r");
    if (arquivoTeste == NULL) {
        printf("Erro ao abrir o arquivo de teste.\n");
        free(dadosTreinamento);
        return 1;
    }

    struct PontoDados pontoTeste;

    int numAcertos = 0;
    while (fscanf(arquivoTeste, "%f,%f,%f,%f,%d", &comprimento_sepala, &largura_sepala, &comprimento_petala, &largura_petala, &rotulo) != EOF) {
        numPontosTeste++;
        pontoTeste.comprimento_sepala = comprimento_sepala;
        pontoTeste.largura_sepala = largura_sepala;
        pontoTeste.comprimento_petala = comprimento_petala;
        pontoTeste.largura_petala = largura_petala;
        pontoTeste.rotulo = rotulo;

        int rotuloClassificado = classificar(&pontoTeste, dadosTreinamento, numPontosTreinamento);
        if (rotuloClassificado == rotulo) {
            numAcertos++;
        }
    }

    fclose(arquivoTeste);
    free(dadosTreinamento);

    float taxaAcerto = (float)numAcertos / numPontosTeste * 100.0;
    printf("Taxa de acerto: %.2f%%\n", taxaAcerto);

    return 0;
}