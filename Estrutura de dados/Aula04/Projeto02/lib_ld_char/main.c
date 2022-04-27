#include "lib_ld_char.h"

struct ld_char_t *ld_char_new(char *name, char *desc, char *type, char *value)
{
    struct ld_char_t *ld_char;

    ld_char = malloc(sizeof(struct ld_char_t));
    if (ld_char == NULL)
        return NULL;

    ld_char->name = strdup(name);
    ld_char->desc = strdup(desc);
    ld_char->type = strdup(type);
    ld_char->value = strdup(value);

    return ld_char;
};

StrDin* sd_criavazia(void){
    StrDin *sd;
    sd = malloc(sizeof(StrDin));
    if(sd == NULL)
        return NULL;
    sd->n = 0;
    sd->m = 10;
    sd->v = malloc(sd->m * sizeof(char*));
    if(sd->v == NULL)
        return NULL;
    return sd;
};
StrDin* sd_sd_criacopia(const char* s){
    StrDin *sd;
    int i;
    sd = sd_criavazia();
    if(sd == NULL)
        return NULL;
    for(i = 0; s[i] != '\0'; i++){
        sd_sd_insere(sd, s[i]);
    }
    return sd;
};
void sd_atribui(StrDin* sd, const char* s){
    int i;
    sd_apaga(sd);
    for(i = 0; s[i] != '\0'; i++){
        sd_sd_insere(sd, s[i]);
    };

void sd_concatena(StrDin* sd, const char* s){
    int i;
    for(i = 0; s[i] != '\0'; i++){
        sd_sd_insere(sd, s[i]);
    };
const char * sd_acessa(strdin* sd){
    int i;
    char *s;
    s = malloc(sd->n * sizeof(char));
    if(s == NULL)
        return NULL;
    for(i = 0; i < sd->n; i++){
        s[i] = sd->v[i];
    }
    s[i] = '\0';
    return s;
};
Void sd_libera(StrDin* sd){
    int i;
    for(i = 0; i < sd->n; i++){
        free(sd->v[i]);
    }
    free(sd->v);
    free(sd);
};
