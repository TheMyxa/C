#include <stdio.h>
#include <math.h>
#include "header.h"

void main(void)
{
	float a, b, c, d, x;
	scanf ("%f %f %f", &a, &b, &c);

	d = (b * b) - 4 * a * c;
	
	if(d > 0) BolZero(d, a, b);

	else if (d < 0) printf("Kornay net \n");
	else if (d == 0) Zero(d, a, b);
}
