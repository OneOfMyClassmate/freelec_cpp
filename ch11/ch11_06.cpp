#include "ch11_cir.h"

int main() {
	Circle cir1;

	cir1.SetRadius(4.6);
	cir1.CalArea();
	cir1.SetColor("pink");

	std::cout << "* ��     : " << cir1.GetColor() << std::endl;
	std::cout << "* ������ : " << cir1.GetRedius() << std::endl;
	std::cout << "* ��  �� : " << cir1.GetArea() << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}