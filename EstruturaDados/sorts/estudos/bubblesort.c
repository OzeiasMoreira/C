int bubblesort(int *vetor,int n){
    int fim = n,aux, continua;
    do
    {
        continua = 0;
        for (int i = 0; i < fim - 1; i++)
        {
            aux = vetor[i];
            vetor[i] = vetor[i + 1];
            vetor[i + 1] = aux;
            continua = i + 1;
        }
        fim--;
    } while (continua != 0);
    
    return vetor;
}