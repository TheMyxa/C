#include <stdio.h>
#include <math.h>

void BolZero (float d, float a, float b)
{
	float x;
	
	x = (-b + sqrt(d))/(2 * a);
	printf("x1 = %f", x);
	printf("\n");
	x = (-b - sqrt(d))/(2 * a);
	printf("x2 = %f", x);
	printf("\n");
}

void Zero (float d, float a, float b)
{
	float x = (-b + sqrt(d))/(2 * a);
	printf("x = %f", x);
	printf("\n");
}

