#include <iostream>
#include <fstream>


int main()
{
	std::ofstream output;
	char cont = 'y';
	char word[50] = { 0, };

	output.open("test.txt");

	if (output.fail()) 
	{
		std::cout << "output.fail()" << std::endl;
		return 1;
	}

	while (cont == 'y' || cont == 'Y') {
		std::cout << "단어 입력 : ";
		std::cin >> word;

		output << word << std::endl;
	

		std::cout << "계속 하시겠습니까? (y/n)";
		std::cin >> cont;
	}

	output.close();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
