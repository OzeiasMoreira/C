void insertionsort(int *vetor, int n){
    int j, i,aux;
    for ( i = 1; i < n; i++)
    {
        aux = vetor[i];
        for ( j = i; (j > 0) && (aux < vetor[j - 1]); j--)
        {
            vetor[j] = vetor[j - 1];
        }
        
        vetor[j] = aux;
    }
    
}

/*

O loop externo começa em i = 1 e continua ate i < n
vetor[i] é copiado para aux
o loop interno j começa em j = i e continua j > 0 e aux for menor que o elemento anterior vetor[j - 1]
durante cada interação o elemento a esquerda é movido uma posição para direita
vetor[j - 1] é copiado para vetor[j]
*/