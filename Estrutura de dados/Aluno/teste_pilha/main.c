#include <stdio.h>
#include <stdlib.h>
#include "lib_pilha/lib_pilha.h"
int main()
{
pilha_cria();
pilha_push(pilha_cria(), 1);
pilha_push(pilha_cria(), 2);
pilha_push(pilha_cria(), 3);

printf("%d\n", pilha_pop(pilha_cria()));
printf("%d\n", pilha_pop(pilha_cria()));
printf("%d\n", pilha_pop(pilha_cria()));
}
