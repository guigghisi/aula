#ifndef LIB_LD_CHAR_H_INCLUDED
#define LIB_LD_CHAR_H_INCLUDED
typedef struct strdin StrDin;
StrDin* sd_criavazia(void);
StrDin* sd_sd_criacopia(const char* s);
void sd_atribui(StrDin* sd, const char* s);
void sd_concatena(StrDin* sd, const char* s);
const char * sd_acessa(strdin* sd);
Void sd_libera(StrDin* sd);


#endif // LIB_LD_CHAR_H_INCLUDED
