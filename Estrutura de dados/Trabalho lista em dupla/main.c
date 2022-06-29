typedef struct dl_elemento
{
    char *dado;
    struct dl_elementoLista *anterior;
    struct dl_elementoLista *seguinte;
} dl_elemento;

typedef struct dl_lista
{
    dl_elemento *primeiro;
    dl_elemento *ultimo;
    int tamanho;
} dl_lista;

void ld_cria(dl_lista *l)
{
    l->primeiro = NULL;
    l->ultimo = NULL;
    l->tamanho = 0;
}

int ld_insere(dl_lista *l, char *dado, int pos)
{
    dl_elemento *novo;
    dl_elemento *aux;
    int i;
    if (pos < 0 || pos > l->tamanho)
        return 0;
    novo = (dl_elemento *)malloc(sizeof(dl_elemento));
    if (novo == NULL)
        return 0;
    novo->dado = dado;
    if (pos == 0)
    {
        novo->anterior = NULL;
        novo->seguinte = l->primeiro;
        l->primeiro->anterior = novo;
        l->primeiro = novo;
    }
    else
    {
        aux = l->primeiro;
        for (i = 0; i < pos - 1; i++)
            aux = aux->seguinte;
        novo->anterior = aux;
        novo->seguinte = aux->seguinte;
        aux->seguinte->anterior = novo;
        aux->seguinte = novo;
    }
    l->tamanho++;
    return 1;
}

int ld_remove(dl_lista *l, int pos)
{
    dl_elemento *aux;
    int i;
    if (pos < 0 || pos >= l->tamanho)
        return 0;
    if (pos == 0)
    {
        aux = l->primeiro;
        l->primeiro = l->primeiro->seguinte;
        l->primeiro->anterior = NULL;
    }
    else
    {
        aux = l->primeiro;
        for (i = 0; i < pos - 1; i++)
            aux = aux->seguinte;
        aux->seguinte = aux->seguinte->seguinte;
        aux->seguinte->anterior = aux;
    }
    free(aux);
    l->tamanho--;
    return 1;
}
void ld_imprime(dl_lista *l)
{
    dl_elemento *aux;
    aux = l->primeiro;
    while (aux != NULL)
    {
        printf("%s\n", aux->dado);
        aux = aux->seguinte;
    }
}

void ld_libera(dl_lista *l)
{
    dl_elemento *aux;
    while (l->primeiro != NULL)
    {
        aux = l->primeiro;
        l->primeiro = l->primeiro->seguinte;
        free(aux);
    }
    l->ultimo = NULL;
    l->tamanho = 0;
}
