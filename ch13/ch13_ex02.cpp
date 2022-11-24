#include <iostream>
#define PI 3.141592

class Circle 
{
public:
	Circle(const double radius);
	double GetRadius();
	double GetArea();
	double GetCir();
	bool Compare(Circle obj);
private:
	double radius;
};

Circle::Circle(const double radius) 
{
	this->radius = radius;
};

double Circle::GetRadius() 
{
	return radius;
};

double Circle::GetArea() 
{
	return PI * radius*radius;
};

double Circle::GetCir() 
{
	return 2 * PI*radius;
};


bool Circle::Compare(Circle obj)
{
	if (this->radius >= obj.radius)
		return true;
	else
		return false;
};


int main()
{
	Circle c1(39.2), c2(13.2);

	std::cout << "반지름 : " << c1.GetRadius() << std::endl;
	std::cout << "원 면적 : " << c1.GetArea() << std::endl;
	std::cout << "반지름 : " << c2.GetRadius() << std::endl;
	std::cout << "원 면적 : " << c2.GetArea() << std::endl;


	if (c1.Compare(c2))
		std::cout << "객체 c1이 c2보다 크다." << std::endl;
	else
		std::cout << "객체 c2가 c1보다 크다." << std::endl;






	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}