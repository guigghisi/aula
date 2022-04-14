#include <stdio.h>
#include <stdlib.h>
#include "../lib_ponto/lib_ponto.h"

int main(){
  PONTO *p;
  PONTO *q;
  p = pto_cria(1,2);
    q = pto_cria(3,4);

    float *x1, *y1, *x2, *y2;

    float d = pto_distancia(p,q);
    pto_acessa(p,x1,y1);
    pto_acessa(q,x2,y2);
    printf("distancia entre os pontos: %.2f\n",d);
    pto_libera(p);
    pto_libera(q);
    return 0;
}