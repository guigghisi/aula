#ifndef LIB_VETOR_DIN_H_INCLUDED
#define LIB_VETOR_DIN_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno Aluno;

Aluno *vd_cria(int sizeV);
static void vd_realoca(Aluno *a);
void vd_insere(Aluno *a, float x);
int vd_tamanho(Aluno *a);
float vd_acessa(Aluno *a, int pos);
void vd_libera(Aluno *a);

#endif // LIB_VETOR_DIN_H_INCLUDED
