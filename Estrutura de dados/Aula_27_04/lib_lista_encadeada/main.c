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

int lst_busca(LISTA * lst, int valor){
  for(LISTAN * p = lst->primeiro; p != NULL; p = p->proximo){
    if(p->valor == valor){
      return 1;
    }
  }
  return 0;
};
void lst_insere_ordenado(LISTA *lst , int valor){
LISTA * ant =NULL;
LISTA * p = lst->primeiro;
  while(p != NULL && p->valor < valor){
    ant = p;
    p = p->proximo;
  }
  LISTAN * novo = (LISTAN *) malloc(sizeof(LISTAN));
    novo->valor = valor;
    novo->proximo = p;
    if(ant == NULL){
      lst->primeiro = novo;
    }else{
      ant->proximo = novo;
    }
};
};