#ifndef _TRIANGLE_H_
#define _TRIANGLE_H_


#include "ch11_geo.h"
#include <cmath>

class Triangle : public GeometricFigure 
{
public:
	Triangle();
	Triangle(const std::string color, const double side1, const double side2, const double side3);
	void SetSide(const double side1, const double side2, const double side3);
	int GetSide(double *side1, double *side2, double *side3);
	double CalSquare();
	double GetSquare();
private:
	double side1, side2, side3;
	double square;
};



#else
#endif