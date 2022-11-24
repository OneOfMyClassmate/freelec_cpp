#include "ch08_triangle.h"



void		Triangle::setSide1(const double s)
{
	//this->side1 = s;
	side1 = s;
};

void		Triangle::setSide2(const double s)
{
	//this->side2 = s;
	side2 = s;
};

void		Triangle::setSide3(const double s)
{
	//this->side3 = s;
	side3 = s;
};

double	Triangle::getSide1()
{
	//return this->side1;
	return side1;
};

double	Triangle::getSide2()
{
	//return this->side2;
	return side2;
};

double	Triangle::getSide3()
{
	//return this->side3;
	return side3;
};

double	Triangle::getArea()
{
	return area;
};

int			Triangle::CalArea()
{
	double s = (side1 + side2 + side3) / 2.0f;
	this->area = sqrt(s*(s - side1)*(s - side2)*(s - side3));

	return 1;
};