
#include "ch12_GeometricObject.h"

int main() 
{
	Isosceles Tri1(4.2, 5.4); // �Ű����� �ִ� ������ ȣ��

	std::cout << "�ﰢ���� �غ� : " << Tri1.GetLine1() << std::endl;
	std::cout << "�ﰢ���� ���� : " << Tri1.GetLine2() << std::endl;
	std::cout << "���� : " << Tri1.AreaCalculation() << std::endl;
	std::cout << "� : " << Tri1.Compute() << std::endl;

	Rectangle Rect1; // �Ű����� ���� ������ ȣ��

	Rect1.SetLine1(20.1);
	Rect1.SetLine2(12);

	Rect1.AreaCalculation();
	Rect1.Compute();

	std::cout << "�簢���� ���� : " << Rect1.GetLine1() << std::endl;
	std::cout << "�簢���� ���� : " << Rect1.GetLine2() << std::endl;
	std::cout << "���� : " << Rect1.GetArea() << std::endl;
	std::cout << "�ѷ� : " << Rect1.GetRound() << std::endl;





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}


