#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#define PI 3.141592

#include <iostream>

class Circle 
{
public:
	void		setRadius(const double r);
	double	getRadius();
	double	getArea();
private:
	double radius, area;
};



#else
#endif
