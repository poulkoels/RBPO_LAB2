#include "Task8.hpp"

void main()
{
	f();
	std::cout << "The values of the variables are spelled out in MAIN" << std::endl;
	std::cout << "x = " << x << std::endl;
	std::cout.setf(std::ios::fixed);
	std::cout.precision(4);
	std::cout << "f = " << result << std::endl;

	std::cout << "Enter x: " << std::endl;
	std::cout << "x = ";
	std::cin >> x;

	f();

	std::cout << "f = " << result << std::endl;
}
