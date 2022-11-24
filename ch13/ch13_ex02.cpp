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

	std::cout << "������ : " << c1.GetRadius() << std::endl;
	std::cout << "�� ���� : " << c1.GetArea() << std::endl;
	std::cout << "������ : " << c2.GetRadius() << std::endl;
	std::cout << "�� ���� : " << c2.GetArea() << std::endl;


	if (c1.Compare(c2))
		std::cout << "��ü c1�� c2���� ũ��." << std::endl;
	else
		std::cout << "��ü c2�� c1���� ũ��." << std::endl;






	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 1;
}