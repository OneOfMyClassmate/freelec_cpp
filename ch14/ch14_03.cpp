#include <iostream>

int main(int argc, char** argv) {

	int number1, number2;
	int quotient, reminder;

	std::cout << "수 1 : ";
	std::cin >> number1;
	std::cout << "수 2 : ";
	std::cin >> number2;
	
	try 
	{
		if (number2 == 0)
			throw number1;

		quotient = number1 / number2;
		reminder = number1 % number2;
	
		std::cout << "몫 : " << quotient << std::endl;
		std::cout << "나머지 : " << reminder << std::endl;

	}
	catch (int e_num) 
	{
		std::cout << e_num << " 은 0으로 나눌 수 없습니다." << std::endl;
	}





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}