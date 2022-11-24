#ifndef _CIRCLE_H_
#define _CIRCLE_H_

#include <iostream>
#include <string>

class PFigure 
{
public:
	PFigure();
	void SetColor(const std::string color);
	std::string GetColor();
private:
	std::string color;
};

class Circle : public PFigure 
{
public:
	Circle();
	void SetR(const double r);
	double GetArea();
private:
	double r, area;
};

#else
#endif