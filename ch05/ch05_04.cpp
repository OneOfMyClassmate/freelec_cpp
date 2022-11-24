#include "iostream"

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM arr[5] = { "김갑돌", "010-8741-0000",
		"이치수", "010-3456-0000",
		"정대호", "010-8765-0000",
		"한치호", "010-1234-0000",
		"박사랑", "010-4567-0000" };

	int i;
	std::cout << "기본 크기 : " << sizeof(SAM) << std::endl;

	for (i = 0; i < 5; i++) 
	{
		std::cout << "arr[" << i << "] 의 주소 : " << &arr[i] << std::endl;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}