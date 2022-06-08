#ifndef LIB_LST_DUPLA_H_INCLUDED
#define LIB_LST_DUPLA_H_INCLUDED
typedef struct lista Lista;
Lista* lst_cria(void);
void lst_libera(Lista* l);
void lst_insere (Lista* l, float v);
void lst_retira (Lista* l, float v);
int lst_vazia (Lista* l);
int lst_pertence (Lista* l, float v);
void lst_imprime (Lista* l);
void lst_multiplica (Lista *lista1, Lista *lista2, Lista *lista3);
void lst_maior(Lista *lst, float valor);

#endif // LIB_LST_DUPLA_H_INCLUDED
