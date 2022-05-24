#include <stdlib.h>
typedef struct lista LISTA;
typedef struct listaN LISTAN;

LISTA * lst_cria(void);
void lst_insere(LISTA *lst, int valor);
void lst_imprime(LISTA *lst);
int lst_busca(LISTA *lst, int valor);
void lst_insere_ordenado(LISTA *lst, int valor);