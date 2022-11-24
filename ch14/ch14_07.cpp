#include "ch14_sung.h"


int main(int argc, char** argv) {

	try
	{
		Sung p1(10, 30, -10);
		std::cout << "���� : " << p1.GetTotal() << std::endl;
		std::cout << "��� : " << p1.GetAver() << std::endl;
	}
	catch (SungException &e)
	{
		std::cout << e.what() << std::endl;
		std::cout << "���޵� ���� : "<<e.GetTotal() << std::endl;
		std::cout << "���޵� ���� �� : " << e.GetNum() << std::endl;

	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}
