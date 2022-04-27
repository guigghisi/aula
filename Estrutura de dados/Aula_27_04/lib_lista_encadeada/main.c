#include "lib_lista_encadeada.h"

struct lista{
  LISTAN * primeiro;
};

struct listaN{
  int valor;
  LISTAN * proximo;
};

LISTA * lst_cria(void){
  LISTA * lst = (LISTA *) malloc(sizeof(LISTA));
    lst->primeiro = NULL;
  return lst;
};

void lst_insere(LISTA * lst, int valor){
  LISTAN * novo = (LISTAN *) malloc(sizeof(LISTAN));
    novo->valor = valor;
    novo->proximo = lst->primeiro;
    lst->primeiro = novo;
};
void lst_imprime(LISTA * lst){
  for(LISTAN * p = lst->primeiro; p != NULL; p = p->proximo){
    printf("Valor: %d\n", p->valor);
  }
};