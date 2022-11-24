
#include "ch12_tri.h"

int main()
{

	POINT c1 = { 10, 20 }, c2 = { -10, -20 }, c3 = { 10, 30 };
	CCoordinates C_obj(c1, c2, c3);

	std::cout << "( 10,  20) ~ (-10, -20) : " << C_obj.Distance_C1C2() << std::endl;
	std::cout << "( 10,  20) ~ ( 10,  30) : " << C_obj.Distance_C1C3() << std::endl;
	std::cout << "(-10, -20) ~ ( 10, 30) : " << C_obj.Distance_C2C3() << std::endl;

	POINT t_c1 = { 4, 9 }, t_c2 = { -10, -20 }, t_c3 = { 15, 30 };
	CTriangle T_obj(t_c1, t_c2, t_c3);

	double line1 = T_obj.Distance_C1C2();
	double line2 = T_obj.Distance_C1C3();
	double line3 = T_obj.Distance_C2C3();

	std::cout << "line1 : " << line1 << std::endl;
	std::cout << "line2 : " << line2 << std::endl;
	std::cout << "line3 : " << line3 << std::endl;

	double s1, s2;
	s1 = (line1 + line2 + line3) / 2.0f;
	s2 = sqrt(s1*(s1 - line1)*(s1 - line2)*(s1 - line3));

	std::cout << "s2 : " << s2 << std::endl;
	std::cout << " T_obj.GetArea() : "<<T_obj.GetArea() << std::endl;







	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}
