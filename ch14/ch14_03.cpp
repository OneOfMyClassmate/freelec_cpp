#include <iostream>

int main(int argc, char** argv) {

	int number1, number2;
	int quotient, reminder;

	std::cout << "�� 1 : ";
	std::cin >> number1;
	std::cout << "�� 2 : ";
	std::cin >> number2;
	
	try 
	{
		if (number2 == 0)
			throw number1;

		quotient = number1 / number2;
		reminder = number1 % number2;
	
		std::cout << "�� : " << quotient << std::endl;
		std::cout << "������ : " << reminder << std::endl;

	}
	catch (int e_num) 
	{
		std::cout << e_num << " �� 0���� ���� �� �����ϴ�." << std::endl;
	}





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}