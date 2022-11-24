#include <iostream>
#include <iomanip>
#include <fstream>

int main()
{
	std::fstream fp;
	int score;

	fp.open("sample.txt", std::ios::in | std::ios::binary);
	if (fp.fail()) {
		std::cout << "fp.fail()" << std::endl;
		return 1;
	}

	while (fp.read((char*)&score, 4), !fp.eof()) 
	{
		std::cout << std::setw(3) << std::right << score << std::endl;
	}

	fp.close();


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

