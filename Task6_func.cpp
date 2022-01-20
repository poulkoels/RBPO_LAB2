#include <iostream>
#include <cmath>

double f(double x)
{
	double f = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
	return f;
}
