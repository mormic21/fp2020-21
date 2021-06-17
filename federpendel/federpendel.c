#include <stdio.h>
#include <math.h>

int main (void) {
	float masse = 0.5;
	float federkonst = 0.5;
	float te, s, f, a, v;
	printf("Berechnung Federpendel\n");
	printf("======================\n\n");
	int stop = 0;
	while (stop == 0) {
		printf("Bitte geben sie die Zeit in Sekunden ein: \n");
	        scanf(" %f", &te);
		s = 1.0;
		f = (s*federkonst)*-1;
                a = f/masse;
                v = a * 0;
		for (float tc = 0.01; tc < te; tc + 0.01) {
                        s = s + (v * 0.01);
                        f = (s*federkonst)*-1;
                        a = f/masse;
                        v = v + (a * 0.01);
                }
		printf("Die Ergebnisse: \n");
		printf("Bei t = %f ist S = %f| F = %f | a = %f | v = %f\n\n", te, s, f, a, v);
		char nochmal;
		printf("Nochmals? j > ja / n > nein: \n");
		scanf(" %c", &nochmal);
		switch(nochmal) {
                        case 'j': stop = 0; break;
                        case 'n': stop = 1; break;
                }
	}
	return(0);
}
