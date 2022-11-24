#include "ch11_triangle.h"

int main() {

	Triangle tri("pink", 3.4, 5.1, 4.2);

	tri.CalSquare();

	double s1, s2, s3;
	tri.GetSide(&s1, &s2, &s3);

	std::cout << "»ï°¢ÇüÀÇ »ö : " << tri.GetColor() << std::endl;
	std::cout << "»ï°¢ÇüÀÇ ¸é1 : " << s1 << std::endl;
	std::cout << "»ï°¢ÇüÀÇ ¸é2 : " << s2 << std::endl;
	std::cout << "»ï°¢ÇüÀÇ ¸é3 : " << s3 << std::endl;
	std::cout << "»ï°¢ÇüÀÇ ¸éÀû : " << tri.GetSquare() << std::endl;





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}