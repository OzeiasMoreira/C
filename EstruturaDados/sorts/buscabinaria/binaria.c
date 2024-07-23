int buscabinaria(int *vetor,int n,int elementos){
    int inicio,meio,final;
    inicio = 0;
    final = n - 1;
    while (inicio <= final)
    {
        meio = ((inicio + final) / 2);
        if (elementos < vetor[meio])
        {
            final = meio - 1;
        } else {
            if (elementos > vetor[meio])
            {
                inicio = meio + 1;
            } else {
                return meio;
            }
            
        }
        
    }
    
    return -1;
}