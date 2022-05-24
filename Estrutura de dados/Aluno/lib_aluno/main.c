#include "lib_aluno.h"

struct aluno {
    int matricula;
    char nome[50];
    char sobrenome[50];
    int idade;
};

Aluno* aluno_cria(int matricula) {
    Aluno* aluno = (Aluno*) malloc(sizeof(Aluno));
    aluno->matricula = matricula;
    return aluno;
};
void aluno_libera(Aluno* a) {
    free(a);
};
void aluno_atribui_nome(Aluno* a, char nome[], char sobrenome[], int idade){
    strcpy(a->nome, nome);
    strcpy(a->sobrenome, sobrenome);
    a->idade = idade;
}
int aluno_matricula(Aluno* a) {
    return a->matricula;
};
int aluno_maiorIdade(Aluno* a) {
    return a->idade > 18;
};
int aluno_duplicado(Aluno* a1, Aluno* a2) {
    return a1->matricula == a2->matricula;
};
void aluno_nomeCompleto(Aluno*a, char* nomeCompleto) {
    sprintf(nomeCompleto, "%s %s", a->nome, a->sobrenome);
};
