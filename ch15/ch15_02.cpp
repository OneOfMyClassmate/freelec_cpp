#include  "ch15_sung.h"



int main()
{
	SUNG<int> intSung(90, 87, 65);

	std::cout << "���� : " << intSung.GetSum() << std::endl;
	std::cout << "��� : " << intSung.GetAver() << std::endl;

	SUNG<double> dSung(34.6, 98.6, 88.9);

	std::cout << "���� : " << dSung.GetSum() << std::endl;
	std::cout << "��� : " << dSung.GetAver() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}

