#ifndef LIB_ALUNO_H_INCLUDED
#define LIB_ALUNO_H_INCLUDED
#include <stdio.h>
#include <stdlib.h>

typedef struct aluno Aluno;

Aluno* aluno_cria(int matricula);
void aluno_libera(Aluno* a);
void aluno_atribui_nome(Aluno* a, char nome[], char sobrenome[], int idade);
int aluno_matricula(Aluno* a);
int aluno_maiorIdade(Aluno* a);
int aluno_duplicado(Aluno* a1, Aluno* a2);
void aluno_nomeCompleto(Aluno*a, char* nomeCompleto);

#endif
