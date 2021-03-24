#include <stdio.h>
#include "matrix.h"

/**
 * Testprogramm für Module.c -> Module für die Arbeit mit Matrizen
 * @author: Michael Morandell
 * Datum: 25.02.2020
 */
int main (void) {
	//Deklarationen
	matrix_t m1;
	matrix_t m2;
	matrix_t summe;
	matrix_t diff;
	double skalar = 5;
	matrix_t skalm;
	matrix_t m3;
	matrix_t m4;
	matrix_t mmult;
	//Festlegung der Groesse
	m1.zeilen = 2;
	m1.spalten = 3;
	m2.zeilen = 2;
	m2.spalten = 3;
	m3.zeilen = 2;
	m3.spalten = 2;
	m4.zeilen = 2;
	m4.spalten = 3;
	//Zuweissungen
	m1.matrix[0][0] = 0;
	m1.matrix[0][1] = 1;
	m1.matrix[0][2] = 2;
	m1.matrix[1][0] = 3;
	m1.matrix[1][1] = 4;
	m1.matrix[1][2] = 5;
	m2.matrix[0][0] = 0;
	m2.matrix[0][1] = 1;
	m2.matrix[0][2] = 2;
	m2.matrix[1][0] = 3;
	m2.matrix[1][1] = 4;
	m2.matrix[1][2] = 5;

	m3.matrix[0][0] = 1;
	m3.matrix[0][1] = 0;
	m3.matrix[1][0] = 2;
	m3.matrix[1][1] = -1;

	m4.matrix[0][0] = 1;
	m4.matrix[0][1] = 2;
	m4.matrix[0][2] = -1;
	m4.matrix[1][0] = 0;
	m4.matrix[1][1] = 3;
	m4.matrix[1][2] = 0;
	
	//Aufrufe
	summe = matrixadd(m1, m2);
	printmatrix(summe, "Matrix - Summe");
	diff = matrixsub(m1, m2);
	printmatrix(diff, "Matrix - Differenz");
	skalm = skalarmult(m1, skalar);
	printmatrix(skalm, "Skalar-Multiplikation");
	printmatrix(m3, "m3");
	printmatrix(m4, "m4");
	mmult = matrixmult(m3, m4);
	printmatrix(mmult, "Matrizen-Multiplikation");

}
