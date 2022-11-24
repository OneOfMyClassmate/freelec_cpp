#include <iostream>
#include <fstream>


int main()
{
	std::ifstream input;
	char word[50] = { 0, };

	input.open("test.txt");
	if (input.fail()) 
	{
		std::cout << "input.fail()" << std::endl;
		return 1;
	}

	//while (input.eof() == false) 
	while (!input.eof())
	{
		input >> word;
		std::cout << word << std::endl;
	}

	input.close();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
