#include <iostream>
#include <string>


int main()
{
	std::string str1 = "CAB", str2 = "CAB";
	std::cout << "CAB�� CAB �� ==> " << str1.compare(str2) << std::endl;

	std::string str3 = "CAB", str4 = "DBC";
	std::cout << "CAB�� DBC �� ==> " << str3.compare(str4) << std::endl;

	std::string str5 = "DBC", str6 = "CAB";
	std::cout << "DBC�� CAB �� ==> " << str5.compare(str6) << std::endl;

	str5 = "AACAB";

	std::cout << "AACAB�� 2��° 3���� ���ڿ� CAB => " << str5.compare(2, 3, str6) << std::endl;
	std::cout << "AACAB�� 0��° 3���� ���ڿ� CAB => " << str5.compare(0, 3, str6) << std::endl;

	str1 = "AAAA";
	str2 = "BBBB";

	std::cout << "str1 : " << str1 << std::endl;
	str1.insert(0, str2);
	std::cout << "str1 : " << str1 << std::endl;

	str1.insert(4, 3, 'C');
	std::cout << "str1 : " << str1 << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
