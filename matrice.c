#include <stdio.h>

void affichermMatrice(int* matrice, int ligne, int colonne){

	for(int i = 0; i < ligne * colonne; i++ ){

		if(i % colonne == 0 && i != 0) printf("\n");

		printf("%d ", matrice[i]);

	}

	printf("\n");
}

void additionnerMatrice(int* matrice1, int* matrice2, int* matrice3, 
						int ligne, int colonne){

	for (int i = 0 ; i < ligne * colonne; i++ ){

		matrice3[i] = matrice1[i] + matrice2[i]; 
	}
}

int main(int argc, char ** argv){

	int matrice1[][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
	int matrice2[][3] = { {1,2,3} , {4,5,6} , {7,8,9} };
	int matrice3[3][3]; 

	additionnerMatrice(matrice1[0], matrice2[0], matrice3[0], 3, 3);

	affichermMatrice(matrice1[0], 3, 3);
	printf("+\n");
	affichermMatrice(matrice2[0], 3, 3);
	printf("=\n");
	affichermMatrice(matrice3[0], 3, 3);

}
