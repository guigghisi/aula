#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_encadeada/lib_lista_encadeada.h"

int main(){
  LISTA * lst = lst_cria();
  lst_insere(lst, 1);
  lst_insere(lst, 2);
  lst_insere(lst, 3);
  lst_imprime(lst);
  return 0;
}
