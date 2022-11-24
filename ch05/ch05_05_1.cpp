#include <iostream>

typedef struct
{
	char Name[30];
	char MPhoneNum[20];
} SAM;

int main()
{
	SAM a = { "김행복", "010-7777-3333" };
	SAM *pa;

	pa = &a;

	std::cout << "이름 : " << a.Name << std::endl;
	std::cout << "이름 : " << pa->Name << std::endl;
	std::cout << "전화번호 : " << pa->MPhoneNum << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}