#include <iostream>
#include <string>

int main()
{

	std::string course = "Computer!!!";
	int i;
	char ch;

	std::cout << " 문자열 : " << course << std::endl;
	std::cout << " 길 이 : " << course.length() << std::endl;

	for (i = 0; i < course.length(); i++) 
	{
		ch = course.at(i);
		if (ch >= 'a' && ch <= 'z')
			ch = ch - ('a' - 'A');
		else if (ch >= 'A' && ch <= 'Z')
			ch = ch+ ('a' - 'A');
		else
			;
			std::cout<<ch;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

