#ifndef _STUDNET3_H_
#define _STUDNET3_H_

#include <iostream>

class Student
{
public:
	Student(const int s1 = 0, const int s2 = 0, const int s3 = 0);
	void setScore(const int s1, const int s2, const int s3);
	void ShowScore();
	void SumAverage();
private:
	int score[3], sum;
	double average;
};


#else
#endif