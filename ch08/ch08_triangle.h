#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_

#include <iostream>

class Triangle 
{
public:
	void		setSide1(const double s);
	void		setSide2(const double s);
	void		setSide3(const double s);
	double	getSide1();
	double	getSide2();
	double	getSide3();
	double	getArea();
	int			CalArea();
private:
	double	side1, side2, side3, area;
};


#else
#endif
