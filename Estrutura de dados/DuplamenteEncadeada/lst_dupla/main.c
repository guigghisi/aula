#include <stdio.h>
#include <stdlib.h>
#include "../lib_lst_dupla/lib_lst_dupla.h"
int main()
{

Lista * lst = lst_cria();
Lista * lst2 = lst_cria();
Lista * lst3 = lst_cria();

lst_insere(lst, 1);
lst_insere(lst, 2);
lst_insere(lst, 3);

lst_insere(lst2, 4);
lst_insere(lst2, 5);
lst_insere(lst2, 6);
lst_insere(lst2, 7);

lst_retira(lst2,7);

lst_imprime(lst);
printf("\n");
lst_imprime(lst2);
printf("\n");
printf("\n");
printf("%s\n",lst_pertence(lst,1)? "true" : "false");
printf("\n");
printf("%s\n",lst_pertence(lst,5)? "true" : "false");
printf("\n");
printf("\n");
printf("%s\n",lst_pertence(lst2,7)? "true" : "false");
printf("\n");
printf("%s\n",lst_pertence(lst2,5)? "true" : "false");
printf("\n");
printf("\n");
lst_multiplica(lst,lst2,lst3);
printf("\n");
printf("\n");
lst_imprime(lst);
printf("\n");
lst_imprime(lst2);
printf("\n");
lst_imprime(lst3);
printf("\n");
printf("\n");
lst_maior(lst, 2);
lst_maior(lst2, 2);
lst_maior(lst3, 5);

return 0;
}
