
#include "ch12_GeometricObject.h"

int main() 
{
	Isosceles Tri1(4.2, 5.4); // 매개변수 있는 생성자 호출

	std::cout << "삼각형의 밑변 : " << Tri1.GetLine1() << std::endl;
	std::cout << "삼각형의 높이 : " << Tri1.GetLine2() << std::endl;
	std::cout << "넓이 : " << Tri1.AreaCalculation() << std::endl;
	std::cout << "등변 : " << Tri1.Compute() << std::endl;

	Rectangle Rect1; // 매개변수 없는 생성자 호출

	Rect1.SetLine1(20.1);
	Rect1.SetLine2(12);

	Rect1.AreaCalculation();
	Rect1.Compute();

	std::cout << "사각형의 가로 : " << Rect1.GetLine1() << std::endl;
	std::cout << "사각형의 세로 : " << Rect1.GetLine2() << std::endl;
	std::cout << "면적 : " << Rect1.GetArea() << std::endl;
	std::cout << "둘레 : " << Rect1.GetRound() << std::endl;





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}


