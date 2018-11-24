#include<stdio.h>
#include<string.h>

#ifndef Elem
#define Elem

typedef struct e{
  int numA;
  char nom[80];
  char sim[3];
}elem;


elem lee(FILE *);

int Esigual(char * ,char*);

void imp_elem(elem);


#endif
