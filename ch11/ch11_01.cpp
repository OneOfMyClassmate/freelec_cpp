#include "circle.h"

int main() {

	PFigure cir1;

	std::cout << "cir1.GetColor() : " << cir1.GetColor() << std::endl;
	cir1.SetColor("red");
	std::cout << "cir1.GetColor() : " << cir1.GetColor() << std::endl;

	Circle cir2;
	std::cout << "cir2.GetArea() : " << cir2.GetArea() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}