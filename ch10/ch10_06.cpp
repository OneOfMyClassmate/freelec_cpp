#include <iostream>
#include <string>


int main()
{
	std::string str1("ComputerScience");

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "substr : " << str1.substr(0, 8) << std::endl;


	std::string str2("Interesting!!!");

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;

	std::cout << "***************************" << std::endl;

	str1.swap(str2);
	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
