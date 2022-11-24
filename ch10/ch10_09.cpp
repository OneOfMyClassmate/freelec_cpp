#include <iostream>
#include <string>


int main()
{
	std::string str1 = "Computer", str2 = "Science";
	int i;

	for (i = 0; i < (int)str1.length(); i++)
		std::cout << str1[i] << std::endl;

	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;


	str1 = str1 + "-" + str2;
	
	std::cout << "**********************************" << std::endl;
	std::cout << "str1 : " << str1 << std::endl;
	std::cout << "str2 : " << str2 << std::endl;

	if (str1 > str2)
		std::cout << "str1 " << str1 << std::endl;
	else
		std::cout << "str2 " << str2 << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
