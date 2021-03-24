/*
 * Modul vektoren.c
 * Operationen für die Arbeit mit Vektoren
 * Autor: Michael Morandell
 * Datum: 12.2020
*/

#include "vektoren.h"

vektor_t vektsum(vektor_t v1, vektor_t v2) {
	vektor_t ret;
	ret.x = v1.x + v2.x;
	ret.y = v1.y + v2.y;
	return(ret);
}

vektor_t vektprod(double k, vektor_t v) {
	vektor_t ret;
	ret.x = v.x * k;
	ret.y = v.y * k;
	return(ret);
}

//Zum initialisieren eines Vektors aus zwei Zahlen
vektor_t vektinit(double x, double y) {
	vektor_t ret;
	ret.x = x;
	ret.y = y;
	return(ret);
}
