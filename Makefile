options = -Wall -pedantic -std=c11

default : matrice

matrice : matrice.o 
	gcc matrice.o -o matrice $(options)

matrice.o : matrice.c
	gcc matrice.c -c -o matrice.o $(options)

clean :
	rm -f *.o
	rm -f matrice

.PHONY : clean 