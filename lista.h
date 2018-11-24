#include"Elem.h"
#include<stdlib.h>

#ifndef lista
#define lista

typedef struct NODO{

  elem dato;
  struct NODO*sig;

}*list;

list vacia(void);
int esvacia(list);
elem cabeza(list);
list resto(list);
list cons(elem,list);
int numElem(list);
void imp_list(list);


#endif
