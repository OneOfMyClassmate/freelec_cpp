#include "ch13_ImaginaryNumber.h"

int main() 
{
	
	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;

	ima2.SetA(7.2);
	ima2.SetB(9.6);

	std::cout << ima1.GetImaginaryNumber() << std::endl;
	std::cout << ima2.GetImaginaryNumber() << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}