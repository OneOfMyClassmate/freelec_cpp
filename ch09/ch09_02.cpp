#include <iostream>

class TEST 
{
public:
	TEST();
	~TEST();
};

TEST::TEST() 
{ 
	std::cout << "TEST ������" << std::endl;
}

TEST::~TEST()
{
	std::cout << "TEST �Ҹ���" << std::endl;
}

int main() 
{
	TEST Obj;

	std::cout << "��ſ� C++" << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();

	std::system("pause");
	return 0;
}