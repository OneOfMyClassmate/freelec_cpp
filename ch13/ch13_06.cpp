#include "ch13_Time.h"

int main()
{

	Time t1(7, 30, 20);

	std::cout << t1.ShowTime() << std::endl;
	std::cout << "�ð� - �� ����: " << t1.CalSec() << std::endl;

	Time t2(4, 50, 23);

	if(t1 >= t2)
		std::cout << t1.ShowTime() << "�� " << t2.ShowTime() << "���� ũ�ų� ����!" << std::endl;
	else
		std::cout << t2.ShowTime() << "�� " << t1.ShowTime() << "���� ũ�ų� ����!" << std::endl;

	if (t1 <= t2)
		std::cout << t2.ShowTime() << "�� " << t1.ShowTime() << "���� ũ�ų� ����!" << std::endl;
	else
		std::cout << t1.ShowTime() << "�� " << t2.ShowTime() << "���� ũ�ų� ����!" << std::endl;

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}