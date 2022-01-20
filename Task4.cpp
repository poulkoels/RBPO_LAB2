#include <iostream>
#include <cmath>
using namespace std;

void f(const double&, double&);

void main()
{
	double x, f1;
	x = 0.5;

	f(x, f1);
	std::cout << "The values of the variables are spelled out in MAIN" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f1 << std::endl;

	std::cout << "Enter x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	f(x, f1);
	std::cout << "f = " << f1 << std::endl;
}

void f(const double& x, double& f)
{
	f = 1 - 0.25 * pow(sin(2 * x), 2) + cos(2 * x);
}
