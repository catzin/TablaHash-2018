Hash	:	 main.o lista.o Elem.o hash.o
	gcc	-o	Hash	main.o	lista.o	Elem.o	hash.o
main.o	:	main.c	hash.h
	gcc	-c	main.c
lista.o	:	lista.c	Elem.h
	gcc	-c	lista.c
Elem.o	:	Elem.c
	gcc	-c	Elem.c
hash.o	:	hash.c lista.h
	gcc	-c	hash.c
clean	:
	rm	Hash	\
	main.o	lista.o	Elem.o	hash.o

