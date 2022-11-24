#include "ch08_triangle.h"

int main() 
{
	Triangle t1;
	double a, b, c;

	//std::cout << "»ï°¢ÇüÀÇ ¼¼ º¯ ÀÔ·Â : ";
	//std::cin >> a >> b >> c;
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;

	t1.setSide1(3);
	t1.setSide2(4);
	t1.setSide3(5);

	t1.CalArea();

	std::cout << "»ï°¢ÇüÀÇ ¼¼ º¯ : " << t1.getSide1() << ", " << t1.getSide2() << ", " << t1.getSide3() << std::endl;
	std::cout << "»ï°¢ÇüÀÇ ³ÐÀÌ : " << t1.getArea() << std::endl;



	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}