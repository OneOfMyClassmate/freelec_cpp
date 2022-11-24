#include "ch08_circle.h"

void		Circle::setRadius(const double r) 
{
	this->radius = r;
};

double	Circle::getRadius()
{
	return radius;
};

double	Circle::getArea() 
{
	this->area = PI * this->radius*this->radius;
	return this->area;
};


