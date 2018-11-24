
#include"lista.h"

#ifndef hash
#define hash


typedef list* Hash;

int esVaciah(Hash);
Hash creah(int);
int generaLlave(elem);
int A_llave(char *);
void CopyCat(char *,char *);
void buscaElem(Hash, char *);
Hash llenaHash(FILE *, Hash);

#endif
