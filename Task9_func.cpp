#include "Task9.hpp"

double x = 4;
double result;

void Grigoreva::f()
{
	result = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
}