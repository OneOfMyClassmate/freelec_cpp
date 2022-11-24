#include <iostream>
#include <fstream>

int main()
{
	std::fstream fp;
	int score[5] = { 78, 96, 100, 25, 96 };

	fp.open("sample.txt", std::ios::out | std::ios::binary);
	fp.write((char*)score, 20);
	fp.close();


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

