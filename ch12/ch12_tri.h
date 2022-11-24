#ifndef _TRI_H_
#define _TRI_H_

#include <iostream>
typedef struct
{
	double x, y;
} POINT;

class CCoordinates 
{
public:
	CCoordinates();
	CCoordinates(const POINT c1, const POINT c2, const POINT c3);
	void SetC1(const POINT c1);
	void SetC2(const POINT c2);
	void SetC3(const POINT c3);
	double Distance_C1C2();
	double Distance_C1C3();
	double Distance_C2C3();
protected:
	POINT c1, c2, c3;
};

class CTriangle : public CCoordinates 
{
public:
	CTriangle();
	CTriangle(const POINT c1, const POINT c2, const POINT c3);
	bool isValidTriangle();
	double GetArea();
private:
	double area;
};


#else
#endif