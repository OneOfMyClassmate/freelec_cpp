#include "ch12_GeometricObject.h"

void DisplayGeometricObject(GeometricObject &object) 
{
	std::cout << "line1 : " << object.GetLine1() << std::endl;
	std::cout << "line2 : " << object.GetLine2() << std::endl;

	GeometricObject *p = &object;
	Isosceles *p1 = dynamic_cast<Isosceles*>(p);		// 다운캐스팅
	Rectangle *p2 = dynamic_cast<Rectangle*>(p);	//다운캐스팅

	if (p1 != NULL) 
	{
		p1->AreaCalculation();
		p1->Compute();

		std::cout << "이등변 삼각형의 넓이 : " << p1->GetArea() << std::endl;
		std::cout << "이등변 삼각형의 등변 : " << p1->GetSide() << std::endl;
	}

	if (p2 != NULL)
	{
		p2->AreaCalculation();
		p2->Compute();

		std::cout << "사각형의 넓이 : " << p2->GetArea() << std::endl;
		std::cout << "사각형의 둘레 : " << p2->GetRound() << std::endl;
	}
}


int main()
{
	Isosceles p1(9, 15);
	Rectangle p2(10, 12);

	DisplayGeometricObject(p1);

	std::cout << "*************************************" << std::endl;

	DisplayGeometricObject(p2);


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}