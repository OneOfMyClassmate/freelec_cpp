#include "ch13_ImaginaryNumber.h"

int main()
{

	ImaginaryNumber ima1(4.2, 5.1);
	ImaginaryNumber ima2;
	ImaginaryNumber ima3;


	ima2.SetA(7.2);
	ima2.SetB(9.6);

	//ima3 = ima1.AddImaginary(ima2);
	ima3 = ima1 + ima2;

	std::cout << " ( " << ima1.GetImaginaryNumber() << " ) + ";
	std::cout << " ( " << ima2.GetImaginaryNumber() << " ) = ";

	std::cout << ima3.GetImaginaryNumber() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}