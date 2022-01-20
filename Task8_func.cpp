#include "Task8.hpp"

double x = 0.5;
double result;

void f()
{
	result = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
}
