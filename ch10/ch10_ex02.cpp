#include "ch10_sung.h"

int main()
{

	char fn[] = "sung.txt";
	OneStudent OneLine[MAX];
	std::fstream fp;
	int i, len = 0;

	fp.open(fn, std::ios::in);
	if (fp.fail())
		return 0;

	i = 0;
	while (!fp.eof())
	{
		fp >> OneLine[i].name >> OneLine[i].score[0] >> OneLine[i].score[1] >> OneLine[i].score[2];
		i++;
	}

	len = i - 1;

	for (i = 0; i < len; i++)
	{
		OneLine[i].sum = OneLine[i].score[0] + OneLine[i].score[1] + OneLine[i].score[2];
		OneLine[i].aver = OneLine[i].sum / 3.0f;
	}

	for (i = 0; i < len; i++)
	{
		std::cout << OneLine[i].name 
			<< "  " << std::setw(3) << OneLine[i].score[0] 
			<< "  " << std::setw(3) << OneLine[i].score[1]
			<< "  " << std::setw(3) << OneLine[i].score[2] 
			<< "  " << std::setw(3) << OneLine[i].sum 
			<< "  " << std::setw(3) << OneLine[i].aver << std::endl;
	}

	fp.close();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

