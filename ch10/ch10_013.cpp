#include <iostream>
#include <iomanip>


int main()
{
	int a = 1234;

	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << std::setw(5) << a << std::endl;
	std::cout << "a = " << std::hex << std::setw(5) << a << std::endl;
	std::cout << "a = " << std::dec << std::setw(5) << a << std::endl;

	double b = 45.8769;
	std::cout << "b = " << b << std::endl;
	std::cout << "b = " << std::fixed << b << std::endl;
	std::cout << "b = " << std::setprecision(2) << b << std::endl;

	double c = 123.;
	std::cout << "c = " << c << std::endl;
	std::cout << "c = " << std::setprecision(0) << c << std::endl;
	std::cout << "c = " << std::showpoint << c << std::endl;
	std::cout << 987.0 << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

