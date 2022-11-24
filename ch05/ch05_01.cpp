#include <iostream>
#include <string>

int main()
{
	char Name[30] = "";
	char MPhoneNum[20] = "";

	strcpy_s(Name, 30, "±è°©µ¹");
	strcpy_s(MPhoneNum, 20, "010-8741-0000");

	std::cout << Name << std::endl;
	std::cout << MPhoneNum << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}