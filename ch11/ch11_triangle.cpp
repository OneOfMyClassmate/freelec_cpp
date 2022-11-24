#include "ch11_triangle.h"

Triangle::Triangle() 
{
	side1 = side2 = side3 = 0.0f;
};

Triangle::Triangle(const std::string color, const double side1, const double side2, const double side3) 
	: GeometricFigure(color)
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
};

void Triangle::SetSide(const double side1, const double side2, const double side3) 
{
	this->side1 = side1;
	this->side2 = side2;
	this->side3 = side3;
};

int Triangle::GetSide(double *side1, double *side2, double *side3) 
{
	if (this->side1 == 0 && this->side2 == 0 && this->side3 == 0)
		return 0;

	*side1 = this->side1;
	*side2 = this->side2;
	*side3 = this->side3;

	return 1;
};


double Triangle::CalSquare() 
{
	if (this->side1 == 0 && this->side2 == 0 && this->side3 == 0)
		return 0;

	double s;
	s = (side1 + side2 + side3) / 2.0f;
	square = sqrt(s*(s - side1)*(s - side2)*(s - side3));

	return 1;
};


double Triangle::GetSquare()
{
	return square;
};

