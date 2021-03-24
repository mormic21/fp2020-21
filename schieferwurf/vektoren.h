#ifndef __VEKTOR_STRUCT_H__
#define __VEKTOR_STRUCT_H__

//Definition eines eigenen Struct-Datentyps
typedef
	struct vektor_s {
		double x;
		double y;
	} vektor_t;

//Prototyp Funktion für Vektorprodukt
vektor_t vektprod(double k, vektor_t v);

//Prototyp Funktion für Vektorsumme
vektor_t vektsum (vektor_t v1, vektor_t v2);

//Funktion, welche mir einen Vektor (x, y) zurückliefert
vektor_t vektinit(double x, double y);
#endif

