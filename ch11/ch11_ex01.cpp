#include "ch11_triangle.h"

int main() {

	Triangle tri("pink", 3.4, 5.1, 4.2);

	tri.CalSquare();

	double s1, s2, s3;
	tri.GetSide(&s1, &s2, &s3);

	std::cout << "�ﰢ���� �� : " << tri.GetColor() << std::endl;
	std::cout << "�ﰢ���� ��1 : " << s1 << std::endl;
	std::cout << "�ﰢ���� ��2 : " << s2 << std::endl;
	std::cout << "�ﰢ���� ��3 : " << s3 << std::endl;
	std::cout << "�ﰢ���� ���� : " << tri.GetSquare() << std::endl;





	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}