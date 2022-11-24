#include <iostream>
#include <string>


int main()
{
	std::string str1;
	std::string str2("Test2 String");

	char name[80] = "Computer Science";
	std::string str3(name);
	std::string str4(10, 'A');

	str1 = "Test1 String";

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;
	std::cout << "str3 : " << str3 << std::endl;
	std::cout << "str4 : " << str4 << std::endl;




	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
