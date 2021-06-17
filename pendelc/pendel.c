#include <stdio.h>
#include <math.h>

float fkraft (float win, float m, float g) {
	float f = m * g * sin(win);
	return(f);
}

float fbeschleunigung (float f, float m) {
	float a = f / m;
	return(a);

}

float fgeschwindigkeit (float bogenlaenge, float laenge, float masse, float g, float winkel) {
	float winkelhilfe = bogenlaenge / laenge;
	float krafthilfe = masse * g * sin(winkelhilfe);
	float v = krafthilfe * winkel;
	return(v);
}

float main (void) {
	float bogenlaenge = -5;
	float laenge = 0.3;
	float masse = 0.5;
	float g = 9.81;
	float winkel, kraft, beschleunigung, geschwindigkeit;
	printf("Fadenpendel\n");
	printf("=============");
	printf("\n");
	printf("Bitte geben Sie den gewünschten Winkel ein: ");
	scanf(" %f", &winkel);
	kraft = fkraft(winkel, masse, g);
	beschleunigung = fbeschleunigung(kraft, masse);
	geschwindigkeit = fgeschwindigkeit(bogenlaenge, laenge, masse, g, winkel);
	printf("Das Fadenpendel hat an diesem Winkel:\n");
	printf(" - Eine Kraft von: %f\n", kraft);
	printf(" - Eine Beschleunigung von %f\n", beschleunigung);
	printf(" - Eine Geschwindigkeit von %f\n", geschwindigkeit);
	return(0);
}
