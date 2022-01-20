#include <iostream>
#include <cmath>

using namespace std;

void main()
{
	std::cout << "The values of the variables are spelled out in MAIN" << std::endl;
	double x = 0.5;
	std::cout << "x = " << x << std::endl;
	double f = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f << std::endl;

	std::cout << "Enter x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
	std::cout << "f = " << f << std::endl;
}