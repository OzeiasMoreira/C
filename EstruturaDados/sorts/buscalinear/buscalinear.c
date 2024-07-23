int buscalinear(int *vetor,int n,int elemento){
    for (int i = 0; i < n; i++)
    {
        if (elemento == vetor[i])
        {
            return i;
        }
        
    }
    
    return -1;
}