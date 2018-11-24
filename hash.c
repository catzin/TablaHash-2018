#include"hash.h"

int esVaciah(Hash h){

    return  h == NULL;

}

Hash creah(int n){

  int i = 0;
  Hash tab;

  tab = (Hash)malloc(n*sizeof(list));

  for(i=0;i<n;i++){

    tab[i] = vacia();
  }

  return tab;
}


int generaLlave(elem e){

  elem *ptr = &e;

  int tamcad = 0;
  int sumaCarac = 0;
  int i = 0;
  int aux = 0;

  tamcad = strlen(ptr -> nom);

  for(i=0;i<tamcad;i++){

    sumaCarac += ptr -> nom[i];
  }

  return sumaCarac %119;

}

int A_llave(char *cad){

  int tamcad = 0;
  int i = 0;
  int llave = 0;

  tamcad = strlen(cad);

  for(i=0;i<tamcad;i++){

    llave += cad[i];

  }

  return llave % 119;

}


void CopyCat(char *aux ,char *cad){
  int i = 0;
  int tamCad = strlen(cad);

  for(i=0;i<=tamCad;i++){
    aux[i] = cad[i];
  }
}

void buscaElem(Hash x , char *cad){

  int con = 0;
  char aux[20];
  int llave = A_llave(cad);
  list l = vacia();



  CopyCat(aux,cad);
  l = x[llave];

   while(con !=1){

    if(Esigual(l ->dato.nom,aux)){

      printf("\n");
      printf("*********************************\n");
      printf("Información:\n");
      printf("*********************************\n");
      printf("Llave del elemento : %d\n",llave);
      printf("*********************************\n");
      imp_elem(cabeza(l));
      printf("*********************************\n");
      con = 1;
    }
    else{
      l = l -> sig;

    }

}

}
Hash llenaHash(FILE *tab, Hash tabE){

  int auxNA = 0;
  char auxNom[100];
  char auxSim[100];
  int auxLlave = 0;


while(fscanf(tab,"%d%s%s",&auxNA,auxNom,auxSim)!=EOF){

  elem x;
  elem *ptr = &x;

     ptr -> numA = auxNA;
     strcpy(ptr -> nom,auxNom);
     strcpy(ptr -> sim,auxSim);

     auxLlave = generaLlave(x);
     tabE[auxLlave] = cons(x,tabE[auxLlave]);

}

return tabE;

}
