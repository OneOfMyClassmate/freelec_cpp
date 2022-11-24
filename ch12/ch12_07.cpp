#include "ch12_multi.h"

int main() 
{
	SungJuk student;
	std::string name[5] = { "�ڴ���", "�赿��", "���Ѽ�", "ȫ����", "��â��" };
	int score[5] = { 95, 100, 43, 99, 67 };
	int i;

	student.SetName(name, 5);
	student.SetScore(score, 5);

	student.SetGrade(score, 5);
	student.SetRank(score, 5);

	std::cout << "**** ���� �� �ڷ� ****" << std::endl;
	std::cout << "�̸�   ����   ���" << std::endl;

	for (i = 0; i < 5; i++) 
	{
		std::cout << student.GetName(i) << "  " << std::setw(3) << student.GetScore(i);
		std::cout << "   " << student.GetRank(i) << std::endl;
	}

	std::cout << std::endl;
	student.OrderOnScore();
	std::cout << "**** ���� �� �ڷ� ****" << std::endl;
	for (i = 0; i < 5; i++) 
	{
		std::cout << student.GetOrderName(i) << "  " << std::setw(3) << student.GetOrderScore(i) << "   ";
		student.DisplayGraph(i);
		std::cout << std::endl;
	}




	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}