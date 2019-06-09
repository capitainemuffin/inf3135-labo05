compilateur = gcc
options = -Wall -pedantic -std=c11

default : matrice structure union

matrice : matrice.o 
	$(compilateur) matrice.o -o matrice $(options)

matrice.o : matrice.c
	$(compilateur) matrice.c -c -o matrice.o $(options)

structure : structure.o
	$(compilateur) structure.o -o structure $(options)

structure.o : structure.c
	$(compilateur) structure.c -c -o structure.o $(options) 

union : union.o
	$(compilateur) union.o -o union $(options)

union.o : union.c
	$(compilateur) union.c -c -o union.o $(options)

clean :
	rm -f *.o
	rm -f matrice structure union

.PHONY : clean 