#include "ch08_circle.h"

int main()
{
	Circle c1;
	c1.setRadius(10.2);

	std::cout << "������ : " << c1.getRadius() << std::endl;
	std::cout << "���� ���� : " << c1.getArea() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

