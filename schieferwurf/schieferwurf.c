/* Main-Programm für den schiefen Wurf in FP. Es werden Funktionen aus der vektoren.c-datei
 * verwendet, welche mit structs arbeiten.
 * Author: Michael Morandell
 * Datum: 27.01.2020
 */

#include <stdio.h>
#include "vektoren.h"

int main (void) {
        vektor_t v, s, a;
        vektor_t vn, sn;

        double t = 0;
        double dt = 0.1;
        a = vektinit(0, -9.81);
        v = vektinit(1, 1);
        s = vektinit(0, 58);

        printf("vx\tvy\tsx\tsy\n");
	printf("%lf\t%lf\t%lf\t%lf\n", v.x, v.y, s.x, s.y);
        while (s.y > 0) {
                vn = vektsum(v, vektprod(dt, a));
                sn = vektsum(s, vektprod(dt, v));
                v = vn;
                s = sn;
		printf("%lf\t%lf\t%lf\t%lf\n", v.x, v.y, s.x, s.y);
        }
	return(0);
}

