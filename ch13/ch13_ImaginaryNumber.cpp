#include "ch13_ImaginaryNumber.h"

ImaginaryNumber::ImaginaryNumber() 
{
	a = 0;
	b = 1;
}

ImaginaryNumber::ImaginaryNumber(const double a, const double b) {
	this->a = a;
	this->b = b;
};

void ImaginaryNumber::SetA(const double a) 
{
	this->a = a;
};

void ImaginaryNumber::SetB(const double b)
{
	this->b = b;
};

double ImaginaryNumber::GetA()
{
	return a;
};

double ImaginaryNumber::GetB()
{
	return b;
};

std::string ImaginaryNumber::GetImaginaryNumber()
{
	char str_r[20], str_i[20];
	std::string str;

	if (b != 0) 
	{
		_gcvt_s(str_r, a, 10);
		_gcvt_s(str_i, b, 10);

		strcat_s(str_r, 20, "+");	// 실수부+
		strcat_s(str_r, 20, str_i);	// 실수부+허수부
		strcat_s(str_r, 20, "i");		// 실수부+허수부 i 

		str.append(str_r);
	}
	if (b == 0)
		str = "Imaginary Number is out!!!";

	return str;
};


ImaginaryNumber ImaginaryNumber::AddImaginary(const ImaginaryNumber ima)
{
	ImaginaryNumber res;

	res.a = this->a + ima.a;
	res.b = this->b + ima.b;

	return res;
};

ImaginaryNumber ImaginaryNumber::operator+(const ImaginaryNumber object)
{
	ImaginaryNumber res;

	res.a = this->a + object.a;
	res.b = this->b + object.b;

	return res;
};


ImaginaryNumber ImaginaryNumber::operator++(void)
{
	this->a++;
	return *this;
};

ImaginaryNumber ImaginaryNumber::operator++(int dummy)
{
	this->b++;
	return *this;
};

