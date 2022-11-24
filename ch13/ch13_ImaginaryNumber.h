#ifndef _IMAGINARY_
#define _IMAGINARY_

#include <iostream>
#include <string>

class ImaginaryNumber 
{
public:
	ImaginaryNumber();
	ImaginaryNumber(const double a, const double b);
	void SetA(const double a);
	void SetB(const double b);
	double GetA();
	double GetB();
	std::string GetImaginaryNumber();
	ImaginaryNumber AddImaginary(const ImaginaryNumber ima);
	ImaginaryNumber operator+(const ImaginaryNumber object);
	ImaginaryNumber operator++(void);
	ImaginaryNumber operator++(int dummy);


private:
	double a;	// 실수부
	double b;	// 허수부 (b!=0)
};



#else
#endif