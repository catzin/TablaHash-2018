#include"Elem.h"

elem lee(FILE *a){

  elem aux;
  elem *ptr = &aux;

  fscanf(a,"%d%s%s", &ptr ->numA, ptr -> nom, ptr -> sim);

  return aux;

}

int Esigual(char *cad1 ,char* cad2){

  return (strcmp(cad1,cad2)==0);

}

void imp_elem(elem e){

  elem *ptr = &e;
  printf("%d\t%s\t%s\t\n",ptr ->numA,ptr -> nom,ptr -> sim);

}

