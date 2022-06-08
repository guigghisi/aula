#include <stdio.h>
#include <stdlib.h>
typedef struct lista {
  float dado;
  struct Lista *primeiro;
  struct Lista *ultimo;
}Lista;

Lista* lst_cria(void){
  Lista *lst = (Lista*) malloc(sizeof(Lista));
  lst->primeiro = NULL;
  lst->ultimo = NULL;
  return lst;
};

void lst_libera(Lista* l)
{
  Lista *p = l->primeiro;
  Lista *q = NULL;
  while (p != NULL)
  {
    q = p->ultimo;
    free(p);
    p = q;
  }
  free(l);
};
void lst_insere (Lista* l, float v)
{
  Lista *n = (Lista*) malloc(sizeof(Lista));
  n->dado = v;
  n->primeiro = l->primeiro;
  n->ultimo = l->ultimo;
  l->primeiro = n;
  if (l->ultimo == NULL)
    l->ultimo = n;
}
void lst_retira (Lista* l, float v)
{
  Lista *p = l->primeiro;
  Lista *q = NULL;
  while (p != NULL && p->dado != v)
  {
    q = p;
    p = p->primeiro;
  }
  if (p == NULL)
    return;
  if (p == l->primeiro)
    l->primeiro = p->primeiro;
  else
    q->primeiro = p->primeiro;
  if (p == l->ultimo)
    l->ultimo = q;
  free(p);
}
int lst_vazia (Lista* l)
{
  return l->primeiro == NULL;
}
int lst_pertence (Lista* l, float v)
{
  Lista *p = l->primeiro;
  while (p != NULL && p->dado != v)
    p = p->primeiro;
  return p != NULL;
}

void lst_imprime (Lista* l)
{
  Lista *p = l->primeiro;
  while (p != NULL)
  {
    printf("%.2f\n", p->dado);
    p = p->primeiro;
  }
}
void lst_multiplica (Lista *lista1, Lista *lista2, Lista *lista3)
{
  Lista *p = lista1->primeiro;
  Lista *q = lista2->primeiro;
  while (p != NULL && q != NULL)
  {
    lst_insere(lista3, p->dado * q->dado);
    p = p->primeiro;
    q = q->primeiro;
  }
}
void lst_maior(Lista *lst, float valor)
{
  Lista *p = lst->primeiro;
  while (p != NULL)
  {
    if (p->dado > valor)
    {
      printf("%.2f\n", p->dado);
    }
    p = p->primeiro;
  }
}
