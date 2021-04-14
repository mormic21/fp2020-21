#include <stdio.h>
#include "matrix.h"
#include <math.h>

int main(void) {
	//Deklaration
	matrix_t m1, p;
	//groesse
	m1.zeilen = 2;
	m1.spalten = 2;
	p.zeilen = 2;
	p.spalten = 1;
	//
	double winkel = 1*(M_PI/180);
	m1.matrix[0][0] = cos(winkel);
	m1.matrix[0][1] = -sin(winkel);
	m1.matrix[1][0] = sin(winkel);
	m1.matrix[1][1] = cos(winkel);
	//x-koordinate
	p.matrix[0][0] = 1;
	//y-koordinate
	p.matrix[1][0] = 0;
	for (int i = 0; i < 360; i++) {
		printmatrix(p);
		p = matrixmult(m1, p);
	}
	return(0);
}
