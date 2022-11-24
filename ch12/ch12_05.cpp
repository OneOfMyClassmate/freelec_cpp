#include "ch12_GeometricObject.h"

int main() 
{
	GeometricObject *p1 = new Isosceles(9, 15); // 동적 형 변환 : 업캐스팅
	Isosceles *p2 = new Isosceles(5, 6);

	std::cout << "p1 : " << p1->GetLine1() << std::endl;
	std::cout << "p2 : " << p2->GetLine1() << std::endl;





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}