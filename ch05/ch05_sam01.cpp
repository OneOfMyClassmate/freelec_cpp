#include "ch05_struct.h"

int main()
{

	ITEM data[10] = {
		{"201008101", "������", 87, 98, 56, 0, 0},
		{"201008102", "�̾Ƹ�", 67, 77, 100, 0, 0},
		{"201008103", "�赿��", 100, 98, 100, 0, 0},
		{"201008104", "������", 89, 90, 70, 0, 0},
		{"201008105", "��ҿ�", 99, 88, 77, 0, 0},
		{"201008106", "����", 23, 60, 77, 0, 0},
		{"201008107", "�Ӵ���", 84, 98, 34, 0, 0},
		{"201008108", "��â��", 100, 82, 87, 0, 0},
		{"201008109", "�ǵ���", 65, 77, 45, 0, 0},
		{"201008110", "��â��", 100, 90, 89, 0, 0} };

	ITEM temp;
	int i, j;

	for (i = 0; i < 10; i++) 
	{
		data[i].score[3] = data[i].score[0] + data[i].score[1] + data[i].score[2];
		data[i].score[4] = data[i].score[3] / 3;
	}


	for (i = 0; i < 10 - 1; i++) 
	{
		for (j = i + 1; j < 10; j++) 
		{
			if (data[i].score[3] < data[j].score[3]) {
				temp = data[i];
				data[i] = data[j];
				data[j] = temp;
			}
		}
	}

	std::cout << "********************************** ���İ�� **********************************" << std::endl;

	for (i = 0; i < 10; i++) 
	{
		std::cout << data[i].hakbun << "      ";
		std::cout << data[i].name << "      ";

		for (j = 0; j < 5; j++)
			std::cout << std::setw(5) << data[i].score[j] << "      ";
		std::cout << std::endl;
	}


	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}