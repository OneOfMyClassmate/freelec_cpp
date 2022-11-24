#include "ch11_rec.h"

int main() {

	Rectangle rect1;

	rect1.SetWidth(3.2);
	rect1.SetHeight(4.3);
	rect1.CalArea();
	//std::cout << "* 색 정보 : " << rect1.GetColor() << std::endl;
	rect1.SetColor("blue");

	std::cout << "* 직사각형 정보 *" << std::endl;
	std::cout << "* 가로 : " << rect1.GetWidth() << std::endl;
	std::cout << "* 세로 : " << rect1.GetHeight() << std::endl;
	std::cout << "* 면적 : " << rect1.GetArea() << std::endl;

	if (rect1.IsPaint())
		std::cout << "* 색 정보 : " << rect1.GetColor() << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}