#include "lib_vetor_din.h"

struct aluno{
    char nome[81];
    float p1,p2,p3;
    float *lista;
};

Aluno *vd_cria(int sizeV){
    Aluno *v = (Aluno *) malloc(sizeof(Aluno));
    v->n = 0;
    v->tamanho = sizeV;
    v->lista = (float *) malloc(v->tamanho * sizeof(float));
    return v;
};
static void vd_realoca(Aluno *v){
    v->tamanho += 5;
    v->lista = (float *) realloc(v->lista, v->tamanho * sizeof(float));
};
void vd_insere(Aluno *v, float x){
    if(v->n == v->tamanho){
        vd_realoca(v);
    }
    v->lista[v->n] = x;
    v->n++;
};
int vd_tamanho(Aluno *v){
    return v->n;
};
float vd_acessa(Aluno *v, int pos){
    return v->lista[pos];
};
void vd_libera(Aluno *v){
    free(v->lista);
    free(v);
};


