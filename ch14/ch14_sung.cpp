#include "ch14_sung.h"

SungException::SungException(const int total, const int num) 
	: std::logic_error("잘못된 인수 값")
{
	this->total = total;
	this->num = num;
};

int SungException::GetTotal() 
{
	return total;
};

int SungException::GetNum() 
{
	return num;
};

Sung::Sung() 
{
	kor = eng = math = 0;
	total = 0;
	aver = 0;
};

Sung::Sung(const int kor, const int eng, const int math) 
{
	this->kor = kor;
	this->eng = eng;
	this->math = math;
	total = 0;
	aver = 0;
};

int Sung::GetTotal() 
{
	if (kor <= 0 || eng <= 0 || math <= 0)
		throw SungException(total, 3);

	total = kor + eng + math;
	return total;
};


double Sung::GetAver() 
{
	if (total < 0)
		throw SungException(total, 3);

	aver = total / (double)3;
	return aver;
};