#include <iostream>
#include <string>

int main()
{
	struct POINT
	{
		int x;
		int y;
	};

	struct RECT
	{
		struct POINT LeftTop;
		struct POINT RightBottom;
		int area;
	};

	struct RECT a;

	a.LeftTop.x = 10;
	a.LeftTop.y = 100;

	a.RightBottom.x = 50;
	a.RightBottom.y = 15;

	a.area = (a.RightBottom.x - a.LeftTop.x)*(a.LeftTop.y - a.RightBottom.y);

	std::cout << "���簢�� ���� : " << a.area << std::endl;


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}