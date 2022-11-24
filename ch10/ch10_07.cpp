#include <iostream>
#include <string>


int main()
{
	std::string newString1("ComputerScience");

	std::cout << "e의 위치 : " << newString1.find('e') << std::endl;
	std::cout << "8번째 이후에서 e의 위치 : " << newString1.find('e', 8) << std::endl;

	newString1.assign("Test1Test2Test3Test4");
	std::string newString2("Test");
	std::cout << "Test의 위치 : " << newString1.find(newString2) << std::endl;
	std::cout << "5번째 이후에서 Test의 위치 : " << newString1.find(newString2, 5) << std::endl;

	newString1.replace(0, 7, "REPLACE");
	std::cout << newString1 << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
