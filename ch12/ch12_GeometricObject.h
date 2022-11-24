#ifndef _GEOOBJ_
#define _GEOOBJ_

#include <iostream>

class GeometricObject 
{
public:
	GeometricObject();
	GeometricObject(const double line1, const double line2);
	void SetLine1(const double line1);
	void SetLine2(const double line2);
	double GetLine1();
	double GetLine2();
	virtual double AreaCalculation() = 0;		//	순수 가상 함수
	virtual double Compute() = 0;				//	순수 가상 함수
protected:
	double line1, line2;
};

class Isosceles : public GeometricObject
{
public:
	Isosceles();
	Isosceles(const double base, const double height); 
	double AreaCalculation();
	double Compute();
	double GetSide();
	double GetArea();
private:
	double side;
	double area;
};

class Rectangle : public GeometricObject
{
public:
	Rectangle();
	Rectangle(const double length, const double height);
	double AreaCalculation();
	double Compute();
	double GetRound();
	double GetArea();
private:
	double round;
	double area;
};


#else
#endif
