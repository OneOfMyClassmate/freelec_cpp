#include "ch12_GeometricObject.h"
#include <cmath>

GeometricObject::GeometricObject() 
{
	line1 = 0;
	line2 = 0;
}

GeometricObject::GeometricObject(const double line1, const double line2) 
{
	this->line1 = line1;
	this->line2 = line2;
}

void GeometricObject::SetLine1(const double line1)
{
	this->line1 = line1;
}

void GeometricObject::SetLine2(const double line2)
{
	this->line2 = line2;
}

double GeometricObject::GetLine1() 
{
	return line1;
}

double GeometricObject::GetLine2() 
{
	return line2;
}


Isosceles::Isosceles()
	: GeometricObject()
{
	side = 0;
	area = 0;
}

Isosceles::Isosceles(const double base, const double height) // base : πÿ∫Ø, height : ≥Ù¿Ã
	: GeometricObject(base, height)
{
	side = 0;
	area = 0;
}

double Isosceles::AreaCalculation() {
	area = line1 * line2*0.50f;

	return area;
}

double Isosceles::Compute() {
	side = sqrt((line1 / 2.0f)*(line1 / 2.0f) + line2 * line2);
	return side;
}

double Isosceles::GetSide() {
	return side;
}

double Isosceles::GetArea() {
	return area;
}


Rectangle::Rectangle()
	: GeometricObject()
{
	round = 0;
	area = 0;
}


Rectangle::Rectangle(const double length, const double height)
	: GeometricObject(length, height)
{
	round = 0;
	area = 0;
}

double Rectangle::AreaCalculation() 
{
	area = line1 * line2;
	return area;
}

double Rectangle::Compute() 
{
	round = (line1 * 2) + (line2 * 2);
	return round;
}

double Rectangle::GetRound()
{
	return round;
}

double Rectangle::GetArea()
{
	return area;
}

