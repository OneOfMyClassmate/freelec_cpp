#include "ch08_course.h"

int main() 
{
	Course c1;
	char course[30] = { 0, }, name[30] = { 0, }, ch = 'y';
	char t_name[10][30] = { 0, };
	int i, count = 0;

	std::cout << "������ �Է� : ";
	std::cin >> course;

	c1.setCourseName(course);

	while (ch == 'y' || ch == 'Y') 
	{
		std::cout << "���� �л� �̸� �Է� : ";
		std::cin >> name;

		c1.setName(name);

		std::cout << "����Ͻðڽ��ϱ�? (y/n) ";
		std::cin >> ch;
	}

	c1.getName(t_name);
	count = c1.getCount();
	std::cout << "������ ��� : " << std::endl;

	for (i = 0; i < count; i++)
		std::cout << t_name[i] << "  ";


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}

