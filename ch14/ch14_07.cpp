#include "ch14_sung.h"


int main(int argc, char** argv) {

	try
	{
		Sung p1(10, 30, -10);
		std::cout << "ÃÑÁ¡ : " << p1.GetTotal() << std::endl;
		std::cout << "Æò±Õ : " << p1.GetAver() << std::endl;
	}
	catch (SungException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "Àü´ÞµÈ ÃÑÁ¡ : "<<e.GetTotal() << std::endl;
		std::cout << "Àü´ÞµÈ °ú¸ñ ¼ö : " << e.GetNum() << std::endl;

	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}
