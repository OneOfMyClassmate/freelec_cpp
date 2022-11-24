#include <iostream>
#pragma warning(disable : 4290)

int Total(const int k, const int e, const int m) throw(char *);
double Average(const int s, const int num) throw(char *);


int main()
{
	int kor = -100, eng = 99, math = 98;
	int total = 0;
	double aver;

	try
	{
		total = Total(kor, eng, math);
		aver = Average(total, 0);
		std::cout << "합 : " << total << std::endl;
		std::cout << "평균 : " << aver << std::endl;
	}
	catch (char *msg)
	{
		std::cout << "***************************************" << std::endl;
		std::cout << msg << std::endl;
	}



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}


int Total(const int k, const int e, const int m) throw(char *) 
{
	if (k < 0 || e < 0 || m < 0)
		throw "과목 점수는 0보다 커야 합니다.";

	return k + e + m;
};


double Average(const int s, const int num) throw(char *) 
{
	if (s < 0 || num <= 0)
		throw "잘못된 매개변수입니다.";

	return s / (double)num;
};