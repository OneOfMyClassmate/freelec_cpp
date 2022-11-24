#include "ConTest.h"

int main() {

	CON2 *p_TEST = new CON2;

	delete p_TEST;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}