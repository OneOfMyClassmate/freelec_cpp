#include <iostream>

int PrintAstrisk(const int s) 
{
	int i;
	if (s <= 0)
		throw std::invalid_argument("Invalid argument!");

	for (i = 0; i < s / 10; i++)
		std::cout << "*";

	std::cout << std::endl;

	return s / 10;
}

int main() {

	int score, count;

	std::cout << "���� �Է� : ";
	std::cin >> score;

	try 
	{
		count = PrintAstrisk(score);
		std::cout << "��� ���� : " << count << std::endl;
	}
	catch (std::exception &e) 
	{
		std::cout << "���� ó�� : " << e.what() << std::endl;
		std::cout << "���� ó�� ���� : " << typeid(e).name() << std::endl;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}

