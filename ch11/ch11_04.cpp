#include "ch11_geo.h"

int main() {
	GeometricFigure obj1;

	std::cout << "obj1의 색 : " << obj1.GetColor() << std::endl;
	obj1.SetColor("green");
	std::cout << "obj1의 색 : " << obj1.GetColor() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}