#include <iostream>
#include <string>

int main()
{
	struct 
	{
		char Name[30];
		char MPhoneNum[20];
	} Friend;

	strcpy_s(Friend.Name, 30, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-8741-0000");

	std::cout << Friend.Name << std::endl;
	std::cout << Friend.MPhoneNum << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}