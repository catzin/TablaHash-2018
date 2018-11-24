#include<stdio.h>
#include"hash.h"


int main(void){


  FILE *tab = fopen("periodica.txt","r");
  char elemento[10];
  int n = 0;
  Hash tabE = creah(127);
  tabE = llenaHash(tab,tabE);

  printf("¿Que elemento buscas?\n");
  scanf("%s",elemento);
  printf("\n");
  printf("\n");
  /*n = A_llave(elemento);
  imp_list(tabE[n]);*/
  buscaElem(tabE,elemento);


return 0;


}
