#include "ch12_multi.h"

int main() 
{
	SungJuk student;
	std::string name[5] = { "박달자", "김동현", "이한수", "홍서연", "김창민" };
	int score[5] = { 95, 100, 43, 99, 67 };
	int i;

	student.SetName(name, 5);
	student.SetScore(score, 5);

	student.SetGrade(score, 5);
	student.SetRank(score, 5);

	std::cout << "**** 정렬 전 자료 ****" << std::endl;
	std::cout << "이름   점수   등수" << std::endl;

	for (i = 0; i < 5; i++) 
	{
		std::cout << student.GetName(i) << "  " << std::setw(3) << student.GetScore(i);
		std::cout << "   " << student.GetRank(i) << std::endl;
	}

	std::cout << std::endl;
	student.OrderOnScore();
	std::cout << "**** 정렬 후 자료 ****" << std::endl;
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