#include "iostream"

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM arr[5] = { "�谩��", "010-8741-0000",
		"��ġ��", "010-3456-0000",
		"����ȣ", "010-8765-0000",
		"��ġȣ", "010-1234-0000",
		"�ڻ��", "010-4567-0000" };

	int i;
	std::cout << "�⺻ ũ�� : " << sizeof(SAM) << std::endl;

	for (i = 0; i < 5; i++) 
	{
		std::cout << "arr[" << i << "] �� �ּ� : " << &arr[i] << std::endl;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}