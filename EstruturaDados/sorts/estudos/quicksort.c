int particiona(int *vetor,int inicio,int final){
    int esquerda, direita, pivo, aux;
    esquerda = inicio;
    direita = final;
    pivo = vetor[inicio];

    while (esquerda < direita)
    {
        while (vetor[esquerda] <= pivo)
        {
            esquerda++;
        }
        
    }
    
}