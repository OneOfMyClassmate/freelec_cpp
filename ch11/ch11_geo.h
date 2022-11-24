//#ifndef _GEO_H_
//#define _GEO_H_
//
//#include <iostream>
//#include <string>
//
//class GeometricFigure
//{
//public:
//	GeometricFigure();
//	void SetColor(const std::string color);
//	bool IsPaint();
//	std::string GetColor();
//protected:
//	std::string color;
//};
//
//
//#else
//#endif


#ifndef _GEO_H_
#define _GEO_H_

#include <iostream>
#include <string>

class GeometricFigure
{
public:
	GeometricFigure();
	GeometricFigure(const std::string color); //���� �������� �߰��� �κ�
	void SetColor(const std::string color);
	bool IsPaint();
	std::string GetColor();
protected:
	std::string color;
};


#else
#endif