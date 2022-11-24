#include <iostream>

class TEST 
{
public:
	TEST();
	~TEST();
};

TEST::TEST() 
{ 
	std::cout << "TEST 积己磊" << std::endl;
}

TEST::~TEST()
{
	std::cout << "TEST 家戈磊" << std::endl;
}

int main() 
{
	TEST Obj;

	std::cout << "榴芭款 C++" << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();

	std::system("pause");
	return 0;
}