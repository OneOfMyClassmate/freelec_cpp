#include "student1.h"


Student::Student() 
{
	score[0] = 0;
	score[1] = 0;
	score[2] = 0;
	sum = 0.f;
	average = 0.f;
};


void Student::setScore(const int s1, const int s2, const int s3) 
{
	score[0] = s1;
	score[1] = s2;
	score[2] = s3;
};

void Student::ShowScore() 
{
	int i;

	for (i = 0; i < 3; i++) {
		std::cout << "Á¡ ¼ö " << i + 1 << " : " << score[i] << std::endl;
	}
	std::cout << "ÃÑ Á¡ : " << sum << std::endl;
	std::cout << "Æò ±Õ : " << average << std::endl;
};

void Student::SumAverage() 
{
	int i;

	for (i = 0; i < 3; i++) {
		sum = sum + score[i];
	}

	average = sum / 3.0f;
};

