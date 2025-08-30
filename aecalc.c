#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int c, char** av)
{
	puts("Hello from aecalc!");
	double a, b;
	a = atof(av [1]);
	b = atof(av [2]);
	// a += b;
	printf("%f\n", a+b);
	printf("%f\n", a*b);
	printf("%f\n", a-b);
	if (b != 0)
		printf("%f\n", a/b);
	printf("%f %f\n", sqrt (a), sqrt (b));
	printf("%f %f\n", ceil (a), ceil (b));
	printf("%f %f\n", floor (a), floor (b));
	printf("%f\n", pow (a, b));
}
