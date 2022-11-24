#include <iostream>

double Average(const int total, const int num) 
{
	if (total < 0 || num == 0)
		throw num;

	return total / (double)num;
};

int Sum(const int score1, const int score2, const int score3) 
{
	if (score1 < 0 || score2 < 0 || score3 < 0)
		throw 3;

	return score1 + score2 + score3;
};

int main() 
{
	int kor = -100, eng = 99, math = 98;
	int total = 0;
	double aver;

	try
	{
		total = Sum(kor, eng, math);
		std::cout << "�� : " << total << std::endl;
	}
	catch (int i) {
		std::cout << "**********************************************" << std::endl;
		std::cout << i << "���� ���� ������ 0���� Ŀ�� �մϴ�!" << std::endl;
	}


	try 
	{
		aver = Average(total, 0);
		std::cout << "��� : " << aver << std::endl;
	}
	catch (int n) 
	{
		std::cout << "####################################" << std::endl;
		std::cout << "���� ���� " << n << "���� Ŀ�� �մϴ�." << std::endl;
	}



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}