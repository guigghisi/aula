#include <stdlib.h>
typedef struct lista LISTA;
typedef struct listaN LISTAN;

LISTA * lst_cria(void);
void lst_insere(LISTA *lst, int valor);
void lst_imprime(LISTA *lst);