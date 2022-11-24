#include <iostream>
#include <fstream>
#include <iomanip>
//using namespace std;

int main()
{
	std::fstream fs;

	fs.open("test.txt", std::ios::out);
	if (fs.fail()) {
		std::cout << "fs.fail()" << std::endl;
		return 0;
	}
	fs << "keyboard" << std::endl;
	fs << "monitor" << std::endl;
	fs.close();

	fs.open("test.txt", std::ios::app);
	fs << "desk" << std::endl;
	fs.close();


	fs.open("text.txt", std::ios::in);
	std::string temp;
	while (fs >> temp, !fs.eof()) 
	{
		std::cout << temp << std::endl;
	}
	fs.close();



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

