#include <iostream>
#include <string>


int main()
{
	std::string str = "Computer";

	std::cout << "str : " << str << std::endl;
	str.append(" Science");
	std::cout << "str : " << str << std::endl;
	str.append(str, 0, 8);
	std::cout << "str : " << str << std::endl;
	str.append(5, '!');
	std::cout << "str : " << str << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
