#include "student1.h"

int main() 
{
	Student p1;

	p1.ShowScore();

	std::cout << "*********************************" << std::endl;

	p1.setScore(99, 93, 89);
	p1.SumAverage();
	p1.ShowScore();

	std::cout << std::endl;
	std::cout << "This program ends. Press any key three times to exit." << std::endl;
	getchar(); getchar();	getchar();
	return 0;
}