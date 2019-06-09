#include <stdio.h>
#include "union.h"
#include <limits.h>

enum TypeNombre {

	INT, FLOAT, DOUBLE

}; 

typedef struct {

	enum TypeNombre type;
	
	union {

		int i;
		float f;
		double d;

	} valeur;

} Nombre;

/**
* On assume que les 2 variables ont le même type ??
**/
Nombre max (Nombre a, Nombre b){

	switch(a.type){

		case INT: 
			return a.valeur.i > b.valeur.i ? a : b;

		case FLOAT:
			return a.valeur.f > b.valeur.f ? a : b;

		case DOUBLE:
			return a.valeur.d > b.valeur.d ? a : b;

	}

}

int main(int argc, char ** argv){

	union L64 test;

	test.n = ULONG_MAX - 10;

	printf("%u\n", test.lo);
	printf("%u\n", test.hi);

	return 0;
}
