void apagarLista(Lista* l) {
    if (l == NULL) {
        return;
    }
    apagarLista(l->prox);
    free(l);
}
