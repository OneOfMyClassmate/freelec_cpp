#include <iostream>
#include <string>


int main()
{
	std::string s_name;

	s_name = "���ڿ�";

	std::cout << s_name << std::endl;
	std::cout << "���ڿ� ���� : " << s_name.length() << std::endl;

	//s_name = s_name + " Ŭ����"; // ���ڿ� ������ ��� ����.
	s_name.append(" Ŭ����");

	std::cout << s_name << std::endl;
	std::cout << "���ڿ� ���� : " << s_name.length() << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
