#include <iostream>
#include <string>

int main()
{
	struct sam
	{
		char Name[30];
		char MPhoneNum[20];
	};

	typedef struct sam SAM;

	SAM Friend, Friend1;

	strcpy_s(Friend.Name, 30, "±è°©µ¹");
	strcpy_s(Friend.MPhoneNum, 20, "010-8741-0000");

	Friend1 = Friend;

	std::cout << Friend.Name << std::endl;
	std::cout << Friend.MPhoneNum << std::endl;

	std::cout << Friend1.Name << std::endl;
	std::cout << Friend1.MPhoneNum << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}