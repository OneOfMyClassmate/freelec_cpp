#include "ch12_tri.h"

CCoordinates::CCoordinates() 
{
	c1.x = c1.y = 0;
	c2.x = c2.y = 0;
	c3.x = c3.y = 0;
};

CCoordinates::CCoordinates(const POINT c1, const POINT c2, const POINT c3)
{
	this->c1 = c1;
	this->c2 = c2;
	this->c3 = c3;
};

void CCoordinates::SetC1(const POINT c1) 
{
	this->c1 = c1;
}

void CCoordinates::SetC2(const POINT c2)
{
	this->c2 = c2;
}

void CCoordinates::SetC3(const POINT c3)
{
	this->c3 = c3;
}

double CCoordinates::Distance_C1C2() 
{
	if (abs(c1.x) == abs(c2.x))
		return abs(c1.y - c2.y);

	if (abs(c1.y) == abs(c2.y))
		return abs(c1.x - c2.x);

	return sqrt(pow((c1.x - c2.x), 2) + pow((c1.y - c2.y), 2));
}

double CCoordinates::Distance_C1C3()
{
	if (abs(c1.x) == abs(c3.x))
		return abs(c1.y - c3.y);

	if (abs(c1.y) == abs(c3.y))
		return abs(c1.x - c3.x);

	return sqrt(pow((c1.x - c3.x), 2) + pow((c1.y - c3.y), 2));
}

double CCoordinates::Distance_C2C3()
{
	if (abs(c2.x) == abs(c3.x))
		return abs(c2.y - c3.y);

	if (abs(c2.y) == abs(c3.y))
		return abs(c2.x - c3.x);

	return sqrt(pow((c2.x - c3.x), 2) + pow((c2.y - c3.y), 2));
}

CTriangle::CTriangle() 
	: CCoordinates()
{
	area = 0;
};

CTriangle::CTriangle(const POINT c1, const POINT c2, const POINT c3) 
	: CCoordinates(c1, c2, c3)
{
	area = 0;
};

bool CTriangle::isValidTriangle()
{
	double a, b, c, base, tmp1, tmp2;

	a = this->Distance_C1C2();
	b = this->Distance_C1C3();
	c = this->Distance_C2C3();

	if (a > b)
	{
		base = a;
		tmp1 = b;
	}
	else
	{
		base = b;
		tmp1 = a;
	}

	if (base < c)
	{
		base = c;
		tmp2 = base;
	}
	else
		tmp2 = c;

	return (base < (tmp1 + tmp2));
};

double CTriangle::GetArea() 
{
	double tmp;

	if (!isValidTriangle())
		return 0;

	tmp = c1.x * c2.y + c2.x*c3.y + c3.x*c1.y - c2.x*c1.y - c3.x*c2.y - c1.x*c3.y;
	area = 0.5 *abs(tmp);

	return area;
};

