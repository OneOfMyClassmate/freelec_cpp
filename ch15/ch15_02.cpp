#include  "ch15_sung.h"



int main()
{
	SUNG<int> intSung(90, 87, 65);

	std::cout << "ÃÑÁ¡ : " << intSung.GetSum() << std::endl;
	std::cout << "Æò±Õ : " << intSung.GetAver() << std::endl;

	SUNG<double> dSung(34.6, 98.6, 88.9);

	std::cout << "ÃÑÁ¡ : " << dSung.GetSum() << std::endl;
	std::cout << "Æò±Õ : " << dSung.GetAver() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}

