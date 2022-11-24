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

	fp.read((char*)&score, 4);
	std::cout << std::setw(3) << std::right << score << std::endl;

	fp.seekg(8, std::ios::cur);
	fp.read((char*)&score, 4);
	std::cout << std::setw(3) << std::right << score << std::endl;

	fp.close();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

