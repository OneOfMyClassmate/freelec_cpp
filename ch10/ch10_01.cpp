#include <iostream>
#include <string>


int main()
{
	std::string s_name;

	s_name = "문자열";

	std::cout << s_name << std::endl;
	std::cout << "문자열 길이 : " << s_name.length() << std::endl;

	//s_name = s_name + " 클래스"; // 문자열 연산자 사용 가능.
	s_name.append(" 클래스");

	std::cout << s_name << std::endl;
	std::cout << "문자열 길이 : " << s_name.length() << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
