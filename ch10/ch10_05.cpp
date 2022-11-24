#include <iostream>
#include <string>


int main()
{
	std::string str  ="COMPUTER";
	int i;

	for (i = 0; i < (int)str.length(); i++) 
	{
		std::cout << i << "번째 문자 : " << str.at(i) << std::endl;
	}

	std::cout << "Programming 문자열 길이 : " << str.length() << std::endl;
	std::cout << "Programming 문자열 길이 : " << str.size() << std::endl;

	str.erase(6, 2);
	std::cout << "str의 erase 실행 결과 : " << str << std::endl;

	str.assign("COMPUTER");
	std::cout << "문자열 : " << str << std::endl;
	str.clear();
	std::cout << "문자열 : " << str << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
