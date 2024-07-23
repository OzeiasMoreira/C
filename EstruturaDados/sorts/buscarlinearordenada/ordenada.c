int buscalinearOrdenada(int *vetor,int n,int elemento){
    for (int i = 0; i < n; i++)
    {
        if (elemento == vetor[i])
        {
            return i;
        } else{
            if (elemento < vetor[i])
            {
                return -1;
            }
            
        }
        
    }
    
    return -1;
}