#include <iostream>
#include <string>


int main()
{
	std::string str;

	str.assign("Interesting");
	std::cout << "str : " << str << std::endl;

	str.assign("ComputerScience", 8, 7);
	std::cout << "str : " << str << std::endl;

	str.assign("ComputerScience", 8);
	std::cout << "str : " << str << std::endl;

	str.assign(10,'Y');
	std::cout << "str : " << str << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
