#include <stdio.h>
#include <stdlib.h>
#include "../lib_lista_encadeada/lib_lista_encadeada.h"

int main(){
  LISTA * lst = lst_cria();
  lst_insere(lst, 1);
  lst_insere(lst, 4);
  lst_insere(lst, 5);
  lst_imprime(lst);
    printf(lst_busca(lst,2) ? "Encontrado\n" : "Nao encontrado\n");
    printf(lst_busca(lst,4) ? "Encontrado\n" : "Nao encontrado\n");
    lst lst_insere_ordenado(lst,2);
  return 0;
}
