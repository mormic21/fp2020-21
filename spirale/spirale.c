/*
 * drehmatrix.c. Mithilfe der Drehmatrix wird ein Punkt einmal im Kreis gedreht.
 * Dabei werden 1-Grad-Schritte gemacht. Die Ausgabe kann in eine csv-datei ausgegeben werden.
 * 14.04.2021
 * @author: Michael Morandell
 */

#include <stdio.h>
#include "matrix.h"
#include <math.h>

int main(void) {
	//Deklaration
	matrix_t m1, p;
	//skalar
	double skalar = 1.005;
	//groesse
	m1.zeilen = 2;
	m1.spalten = 2;
	p.zeilen = 2;
	p.spalten = 1;
	//Ein Grad-Winkel
	double winkel = M_PI/180;
	m1.matrix[0][0] = cos(winkel);
	m1.matrix[0][1] = -sin(winkel);
	m1.matrix[1][0] = sin(winkel);
	m1.matrix[1][1] = cos(winkel);
	//x-koordinate
	p.matrix[0][0] = 1;
	//y-koordinate
	p.matrix[1][0] = 0;
	//Es wird 360 Mal eine ein-Grad-Drehung vollzogen.
	for (int i = 0; i < 360*10; i++) {
		//Ausgabe (siehe module.c)
		printmatrix(p);
		p = matrixmult(m1, p);
		p = skalarmult(p, skalar);
	}
	return(0);
}
