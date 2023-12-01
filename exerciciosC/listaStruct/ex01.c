//Crie um programa que leia 4 notas de um aluno:
//1.Mostre a média do aluno
//2. a diferença das notas e exiba para o usuário
//3.Peça o usuário digitar as notas de outro aluno e mostre a diferença das médias

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


    typedef struct 
    {
        float x1;
        float x2;
        float y1;
        float y2;
    }Distancia;

    typedef struct 
    {
        Distancia distancia;
        float x1;
        float x2;
        float y1;
        float y2;
    };
    
    typedef struct{
        
        float x;
        float y;
        
    }Ponto ;
    

    void imprimirDistancia(float p){
        printf("A distancia dos dois pontos é: %f",p);
    }
    
    float calcularDistancia(float x1, float x2, float y1, float y2){
        Distancia;
        float d = sqrt(pow((x1 - x2),2) + pow((y1 - y2),2));
        return d;
    }

int main() {
    
    Ponto ponto1;
    Ponto ponto2;
    
    printf("informe o valor de x: ");
    scanf("%f",&ponto1.x);
    printf("Informe o valor y: ");
    scanf("%f", &ponto1.y);
    printf("informe o valor de x: ");
    scanf("%f",&ponto2.x);
    printf("Informe o valor y: ");
    scanf("%f", &ponto2.y);

        float distancia;

        distancia = calcularDistancia(ponto1.x,ponto2.x,ponto1.y,ponto2.y);
        imprimirDistancia(distancia);

    return 0;
