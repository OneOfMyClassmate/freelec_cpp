#ifndef _CIR__H_
#define _CIR_H_
#define PI 3.141592

#include "ch11_geo.h"

class Circle : public GeometricFigure {
public:
	Circle();
	void SetRadius(const double radius);
	void CalArea();
	double GetRedius();
	double GetArea();
private:
	double radius;
	double area;
};


#else
#endif