#include <stdio.h>
#include <stdlib.h>
#include "../lib_aluno/lib_aluno.h"

int main() {
    Aluno* a1 = aluno_cria(123456);
    Aluno* a2 = aluno_cria(123456);
    Aluno* a3 = aluno_cria(365412);
    Aluno* a4 = aluno_cria(485437);

    aluno_atribui_nome(a1, "Joao", "Silva", 20);
    aluno_atribui_nome(a2, "Joao", "Silva", 20);
    aluno_atribui_nome(a3, "Maria", "Gonsalves", 15);
    aluno_atribui_nome(a4, "Mario", "Santos", 25);

    printf("%d\n", aluno_matricula(a1));

    printf("%d\n", aluno_maiorIdade(a1));

    printf("%d\n", aluno_duplicado(a1, a2));

    char nomeCompleto[100];
    aluno_nomeCompleto(a4, nomeCompleto);
    printf("%s\n", nomeCompleto);

    aluno_libera(a1);
    aluno_libera(a2);
    aluno_libera(a3);
    aluno_libera(a4);

    return 0;
}
