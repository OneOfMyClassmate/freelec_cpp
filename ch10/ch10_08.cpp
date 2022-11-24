#include <iostream>
#include <string>


int main()
{
	std::string str1 = "CAB", str2 = "CAB";
	std::cout << "CAB와 CAB 비교 ==> " << str1.compare(str2) << std::endl;

	std::string str3 = "CAB", str4 = "DBC";
	std::cout << "CAB와 DBC 비교 ==> " << str3.compare(str4) << std::endl;

	std::string str5 = "DBC", str6 = "CAB";
	std::cout << "DBC와 CAB 비교 ==> " << str5.compare(str6) << std::endl;

	str5 = "AACAB";

	std::cout << "AACAB의 2번째 3개의 문자와 CAB => " << str5.compare(2, 3, str6) << std::endl;
	std::cout << "AACAB의 0번째 3개의 문자와 CAB => " << str5.compare(0, 3, str6) << std::endl;

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
