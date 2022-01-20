#include <iostream>
using namespace std;

double f(double x);

void main()
{
	double x, f1;
	x = 0.5;
	f1 = f(x);
	std::cout << "The values of the variables are spelled out in MAIN" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << f1 << std::endl;

	std::cout << "Enter x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;
	std::cout << "f = " << f(x) << std::endl;
}
