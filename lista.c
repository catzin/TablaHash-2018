#include"lista.h"

list vacia(void){

  return NULL;
}

int esvacia(list a){
  return a == NULL;
}

elem cabeza(list a){
  return  a -> dato;
}
list resto(list a){
  return a -> sig;
}

list cons(elem e,list l){

  list aux;
  aux = (list)malloc(sizeof(struct NODO));

  aux -> dato = e;
  aux -> sig = l;

  return aux;


}

int numElem(list l){

  if(esvacia(l)){
    return 0;
  }

  else{

    return 1+numElem(resto(l));

  }

}

void imp_list(list l){
  if(!esvacia(l)){
    imp_elem(cabeza(l));
    imp_list(resto(l));
  }

}

