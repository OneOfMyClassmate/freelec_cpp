#include <iostream>
#include <string>


int main()
{
	std::string str  ="COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i++) 
	{
		std::cout << i << "��° ���� : " << str.at(i) << std::endl;
	}

	std::cout << "Programming ���ڿ� ���� : " << str.length() << std::endl;
	std::cout << "Programming ���ڿ� ���� : " << str.size() << std::endl;

	str.erase(6, 2);
	std::cout << "str�� erase ���� ��� : " << str << std::endl;

	str.assign("COMPUTER");
	std::cout << "���ڿ� : " << str << std::endl;
	str.clear();
	std::cout << "���ڿ� : " << str << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
